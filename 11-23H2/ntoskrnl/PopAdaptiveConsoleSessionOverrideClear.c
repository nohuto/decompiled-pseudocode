/*
 * XREFs of PopAdaptiveConsoleSessionOverrideClear @ 0x14099B780
 * Callers:
 *     PopAdaptiveGetConsoleSessionState @ 0x1407A60B8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopAdaptiveWnfCallback @ 0x14099BA20 (PopAdaptiveWnfCallback.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideClear @ 0x14098C59C (PopDiagTraceAdaptiveOverrideClear.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideClear(int a1, int a2)
{
  if ( byte_140C39D00[24 * a1] )
  {
    if ( a1 == 1 )
    {
      if ( a2 != 1 )
        return;
      PopAdaptiveBootContext = 0;
    }
    byte_140C39D00[24 * a1] = 0;
    PopDiagTraceAdaptiveOverrideClear();
  }
}
