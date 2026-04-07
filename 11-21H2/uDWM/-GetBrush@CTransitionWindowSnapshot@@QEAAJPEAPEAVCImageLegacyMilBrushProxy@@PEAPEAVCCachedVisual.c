/*
 * XREFs of ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x1800F0288
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001A2C0 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800EA26C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::GetBrush(
        CTransitionWindowSnapshot *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        float *a4)
{
  unsigned int v4; // ebx
  struct CImageLegacyMilBrushProxy *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = 0;
  if ( a2 && a3 && (v9 = (struct CImageLegacyMilBrushProxy *)*((_QWORD *)this + 38)) != 0LL && *((_QWORD *)this + 37) )
  {
    if ( *a2 )
    {
      CBaseObject::Release(*a2);
      v9 = (struct CImageLegacyMilBrushProxy *)*((_QWORD *)this + 38);
    }
    *a2 = v9;
    v10 = *((_QWORD *)this + 38);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( *a3 )
      CBaseObject::Release(*a3);
    *a3 = (struct CCachedVisualImageProxy *)*((_QWORD *)this + 37);
    v11 = *((_QWORD *)this + 37);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    *a4 = *((float *)this + 90);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
