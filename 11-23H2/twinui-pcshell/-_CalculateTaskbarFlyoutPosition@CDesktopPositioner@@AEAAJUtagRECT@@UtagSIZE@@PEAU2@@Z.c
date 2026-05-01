/*
 * XREFs of ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1805B4F08
 * Callers:
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1805B5590 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800262B8 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180076E48 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180076F54 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1805B5438 (-_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_CalculateTaskbarFlyoutPosition(
        CDesktopPositioner *this,
        LPCRECT lprc,
        struct tagSIZE a3,
        struct tagRECT *a4)
{
  HMONITOR v8; // r12
  int EdgeUIPositionForMonitor; // eax
  unsigned int LastError; // edi
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, HMONITOR, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v14; // eax
  CDesktopPositioner *v15; // rcx
  int WorkAreaFromRect; // eax
  __int64 v17; // rdx
  const char *v18; // r9
  RECT *popupWindowPosition; // [rsp+20h] [rbp-69h]
  RECT *popupWindowPositiona; // [rsp+20h] [rbp-69h]
  struct IApplicationViewTitlebarConfiguration *v22; // [rsp+40h] [rbp-49h] BYREF
  __int64 v23; // [rsp+48h] [rbp-41h] BYREF
  POINT anchorPoint; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-31h] BYREF
  SIZE windowSize; // [rsp+60h] [rbp-29h] BYREF
  RECT v27; // [rsp+68h] [rbp-21h] BYREF
  RECT excludeRect; // [rsp+78h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+88h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  excludeRect = 0LL;
  v8 = MonitorFromRect(lprc, 1u);
  EdgeUIPositionForMonitor = CDesktopPositioner::_GetEdgeUIPositionForMonitor(
                               this,
                               v8,
                               &excludeRect,
                               (enum EDGEUI_TRAYSTUCKPLACE *)v25);
  LastError = EdgeUIPositionForMonitor;
  if ( EdgeUIPositionForMonitor >= 0 )
  {
    anchorPoint.x = (lprc->left + lprc->right) / 2;
    anchorPoint.y = (lprc->top + lprc->bottom) / 2;
    v23 = 0LL;
    v11 = *((_QWORD *)this + 34);
    v12 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v11 + 48LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v23);
    v14 = v12(v11, v8, AddressOf);
    LastError = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x690,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14);
LABEL_19:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      return LastError;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    WorkAreaFromRect = CDesktopPositioner::_CreateTitlebarConfiguration(v15, 0LL, &v22);
    LastError = WorkAreaFromRect;
    if ( WorkAreaFromRect >= 0 )
    {
      WorkAreaFromRect = (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE, __int64, __int64, int, struct IApplicationViewTitlebarConfiguration *, SIZE *))(**((_QWORD **)this + 37) + 48LL))(
                           *((_QWORD *)this + 37),
                           a3,
                           v23,
                           1LL,
                           1,
                           v22,
                           &windowSize);
      LastError = WorkAreaFromRect;
      if ( WorkAreaFromRect >= 0 )
      {
        if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, 0x10054u, &excludeRect, &v27) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x69D,
                        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                        v18);
LABEL_18:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
          goto LABEL_19;
        }
        if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(
                             (__int64)this,
                             1,
                             &v27.left,
                             0LL,
                             (__int64)popupWindowPosition,
                             a4) == -2147024809 )
        {
          WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, &v27, &rc);
          LastError = WorkAreaFromRect;
          if ( WorkAreaFromRect < 0 )
          {
            v17 = 1702LL;
            goto LABEL_16;
          }
          v27.top = rc.top;
          v27.bottom = rc.bottom;
          WorkAreaFromRect = CDesktopPositioner::_FixRectForWorkArea(
                               (__int64)this,
                               1,
                               &v27.left,
                               0LL,
                               (__int64)popupWindowPositiona,
                               a4);
          LastError = WorkAreaFromRect;
          if ( WorkAreaFromRect < 0 )
          {
            v17 = 1707LL;
            goto LABEL_16;
          }
        }
        LastError = 0;
        goto LABEL_18;
      }
      v17 = 1688LL;
    }
    else
    {
      v17 = 1684LL;
    }
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x689,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)EdgeUIPositionForMonitor);
  return LastError;
}
