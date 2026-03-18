/*
 * XREFs of PopulateSamplerArguments @ 0x1800BB0C8
 * Callers:
 *     PrepareSamplers @ 0x1800BAF88 (PrepareSamplers.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B457C (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     DecodeInputTexcoord @ 0x1800BB8A4 (DecodeInputTexcoord.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 */

__int64 __fastcall PopulateSamplerArguments(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5)
{
  __int16 v8; // cx
  _BYTE *v9; // rdi
  unsigned int v11; // ebx
  char v12; // al
  int appended; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  char v18; // al
  int v19; // eax
  __int64 v20; // rcx
  __int16 v21; // [rsp+30h] [rbp-40h]
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v23[17]; // [rsp+50h] [rbp-20h] BYREF
  char v24; // [rsp+61h] [rbp-Fh]
  char v25; // [rsp+62h] [rbp-Eh]

  v8 = a3 | 0x400;
  v9 = (_BYTE *)(a2 + 32LL * a3);
  v11 = 0;
  v21 = a3 | 0x400;
  if ( !a4[2] )
    goto LABEL_19;
  if ( v9[23] || v9[18] )
  {
    v12 = a4[4];
    v22 = 0uLL;
    *(_WORD *)&v23[14] = (unsigned __int8)(v12 + 48);
    qmemcpy(v23, "GetSamplerData", 14);
    appended = CShaderLinkingGraphBuilder::AppendNode(a1, a3 | 0x300, (__int64)word_18033C470, a5, (__int64)v23, &v22);
    v11 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, appended, 0x313u, 0LL);
      return v11;
    }
    v8 = v21;
  }
  if ( (v9[20] || v9[19])
    && (v18 = a4[4],
        v22 = 0uLL,
        v24 = v18 + 48,
        qmemcpy(v23, "GetSamplerDataExt", sizeof(v23)),
        v25 = 0,
        v19 = CShaderLinkingGraphBuilder::AppendNode(a1, v8, (__int64)word_18033C470, a5, (__int64)v23, &v22),
        v11 = v19,
        v19 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x319u, 0LL);
  }
  else
  {
LABEL_19:
    if ( *a4 )
    {
      if ( !v9[23] )
      {
        v15 = DecodeInputTexcoord(a1, a2, a3, a5);
        v11 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x322u, 0LL);
      }
    }
  }
  return v11;
}
