/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x180070E50
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x18012E3E8 (wil_RtlStagingConfig_QueryFeatureState.c)
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180070F10 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18007130C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x18010EA50 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18012E0A0 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  int FeatureConfigurationFromBufferSet; // eax
  NTSTATUS FeatureConfigurationFromKernel; // ebx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG v12[2]; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(FeatureId, 0LL, v12, &v11) < 0 )
  {
    FeatureConfigurationFromKernel = RtlpFcQueryFeatureConfigurationFromKernel(
                                       FeatureId,
                                       (unsigned int)ConfigurationType,
                                       ChangeStamp,
                                       FeatureConfiguration);
    goto LABEL_5;
  }
  FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(
                                        v11,
                                        FeatureId,
                                        (unsigned int)ConfigurationType,
                                        FeatureConfiguration);
  FeatureConfigurationFromKernel = FeatureConfigurationFromBufferSet;
  if ( FeatureConfigurationFromBufferSet >= 0 )
  {
    FeatureConfigurationFromKernel = 0;
LABEL_4:
    *ChangeStamp = v12[0];
    goto LABEL_5;
  }
  if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
    goto LABEL_4;
LABEL_5:
  if ( v11 )
    RtlpFcBufferManagerDereferenceBuffers(&unk_180182DE8, v11);
  return FeatureConfigurationFromKernel;
}
