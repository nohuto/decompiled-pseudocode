/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x14087542C
 * Callers:
 *     WmipDoDisableRequest @ 0x1407D5DE8 (WmipDoDisableRequest.c)
 *     WmipSendEnableRequest @ 0x1407D5E8C (WmipSendEnableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x14086ABEC (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140883414 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 */

LONG __fastcall WmipReleaseCollectionEnabled(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 16);
  if ( (result & 8) != 0 )
  {
    result = KeSetEvent(*(PRKEVENT *)(a1 + 96), 0, 0);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  return result;
}
