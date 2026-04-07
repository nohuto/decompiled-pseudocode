/*
 * XREFs of ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9C88
 * Callers:
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BA5D0 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18005AF50 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7748 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800B7E70 (-ClipIntersection@CDisplayAnimatedVisual@@KA-AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTAT.c)
 *     ?GetRotationAngle@CDWMDisplay@@QEBAHXZ @ 0x1800B9EF0 (-GetRotationAngle@CDWMDisplay@@QEBAHXZ.c)
 *     ?TransposeRectAroundCenter@@YA?AUtagRECT@@AEBU1@@Z @ 0x1800BA8AC (-TransposeRectAroundCenter@@YA-AUtagRECT@@AEBU1@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x180105918 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x180105BDC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::CaptureAndPositionToExtendedDisplay(
        CDisplayDuplicateToExtendAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // rax
  CDWMDisplaySet *v7; // rcx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rbx
  const struct CDWMDisplay *v9; // r14
  UINT32 v10; // eax
  UINT32 v11; // edx
  UINT32 v12; // ecx
  struct tagRECT *v13; // rax
  __int64 v14; // rbx
  enum DXGI_MODE_ROTATION v15; // edx
  int RotationAngle; // esi
  struct D2D_RECT_U v17; // xmm0
  char *v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v22; // [rsp+38h] [rbp-48h] BYREF
  struct D2D_RECT_U v23; // [rsp+48h] [rbp-38h] BYREF
  struct D2D_RECT_U v24; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v25; // [rsp+68h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 56) )
  {
    v21 = 0LL;
    GetDesktopID(1LL, &v21, a3);
    v4 = *((_QWORD *)this + 55);
    v5 = 0;
    v6 = *((_QWORD *)this + 56);
    v7 = (CDWMDisplaySet *)*((_QWORD *)this + 40);
    v25 = *(struct tagRECT *)(v4 + 56);
    v23 = *(struct D2D_RECT_U *)(v6 + 56);
    MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(v7, (const struct CDWMDisplay *)v4);
    v9 = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
           *((CDWMDisplaySet **)this + 40),
           *((const struct CDWMDisplay **)this + 56));
    if ( v9 )
    {
      if ( MatchedPhysicalDisplayNoRef )
      {
        v10 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 13);
        v11 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 11);
        v12 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 12);
        v23.left = *((_DWORD *)MatchedPhysicalDisplayNoRef + 10);
        v23.top = v11;
        v23.right = v12;
        v23.bottom = v10;
        v24.left = v23.left;
        v24.top = v11;
        v24.right = v12;
        v24.bottom = v10;
        v13 = CDisplayAnimatedVisual::ClipIntersection(
                &v22,
                &v24,
                &v23,
                (const struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56),
                (enum DXGI_MODE_ROTATION)*((_DWORD *)MatchedPhysicalDisplayNoRef + 58));
        v14 = *((_QWORD *)this + 56);
        v25 = *v13;
        v15 = *(_DWORD *)(v14 + 232);
        v24 = *(struct D2D_RECT_U *)(v14 + 40);
        v23 = *(struct D2D_RECT_U *)((char *)v9 + 40);
        v23 = (struct D2D_RECT_U)*CDisplayAnimatedVisual::ClipIntersection(
                                    &v22,
                                    &v23,
                                    &v24,
                                    (const struct tagRECT *)(v14 + 56),
                                    v15);
        RotationAngle = CDWMDisplay::GetRotationAngle((CDWMDisplay *)v14);
        v5 = RotationAngle - CDWMDisplay::GetRotationAngle(v9);
        if ( (v5 + 360) % 180 == 90 )
        {
          v17 = (struct D2D_RECT_U)*TransposeRectAroundCenter(&v22, (const struct tagRECT *)&v23);
          *((_BYTE *)this + 536) = 1;
          v23 = v17;
        }
      }
    }
    v18 = (char *)this + 488;
    v19 = *((_QWORD *)this + 61);
    *((_QWORD *)this + 61) = 0LL;
    if ( v19 )
      CBaseObject::Release((CBaseObject *)(v19 + 8));
    CDisplayAnimatedVisual::CaptureAndAddVisual(
      this,
      v21,
      &v25,
      (const struct tagRECT *)&v23,
      (struct CAnimatedTransitionVisual **)this + 61);
    if ( v5 )
    {
      CVisual::SetRotation((CVisual *)(*(_QWORD *)v18 + 8LL), (double)v5);
      CVisual::SetCenter(
        (CVisual *)(*(_QWORD *)v18 + 8LL),
        (double)((signed int)(v23.left + v23.right) / 2),
        (double)((signed int)(v23.top + v23.bottom) / 2));
    }
  }
  return 0LL;
}
