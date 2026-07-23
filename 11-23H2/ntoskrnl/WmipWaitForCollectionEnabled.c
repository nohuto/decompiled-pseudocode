/*
 * XREFs of WmipWaitForCollectionEnabled @ 0x1409E1ED8
 * Callers:
 *     WmipSendEnableRequest @ 0x1407D615C (WmipSendEnableRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 */

NTSTATUS __fastcall WmipWaitForCollectionEnabled(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 16) & 8) == 0 )
  {
    KeInitializeEvent(*(PRKEVENT *)(a1 + 96), NotificationEvent, 0);
    *(_DWORD *)(a1 + 16) |= 8u;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  KeWaitForSingleObject(*(PVOID *)(a1 + 96), Executive, 0, 0, 0LL);
  return KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
}
