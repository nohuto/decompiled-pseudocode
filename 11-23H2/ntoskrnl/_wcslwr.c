/*
 * XREFs of _wcslwr @ 0x1403D9C90
 * Callers:
 *     SiGetBootDeviceNameFromRegistry @ 0x1407C0000 (SiGetBootDeviceNameFromRegistry.c)
 *     EtwpCovSampSplitSegments @ 0x1409F2F08 (EtwpCovSampSplitSegments.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E560 (xHalTimerWatchdogStop.c)
 */

wchar_t *__cdecl wcslwr(wchar_t *String)
{
  wchar_t v3; // cx
  wchar_t *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int16)(v3 - 65) <= 0x19u )
        *v4 = v3 + 32;
      v3 = *++v4;
    }
    return String;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
