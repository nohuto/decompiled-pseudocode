/*
 * XREFs of _strupr @ 0x1403D8300
 * Callers:
 *     InbvDetermineFunction @ 0x1403871F8 (InbvDetermineFunction.c)
 *     HalInitializeBios @ 0x14039ED70 (HalInitializeBios.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140B52524 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140B525E0 (BvgaDriverInitialize.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036DD70 (xHalTimerWatchdogStop.c)
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
