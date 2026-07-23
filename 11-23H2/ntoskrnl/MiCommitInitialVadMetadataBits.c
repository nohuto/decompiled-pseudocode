/*
 * XREFs of MiCommitInitialVadMetadataBits @ 0x1407A404C
 * Callers:
 *     MiMapProcessExecutable @ 0x1407A3280 (MiMapProcessExecutable.c)
 * Callees:
 *     MiGetNextVad @ 0x1402150EC (MiGetNextVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402754E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140275550 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceVad @ 0x1402756E4 (MiReferenceVad.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     MiGetFirstVad @ 0x14032A6DC (MiGetFirstVad.c)
 *     MiCommitVadMetadataBits @ 0x1406AE7C0 (MiCommitVadMetadataBits.c)
 */

__int64 MiCommitInitialVadMetadataBits()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
  int v2; // eax
  int v3; // ecx
  int v4; // r14d
  int v5; // ebp
  __int64 i; // rax
  char *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = PdcCreateWatchdogAroundClientCall();
  v4 = v3 | 4;
  if ( !v2 )
    v4 = v3;
  if ( !v4 )
    return 0LL;
  v5 = 0;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  for ( i = (__int64)MiGetFirstVad(Process); ; i = MiGetNextVad((unsigned __int64)v7) )
  {
    v7 = (char *)i;
    if ( !i )
      break;
    if ( (*(_DWORD *)(i + 48) & 0x70) == 0x20 )
    {
      MiReferenceVad(i);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
      MiLockVad((__int64)CurrentThread, (__int64)v7);
      v5 = MiCommitVadMetadataBits((__int64)v7, 0LL, v4);
      MiUnlockAndDereferenceVad(v7);
      if ( v5 < 0 )
        return (unsigned int)v5;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return (unsigned int)v5;
}
