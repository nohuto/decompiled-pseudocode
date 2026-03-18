/*
 * XREFs of RIMCAUsageToLegacyFlag @ 0x1C019177C
 * Callers:
 *     RIMMarkSiblingMouseDevice @ 0x1C0182530 (RIMMarkSiblingMouseDevice.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCAUsageToLegacyFlag(__int16 a1)
{
  unsigned __int16 v1; // bx

  v1 = 0;
  switch ( a1 )
  {
    case 1:
      return 16;
    case 2:
      return 4;
    case 4:
      return 8;
    case 5:
      return 2;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 254);
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 260);
      break;
  }
  return v1;
}
