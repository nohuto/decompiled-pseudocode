/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x14035D1F4
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D0ECC (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1409BD400 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
