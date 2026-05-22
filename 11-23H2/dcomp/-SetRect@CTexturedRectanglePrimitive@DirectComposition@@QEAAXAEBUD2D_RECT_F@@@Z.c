/*
 * XREFs of ?SetRect@CTexturedRectanglePrimitive@DirectComposition@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800FD004
 * Callers:
 *     ?Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z @ 0x18000C9A0 (-Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z.c)
 * Callees:
 *     ??$ComputeTransformedRectBounds@UD2D_RECT_F@@@DirectComposition@@YA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAUD2D_POINT_2F@@@Z @ 0x180004824 (--$ComputeTransformedRectBounds@UD2D_RECT_F@@@DirectComposition@@YA-AV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003BC88 (-Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV-$TMilRect_@MUMilRectF@.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall DirectComposition::CTexturedRectanglePrimitive::SetRect(
        DirectComposition::CTexturedRectanglePrimitive *this,
        const struct D2D_RECT_F *a2)
{
  DirectComposition::CPrimitiveGroup *v4; // rcx
  float *v5; // rax
  DirectComposition::CPrimitiveGroup *v6; // rcx
  float v7[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2->right != *((float *)this + 36)
    || a2->bottom != *((float *)this + 37)
    || a2->left != *((float *)this + 34)
    || a2->top != *((float *)this + 35) )
  {
    v4 = (DirectComposition::CPrimitiveGroup *)*((_QWORD *)this + 8);
    if ( v4 )
      DirectComposition::CPrimitiveGroup::Invalidate(v4, (__int64)this, 0LL);
    *(struct D2D_RECT_F *)((char *)this + 136) = *a2;
    v5 = DirectComposition::ComputeTransformedRectBounds<D2D_RECT_F>(v7, (__int64)this + 136, (float *)this + 18, 0LL);
    v6 = (DirectComposition::CPrimitiveGroup *)*((_QWORD *)this + 8);
    *(_OWORD *)((char *)this + 184) = *(_OWORD *)v5;
    if ( v6 )
      DirectComposition::CPrimitiveGroup::Invalidate(v6, (__int64)this, 0LL);
  }
}
