/*
 * XREFs of ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18068B7B0
 * Callers:
 *     ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x18068BB10 (-OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x1802EA000 (--_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805E1320 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18066583C (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     ?SuggestedWindowPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067CE98 (-SuggestedWindowPositions@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHit.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067D1AC (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180685830 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 *     ??$?R$$TUPoint@Foundation@Windows@winrt@@@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$TAEBUPoint@Foundation@Windows@1@@Z @ 0x18068A4E4 (--$-R$$TUPoint@Foundation@Windows@winrt@@@-$event@U-$TypedEventHandler@UIInspectable@Foundation@.c)
 *     ??1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x18068AD64 (--1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ.c)
 *     ?AppWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068AF4C (-AppWindow@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapCom.c)
 *     ?DragCompletionActionToArragementAction@WindowDragInputProvider@@CA?AW4WINDOW_ARRANGEMENT_ACTION@@W4WindowDragCompletionAction@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18068B014 (-DragCompletionActionToArragementAction@WindowDragInputProvider@@CA-AW4WINDOW_ARRANGEMENT_ACTION.c)
 *     ?GetSafetyRectFromMonitor@WindowDragInputProvider@@AEBA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x18068B0C4 (-GetSafetyRectFromMonitor@WindowDragInputProvider@@AEBA-AUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?NotificationBoundary@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068B5E0 (-NotificationBoundary@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTest.c)
 *     ?ShouldShowThumbnail@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068BF40 (-ShouldShowThumbnail@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestR.c)
 *     ?StartActivity@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18068C058 (-StartActivity@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation.c)
 *     ?Stop@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18068C3B0 (-Stop@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@.c)
 *     ?TryInsertAfterWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18068CBC0 (-TryInsertAfterWindow@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWin.c)
 *     ?Window@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068CC04 (-Window@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapCompon.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowDragInputProvider::OnGetArrangementRects(RTL_SRWLOCK *this, struct _WINDOW_ARRANGEMENT_INFO *a2)
{
  float v4; // xmm1_4
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, void *, struct tagRECT *); // rbx
  signed int v7; // eax
  __int64 *v8; // r14
  float *v9; // rax
  LONG v10; // r8d
  float v11; // xmm1_4
  LONG v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  int v17; // eax
  float *v18; // rax
  LONG v19; // r8d
  float v20; // xmm1_4
  LONG v21; // ecx
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r15d
  winrt::Windows::Internal::Shell::RegistrationData *v26; // rdi
  __int64 v27; // r14
  int v28; // eax
  WindowDragInputProvider *v29; // rcx
  float v30[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, void *, struct tagRECT *); // [rsp+28h] [rbp-D8h] BYREF
  struct tagRECT pvParam; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v33[40]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (float)*((int *)a2 + 1);
  v30[0] = (float)*(int *)a2;
  v30[1] = v4;
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)"OnGetArrangementRects");
  v33[0] = (volatile signed __int32 *)&WindowDragInputProviderTelemetry::OnGetArrangementRects::`vftable';
  WindowDragInputProviderTelemetry::OnGetArrangementRects::StartActivity(
    (WindowDragInputProviderTelemetry::OnGetArrangementRects *)v33,
    (const struct winrt::Windows::Foundation::Point *)v30);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::operator()<std::nullptr_t,winrt::Windows::Foundation::Point>(
    this + 8,
    v5,
    (__int64)v30);
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::TryGetHitTestResultForPoint(
    (const struct winrt::Windows::Foundation::Point *)&v31,
    v30);
  v6 = v31;
  if ( v31 )
  {
    *(_QWORD *)&pvParam.left = 0LL;
    v7 = (**v31)(v31, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>, &pvParam);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    v8 = (__int64 *)&this[7];
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&this[7],
      (winrt::Windows::Foundation::IUnknown *)&pvParam);
    if ( *(_QWORD *)&pvParam.left )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&pvParam);
    *((_DWORD *)a2 + 9) = 1;
    v9 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::NotificationBoundary(
                    &this[7].Ptr,
                    &pvParam);
    v10 = (int)(float)(v9[1] + v9[3]);
    v11 = *v9 + v9[2];
    v12 = (int)v9[1];
    pvParam.left = (int)*v9;
    pvParam.top = v12;
    pvParam.right = (int)v11;
    pvParam.bottom = v10;
    *(struct tagRECT *)((char *)a2 + 40) = pvParam;
    v13 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction((__int64 *)&this[7]);
    v17 = WindowDragInputProvider::DragCompletionActionToArragementAction(v13, v14, v15, v16);
    *((_DWORD *)a2 + 4) = v17;
    if ( v17 == 1 )
    {
      v18 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                       &this[7].Ptr,
                       &pvParam);
      v19 = (int)(float)(v18[1] + v18[3]);
      v20 = *v18 + v18[2];
      v21 = (int)v18[1];
      pvParam.left = (int)*v18;
      pvParam.top = v21;
      pvParam.right = (int)v20;
      pvParam.bottom = v19;
      *(struct tagRECT *)((char *)a2 + 20) = pvParam;
    }
    if ( (unsigned __int8)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::ShouldShowThumbnail(&this[7]) )
    {
      pvParam.left = 0;
      if ( !SystemParametersInfoW(0x26u, 0, &pvParam, 0) || !pvParam.left )
        goto LABEL_13;
      v22 = (__int64 *)&this[5];
      v23 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow(v22);
      winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::TryInsertAfterWindow(
        v22,
        v23);
      v24 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::Window(v22);
      *((_DWORD *)a2 + 14) = 250;
    }
    else
    {
      winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::TryInsertAfterWindow(
        &this[5],
        -1LL);
      v24 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)&this[5]);
      *((_DWORD *)a2 + 14) = 0;
    }
    *((_QWORD *)a2 + 8) = v24;
LABEL_13:
    v25 = *(_DWORD *)(winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2<winrt::WindowsUdk::UI::Shell::WindowDragHitTestResult>::SuggestedWindowPositions(
                        v8,
                        (__int64)&pvParam)
                    + 8);
    v26 = *(winrt::Windows::Internal::Shell::RegistrationData **)&pvParam.left;
    if ( *(_QWORD *)&pvParam.left )
    {
      v27 = *(_QWORD *)&pvParam.left + 8LL * (unsigned int)pvParam.right;
      if ( *(_QWORD *)&pvParam.left != v27 )
      {
        do
        {
          winrt::Windows::Internal::Shell::RegistrationData::`scalar deleting destructor'(v26);
          v26 = (winrt::Windows::Internal::Shell::RegistrationData *)((char *)v26 + 8);
        }
        while ( v26 != (winrt::Windows::Internal::Shell::RegistrationData *)v27 );
        v26 = *(winrt::Windows::Internal::Shell::RegistrationData **)&pvParam.left;
      }
      CoTaskMemFree_0(v26);
    }
    v28 = 10;
    if ( !v25 )
      v28 = 5;
    *((_DWORD *)a2 + 18) = v28;
    goto LABEL_23;
  }
  *((_DWORD *)a2 + 9) = 1;
  *((_DWORD *)a2 + 4) = 0;
  *((_DWORD *)a2 + 14) = 0;
  *((_QWORD *)a2 + 8) = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)&this[5]);
  *(struct tagRECT *)((char *)a2 + 40) = *WindowDragInputProvider::GetSafetyRectFromMonitor(
                                            v29,
                                            &pvParam,
                                            (const struct tagPOINT *)a2);
  *(_QWORD *)&pvParam.left = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)&this[7],
    (winrt::Windows::Foundation::IUnknown *)&pvParam);
  if ( *(_QWORD *)&pvParam.left )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&pvParam);
LABEL_23:
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v31);
  WindowDragInputProviderTelemetry::OnGetArrangementRects::Stop(
    (WindowDragInputProviderTelemetry::OnGetArrangementRects *)v33,
    a2);
  WindowDragInputProviderTelemetry::OnGetArrangementRects::~OnGetArrangementRects(v33);
}
