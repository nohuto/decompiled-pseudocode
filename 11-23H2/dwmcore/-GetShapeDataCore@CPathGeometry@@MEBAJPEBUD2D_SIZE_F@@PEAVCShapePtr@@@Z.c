/*
 * XREFs of ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800F0E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C3A4C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x1800F0EB4 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CPathGeometry::GetShapeDataCore(
        const struct CPathData **this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v3; // edi
  CPathSegmentsShape *v6; // rax
  __int64 v7; // rcx
  CPathSegmentsShape *v8; // rsi

  v3 = 0;
  if ( this[18] )
  {
    v6 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
    if ( v6 && (v8 = CPathSegmentsShape::CPathSegmentsShape(v6, this[18])) != 0LL )
    {
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v8;
      *((_BYTE *)a3 + 8) = 1;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x35u, 0LL);
    }
  }
  return v3;
}
