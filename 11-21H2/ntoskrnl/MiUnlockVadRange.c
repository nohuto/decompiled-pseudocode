/*
 * XREFs of MiUnlockVadRange @ 0x1406F7F40
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x140682D84 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x14096D8A8 (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x1409806C8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiGetNextVad @ 0x140281C00 (MiGetNextVad.c)
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiGetFirstVad @ 0x1402D75D4 (MiGetFirstVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14030EA00 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall MiUnlockVadRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  void *FirstVad; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r10
  unsigned __int64 NextVad; // r14
  ULONG_PTR v13; // rbp

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
    FirstVad = MiGetFirstVad(a1);
  else
    FirstVad = MiLocateAddress(a2);
  v9 = (unsigned __int64)FirstVad;
  if ( a3 )
  {
    while ( 1 )
    {
      NextVad = MiGetNextVad(v9);
      if ( a3 == 1 )
        break;
      v13 = v10 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10 + 40);
      KeAbPostRelease(v13);
      v9 = NextVad;
      if ( !--a3 )
        goto LABEL_6;
    }
    MiUnlockVad((__int64)CurrentThread, v10);
  }
LABEL_6:
  if ( a4 )
    return UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  else
    return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
