/*
 * XREFs of ExpReadSiloTimeZoneMarker @ 0x1409F7F58
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1409F762C (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExpReadTimeZoneInformation @ 0x1409F7F88 (ExpReadTimeZoneInformation.c)
 */

bool ExpReadSiloTimeZoneMarker()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  ExpReadTimeZoneInformation(L"SiloTimeZoneMarker", 0LL, &v1);
  return v1 != 0;
}
