/*
 * XREFs of ??A?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z @ 0x1800DFD7C
 * Callers:
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x180036350 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 *     _lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_::operator() @ 0x1800DFC78 (_lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_--operator().c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801FA5E8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<PrimitiveUVDesc const,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1800DFD98LL);
  }
  return *((_QWORD *)a1 + 1) + 52 * a2;
}
