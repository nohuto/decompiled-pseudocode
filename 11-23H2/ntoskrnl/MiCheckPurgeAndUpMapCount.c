/*
 * XREFs of MiCheckPurgeAndUpMapCount @ 0x140287480
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1406AD6D4 (MiMapViewInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 *     MiCreateUserPhysicalView @ 0x140A41A28 (MiCreateUserPhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x14034AF20 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckPurgeAndUpMapCount(__int64 a1)
{
  volatile LONG *v1; // r14
  KIRQL i; // di
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  _DWORD *v12; // r8
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  char *v16; // [rsp+40h] [rbp-10h]

  v1 = (volatile LONG *)(a1 + 72);
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  for ( i = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        (*(_DWORD *)(a1 + 56) & 4) != 0;
        i = ExAcquireSpinLockExclusive(v1) )
  {
    DWORD1(v15) = 0;
    v16 = (char *)&v15 + 8;
    DWORD2(v14) = 2;
    *((_QWORD *)&v15 + 1) = (char *)&v15 + 8;
    *(_QWORD *)&v14 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v14;
    LOWORD(v15) = 263;
    BYTE2(v15) = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && i <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (i + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(i);
    KeWaitForGate(&v15, 18LL);
  }
  ++*(_QWORD *)(a1 + 40);
  ++*(_QWORD *)(a1 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( (_DWORD)KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v10 <= 0xFu && i <= 0xFu && v10 >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (i + 1));
      v9 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  result = i;
  __writecr8(i);
  return result;
}
