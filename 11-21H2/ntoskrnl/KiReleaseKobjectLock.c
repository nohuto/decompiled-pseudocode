/*
 * XREFs of KiReleaseKobjectLock @ 0x1402D3804
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleaseKobjectLock(volatile signed __int32 *a1)
{
  _InterlockedAnd(a1, 0xFFFFFF7F);
}
