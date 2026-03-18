/*
 * XREFs of RtlpFcGetBufferManager @ 0x1407D0EBC
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x14035D100 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1404115C0 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x140411680 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

void *RtlpFcGetBufferManager()
{
  return &unk_140C14090;
}
