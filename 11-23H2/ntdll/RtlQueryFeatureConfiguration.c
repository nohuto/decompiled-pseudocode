/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1800710F0
 * Callers:
 *     RtlpFtInitialize @ 0x18009F950 (RtlpFtInitialize.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x180130398 (wil_RtlStagingConfig_QueryFeatureState.c)
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180071234 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180071630 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800A0430 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x1800A0670 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x18010FF00 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1801300C4 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

__int64 __fastcall RtlQueryFeatureConfiguration(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // r15d
  int FeatureConfigurationFromKernel; // ebx
  int FeatureConfigurationFromBufferSet; // eax
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-20h] BYREF

  v12 = 0LL;
  v7 = a1;
  if ( a2
    || (FeatureConfigurationFromKernel = RtlQueryInternalFeatureConfiguration(a1, 1LL, &v11, v13),
        FeatureConfigurationFromKernel < 0)
    || (v13[12] & 1) == 0 )
  {
    if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(a1, 0LL, &v11, &v12) >= 0 )
    {
      FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(v12, v7, a2, v13);
      FeatureConfigurationFromKernel = FeatureConfigurationFromBufferSet;
      if ( FeatureConfigurationFromBufferSet >= 0 )
      {
        RtlpFcConvertFeatureConfigurationsInternalToExternal(v13, a4, 1LL);
        FeatureConfigurationFromKernel = 0;
        *a3 = v11;
      }
      else if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
      {
        *a3 = v11;
      }
    }
    else
    {
      FeatureConfigurationFromKernel = RtlpFcQueryFeatureConfigurationFromKernel(v7, a2, a3, v13);
      if ( !FeatureConfigurationFromKernel )
        RtlpFcConvertFeatureConfigurationsInternalToExternal(v13, a4, 1LL);
    }
    if ( v12 )
      RtlpFcBufferManagerDereferenceBuffers(&unk_180185E28, v12);
  }
  else
  {
    RtlpFcConvertFeatureConfigurationsInternalToExternal(v13, a4, 1LL);
    *a3 = v11;
  }
  return (unsigned int)FeatureConfigurationFromKernel;
}
