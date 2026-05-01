/*
 * XREFs of RmDisconnectFromResourceManager @ 0x18001B9B0
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientConnectionCleanup @ 0x18001BB1C (RmpClientConnectionCleanup.c)
 */

__int64 __fastcall RmDisconnectFromResourceManager(PVOID P)
{
  RmpClientConnectionCleanup(P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
