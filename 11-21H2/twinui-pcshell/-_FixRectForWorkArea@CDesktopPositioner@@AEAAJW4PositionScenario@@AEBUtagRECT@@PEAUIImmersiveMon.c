/*
 * XREFs of ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1800F12CC
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800F0FC0 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1804FA740 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1804FB8D4 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804FC230 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1804FC7A8 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800F1458 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800F20B0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_FixRectForWorkArea(
        __int64 a1,
        int a2,
        LONG *a3,
        __int64 a4,
        struct tagRECT *lprc)
{
  LONG v9; // ecx
  LONG v10; // edx
  RECT v11; // xmm0
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, unsigned __int64 *, GUID *, GUID *, int *); // rbx
  int v15; // eax
  unsigned int v16; // ebx
  CDesktopPositioner *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  LONG right; // edx
  int v22; // ecx
  int v23; // ecx
  LONG bottom; // r8d
  int v25; // r11d
  int v26; // ebx
  int v27; // r8d
  int v28; // r8d
  int v29; // edx
  int v30[2]; // [rsp+40h] [rbp-61h] BYREF
  struct IApplicationViewTitlebarConfiguration *v31; // [rsp+48h] [rbp-59h] BYREF
  __int64 v32; // [rsp+50h] [rbp-51h]
  _DWORD v33[2]; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp-41h] BYREF
  RECT rcSrc1; // [rsp+70h] [rbp-31h] BYREF
  RECT rcSrc2; // [rsp+80h] [rbp-21h] BYREF
  struct tagRECT rcDst; // [rsp+90h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  SetRectEmpty(lprc);
  v9 = *a3;
  rcSrc1.left = *a3;
  v10 = a3[1];
  rcSrc1.top = v10;
  rcSrc1.right = a3[2];
  rcSrc1.bottom = a3[3];
  if ( a2 == 2 )
  {
    v34 = __PAIR64__(v10, v9);
    *(_QWORD *)v30 = 0LL;
    v13 = *(_QWORD *)(a1 + 240);
    v14 = *(__int64 (__fastcall **)(__int64, unsigned __int64 *, GUID *, GUID *, int *))(*(_QWORD *)v13 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v30);
    v15 = v14(v13, &v34, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v30);
    v16 = v15;
    if ( v15 >= 0 )
    {
      LODWORD(v32) = rcSrc1.right - rcSrc1.left;
      HIDWORD(v32) = rcSrc1.bottom - rcSrc1.top;
      v31 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
      v18 = CDesktopPositioner::_CreateTitlebarConfiguration(v17, 0LL, &v31);
      v16 = v18;
      if ( v18 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, struct IApplicationViewTitlebarConfiguration *, _DWORD *))(**(_QWORD **)(a1 + 264) + 48LL))(
                *(_QWORD *)(a1 + 264),
                v32,
                *(_QWORD *)v30,
                0LL,
                1,
                v31,
                v33);
        v16 = v18;
        if ( v18 >= 0 )
        {
          rcSrc1.right = v33[0] + rcSrc1.left;
          rcSrc1.bottom = v33[1] + rcSrc1.top;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v30);
          goto LABEL_2;
        }
        v19 = 1631LL;
      }
      else
      {
        v19 = 1627LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x654,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v15);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v30);
    return v16;
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
  v20 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)a4 + 88LL))(a4, &rcSrc2);
  v16 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66B,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v20);
    return v16;
  }
LABEL_4:
  rcDst = 0LL;
  UnionRect(&rcDst, &rcSrc1, &rcSrc2);
  if ( EqualRect(&rcDst, &rcSrc2) )
  {
LABEL_5:
    v11 = rcSrc1;
LABEL_6:
    result = 0LL;
    *lprc = v11;
    return result;
  }
  right = rcSrc1.right;
  if ( a2 == 6 )
  {
    v22 = rcSrc2.right - rcSrc2.left;
    if ( rcSrc1.right - rcSrc1.left > rcSrc2.right - rcSrc2.left )
    {
      right = v22 + rcSrc1.left;
      rcSrc1.right = v22 + rcSrc1.left;
    }
    v23 = rcSrc2.bottom - rcSrc2.top;
    bottom = rcSrc1.bottom;
    if ( rcSrc1.bottom - rcSrc1.top > rcSrc2.bottom - rcSrc2.top )
    {
      bottom = v23 + rcSrc1.top;
      rcSrc1.bottom = v23 + rcSrc1.top;
    }
  }
  else
  {
    bottom = rcSrc1.bottom;
  }
  if ( right - rcSrc1.left <= rcSrc2.right - rcSrc2.left && bottom - rcSrc1.top <= rcSrc2.bottom - rcSrc2.top )
  {
    v25 = rcSrc2.right - right;
    v26 = rcSrc2.bottom - bottom;
    rc = rcSrc1;
    v27 = 0;
    if ( rcSrc2.top - rcSrc1.top >= 0 )
      v27 = rcSrc2.top - rcSrc1.top;
    if ( v26 >= 0 )
      v26 = 0;
    v28 = v26 + v27;
    v29 = 0;
    if ( rcSrc2.left - rcSrc1.left >= 0 )
      v29 = rcSrc2.left - rcSrc1.left;
    if ( v25 >= 0 )
      v25 = 0;
    OffsetRect(&rc, v25 + v29, v28);
    v11 = rc;
    goto LABEL_6;
  }
  return 2147942487LL;
}
