/*
 * XREFs of MiReferenceOwningSession @ 0x1402313B4
 * Callers:
 *     MiLockStealSystemVm @ 0x140230F28 (MiLockStealSystemVm.c)
 *     MiCapturePfnVm @ 0x14026AEB0 (MiCapturePfnVm.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x14026B1C0 (MiGetTopLevelPfn.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSelectSessionAttachProcess @ 0x1402DF940 (MiSelectSessionAttachProcess.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1402EB0E0 (MiTryToAcquireExpansionLockAtDpc.c)
 */

__int64 __fastcall MiReferenceOwningSession(ULONG_PTR a1)
{
  __int64 TopLevelPfn; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  TopLevelPfn = MiGetTopLevelPfn(a1);
  if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v3 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)MiTryToAcquireExpansionLockAtDpc(&LockHandle) )
    {
      v4 = MiSelectSessionAttachProcess(v3);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return v4;
    }
  }
  return 0LL;
}
