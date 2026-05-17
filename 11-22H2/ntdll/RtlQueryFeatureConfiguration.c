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

__int64 __fastcall RtlQueryFeatureConfiguration(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // r14d
  int FeatureConfigurationFromBufferSet; // eax
  unsigned int FeatureConfigurationFromKernel; // ebx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  v7 = a1;
  if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(a1, 0LL, &v12, &v11) < 0 )
  {
    FeatureConfigurationFromKernel = RtlpFcQueryFeatureConfigurationFromKernel(v7, a2, a3, a4);
    goto LABEL_5;
  }
  FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(v11, v7, a2, a4);
  FeatureConfigurationFromKernel = FeatureConfigurationFromBufferSet;
  if ( FeatureConfigurationFromBufferSet >= 0 )
  {
    FeatureConfigurationFromKernel = 0;
LABEL_4:
    *a3 = v12;
    goto LABEL_5;
  }
  if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
    goto LABEL_4;
LABEL_5:
  if ( v11 )
    RtlpFcBufferManagerDereferenceBuffers(&unk_180182DE8, v11);
  return FeatureConfigurationFromKernel;
}
