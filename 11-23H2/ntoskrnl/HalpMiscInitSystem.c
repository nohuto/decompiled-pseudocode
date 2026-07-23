/*
 * XREFs of HalpMiscInitSystem @ 0x140A915A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeTelemetry @ 0x140854D98 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscInitializeKsr @ 0x140854DE0 (HalpMiscInitializeKsr.c)
 *     HalpMiscInitDiscard @ 0x140B6A188 (HalpMiscInitDiscard.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 */

__int64 __fastcall HalpMiscInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a1 == 7 )
    {
      HalpMiscInitDiscard();
    }
    else if ( a1 == 31 )
    {
      HalpMiscInitializeTelemetry();
      HalpMiscInitializeKsr();
    }
  }
  else
  {
    HalpMiscGetParameters(a3);
  }
  return 0LL;
}
