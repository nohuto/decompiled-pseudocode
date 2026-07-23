/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x14035D394
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D119C (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1409BD600 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
