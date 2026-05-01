/*
 * XREFs of ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1804FC7A8
 * Callers:
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1804FCE30 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1800F12CC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800F1458 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800F20B0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1804FCCD8 (-_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_.c)
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
  struct IApplicationViewTitlebarConfiguration *v20; // [rsp+40h] [rbp-49h] BYREF
  __int64 v21; // [rsp+48h] [rbp-41h] BYREF
  POINT anchorPoint; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v23[8]; // [rsp+58h] [rbp-31h] BYREF
  SIZE windowSize; // [rsp+60h] [rbp-29h] BYREF
  RECT popupWindowPosition; // [rsp+68h] [rbp-21h] BYREF
  RECT excludeRect; // [rsp+78h] [rbp-11h] BYREF
  struct tagRECT v27; // [rsp+88h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  excludeRect = 0LL;
  v8 = MonitorFromRect(lprc, 1u);
  EdgeUIPositionForMonitor = CDesktopPositioner::_GetEdgeUIPositionForMonitor(
                               this,
                               v8,
                               &excludeRect,
                               (enum EDGEUI_TRAYSTUCKPLACE *)v23);
  LastError = EdgeUIPositionForMonitor;
  if ( EdgeUIPositionForMonitor >= 0 )
  {
    anchorPoint.x = (lprc->left + lprc->right) / 2;
    anchorPoint.y = (lprc->top + lprc->bottom) / 2;
    v21 = 0LL;
    v11 = *((_QWORD *)this + 30);
    v12 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v11 + 48LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v21);
    v14 = v12(v11, v8, AddressOf);
    LastError = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x557,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14);
LABEL_19:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
      return LastError;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    WorkAreaFromRect = CDesktopPositioner::_CreateTitlebarConfiguration(v15, 0LL, &v20);
    LastError = WorkAreaFromRect;
    if ( WorkAreaFromRect >= 0 )
    {
      WorkAreaFromRect = (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE, __int64, __int64, int, struct IApplicationViewTitlebarConfiguration *, SIZE *))(**((_QWORD **)this + 33) + 48LL))(
                           *((_QWORD *)this + 33),
                           a3,
                           v21,
                           1LL,
                           1,
                           v20,
                           &windowSize);
      LastError = WorkAreaFromRect;
      if ( WorkAreaFromRect >= 0 )
      {
        if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, 0x10054u, &excludeRect, &popupWindowPosition) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x564,
                        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                        v18);
LABEL_18:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
          goto LABEL_19;
        }
        if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea((__int64)this, 1, &popupWindowPosition.left, 0LL, a4) == -2147024809 )
        {
          WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, &popupWindowPosition, &v27);
          LastError = WorkAreaFromRect;
          if ( WorkAreaFromRect < 0 )
          {
            v17 = 1389LL;
            goto LABEL_16;
          }
          popupWindowPosition.top = v27.top;
          popupWindowPosition.bottom = v27.bottom;
          WorkAreaFromRect = CDesktopPositioner::_FixRectForWorkArea(
                               (__int64)this,
                               1,
                               &popupWindowPosition.left,
                               0LL,
                               a4);
          LastError = WorkAreaFromRect;
          if ( WorkAreaFromRect < 0 )
          {
            v17 = 1394LL;
            goto LABEL_16;
          }
        }
        LastError = 0;
        goto LABEL_18;
      }
      v17 = 1375LL;
    }
    else
    {
      v17 = 1371LL;
    }
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x550,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)EdgeUIPositionForMonitor);
  return LastError;
}
