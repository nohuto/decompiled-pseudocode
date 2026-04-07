/*
 * XREFs of ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18000C964
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000A7A0 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000BB60 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::GetBrush(
        CTransitionWindowSnapshot *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        float *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = 0;
  if ( a2 && a3 && *((_QWORD *)this + 38) && *((_QWORD *)this + 37) )
  {
    if ( *a2 )
      CBaseObject::Release(*a2);
    *a2 = (struct CImageLegacyMilBrushProxy *)*((_QWORD *)this + 38);
    v9 = *((_QWORD *)this + 38);
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    if ( *a3 )
      CBaseObject::Release(*a3);
    *a3 = (struct CCachedVisualImageProxy *)*((_QWORD *)this + 37);
    v10 = *((_QWORD *)this + 37);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *a4 = *((float *)this + 90);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
