/*
 * XREFs of RtlpFcGetBufferManager @ 0x1407D143C
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x14035CAB0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x140410DB0 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x140410E70 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

void *RtlpFcGetBufferManager()
{
  return &unk_140C14090;
}
