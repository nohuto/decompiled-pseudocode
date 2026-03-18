/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140B15608
 * Callers:
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140B15550 (wil_InitializeFeatureStagingFromBuffers.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403C77F8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140832FD0 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

__int64 __fastcall wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 *i; // rbx
  __int64 v4; // rax
  int v5; // ecx
  int FeatureConfigurationFromBuffers; // eax
  int v7; // edx
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h]
  _QWORD v12[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h]

  v2 = 0;
  for ( i = wil_details_FeatureDescriptors_SkipPadding((__int64 *)&wil_details_featureDescriptors_a);
        i;
        i = wil_details_FeatureDescriptors_SkipPadding(i + 6) )
  {
    v10 = 0LL;
    v11 = 0;
    if ( *((_BYTE *)i + 21) || *((_BYTE *)i + 22) )
      goto LABEL_6;
    v13[0] = 0LL;
    v4 = *a1;
    v5 = *((_DWORD *)i + 4);
    v12[0] = 0LL;
    v13[1] = v4;
    v13[2] = a1[1];
    v12[1] = a1[2];
    v12[2] = a1[3];
    FeatureConfigurationFromBuffers = RtlpFcQueryFeatureConfigurationFromBuffers(
                                        v5,
                                        (__int64)v13,
                                        (__int64)v12,
                                        (__int64)&v10);
    if ( FeatureConfigurationFromBuffers == -2147483614 )
    {
      v9 = 131LL;
      do
      {
        *(_QWORD *)*i = v9;
        i = wil_details_FeatureDescriptors_SkipPadding(i + 6);
      }
      while ( i );
      return v2;
    }
    v7 = 0;
    if ( FeatureConfigurationFromBuffers == -1073741275 )
    {
LABEL_6:
      HIDWORD(v14) = 0;
      v7 = 0;
    }
    else
    {
      HIDWORD(v14) = 0;
      if ( !FeatureConfigurationFromBuffers )
      {
        LODWORD(v14) = (2 * (BYTE4(v10) & 0xB0 | (4 * (BYTE4(v10) & 0x40)))) | 0x83;
        goto LABEL_8;
      }
      if ( FeatureConfigurationFromBuffers == 279 )
      {
        LODWORD(v14) = (2 * (BYTE4(v10) & 0x80)) | 0x83;
        goto LABEL_8;
      }
      v7 = FeatureConfigurationFromBuffers;
    }
    LODWORD(v14) = 131;
LABEL_8:
    if ( !v7 )
      v7 = v2;
    v2 = v7;
    *(_QWORD *)*i = v14;
  }
  return v2;
}
