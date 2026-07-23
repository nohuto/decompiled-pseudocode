/*
 * XREFs of MiFlushDataSection @ 0x14020EEA0
 * Callers:
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1402100E8 (MiLockSectionControlArea.c)
 *     MmFlushSection @ 0x140287370 (MmFlushSection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     CcFlushCachePriv @ 0x14029CC14 (CcFlushCachePriv.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // esi
  unsigned __int8 v7; // bl
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v15; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0;
  v15 = 0;
  v4 = *(_QWORD *)(a1 + 40);
  v14 = 0LL;
  result = MiLockSectionControlArea(v4, 1LL, &v15);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 112) > 1uLL )
      *a2 = 1;
    v6 = *(_DWORD *)(result + 88);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(result + 72));
    if ( (_DWORD)KiIrqlFlags
      && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
      && CurrentIrql <= 0xFu )
    {
      v7 = v15;
      if ( v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = v15;
        v12 = ~(unsigned __int16)(-1LL << (v15 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v7 = v15;
    }
    __writecr8(v7);
    v8 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      CcFlushCachePriv(v8, (unsigned int)&CcFlushForImageSection, 0, 0, 0, (__int64)&v14, 0LL);
      return (unsigned int)v14;
    }
    else
    {
      return MmFlushSection(v8, 0LL, 0LL, 0LL, &v14, 1);
    }
  }
  return result;
}
