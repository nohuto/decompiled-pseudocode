/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x180071220
 * Callers:
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x180130058 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1801300C4 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
