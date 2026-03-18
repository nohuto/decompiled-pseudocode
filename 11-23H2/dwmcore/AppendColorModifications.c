/*
 * XREFs of AppendColorModifications @ 0x1800BBBDC
 * Callers:
 *     PerformSample @ 0x1800BA674 (PerformSample.c)
 *     AppendCustomSamplerShaderBody @ 0x1800F6404 (AppendCustomSamplerShaderBody.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B457C (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     AppendColorConversion @ 0x1800BBCB0 (AppendColorConversion.c)
 */

__int64 __fastcall AppendColorModifications(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  unsigned __int16 v5; // ax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int appended; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v17; // [rsp+70h] [rbp+30h] BYREF

  v17 = a3;
  v5 = a3;
  if ( *(_BYTE *)(a2 + 24) )
  {
    *(_QWORD *)&v16 = 1LL;
    *((_QWORD *)&v16 + 1) = &v17;
    appended = CShaderLinkingGraphBuilder::AppendNode(a1, a3, (__int64)word_18033C470, a4, (__int64)"IgnoreAlpha", &v16);
    v10 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, appended, 0x27Bu, 0LL);
      return v10;
    }
    v5 = v17;
  }
  if ( *(_BYTE *)(a2 + 25) )
  {
    *(_QWORD *)&v16 = 1LL;
    *((_QWORD *)&v16 + 1) = &v17;
    v14 = CShaderLinkingGraphBuilder::AppendNode(
            a1,
            v5,
            (__int64)word_18033C470,
            a4,
            (__int64)"UnBoostSDRLuminance",
            &v16);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x281u, 0LL);
      return v10;
    }
    v5 = v17;
  }
  v16 = *(_OWORD *)a2;
  v8 = AppendColorConversion(a1, a4, v5, (unsigned int)&v16, 0);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x284u, 0LL);
  return v10;
}
