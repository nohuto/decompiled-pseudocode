/*
 * XREFs of PiUEventReferenceEventEntry @ 0x14077E724
 * Callers:
 *     PiUEventNotifyClient @ 0x14077E5DC (PiUEventNotifyClient.c)
 *     PiUEventNotifyUserMode @ 0x1407839EC (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1)
{
  struct _FAST_MUTEX *v2; // rcx
  unsigned int v3; // ebx

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = *(struct _FAST_MUTEX **)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v3;
  ExReleaseFastMutex(v2);
  return v3;
}
