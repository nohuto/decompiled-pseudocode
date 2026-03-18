/*
 * XREFs of DecodeInputTexcoord @ 0x1800BB8A4
 * Callers:
 *     PopulateSamplerArguments @ 0x1800BB0C8 (PopulateSamplerArguments.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B457C (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1800F9490 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 */

__int64 __fastcall DecodeInputTexcoord(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  unsigned __int16 v4; // ax
  bool v5; // zf
  int appended; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF
  __int16 v16; // [rsp+60h] [rbp+18h] BYREF

  v4 = a3 | 0x100;
  v5 = *(_BYTE *)(a2 + 156) == 0;
  v16 = a3 | 0x100;
  if ( v5 )
  {
    if ( *(_BYTE *)(a2 + 154) )
    {
      *(_QWORD *)&v14 = 1LL;
      *((_QWORD *)&v14 + 1) = &v16;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   a1,
                   v4,
                   (__int64)word_18033C470,
                   a4,
                   (__int64)"FlattenTexcoords",
                   &v14);
      v8 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, appended, 0x223u, 0LL);
    }
    else
    {
      v10 = CShaderLinkingGraphBuilder::SwizzleNode(a1, v4);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x228u, 0LL);
    }
  }
  else
  {
    *(_QWORD *)&v14 = 2LL;
    *((_QWORD *)&v14 + 1) = &v15;
    v15 = 16843008;
    v12 = CShaderLinkingGraphBuilder::AppendNode(a1, v4, (__int64)word_18033C470, a4, (__int64)"GetCubeTexcoord", &v14);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x21Cu, 0LL);
  }
  return v8;
}
