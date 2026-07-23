/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x180034840
 * Callers:
 *     LdrpGenRandom @ 0x1800347F4 (LdrpGenRandom.c)
 *     __cpu_features_init @ 0x180099F0C (__cpu_features_init.c)
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
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
