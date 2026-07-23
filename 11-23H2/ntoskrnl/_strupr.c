/*
 * XREFs of _strupr @ 0x1403D8B40
 * Callers:
 *     InbvDetermineFunction @ 0x1403881D8 (InbvDetermineFunction.c)
 *     HalInitializeBios @ 0x14039F240 (HalInitializeBios.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140B52524 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140B525E0 (BvgaDriverInitialize.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E560 (xHalTimerWatchdogStop.c)
 */

char *__cdecl strupr(char *String)
{
  char v3; // cl
  char *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int8)(v3 - 97) <= 0x19u )
        *v4 = v3 - 32;
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
