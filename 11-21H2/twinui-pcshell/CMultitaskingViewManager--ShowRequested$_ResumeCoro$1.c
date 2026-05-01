/*
 * XREFs of CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1801B2A20
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_InitCoro$2 @ 0x1801B2930 (CMultitaskingViewManager--ShowRequested$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAXXZ @ 0x180052A50 (-EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAXXZ.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180052CF0 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180052F20 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 *     ?copy_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z @ 0x18017D37C (-copy_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x1801B1DE8 (_lambda_2b601edba18b4fdf43345f97c13ddcab_--operator().c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_ @ 0x18034C6DC (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher_--_14_--_parameters_--__parame.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18034E02C (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@XZ @ 0x18034E5B8 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewReque.c)
 *     ?InputDeviceKind@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AW40Shell@UI@WindowsUdk@3@XZ @ 0x18034E888 (-InputDeviceKind@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUShowShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18034F528 (-Options@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequested.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x18034F788 (-Result@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedE.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ?InvokerWindowId@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA_KXZ @ 0x1803A1EA0 (-InvokerWindowId@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?InvocationPoint@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUPoint@Foundation@Windows@3@XZ @ 0x18044AEE4 (-InvocationPoint@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x18049AA90 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     ?release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x18049B668 (-release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
void __fastcall CMultitaskingViewManager::ShowRequested__ResumeCoro_1(char *a1)
{
  char *v2; // r15
  volatile int *v3; // rbx
  CMultitaskingViewManager **v4; // r15
  CMultitaskingViewManager *v5; // rcx
  int IsMultitaskingViewVisible; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  CMultitaskingViewManager *v9; // rcx
  const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *v10; // rdx
  winrt::Windows::Foundation::IUnknown *v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  HWND v14; // r13
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 (__fastcall ****v17)(_QWORD, char *, GUID *, GUID *); // rcx
  __int64 (__fastcall ***v18)(_QWORD, char *, GUID *, GUID *); // rcx
  __int64 (__fastcall **v19)(_QWORD, char *, GUID *, GUID *); // rax
  __int64 (__fastcall *v20)(_QWORD, char *, GUID *, GUID *); // rax
  int v21; // eax
  __int64 (__fastcall *****v22)(_QWORD, _QWORD, GUID *, GUID *); // r13
  __int64 (__fastcall ****v23)(_QWORD, _QWORD, GUID *, GUID *); // rax
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, GUID *, GUID *); // rcx
  __int64 (__fastcall **v25)(_QWORD, _QWORD, GUID *, GUID *); // rax
  __int64 (__fastcall *v26)(_QWORD, _QWORD, GUID *, GUID *); // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 *v30; // rbx
  __int64 v31; // rcx
  int MultitaskingView; // eax
  __int64 (__fastcall **v33)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v34)(_QWORD, __int64, _QWORD, _QWORD); // r11
  __int64 *v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 (__fastcall **v40)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v41)(_QWORD, __int64, _QWORD, _QWORD); // r11
  __int64 *v42; // rax
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rcx
  __int16 v46; // ax
  int v47; // [rsp+20h] [rbp-A8h]
  __int64 (__fastcall ***v48)(_QWORD, __int64, _QWORD, _QWORD); // [rsp+38h] [rbp-90h]
  __int64 (__fastcall ***v49)(_QWORD, __int64, _QWORD, _QWORD); // [rsp+40h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  float v52; // [rsp+E8h] [rbp+20h]
  float v53; // [rsp+ECh] [rbp+24h]

  try
  {
    v2 = a1;
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_31;
      case 2:
        *((_QWORD *)a1 + 88) = a1 + 9;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
          a1 + 1593,
          a1 + 16);
        *((_QWORD *)a1 + 3) = 0LL;
        *((_QWORD *)a1 + 90) = a1 + 1;
        v3 = *(volatile int **)(a1 + 1585);
        winrt::com_ptr<CMultitaskingViewManager>::copy_ref((volatile signed __int32 **)a1 + 3, v3);
        *((_QWORD *)a1 + 4) = v3 + 114;
        if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 32) )
          goto LABEL_6;
        *((_WORD *)a1 + 4) = 4;
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CMultitaskingViewManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type>(
          a1 + 32,
          a1);
        return;
      case 4:
LABEL_6:
        winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(a1 + 32);
        *((_DWORD *)a1 + 10) = 0;
        v4 = (CMultitaskingViewManager **)(*((_QWORD *)a1 + 90) + 1584LL);
        *((_QWORD *)a1 + 92) = v4;
        v5 = *v4;
        *((_QWORD *)a1 + 94) = *v4;
        *((_QWORD *)a1 + 22) = v5;
        IsMultitaskingViewVisible = CMultitaskingViewManager::IsMultitaskingViewVisible(v5, 2LL);
        *((_DWORD *)a1 + 40) = IsMultitaskingViewVisible;
        *((_DWORD *)a1 + 72) = IsMultitaskingViewVisible;
        *((_QWORD *)a1 + 38) = retaddr;
        if ( IsMultitaskingViewVisible < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3EF,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)IsMultitaskingViewVisible,
            v47);
        if ( *((_DWORD *)a1 + 10) )
        {
          v2 = a1;
        }
        else
        {
          *((_QWORD *)a1 + 96) = v4;
          v9 = *v4;
          *((_QWORD *)a1 + 98) = *v4;
          CMultitaskingViewManager::EnsureXamlCoreForThreadIfNeeded(v9, v7, v8);
          a1[44] = 0;
          *((_QWORD *)a1 + 7) = a1 + 48;
          *((_QWORD *)a1 + 100) = v4;
          v10 = *v4;
          *((_QWORD *)a1 + 102) = *v4;
          v10 = (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)((char *)v10 + 440);
          *((_QWORD *)a1 + 104) = v10;
          v11 = winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
                  (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a1 + 48),
                  v10);
          *((_QWORD *)a1 + 64) = v11;
          lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()((__int64)(a1 + 44), (__int64)(a1 + 64), v11);
          *((_QWORD *)a1 + 9) = 0LL;
          v12 = *((_QWORD *)a1 + 88) + 1584LL;
          *((_QWORD *)a1 + 152) = v12;
          *((_QWORD *)a1 + 24) = v12;
          v13 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                  v12,
                  a1 + 88);
          *((_QWORD *)a1 + 66) = v13;
          v14 = (HWND)winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvokerWindowId(v13);
          *((_QWORD *)a1 + 68) = v14;
          *((_QWORD *)a1 + 10) = v14;
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 88));
          if ( v14 )
          {
            *((_QWORD *)a1 + 154) = v12;
            *((_QWORD *)a1 + 26) = v12;
            v15 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                    v12,
                    a1 + 96);
            *((_QWORD *)a1 + 70) = v15;
            winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvocationPoint(
              v15,
              a1 + 104);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 96));
            v52 = *((float *)a1 + 26);
            *((_DWORD *)a1 + 212) = (int)v52;
            *((_DWORD *)a1 + 28) = (int)v52;
            v53 = *((float *)a1 + 27);
            *((_DWORD *)a1 + 216) = (int)v53;
            *((_DWORD *)a1 + 29) = (int)v53;
            MapWindowPoints(v14, 0LL, (LPPOINT)a1 + 14, 1u);
            v16 = *((_QWORD *)a1 + 90);
            *((_QWORD *)a1 + 110) = v16 + 1584;
            v17 = *(__int64 (__fastcall *****)(_QWORD, char *, GUID *, GUID *))(v16 + 1584);
            *((_QWORD *)a1 + 112) = v17;
            v17 += 29;
            *((_QWORD *)a1 + 114) = v17;
            v18 = *v17;
            *((_QWORD *)a1 + 116) = v18;
            v19 = *v18;
            *((_QWORD *)a1 + 156) = *v18;
            v19 += 12;
            *((_QWORD *)a1 + 158) = v19;
            v20 = *v19;
            *((_QWORD *)a1 + 160) = v20;
            *((_QWORD *)a1 + 28) = v20;
            v47 = (_DWORD)a1 + 72;
            v21 = v20(
                    v18,
                    a1 + 112,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
            *((_DWORD *)a1 + 144) = v21;
            *((_DWORD *)a1 + 74) = v21;
            *((_QWORD *)a1 + 40) = retaddr;
            if ( v21 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x405,
                (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v21);
          }
          else
          {
            v16 = *((_QWORD *)a1 + 90);
          }
          if ( !*((_QWORD *)a1 + 9) )
          {
            v22 = (__int64 (__fastcall *****)(_QWORD, _QWORD, GUID *, GUID *))(v16 + 1584);
            *((_QWORD *)a1 + 118) = v22;
            v23 = *v22;
            *((_QWORD *)a1 + 120) = *v22;
            v23 += 29;
            *((_QWORD *)a1 + 122) = v23;
            v24 = *v23;
            *((_QWORD *)a1 + 124) = *v23;
            v25 = *v24;
            *((_QWORD *)a1 + 162) = *v24;
            v25 += 9;
            *((_QWORD *)a1 + 164) = v25;
            v26 = *v25;
            *((_QWORD *)a1 + 166) = v26;
            *((_QWORD *)a1 + 30) = v26;
            v47 = (_DWORD)a1 + 72;
            v27 = v26(v24, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
            *((_DWORD *)a1 + 148) = v27;
            *((_DWORD *)a1 + 78) = v27;
            *((_QWORD *)a1 + 43) = retaddr;
            if ( v27 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x40B,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v27,
                v47);
          }
          *((_QWORD *)a1 + 168) = v12;
          *((_QWORD *)a1 + 32) = v12;
          v28 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                  v12,
                  a1 + 128);
          *((_QWORD *)a1 + 76) = v28;
          v29 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InputDeviceKind(v28);
          *((_DWORD *)a1 + 156) = v29;
          v2 = a1;
          *((_DWORD *)a1 + 30) = v29 == 1;
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 128));
          *((_QWORD *)a1 + 17) = 0LL;
          v30 = (__int64 *)(*((_QWORD *)a1 + 90) + 1584LL);
          *((_QWORD *)a1 + 126) = v30;
          v31 = *v30;
          *((_QWORD *)a1 + 128) = *v30;
          *((_QWORD *)a1 + 34) = v31;
          MultitaskingView = CMultitaskingViewManager::GetMultitaskingView(
                               v31,
                               2u,
                               (__int64)&GUID_389221b7_bf28_4d25_9501_b4491d822be1,
                               (_QWORD *)a1 + 17);
          *((_DWORD *)a1 + 160) = MultitaskingView;
          if ( MultitaskingView < 0 )
          {
            *((_QWORD *)a1 + 18) = 0LL;
            *((_QWORD *)a1 + 184) = v30;
            v38 = *v30;
            *((_QWORD *)a1 + 186) = *v30;
            *((_QWORD *)a1 + 52) = v38;
            v39 = CMultitaskingViewManager::CreateMultitaskingView(
                    v38,
                    2u,
                    (const char *)&GUID_389221b7_bf28_4d25_9501_b4491d822be1,
                    (_QWORD *)a1 + 18);
            *((_DWORD *)a1 + 168) = v39;
            *((_DWORD *)a1 + 88) = v39;
            *((_QWORD *)a1 + 46) = retaddr;
            if ( v39 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x417,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v39,
                v47);
            v48 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD, _QWORD))*((_QWORD *)a1 + 18);
            v40 = *v48;
            *((_QWORD *)a1 + 188) = *v48;
            v40 += 6;
            *((_QWORD *)a1 + 190) = v40;
            v41 = *v40;
            *((_QWORD *)a1 + 192) = *v40;
            *((_QWORD *)a1 + 56) = v41;
            *((_QWORD *)a1 + 130) = v30;
            v42 = (__int64 *)*v30;
            *((_QWORD *)a1 + 132) = *v30;
            v42 += 29;
            *((_QWORD *)a1 + 134) = v42;
            v43 = *v42;
            *((_QWORD *)a1 + 136) = *v42;
            *((_QWORD *)a1 + 54) = v43;
            v44 = v41(v48, v43, *((_QWORD *)a1 + 9), *((unsigned int *)a1 + 30));
            *((_DWORD *)a1 + 172) = v44;
            *((_DWORD *)a1 + 82) = v44;
            *((_QWORD *)a1 + 47) = retaddr;
            if ( v44 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x41B,
                (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v44);
            if ( *((_QWORD *)a1 + 18) )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 18);
          }
          else
          {
            v49 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD, _QWORD))*((_QWORD *)a1 + 17);
            v33 = *v49;
            *((_QWORD *)a1 + 170) = *v49;
            v33 += 6;
            *((_QWORD *)a1 + 172) = v33;
            v34 = *v33;
            *((_QWORD *)a1 + 174) = *v33;
            *((_QWORD *)a1 + 50) = v34;
            *((_QWORD *)a1 + 176) = v30;
            v35 = (__int64 *)*v30;
            *((_QWORD *)a1 + 178) = *v30;
            v35 += 29;
            *((_QWORD *)a1 + 180) = v35;
            v36 = *v35;
            *((_QWORD *)a1 + 182) = *v35;
            *((_QWORD *)a1 + 48) = v36;
            v37 = v34(v49, v36, *((_QWORD *)a1 + 9), *((unsigned int *)a1 + 30));
            *((_DWORD *)a1 + 164) = v37;
            *((_DWORD *)a1 + 84) = v37;
            *((_QWORD *)a1 + 45) = retaddr;
            if ( v37 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x412,
                (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v37);
          }
          if ( *((_QWORD *)a1 + 17) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 17);
          if ( *((_QWORD *)a1 + 9) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 9);
        }
        v45 = *((_QWORD *)a1 + 88) + 1584LL;
        *((_QWORD *)a1 + 138) = v45;
        *((_QWORD *)a1 + 58) = v45;
        LOBYTE(v7) = 1;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
          v45,
          v7);
        winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete(a1 + 16);
        winrt::com_ptr<CMultitaskingViewManager>::release_ref(a1 + 24);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 152);
        goto LABEL_31;
      case 5:
        winrt::com_ptr<CMultitaskingViewManager>::release_ref(a1 + 24);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
LABEL_31:
        *((_QWORD *)a1 + 90) = a1 + 1;
        *((_QWORD *)a1 + 140) = a1 + 1585;
        CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_(a1 + 1585);
        *((_QWORD *)a1 + 142) = a1 + 10;
        v46 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 576) = v46;
        if ( v46 )
        {
          *((_QWORD *)a1 + 146) = 1601LL;
          *((_QWORD *)a1 + 62) = 1601LL;
          *((_QWORD *)v2 + 60) = a1;
          *((_QWORD *)a1 + 196) = a1 + 1;
          *((_QWORD *)a1 + 194) = a1 + 10;
          operator delete(a1);
        }
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
