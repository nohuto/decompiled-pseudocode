/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1801300C4
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1800710F0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800A03F0 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x180071220 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x18013013C (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBufferSet(__int64 a1, unsigned int a2, signed int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // r10
  _QWORD *v8; // rax
  _DWORD v9[6]; // [rsp+20h] [rbp-18h]

  v3 = a3;
  result = RtlpFcValidateFeatureConfigurationType(a3);
  if ( (int)result >= 0 )
  {
    v7 = 0LL;
    v8 = (_QWORD *)(v6 + 8);
    do
    {
      if ( *v8 )
      {
        v9[0] = 0;
        v9[1] = 1;
        return RtlpFcQueryFeatureConfigurationFromBuffers(a2, v6 + 24LL * (int)v9[v3], v6 + 48);
      }
      ++v7;
      v8 += 3;
    }
    while ( v7 < 3 );
    return 2147483682LL;
  }
  return result;
}
