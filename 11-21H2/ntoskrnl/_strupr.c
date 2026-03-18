/*
 * XREFs of _strupr @ 0x1403E03F0
 * Callers:
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403D71A4 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140B25898 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140B25950 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
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
