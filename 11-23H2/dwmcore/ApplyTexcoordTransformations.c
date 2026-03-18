/*
 * XREFs of ApplyTexcoordTransformations @ 0x1800BBB44
 * Callers:
 *     PerformSample @ 0x1800BA674 (PerformSample.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B457C (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ApplyTexcoordExtendMode @ 0x1800BBDB8 (ApplyTexcoordExtendMode.c)
 */

__int64 __fastcall ApplyTexcoordTransformations(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, void *a5)
{
  unsigned __int16 v5; // bp
  _BYTE *v7; // rdi
  char v9; // cl
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  __int16 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  int appended; // eax
  __int64 v21; // rcx
  __int128 v22; // [rsp+40h] [rbp-28h] BYREF
  char v23; // [rsp+80h] [rbp+18h] BYREF
  char v24; // [rsp+82h] [rbp+1Ah] BYREF

  v5 = a4;
  v7 = (_BYTE *)(a2 + 32LL * a3);
  if ( v7[21] )
    return 0LL;
  LOBYTE(a4) = v7[16];
  v9 = v7[20];
  if ( (_BYTE)a4 == v7[17] )
  {
    v10 = ApplyTexcoordExtendMode(a1, v5, a3, a4, v9, (__int64)a5, 0LL);
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x248u, 0LL);
  }
  else
  {
    v14 = (__int64)a5;
    v15 = ApplyTexcoordExtendMode(a1, v5, a3, a4, v9, (__int64)a5, (__int64)&v23);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x24Eu, 0LL);
    }
    else
    {
      LOBYTE(v17) = v7[17];
      v18 = ApplyTexcoordExtendMode(a1, v5, a3, v17, v7[20], v14, (__int64)&v24);
      v12 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x24Fu, 0LL);
      }
      else
      {
        *(_QWORD *)&v22 = 2LL;
        *((_QWORD *)&v22 + 1) = &v23;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     v5,
                     (__int64)word_18033C470,
                     v14,
                     (__int64)"BorderEffectCombine",
                     &v22);
        v12 = appended;
        if ( appended < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, appended, 0x251u, 0LL);
      }
    }
  }
  return v12;
}
