/*
 * XREFs of CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x1801B3550
 * Callers:
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x1801B3458 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180052CF0 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180052F20 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800FC0AC (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180117A58 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAA_NW.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?copy_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z @ 0x18017D37C (-copy_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18034E02C (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@XZ @ 0x18034E5B8 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewReque.c)
 *     ?InputDeviceKind@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AW40Shell@UI@WindowsUdk@3@XZ @ 0x18034E888 (-InputDeviceKind@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUShowShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18034F528 (-Options@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequested.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x18034F788 (-Result@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedE.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ?Context@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1803A1680 (-Context@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@Win.c)
 *     ?InvokerWindowId@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA_KXZ @ 0x1803A1EA0 (-InvokerWindowId@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?InvocationPoint@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUPoint@Foundation@Windows@3@XZ @ 0x18044AEE4 (-InvocationPoint@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x18049AA90 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     ?release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x18049B668 (-release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1(
        char *a1,
        __int64 a2,
        __int64 a3)
{
  char *v4; // r14
  struct HINSTANCE__ *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  volatile int *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  int IsMultitaskingViewVisible; // eax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  HWND v15; // r12
  __int64 v16; // rax
  __int64 (__fastcall *****v17)(_QWORD, char *, GUID *, GUID *); // rax
  __int64 (__fastcall ****v18)(_QWORD, char *, GUID *, GUID *); // rcx
  __int64 (__fastcall ***v19)(_QWORD, char *, GUID *, GUID *); // rcx
  __int64 (__fastcall **v20)(_QWORD, char *, GUID *, GUID *); // rax
  __int64 (__fastcall *v21)(_QWORD, char *, GUID *, GUID *); // rax
  int v22; // eax
  __int64 (__fastcall *****v23)(_QWORD, _QWORD, GUID *, GUID *); // r13
  __int64 (__fastcall ****v24)(_QWORD, _QWORD, GUID *, GUID *); // rax
  __int64 (__fastcall ***v25)(_QWORD, _QWORD, GUID *, GUID *); // rcx
  __int64 (__fastcall **v26)(_QWORD, _QWORD, GUID *, GUID *); // rax
  __int64 (__fastcall *v27)(_QWORD, _QWORD, GUID *, GUID *); // rax
  int v28; // eax
  __int64 v29; // rax
  int v30; // ebx
  unsigned int v31; // r12d
  int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // bl
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // rbx
  __int64 v40; // rcx
  int MultitaskingView; // eax
  __int64 (__fastcall **v42)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v43)(_QWORD, _QWORD, _QWORD); // rax
  int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 (__fastcall **v47)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v48)(_QWORD, _QWORD, _QWORD); // rax
  int v49; // eax
  __int64 v50; // rcx
  __int16 v51; // ax
  int v52; // [rsp+20h] [rbp-B8h]
  __int64 (__fastcall ***v53)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-A0h]
  __int64 (__fastcall ***v54)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-98h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  float v58; // [rsp+F8h] [rbp+20h]
  float v59; // [rsp+FCh] [rbp+24h]

  try
  {
    v4 = a1;
    if ( (unsigned __int16)(*((_WORD *)a1 + 4) + 1) > 6u )
    {
LABEL_37:
      __debugbreak();
    }
    else
    {
      v5 = &_ImageBase;
      switch ( *((_WORD *)a1 + 4) )
      {
        case 0xFFFF:
        case 3:
          goto LABEL_35;
        case 0:
        case 1:
          goto LABEL_37;
        case 2:
          LOBYTE(v5) = 3;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::__private_IsEnabledPreCheck(
            (__int64)`wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
            (__int64)v5,
            a3);
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_VsUpdates>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_VsUpdates>::GetImpl'::`2'::impl,
            1u,
            v6,
            v7);
          *((_QWORD *)a1 + 88) = a1 + 9;
          winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
            a1 + 1401,
            a1 + 16);
          *((_QWORD *)a1 + 3) = 0LL;
          *((_QWORD *)a1 + 90) = a1 + 1;
          v8 = *(volatile int **)(a1 + 1393);
          winrt::com_ptr<CMultitaskingViewManager>::copy_ref((volatile signed __int32 **)a1 + 3, v8);
          *((_QWORD *)a1 + 4) = v8 + 114;
          if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 32) )
            goto LABEL_7;
          *((_WORD *)a1 + 4) = 4;
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CMultitaskingViewManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type>(
            a1 + 32,
            a1);
          return;
        case 4:
LABEL_7:
          winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(a1 + 32);
          *((_DWORD *)a1 + 10) = 0;
          v9 = *((_QWORD *)a1 + 90);
          *((_QWORD *)a1 + 92) = v9 + 1392;
          v10 = *(_QWORD *)(v9 + 1392);
          *((_QWORD *)a1 + 94) = v10;
          *((_QWORD *)a1 + 20) = v10;
          IsMultitaskingViewVisible = CMultitaskingViewManager::IsMultitaskingViewVisible(v10, 2LL);
          *((_DWORD *)a1 + 124) = IsMultitaskingViewVisible;
          *((_DWORD *)a1 + 68) = IsMultitaskingViewVisible;
          *((_QWORD *)a1 + 36) = retaddr;
          if ( IsMultitaskingViewVisible < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x451,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)IsMultitaskingViewVisible,
              v52);
          if ( !*((_DWORD *)a1 + 10) )
          {
            *((_QWORD *)a1 + 6) = 0LL;
            v13 = *((_QWORD *)a1 + 88) + 1392LL;
            *((_QWORD *)a1 + 138) = v13;
            *((_QWORD *)a1 + 22) = v13;
            v14 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                    v13,
                    a1 + 64);
            *((_QWORD *)a1 + 64) = v14;
            v15 = (HWND)winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvokerWindowId(v14);
            *((_QWORD *)a1 + 66) = v15;
            *((_QWORD *)a1 + 7) = v15;
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 64));
            if ( v15 )
            {
              *((_QWORD *)a1 + 140) = v13;
              *((_QWORD *)a1 + 24) = v13;
              v16 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                      v13,
                      a1 + 72);
              *((_QWORD *)a1 + 68) = v16;
              winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvocationPoint(
                v16,
                a1 + 80);
              winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 72));
              v58 = *((float *)a1 + 20);
              *((_DWORD *)a1 + 192) = (int)v58;
              *((_DWORD *)a1 + 22) = (int)v58;
              v59 = *((float *)a1 + 21);
              *((_DWORD *)a1 + 196) = (int)v59;
              *((_DWORD *)a1 + 23) = (int)v59;
              MapWindowPoints(v15, 0LL, (LPPOINT)a1 + 11, 1u);
              v17 = (__int64 (__fastcall *****)(_QWORD, char *, GUID *, GUID *))(*((_QWORD *)a1 + 90) + 1392LL);
              *((_QWORD *)a1 + 100) = v17;
              v18 = *v17;
              *((_QWORD *)a1 + 102) = *v17;
              v18 += 29;
              *((_QWORD *)a1 + 104) = v18;
              v19 = *v18;
              *((_QWORD *)a1 + 106) = v19;
              v20 = *v19;
              *((_QWORD *)a1 + 142) = *v19;
              v20 += 12;
              *((_QWORD *)a1 + 144) = v20;
              v21 = *v20;
              *((_QWORD *)a1 + 146) = v21;
              *((_QWORD *)a1 + 26) = v21;
              v52 = (_DWORD)a1 + 48;
              v22 = v21(
                      v19,
                      a1 + 88,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
              *((_DWORD *)a1 + 140) = v22;
              *((_DWORD *)a1 + 70) = v22;
              *((_QWORD *)a1 + 38) = retaddr;
              if ( v22 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x45F,
                  (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                  (const char *)(unsigned int)v22);
            }
            if ( !*((_QWORD *)a1 + 6) )
            {
              v23 = (__int64 (__fastcall *****)(_QWORD, _QWORD, GUID *, GUID *))(v9 + 1392);
              *((_QWORD *)a1 + 108) = v23;
              v24 = *v23;
              *((_QWORD *)a1 + 110) = *v23;
              v24 += 29;
              *((_QWORD *)a1 + 112) = v24;
              v25 = *v24;
              *((_QWORD *)a1 + 114) = *v24;
              v26 = *v25;
              *((_QWORD *)a1 + 148) = *v25;
              v26 += 9;
              *((_QWORD *)a1 + 150) = v26;
              v27 = *v26;
              *((_QWORD *)a1 + 152) = v27;
              *((_QWORD *)a1 + 28) = v27;
              v52 = (_DWORD)a1 + 48;
              v28 = v27(
                      v25,
                      0LL,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
              *((_DWORD *)a1 + 144) = v28;
              *((_DWORD *)a1 + 74) = v28;
              *((_QWORD *)a1 + 41) = retaddr;
              if ( v28 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x465,
                  (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                  (const char *)(unsigned int)v28,
                  v52);
            }
            *((_DWORD *)a1 + 24) = 0;
            *((_QWORD *)a1 + 154) = v13;
            *((_QWORD *)a1 + 30) = v13;
            v29 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                    v13,
                    a1 + 104);
            *((_QWORD *)a1 + 74) = v29;
            v30 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InputDeviceKind(v29);
            *((_DWORD *)a1 + 152) = v30;
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 104));
            v31 = 0;
            v32 = v30 - 2;
            if ( v32 )
            {
              if ( v32 == 1 )
              {
                v31 = 4;
                *((_DWORD *)a1 + 24) = 4;
                *((_QWORD *)a1 + 156) = v13;
                *((_QWORD *)a1 + 32) = v13;
                v33 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                        v13,
                        a1 + 120);
                *((_QWORD *)a1 + 78) = v33;
                v34 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::Context(
                        v33,
                        a1 + 128);
                *((_QWORD *)a1 + 60) = v34;
                v35 = winrt::operator==(v34, (__int64)L"FlyOut.TakeFocus");
                a1[112] = v35;
                winrt::handle_type<winrt::impl::hstring_traits>::close(
                  (volatile signed __int32 **)a1 + 16,
                  v36,
                  v37,
                  v38);
                winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 120));
                if ( v35 )
                {
                  v31 = 6;
                  *((_DWORD *)a1 + 24) = 6;
                }
              }
            }
            else
            {
              *((_DWORD *)a1 + 24) = 1;
              v31 = 1;
            }
            *((_QWORD *)a1 + 17) = 0LL;
            v39 = (__int64 *)(*((_QWORD *)a1 + 90) + 1392LL);
            *((_QWORD *)a1 + 116) = v39;
            v40 = *v39;
            *((_QWORD *)a1 + 118) = *v39;
            *((_QWORD *)a1 + 46) = v40;
            MultitaskingView = CMultitaskingViewManager::GetMultitaskingView(
                                 v40,
                                 0x10u,
                                 (__int64)&GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
                                 (_QWORD *)a1 + 17);
            *((_DWORD *)a1 + 160) = MultitaskingView;
            if ( MultitaskingView < 0 )
            {
              *((_QWORD *)a1 + 18) = 0LL;
              *((_QWORD *)a1 + 120) = v39;
              v45 = *v39;
              *((_QWORD *)a1 + 122) = *v39;
              *((_QWORD *)a1 + 50) = v45;
              v46 = CMultitaskingViewManager::CreateMultitaskingView(
                      v45,
                      0x10u,
                      (const char *)&GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
                      (_QWORD *)a1 + 18);
              *((_DWORD *)a1 + 168) = v46;
              *((_DWORD *)a1 + 84) = v46;
              *((_QWORD *)a1 + 44) = retaddr;
              if ( v46 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x480,
                  (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                  (const char *)(unsigned int)v46,
                  v52);
              v53 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*((_QWORD *)a1 + 18);
              v47 = *v53;
              *((_QWORD *)a1 + 164) = *v53;
              v47 += 6;
              *((_QWORD *)a1 + 166) = v47;
              v48 = *v47;
              *((_QWORD *)a1 + 168) = v48;
              *((_QWORD *)a1 + 52) = v48;
              v49 = v48(v53, *((_QWORD *)a1 + 6), v31);
              *((_DWORD *)a1 + 172) = v49;
              *((_DWORD *)a1 + 78) = v49;
              *((_QWORD *)a1 + 45) = retaddr;
              if ( v49 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x484,
                  (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                  (const char *)(unsigned int)v49);
              if ( *((_QWORD *)a1 + 18) )
                winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 18);
            }
            else
            {
              v54 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*((_QWORD *)a1 + 17);
              v42 = *v54;
              *((_QWORD *)a1 + 158) = *v54;
              v42 += 6;
              *((_QWORD *)a1 + 160) = v42;
              v43 = *v42;
              *((_QWORD *)a1 + 162) = v43;
              *((_QWORD *)a1 + 48) = v43;
              v44 = v43(v54, *((_QWORD *)a1 + 6), v31);
              *((_DWORD *)a1 + 164) = v44;
              *((_DWORD *)a1 + 80) = v44;
              *((_QWORD *)a1 + 43) = retaddr;
              if ( v44 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x47B,
                  (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                  (const char *)(unsigned int)v44);
            }
            if ( *((_QWORD *)a1 + 17) )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 17);
            if ( *((_QWORD *)a1 + 6) )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 6);
          }
          v50 = *((_QWORD *)a1 + 88) + 1392LL;
          *((_QWORD *)a1 + 124) = v50;
          *((_QWORD *)a1 + 54) = v50;
          LOBYTE(v12) = 1;
          winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
            v50,
            v12);
          winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete(a1 + 16);
          winrt::com_ptr<CMultitaskingViewManager>::release_ref(a1 + 24);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
          std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
            a1,
            a1 + 152);
          v4 = a1;
          goto LABEL_35;
        case 5:
          winrt::com_ptr<CMultitaskingViewManager>::release_ref(a1 + 24);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
LABEL_35:
          *((_QWORD *)a1 + 88) = a1 + 9;
          *((_QWORD *)a1 + 126) = a1 + 1401;
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 1401));
          *((_QWORD *)a1 + 128) = a1 + 10;
          v51 = *((_WORD *)a1 + 5);
          *((_WORD *)a1 + 520) = v51;
          if ( v51 )
          {
            *((_QWORD *)a1 + 132) = 1409LL;
            *((_QWORD *)a1 + 58) = 1409LL;
            *((_QWORD *)v4 + 56) = a1;
            *((_QWORD *)a1 + 172) = a1 + 9;
            *((_QWORD *)a1 + 170) = a1 + 10;
            operator delete(a1);
          }
          break;
      }
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
