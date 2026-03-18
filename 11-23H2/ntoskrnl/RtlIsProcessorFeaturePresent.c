/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x140365550
 * Callers:
 *     RtlHpGlobalsInitialize @ 0x140389C2C (RtlHpGlobalsInitialize.c)
 *     DifExIsProcessorFeaturePresentWrapper @ 0x1405D9380 (DifExIsProcessorFeaturePresentWrapper.c)
 *     PiIsDriverBlocked @ 0x140692F18 (PiIsDriverBlocked.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  if ( a1 >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(a1 - 0x87FFFFFFD8CLL);
}
