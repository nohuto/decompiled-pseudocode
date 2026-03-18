/*
 * XREFs of InitializeShaderLinkingInput @ 0x1800BC508
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800BA9B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800B99B4 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     GetHlslNameAndSemantic @ 0x1800BC698 (GetHlslNameAndSemantic.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x1800BC7B4 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180103C6C (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall InitializeShaderLinkingInput(struct ID3D11Linker **ppLinker, char a2, VertexShaderDesc *a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r11d
  unsigned __int64 v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  char *v12; // rbx
  __int64 v13; // r10
  char *v14; // rdx
  int v15; // r10d
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF

  v5 = VertexShaderDesc::ResolveKey(a3);
  v8 = *((_QWORD *)&unk_1802CE360 + 2 * (v5 & 0xFFFFFFEF));
  v9 = v8;
  v20 = *((_OWORD *)&unk_1802CE360 + (v5 & 0xFFFFFFEF));
  v10 = *((_QWORD *)&v20 + 1);
  if ( (_DWORD)v8 )
  {
    while ( 1 )
    {
      v11 = v9 - 1;
      if ( v11 >= v8 )
        break;
      LOWORD(v6) = *(_WORD *)(*((_QWORD *)&v20 + 1) + 12 * v11);
      if ( (v6 & 0xFF00) == 0x100 )
      {
        v6 = (unsigned __int8)v6;
        if ( (unsigned __int8)v6 >= v7 )
        {
          v9 = v11;
          if ( (_DWORD)v11 )
            continue;
        }
      }
      goto LABEL_5;
    }
LABEL_16:
    gsl::details::terminate((gsl::details *)v6);
    JUMPOUT(0x1800BC691LL);
  }
LABEL_5:
  v12 = (char *)DefaultHeap::Alloc(saturated_mul(v9, 0x20uLL));
  if ( v12 )
  {
    v13 = 0LL;
    if ( v9 )
    {
      while ( (unsigned int)v13 < v8 )
      {
        v14 = &v12[32 * (unsigned int)v13];
        *(_WORD *)v14 = *(_WORD *)(v10 + 12 * v13);
        *((_DWORD *)v14 + 6) = *(_DWORD *)(v10 + 12 * v13 + 4);
        *((_DWORD *)v14 + 7) = *(_DWORD *)(v10 + 12 * v13 + 8);
        GetHlslNameAndSemantic(*(unsigned __int16 *)(v10 + 12 * v13), v14 + 8, v14 + 16);
        v13 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v13 >= v9 )
          goto LABEL_9;
      }
      goto LABEL_16;
    }
LABEL_9:
    gsl::details::extent_type<-1>::extent_type<-1>(&v20, v9);
    if ( (_QWORD)v20 == -1LL )
      goto LABEL_16;
    *((_QWORD *)&v20 + 1) = v12;
    v16 = CShaderLinkingGraphBuilder::Initialize(ppLinker, a2, &v20);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1B4u, 0LL);
    operator delete(v12);
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x1A7u, 0LL);
  }
  return v18;
}
