/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x18002C300
 * Callers:
 *     LdrpGenRandom @ 0x18002B7E4 (LdrpGenRandom.c)
 *     __cpu_features_init @ 0x180094FEC (__cpu_features_init.c)
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(ProcessorFeature + 0x7FFE0274LL);
}
