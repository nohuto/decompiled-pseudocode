/*
 * XREFs of ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1804FB0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1800563F4 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18007A3FC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800F0FC0 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800F1458 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F1520 (-_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800F2578 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1800F2728 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F19C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::DragCompleted(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagPOINT a3)
{
  CDesktopPositioner *v6; // rcx
  int FullPositionSnapshot; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  HMONITOR v10; // rax
  int ScaleFactorForRect; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  __int64 *AddressOf; // rax
  int MonitorFromPoint; // eax
  __int64 v17; // rdx
  int v18; // esi
  int v19; // ebx
  int v20; // eax
  int fixed; // eax
  ApplicationViewOperation *v22; // rbx
  __int64 v23; // r9
  __int64 v24; // rdx
  struct tagPOINT v25; // rdi
  int v26; // eax
  int nNumerator; // [rsp+20h] [rbp-69h] BYREF
  struct tagPOINT v29; // [rsp+28h] [rbp-61h] BYREF
  struct tagPOINT v30; // [rsp+30h] [rbp-59h] BYREF
  void *v31; // [rsp+38h] [rbp-51h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v32; // [rsp+40h] [rbp-49h] BYREF
  __int64 v33; // [rsp+48h] [rbp-41h] BYREF
  ApplicationViewOperation *v34[2]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v36; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v37; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v38[4]; // [rsp+90h] [rbp+7h] BYREF
  int v39; // [rsp+94h] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v29 = a3;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
  FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v6, a2, &v32);
  v8 = FullPositionSnapshot;
  if ( FullPositionSnapshot >= 0 )
  {
    FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v32 + 56LL))(
                             v32,
                             &v36);
    v8 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v9 = 832LL;
      goto LABEL_7;
    }
    v10 = ::MonitorFromPoint(a3, 1u);
    FullPositionSnapshot = GetScaleFactorForMonitor(v10, &nNumerator);
    v8 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v9 = 838LL;
      goto LABEL_7;
    }
    ScaleFactorForRect = GetScaleFactorForRect(&v36);
    v12 = ScaleFactorForRect;
    rc = v36;
    if ( ScaleFactorForRect != nNumerator )
    {
      v13 = MulDiv(v36.right - v36.left, nNumerator, ScaleFactorForRect);
      v14 = MulDiv(v36.bottom - v36.top, nNumerator, v12);
      rc.right = v13 + rc.left;
      rc.bottom = rc.top + v14;
    }
    OffsetRect(&rc, a3.x - v36.left, v29.y - v36.top);
    v33 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v33);
    MonitorFromPoint = CDesktopPositioner::_GetMonitorFromPoint(
                         (CDesktopPositioner *)((char *)this - 112),
                         &v29,
                         (struct IImmersiveMonitor **)AddressOf);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 866LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)MonitorFromPoint);
LABEL_38:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
      goto LABEL_39;
    }
    MonitorFromPoint = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 19) + 64LL))(
                         *((_QWORD *)this + 19),
                         v33,
                         v38);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 869LL;
      goto LABEL_16;
    }
    v18 = v39 / -2;
    v19 = nNumerator * *((_DWORD *)this + 64) / -100;
    MonitorFromPoint = CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)((char *)this - 112), &rc, &v37);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 882LL;
      goto LABEL_16;
    }
    if ( v18 + rc.top < v37.top )
      v18 = v37.top - rc.top;
    if ( v19 + rc.left < v37.left )
      v19 = v37.left - rc.left;
    OffsetRect(&rc, v19, v18);
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
    v20 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v31,
            &rc);
    v8 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x385,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v20);
LABEL_37:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
      goto LABEL_38;
    }
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
    fixed = CDesktopPositioner::_FixPosition(
              (CDesktopPositioner *)((char *)this - 112),
              4u,
              (__int64)v31,
              (__int64 *)&v30);
    v8 = fixed;
    if ( fixed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x389,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
LABEL_36:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
      goto LABEL_37;
    }
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v34);
    v22 = v34[0];
    if ( v34[0] )
    {
      v25 = v30;
      if ( *((_QWORD *)v34[0] + 9) != v30 )
      {
        v29 = v30;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
        v29 = (struct tagPOINT)*((_QWORD *)v22 + 9);
        *((struct tagPOINT *)v22 + 9) = v25;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
      }
      *((_WORD *)v22 + 56) = 257;
      v26 = (*(__int64 (__fastcall **)(struct IApplicationView *, ApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
              a2,
              v22);
      v8 = v26;
      if ( v26 >= 0 )
      {
        v26 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
        v8 = v26;
        if ( v26 >= 0 )
        {
LABEL_35:
          Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)v34);
          goto LABEL_36;
        }
        v24 = 918LL;
      }
      else
      {
        v24 = 915LL;
      }
      v23 = (unsigned int)v26;
    }
    else
    {
      v8 = -2147024882;
      v23 = 2147942414LL;
      v24 = 909LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v23);
    goto LABEL_35;
  }
  v9 = 829LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)FullPositionSnapshot);
LABEL_39:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
  return v8;
}
