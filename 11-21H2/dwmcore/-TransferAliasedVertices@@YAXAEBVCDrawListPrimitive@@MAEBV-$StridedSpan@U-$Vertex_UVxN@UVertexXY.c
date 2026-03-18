/*
 * XREFs of ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801EC5B4
 * Callers:
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1800A6FB0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCom.c)
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@_N@Z @ 0x1800CCED8 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 *     ?EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801F05F0 (-EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z.c)
 * Callees:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EC1D0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EC288 (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EC324 (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EC3C0 (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex.c)
 *     ??0?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@QEAA@AEBVCDrawListPrimitive@@M_NAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801EC448 (--0-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@QEAA@AEBVCDrawListPrimitiv.c)
 */

__int64 __fastcall TransferAliasedVertices(__int64 a1, float a2, __int64 a3)
{
  char v4; // al
  __int64 result; // rax
  _BYTE v6[88]; // [rsp+30h] [rbp-58h] BYREF

  CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>::CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>(
    (__int64)v6,
    a1,
    a2,
    *(_BYTE *)(a1 + 96),
    a3);
  v4 = 1;
  if ( (v6[40] & 1) != 0 || (v6[56] & 0xF) != 0 )
    v4 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    if ( !v6[48] )
    {
      if ( !v4 )
      {
        VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___((__int64)v6);
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    if ( v4 )
    {
LABEL_12:
      VertexTransfer::SimdTransfer_VertexTransfer::CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___((__int64)v6);
      goto LABEL_14;
    }
    VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___((__int64)v6);
  }
  else
  {
    if ( v4 )
      goto LABEL_12;
    VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___((__int64)v6);
  }
LABEL_14:
  result = *(unsigned int *)(a1 + 8);
  dword_1803D3264 += result;
  return result;
}
