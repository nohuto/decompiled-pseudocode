/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x180070EFC
 * Callers:
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18012E058 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18012E0A0 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
