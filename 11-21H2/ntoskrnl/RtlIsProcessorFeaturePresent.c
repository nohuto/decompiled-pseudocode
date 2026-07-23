/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x140250040
 * Callers:
 *     sub_1403C44EC @ 0x1403C44EC (sub_1403C44EC.c)
 *     sub_140608D90 @ 0x140608D90 (sub_140608D90.c)
 *     sub_14075E568 @ 0x14075E568 (sub_14075E568.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(ProcessorFeature - 0x87FFFFFFD8CLL);
}
