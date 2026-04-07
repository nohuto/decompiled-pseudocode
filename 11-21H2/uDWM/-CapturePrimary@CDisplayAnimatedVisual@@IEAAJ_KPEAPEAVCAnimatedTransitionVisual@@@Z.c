/*
 * XREFs of ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4A60
 * Callers:
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B4C4C (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003DE08 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18003DE64 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4618 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800B4D08 (-ClipIntersection@CDisplayAnimatedVisual@@KA-AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTAT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayAnimatedVisual::CapturePrimary(
        CDWMDisplaySet **this,
        __int64 a2,
        struct CAnimatedTransitionVisual **a3)
{
  CDWMDisplay *v6; // rbx
  int PrimaryDisplay; // eax
  unsigned int v8; // esi
  CDWMDisplay *v9; // rdi
  __int64 v10; // rdx
  int v11; // eax
  enum DXGI_MODE_ROTATION v12; // ecx
  enum DXGI_MODE_ROTATION v13; // r8d
  CDWMDisplay *v15; // [rsp+30h] [rbp-39h] BYREF
  CDWMDisplay *v16; // [rsp+38h] [rbp-31h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-29h] BYREF
  D2D_RECT_U v18; // [rsp+50h] [rbp-19h] BYREF
  struct D2D_RECT_U v19; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v20; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a3 = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(this[40], &v16);
  v8 = PrimaryDisplay;
  v9 = v16;
  if ( PrimaryDisplay < 0 )
  {
    v10 = 896LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)PrimaryDisplay);
    goto LABEL_9;
  }
  v15 = 0LL;
  v11 = CDWMDisplaySet::GetPrimaryDisplay(*((CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 17), &v15);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x383,
      (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v11);
    v6 = v15;
    goto LABEL_9;
  }
  v12 = *((_DWORD *)v9 + 54);
  v19 = *(struct D2D_RECT_U *)((char *)v9 + 40);
  v6 = v15;
  v18 = *(D2D_RECT_U *)((char *)v15 + 40);
  v20 = *CDisplayAnimatedVisual::ClipIntersection(&v17, &v18, &v19, (const struct tagRECT *)((char *)v9 + 56), v12);
  v13 = *((_DWORD *)v6 + 54);
  v18 = *(D2D_RECT_U *)((char *)v6 + 40);
  v19 = *(struct D2D_RECT_U *)((char *)v9 + 40);
  v18 = (D2D_RECT_U)*CDisplayAnimatedVisual::ClipIntersection(
                       &v17,
                       &v19,
                       &v18,
                       (const struct tagRECT *)((char *)v6 + 56),
                       v13);
  PrimaryDisplay = CDisplayAnimatedVisual::CaptureAndAddVisual(
                     (CDisplayAnimatedVisual *)this,
                     a2,
                     &v20,
                     (const struct tagRECT *)&v18,
                     a3);
  v8 = PrimaryDisplay;
  if ( PrimaryDisplay < 0 )
  {
    v10 = 917LL;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_9:
  if ( v9 )
    CDWMDisplay::Release(v9);
  if ( v6 )
    CDWMDisplay::Release(v6);
  return v8;
}
