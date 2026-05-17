/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x18007687C
 * Callers:
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18012A104 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18012A1E8 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
