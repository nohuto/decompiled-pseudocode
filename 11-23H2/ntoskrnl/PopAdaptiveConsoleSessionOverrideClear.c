/*
 * XREFs of PopAdaptiveConsoleSessionOverrideClear @ 0x14099B980
 * Callers:
 *     PopAdaptiveGetConsoleSessionState @ 0x1407A62A8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopAdaptiveWnfCallback @ 0x14099BC20 (PopAdaptiveWnfCallback.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideClear @ 0x14098C79C (PopDiagTraceAdaptiveOverrideClear.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideClear(int a1, int a2)
{
  if ( byte_140C39C60[24 * a1] )
  {
    if ( a1 == 1 )
    {
      if ( a2 != 1 )
        return;
      PopAdaptiveBootContext = 0;
    }
    byte_140C39C60[24 * a1] = 0;
    PopDiagTraceAdaptiveOverrideClear();
  }
}
