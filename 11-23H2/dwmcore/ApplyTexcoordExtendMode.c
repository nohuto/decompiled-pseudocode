/*
 * XREFs of ApplyTexcoordExtendMode @ 0x1800BBDB8
 * Callers:
 *     ApplyTexcoordTransformations @ 0x1800BBB44 (ApplyTexcoordTransformations.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B457C (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall ApplyTexcoordExtendMode(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        char a4,
        char a5,
        __int64 a6,
        __int16 *a7)
{
  __int16 *v7; // rsi
  unsigned int v8; // ebx
  __int16 v9; // di
  char *v10; // rax
  int appended; // eax
  __int64 v12; // rcx
  int v14; // edi
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  __int16 v16; // [rsp+68h] [rbp+20h] BYREF
  __int16 v17; // [rsp+6Ah] [rbp+22h]

  v7 = a7;
  v8 = 0;
  v9 = a2;
  if ( !a4 )
    goto LABEL_7;
  if ( a7 )
  {
    v14 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v14 + 1;
    v9 = v14 | 0x600;
  }
  v16 = a2;
  v17 = a3 | 0x300;
  *((_QWORD *)&v15 + 1) = &v16;
  *(_QWORD *)&v15 = 2LL;
  if ( a4 == 1 )
  {
    v10 = "BorderEffectClamp";
  }
  else if ( a4 == 2 )
  {
    v10 = "BorderEffectWrapBilinear";
    if ( !a5 )
      v10 = "BorderEffectWrap";
  }
  else
  {
    v10 = a4 == 3 ? "BorderEffectMirror" : 0LL;
  }
  appended = CShaderLinkingGraphBuilder::AppendNode(a1, v9, (__int64)word_18033C470, a6, (__int64)v10, &v15);
  v8 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, appended, 0x1FAu, 0LL);
  }
  else
  {
LABEL_7:
    if ( v7 )
      *v7 = v9;
  }
  return v8;
}
