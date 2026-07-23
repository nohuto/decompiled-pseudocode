/*
 * XREFs of PfSnNameRemove @ 0x14035426C
 * Callers:
 *     PfSnNameRemoveAll @ 0x1407C3504 (PfSnNameRemoveAll.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024BA00 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // rbp
  unsigned int v5; // edi
  KIRQL v6; // al
  _RTL_RB_TREE *v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE **i; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r11
  _DWORD *v20; // r9
  int v21; // edx

  v2 = (volatile LONG *)(a1 + 576);
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v7 = (_RTL_RB_TREE *)(a1 + 520);
  v8 = v6;
  v9 = *(_QWORD *)(a1 + 520);
  if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)v7;
  while ( v9 )
  {
    if ( *(_QWORD *)(v9 + 24) <= (unsigned __int64)a2 )
    {
      if ( *(_QWORD *)(v9 + 24) >= (unsigned __int64)a2 )
        break;
      v10 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v9;
    }
    if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v10 )
      v9 ^= v10;
    else
      v9 = v10;
  }
  if ( v9 )
  {
    RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)v9);
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v8 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    if ( *(_QWORD *)(v9 + 32) )
      KeBugCheckEx(0x191u, 0x76FuLL, 0LL, 0LL, 0LL);
    for ( i = (_RTL_BALANCED_NODE **)(a1 + 488); (unsigned __int64)i < a1 + 520; ++i )
    {
      if ( *i == a2 )
        *i = 0LL;
    }
    v5 = 1;
    ExFreePoolWithTag((PVOID)v9, 0);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( (_DWORD)KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    __writecr8(v8);
  }
  return v5;
}
