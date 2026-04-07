/*
 * XREFs of ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6508
 * Callers:
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B6E70 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18003EAB0 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x18005CDC4 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4618 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800B4D08 (-ClipIntersection@CDisplayAnimatedVisual@@KA-AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTAT.c)
 *     ?GetRotationAngle@CDWMDisplay@@QEBAHXZ @ 0x1800B678C (-GetRotationAngle@CDWMDisplay@@QEBAHXZ.c)
 *     ?TransposeRectAroundCenter@@YA?AUtagRECT@@AEBU1@@Z @ 0x1800B713C (-TransposeRectAroundCenter@@YA-AUtagRECT@@AEBU1@@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801007DC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::CaptureAndPositionToExtendedDisplay(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  __int64 v2; // rdx
  int v3; // esi
  __int64 v4; // rax
  CDWMDisplaySet *v5; // rcx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // r15
  const struct CDWMDisplay *v7; // rax
  const struct CDWMDisplay *v8; // r14
  __int64 v9; // rbx
  enum DXGI_MODE_ROTATION v10; // edx
  int RotationAngle; // eax
  int v12; // r8d
  struct D2D_RECT_U v13; // xmm0
  char *v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v18; // [rsp+38h] [rbp-48h] BYREF
  struct D2D_RECT_U v19; // [rsp+48h] [rbp-38h] BYREF
  struct D2D_RECT_U v20; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v21; // [rsp+68h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 56) )
  {
    v17 = 0LL;
    GetDesktopID(1LL, &v17);
    v2 = *((_QWORD *)this + 55);
    v3 = 0;
    v4 = *((_QWORD *)this + 56);
    v5 = (CDWMDisplaySet *)*((_QWORD *)this + 40);
    v21 = *(struct tagRECT *)(v2 + 56);
    v19 = *(struct D2D_RECT_U *)(v4 + 56);
    MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(v5, (const struct CDWMDisplay *)v2);
    v7 = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
           *((CDWMDisplaySet **)this + 40),
           *((const struct CDWMDisplay **)this + 56));
    v8 = v7;
    if ( v7 )
    {
      if ( MatchedPhysicalDisplayNoRef )
      {
        v9 = *((_QWORD *)this + 56);
        v19 = *(struct D2D_RECT_U *)((char *)v7 + 40);
        v20 = *(struct D2D_RECT_U *)(v9 + 40);
        v21 = *CDisplayAnimatedVisual::ClipIntersection(
                 &v18,
                 &v20,
                 &v19,
                 (const struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56),
                 (enum DXGI_MODE_ROTATION)*((_DWORD *)MatchedPhysicalDisplayNoRef + 54));
        v10 = *(_DWORD *)(v9 + 216);
        v20 = *(struct D2D_RECT_U *)(v9 + 40);
        v19 = *(struct D2D_RECT_U *)((char *)v8 + 40);
        v19 = (struct D2D_RECT_U)*CDisplayAnimatedVisual::ClipIntersection(
                                    &v18,
                                    &v19,
                                    &v20,
                                    (const struct tagRECT *)(v9 + 56),
                                    v10);
        CDWMDisplay::GetRotationAngle(v8);
        RotationAngle = CDWMDisplay::GetRotationAngle((CDWMDisplay *)v9);
        v3 = RotationAngle - v12;
        if ( (RotationAngle - v12 + 360) % 180 == 90 )
        {
          v13 = (struct D2D_RECT_U)*TransposeRectAroundCenter(&v18, (const struct tagRECT *)&v19);
          *((_BYTE *)this + 536) = 1;
          v19 = v13;
        }
      }
    }
    v14 = (char *)this + 488;
    v15 = *((_QWORD *)this + 61);
    *((_QWORD *)this + 61) = 0LL;
    if ( v15 )
      CBaseObject::Release((CBaseObject *)(v15 + 8));
    CDisplayAnimatedVisual::CaptureAndAddVisual(
      this,
      v17,
      &v21,
      (const struct tagRECT *)&v19,
      (struct CAnimatedTransitionVisual **)this + 61);
    if ( v3 )
    {
      CVisual::SetRotation((CVisual *)(*(_QWORD *)v14 + 8LL), (double)v3);
      CVisual::SetCenter(
        (CVisual *)(*(_QWORD *)v14 + 8LL),
        (double)((signed int)(v19.left + v19.right) / 2),
        (double)((signed int)(v19.top + v19.bottom) / 2));
    }
  }
  return 0LL;
}
