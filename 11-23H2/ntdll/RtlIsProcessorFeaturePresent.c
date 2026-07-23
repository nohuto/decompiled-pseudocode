/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x18002C130
 * Callers:
 *     LdrpGenRandom @ 0x18002B614 (LdrpGenRandom.c)
 *     __cpu_features_init @ 0x1800957EC (__cpu_features_init.c)
 *     RtlInitializeHeapManager @ 0x1800B0588 (RtlInitializeHeapManager.c)
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
