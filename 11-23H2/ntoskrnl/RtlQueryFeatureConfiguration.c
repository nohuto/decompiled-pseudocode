/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x14035D100
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140933784 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     CmQuerySingleFeatureConfiguration @ 0x140A11C7C (CmQuerySingleFeatureConfiguration.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A12374 (wil_details_UpdateFeatureConfiguredStates.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x14035D208 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x14035D29C (RtlpFcBufferManagerReferenceBuffers.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x140411DC0 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     RtlpFcGetBufferManager @ 0x1407D0EBC (RtlpFcGetBufferManager.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D0ECC (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

__int64 __fastcall RtlQueryFeatureConfiguration(unsigned int a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  __int64 BufferManager; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( ObGetCurrentIrql() > 1u && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return 2147483682LL;
  BufferManager = RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers(BufferManager, &v12, &v13);
  v10 = RtlpFcQueryFeatureConfigurationFromBufferSet(v13, a1, a2, &v14);
  v11 = v10;
  if ( v10 >= 0 )
  {
    RtlpFcConvertFeatureConfigurationsInternalToExternal(&v14, a4, 1LL);
    v11 = 0;
    *a3 = v12;
  }
  else if ( v10 == -1073741275 || v10 == -2147483614 )
  {
    *a3 = v12;
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v13);
  return v11;
}
