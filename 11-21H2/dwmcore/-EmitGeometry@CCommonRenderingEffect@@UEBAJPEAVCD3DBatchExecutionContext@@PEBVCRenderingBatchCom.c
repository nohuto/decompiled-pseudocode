/*
 * XREFs of ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1800A6FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000D1D8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800A3520 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800A70B0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x1800A7724 (-GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801EC5B4 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 *     ?EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801F05F0 (-EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::EmitGeometry(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CRenderingBatchCommand *a3)
{
  unsigned int v5; // esi
  struct CDrawListPrimitive *Primitive; // rax
  __int64 v7; // rbx
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // r14d
  int appended; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  char *v17; // rdx
  __int64 v18; // r8
  float v19; // xmm3_4
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-28h] BYREF
  __int64 v24; // [rsp+38h] [rbp-20h]
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  Primitive = CRenderingBatchCommand::GetPrimitive(a3);
  v7 = (__int64)Primitive;
  v8 = *((_DWORD *)Primitive + 2);
  if ( v8 )
  {
    if ( *((_DWORD *)Primitive + 6) )
    {
      v21 = EmitInstancedGeometry(a2, a3);
      v5 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0xB9u);
    }
    else
    {
      v9 = *((unsigned int *)Primitive + 5);
      v10 = *((_QWORD *)Primitive + 7);
      v23 = v9;
      v24 = v10;
      if ( !v10 && v9 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v11 = 16;
      if ( *((_BYTE *)a2 + 72) )
        v11 = 48;
      v12 = v11 + 8 * *((_DWORD *)a2 + 19);
      appended = CD3DBatchExecutionContext::AppendGeometry((_DWORD)a2, v8, 0, (unsigned int)&v23, (__int64)&v25, 0LL);
      v5 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, appended, 0x8Au);
      }
      else
      {
        v16 = *(_DWORD *)(v7 + 12) == 0;
        LODWORD(v24) = v12;
        if ( v16 )
        {
          v23 = v25;
          HIDWORD(v24) = *(_DWORD *)(v7 + 8);
          TransferAliasedVertices(v7, v14, &v23);
        }
        else
        {
          v16 = *((_BYTE *)a2 + 72) == 0;
          v17 = (char *)a3 + 16;
          v18 = *(unsigned int *)(v7 + 8);
          v19 = *((float *)a3 + 22);
          HIDWORD(v24) = *(_DWORD *)(v7 + 8);
          v23 = v25;
          if ( v16 )
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v7, (__int64)v17, v18, v19, &v23);
          else
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(v7, (__int64)v17, 0LL, v19, &v23);
        }
      }
    }
  }
  return v5;
}
