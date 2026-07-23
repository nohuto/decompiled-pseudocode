/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1800710F0
 * Callers:
 *     RtlpFtInitialize @ 0x18009F910 (RtlpFtInitialize.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x180130398 (wil_RtlStagingConfig_QueryFeatureState.c)
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180071234 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180071630 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800A03F0 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x1800A0630 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x18010FED0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1801300C4 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  NTSTATUS FeatureConfigurationFromKernel; // ebx
  int FeatureConfigurationFromBufferSet; // eax
  ULONGLONG v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-20h] BYREF

  v12 = 0LL;
  if ( ConfigurationType
    || (FeatureConfigurationFromKernel = RtlQueryInternalFeatureConfiguration(FeatureId, 1LL, &v11, v13),
        FeatureConfigurationFromKernel < 0)
    || (v13[12] & 1) == 0 )
  {
    if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(*(_QWORD *)&FeatureId, 0LL, &v11, &v12) >= 0 )
    {
      FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(
                                            v12,
                                            FeatureId,
                                            (unsigned int)ConfigurationType,
                                            v13);
      FeatureConfigurationFromKernel = FeatureConfigurationFromBufferSet;
      if ( FeatureConfigurationFromBufferSet >= 0 )
      {
        RtlpFcConvertFeatureConfigurationsInternalToExternal(v13, FeatureConfiguration, 1LL);
        FeatureConfigurationFromKernel = 0;
        *ChangeStamp = v11;
      }
      else if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
      {
        *ChangeStamp = v11;
      }
    }
    else
    {
      FeatureConfigurationFromKernel = RtlpFcQueryFeatureConfigurationFromKernel(
                                         FeatureId,
                                         (unsigned int)ConfigurationType,
                                         ChangeStamp,
                                         v13);
      if ( !FeatureConfigurationFromKernel )
        RtlpFcConvertFeatureConfigurationsInternalToExternal(v13, FeatureConfiguration, 1LL);
    }
    if ( v12 )
      RtlpFcBufferManagerDereferenceBuffers(&unk_180185E28, v12);
  }
  else
  {
    RtlpFcConvertFeatureConfigurationsInternalToExternal(v13, FeatureConfiguration, 1LL);
    *ChangeStamp = v11;
  }
  return FeatureConfigurationFromKernel;
}
