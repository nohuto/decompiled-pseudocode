/*
 * XREFs of ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z @ 0x1800C7950
 * Callers:
 *     ?OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z @ 0x1800C7690 (-OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x1800BC8E4 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800C7C80 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 */

__int64 __fastcall CMagnifierControl::UpdateFullscreenBoundsFromSoftwareCursorOffset(
        CMagnifierControl *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  __int64 v3; // r9
  double *v4; // rdi
  __int64 v7; // [rsp+40h] [rbp+8h]
  struct tagPOINT v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = (double *)((char *)this + 152);
  LODWORD(v7) = (int)(*(double *)(v3 + 32) * -1.0);
  HIDWORD(v7) = (int)(*(double *)(v3 + 40) * -1.0);
  MagnifierExperienceHelper::GetFullScreenMagnifierOffset(
    *((MagnifierExperienceHelper **)this + 20),
    &v8,
    (const double *)a2,
    (const struct tagPOINT *)this + 19,
    a3);
  if ( v7 != v8 )
    CFullScreenMagnifier::OnSetDesktopMagnificationFactor(*((CFullScreenMagnifier **)this + 6), *v4, -v8.x, -v8.y);
  return 0LL;
}
