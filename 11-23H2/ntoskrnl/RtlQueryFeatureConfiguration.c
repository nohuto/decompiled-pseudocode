/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x14035D2A0
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140933984 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     CmQuerySingleFeatureConfiguration @ 0x140A11F2C (CmQuerySingleFeatureConfiguration.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A12624 (wil_details_UpdateFeatureConfiguredStates.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x14035D3A8 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x14035D43C (RtlpFcBufferManagerReferenceBuffers.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x140412000 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     RtlpFcGetBufferManager @ 0x1407D118C (RtlpFcGetBufferManager.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D119C (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  __int64 BufferManager; // rsi
  int v10; // eax
  NTSTATUS v11; // ebx
  ULONGLONG v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( ObGetCurrentIrql() > 1u && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return -2147483614;
  BufferManager = RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers(BufferManager, &v12, &v13);
  v10 = RtlpFcQueryFeatureConfigurationFromBufferSet(v13, FeatureId, (unsigned int)ConfigurationType, &v14);
  v11 = v10;
  if ( v10 >= 0 )
  {
    RtlpFcConvertFeatureConfigurationsInternalToExternal(&v14, FeatureConfiguration, 1LL);
    v11 = 0;
    *ChangeStamp = v12;
  }
  else if ( v10 == -1073741275 || v10 == -2147483614 )
  {
    *ChangeStamp = v12;
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v13);
  return v11;
}
