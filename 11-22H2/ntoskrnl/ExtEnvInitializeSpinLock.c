/*
 * XREFs of ExtEnvInitializeSpinLock @ 0x1403B414C
 * Callers:
 *     IvtAllocateDomain @ 0x1403B4120 (IvtAllocateDomain.c)
 *     HalpVpptTimerRegister @ 0x140509CD4 (HalpVpptTimerRegister.c)
 *     HsaInitializeInterruptRemapping @ 0x140A99188 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExtEnvInitializeSpinLock(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
  v3 = (_QWORD *)qword_140C60318;
  if ( *(__int64 **)qword_140C60318 != &ExtEnvLockList )
    __fastfail(3u);
  *a1 = &ExtEnvLockList;
  a1[1] = v3;
  *v3 = a1;
  qword_140C60318 = (__int64)a1;
  result = KxReleaseSpinLock((volatile signed __int64 *)&ExtEnvAllocationLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  a1[2] = 0LL;
  return result;
}
