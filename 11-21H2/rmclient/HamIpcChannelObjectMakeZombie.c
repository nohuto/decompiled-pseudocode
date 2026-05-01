/*
 * XREFs of HamIpcChannelObjectMakeZombie @ 0x1800099BC
 * Callers:
 *     RmpClientReleaseResourceSet @ 0x1800092CC (RmpClientReleaseResourceSet.c)
 *     RmpClientUnregisterActivityHostCallbacks @ 0x180009384 (RmpClientUnregisterActivityHostCallbacks.c)
 *     HamCompleteExtendedExecution @ 0x18001C960 (HamCompleteExtendedExecution.c)
 * Callees:
 *     HampIpcChannelObjectMakeZombieUnsafe @ 0x180009A34 (HampIpcChannelObjectMakeZombieUnsafe.c)
 *     HampIpcChannelFindCallbackContextByPayload @ 0x180009AF0 (HampIpcChannelFindCallbackContextByPayload.c)
 */

__int64 __fastcall HamIpcChannelObjectMakeZombie(__int64 a1, __int64 a2)
{
  __int64 CallbackContextByPayload; // rax

  RtlAcquireSRWLockExclusive(a1 + 8);
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  CallbackContextByPayload = HampIpcChannelFindCallbackContextByPayload(a1, a2);
  if ( CallbackContextByPayload )
    HampIpcChannelObjectMakeZombieUnsafe(CallbackContextByPayload, a1);
  *(_DWORD *)(a1 + 16) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 8);
}
