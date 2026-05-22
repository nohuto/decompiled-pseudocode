/*
 * XREFs of ?Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180085760
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAxisAligned@DirectComposition@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003170C (-IsAxisAligned@DirectComposition@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 *     ?AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@1@Z @ 0x180032EB0 (-AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOcclu.c)
 *     ?BrushesShown@CVirtualSurfacePrimitive@DirectComposition@@EEAA_NXZ @ 0x1800857E0 (-BrushesShown@CVirtualSurfacePrimitive@DirectComposition@@EEAA_NXZ.c)
 *     ?AddAdditionalHitTestPrimitive@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCVirtualSurfacePrimitive@2@@Z @ 0x180089598 (-AddAdditionalHitTestPrimitive@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCVirtualSurfacePrimit.c)
 *     ?AddClippingPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1800F9A00 (-AddClippingPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurfacePrimitive::Rebuild(
        DirectComposition::CVirtualSurfacePrimitive *this,
        struct DirectComposition::CPrimitiveGroup *a2,
        struct DirectComposition::BatchedOccluder *a3,
        struct DirectComposition::BatchedOccluder *a4)
{
  unsigned int v8; // edi
  const struct D2D_MATRIX_3X2_F *v9; // rdx
  unsigned int v11; // ebp
  int v12; // eax
  struct DirectComposition::CPrimitive *v13; // rbx
  int v14; // eax
  unsigned int v15[10]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  if ( !DirectComposition::CVirtualSurfacePrimitive::BrushesShown(this) )
  {
    DirectComposition::CPrimitiveGroup::AddAdditionalHitTestPrimitive(a2, this);
    return v8;
  }
  if ( *((_QWORD *)this + 33) )
  {
    v11 = -1;
    v15[0] = -1;
    if ( DirectComposition::IsAxisAligned((DirectComposition::CVirtualSurfacePrimitive *)((char *)this + 232), v9) )
    {
      DirectComposition::CPrimitiveGroup::AddAdditionalHitTestPrimitive(a2, this);
      v13 = (struct DirectComposition::CPrimitive *)*((_QWORD *)this + 33);
    }
    else
    {
      v12 = DirectComposition::CPrimitiveGroup::AddClippingPrimitive(
              a2,
              (const struct D2D_RECT_F *)((char *)this + 136),
              (const struct D2D_MATRIX_3X2_F *)this + 3,
              v15);
      v13 = (struct DirectComposition::CPrimitive *)*((_QWORD *)this + 33);
      v8 = v12;
      if ( v12 < 0 )
        return v8;
      v11 = v15[0];
    }
    do
    {
      if ( !v13 )
        break;
      v14 = DirectComposition::CPrimitiveGroup::AddPrimitiveInternal(a2, v13, v11, a3, a4);
      v13 = (struct DirectComposition::CPrimitive *)*((_QWORD *)v13 + 7);
      a3 = 0LL;
      v8 = v14;
    }
    while ( v14 >= 0 );
  }
  else
  {
    return (unsigned int)DirectComposition::CVirtualSurfacePrimitive::RealizeAndRebuild(this, a2, a3, a4);
  }
  return v8;
}
