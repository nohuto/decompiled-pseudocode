/*
 * XREFs of ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180076E48
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180075EAC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     _lambda_8b454e1137a63a08af271cf145abd5bf_::operator() @ 0x1805B274C (_lambda_8b454e1137a63a08af271cf145abd5bf_--operator().c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1805B3CB4 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1805B4610 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1805B4F08 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800262B8 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180076F54 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_FixRectForWorkArea(
        __int64 a1,
        int a2,
        LONG *a3,
        __int64 a4,
        __int64 a5,
        struct tagRECT *lprc)
{
  LONG v10; // ecx
  LONG v11; // edx
  RECT v12; // xmm0
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, unsigned __int64 *, GUID *, GUID *); // rbx
  int v16; // eax
  unsigned int v17; // ebx
  CDesktopPositioner *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  LONG right; // edx
  int v23; // ecx
  int v24; // ecx
  LONG bottom; // r8d
  int v26; // r11d
  int v27; // ebx
  int v28; // r8d
  int v29; // r8d
  int v30; // edx
  int *v31; // [rsp+20h] [rbp-89h]
  int v32[2]; // [rsp+40h] [rbp-69h] BYREF
  struct IApplicationViewTitlebarConfiguration *v33; // [rsp+48h] [rbp-61h] BYREF
  __int64 v34; // [rsp+50h] [rbp-59h]
  int v35; // [rsp+58h] [rbp-51h]
  int v36; // [rsp+5Ch] [rbp-4Dh]
  unsigned __int64 v37; // [rsp+60h] [rbp-49h] BYREF
  RECT rcSrc1; // [rsp+70h] [rbp-39h] BYREF
  RECT rcSrc2; // [rsp+80h] [rbp-29h] BYREF
  struct tagRECT rcDst; // [rsp+90h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  SetRectEmpty(lprc);
  v10 = *a3;
  rcSrc1.left = *a3;
  v11 = a3[1];
  rcSrc1.top = v11;
  rcSrc1.right = a3[2];
  rcSrc1.bottom = a3[3];
  if ( a2 == 2 )
  {
    v37 = __PAIR64__(v11, v10);
    *(_QWORD *)v32 = 0LL;
    v14 = *(_QWORD *)(a1 + 272);
    v15 = *(__int64 (__fastcall **)(__int64, unsigned __int64 *, GUID *, GUID *))(*(_QWORD *)v14 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v32);
    v31 = v32;
    v16 = v15(v14, &v37, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
    v17 = v16;
    if ( v16 >= 0 )
    {
      LODWORD(v34) = rcSrc1.right - rcSrc1.left;
      HIDWORD(v34) = rcSrc1.bottom - rcSrc1.top;
      v33 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
      v19 = CDesktopPositioner::_CreateTitlebarConfiguration(v18, 0LL, &v33);
      v17 = v19;
      if ( v19 >= 0 )
      {
        LODWORD(v31) = 1;
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 296) + 48LL))(
                *(_QWORD *)(a1 + 296),
                v34,
                *(_QWORD *)v32,
                0LL);
        v17 = v19;
        if ( v19 >= 0 )
        {
          rcSrc1.right = v35 + rcSrc1.left;
          rcSrc1.bottom = v36 + rcSrc1.top;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v32);
          goto LABEL_2;
        }
        v20 = 1981LL;
      }
      else
      {
        v20 = 1977LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v19,
        (int)v31);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B2,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v16,
        (int)v32);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v32);
    return v17;
  }
LABEL_2:
  rcSrc2 = 0LL;
  if ( !a4 )
  {
    if ( (int)CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, &rcSrc1, &rcSrc2) < 0
      && (int)CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, 0LL, &rcSrc2) < 0 )
    {
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)a4 + 88LL))(a4, &rcSrc2);
  v17 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C9,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v21,
      (int)v31);
    return v17;
  }
LABEL_4:
  rcDst = 0LL;
  UnionRect(&rcDst, &rcSrc1, &rcSrc2);
  if ( EqualRect(&rcDst, &rcSrc2) )
  {
LABEL_5:
    v12 = rcSrc1;
LABEL_6:
    result = 0LL;
    *lprc = v12;
    return result;
  }
  right = rcSrc1.right;
  if ( a2 == 6 )
  {
    v23 = rcSrc2.right - rcSrc2.left;
    if ( rcSrc1.right - rcSrc1.left > rcSrc2.right - rcSrc2.left )
    {
      right = v23 + rcSrc1.left;
      rcSrc1.right = v23 + rcSrc1.left;
    }
    v24 = rcSrc2.bottom - rcSrc2.top;
    bottom = rcSrc1.bottom;
    if ( rcSrc1.bottom - rcSrc1.top > rcSrc2.bottom - rcSrc2.top )
    {
      bottom = v24 + rcSrc1.top;
      rcSrc1.bottom = v24 + rcSrc1.top;
    }
  }
  else
  {
    bottom = rcSrc1.bottom;
  }
  if ( right - rcSrc1.left <= rcSrc2.right - rcSrc2.left && bottom - rcSrc1.top <= rcSrc2.bottom - rcSrc2.top )
  {
    v26 = rcSrc2.right - right;
    v27 = rcSrc2.bottom - bottom;
    rc = rcSrc1;
    v28 = 0;
    if ( rcSrc2.top - rcSrc1.top >= 0 )
      v28 = rcSrc2.top - rcSrc1.top;
    if ( v27 >= 0 )
      v27 = 0;
    v29 = v27 + v28;
    v30 = 0;
    if ( rcSrc2.left - rcSrc1.left >= 0 )
      v30 = rcSrc2.left - rcSrc1.left;
    if ( v26 >= 0 )
      v26 = 0;
    OffsetRect(&rc, v26 + v30, v29);
    v12 = rc;
    goto LABEL_6;
  }
  return 2147942487LL;
}
