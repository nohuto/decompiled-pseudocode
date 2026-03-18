/*
 * XREFs of WheapAttemptPhysicalPageOfflineWorker @ 0x140A091D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A08FFC (WheapAttemptPhysicalPageOffline.c)
 */

LONG __fastcall WheapAttemptPhysicalPageOfflineWorker(__int64 a1)
{
  *(_DWORD *)(a1 + 20) = WheapAttemptPhysicalPageOffline(
                           *(LARGE_INTEGER *)a1,
                           *(_QWORD *)(a1 + 8),
                           *(_BYTE *)(a1 + 16),
                           *(_BYTE *)(a1 + 17),
                           *(_BYTE *)(a1 + 18),
                           *(_BYTE *)(a1 + 19));
  return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
