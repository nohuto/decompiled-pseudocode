/*
 * XREFs of CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_InitCoro$2 @ 0x1801D8AE8 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_InitCoro$2.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1800444D8 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@ex.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18009EB7C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800FBCF4 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180101988 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x18015C978 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801732E4 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ra.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x180177638 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180178CCC (-resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x18017AD28 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1801A3CC0 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_66881fa05591413bac4099d171e5aec0___ @ 0x1801D6CE4 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuItem_winrt--WindowsUdk-.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_ead74eb18ddaf5d60afd1f95853bb976___ @ 0x1801D6D40 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuItem_winrt_ea_1801D6D40.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     _lambda_66881fa05591413bac4099d171e5aec0_::_lambda_66881fa05591413bac4099d171e5aec0_ @ 0x1801D7390 (_lambda_66881fa05591413bac4099d171e5aec0_--_lambda_66881fa05591413bac4099d171e5aec0_.c)
 *     _lambda_ead74eb18ddaf5d60afd1f95853bb976_::_lambda_ead74eb18ddaf5d60afd1f95853bb976_ @ 0x1801D73D8 (_lambda_ead74eb18ddaf5d60afd1f95853bb976_--_lambda_ead74eb18ddaf5d60afd1f95853bb976_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895@@@details@wil@@QEAA_NXZ @ 0x1801E7E18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWith.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUfinal_suspend_awaiter@123@XZ @ 0x18056EC54 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@.c)
 *     ??1?$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@XZ @ 0x18058DD54 (--1-$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@XZ.c)
 *     ??$await_transform@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@78@@impl@winrt@@QEAA?AU?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@12@$$QEAUawaitable@?1??resume_on_signal@2@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@Z @ 0x1805BF8BC (--$await_transform@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$r_ea_1805BF8BC.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@UEAA@XZ @ 0x1805D431C (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView@UMeetAndChatFallbackProp@Sh.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@UMenuItem@UI@WindowsUdk@5@@impl@winrt@@QEBA?AU?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1805D502C (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UMenuItem@UI@WindowsUdk@win.c)
 *     ?return_value@promise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@QEAAX$$QEAU?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x1805D67B4 (-return_value@promise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView@UMeetAndChatFall.c)
 *     ??$await_transform@AEAUapartment_context@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@AEAUapartment_context@winrt@@@12@AEAUapartment_context@2@@Z @ 0x1805D75CC (--$await_transform@AEAUapartment_context@winrt@@@-$promise_base@Upromise_type@-$coroutine_traits.c)
 *     ??$single_threaded_vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@winrt@@YA?AU?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x1805D8110 (--$single_threaded_vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     ??0?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVCLauncherTipContextMenu@@@Z @ 0x1805D81EC (--0-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVCLauncherTipC.c)
 *     ??0?$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1805D8214 (--0-$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@AEBU-$IVector@UMenuItem@UI@Windows.c)
 *     ??1?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1805D83B0 (--1-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$TypedEventHandler@UMenuItem@UI@WindowsUdk@winrt@@UMenuItemInvokedArgs@234@@Foundation@Windows@4@@Z @ 0x1805D8A78 (-CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU-$.c)
 *     ?CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@64@@Z @ 0x1805D8B8C (-CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU.c)
 *     ?CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1805D8C74 (-CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1805DAE2C (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     ?_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DBA18 (-_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_Tidy@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXXZ @ 0x1805DC3E0 (-_Tidy@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805DC428 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1805DC428.c)
 *     ?push_back@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAX$$QEAUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1805DC704 (-push_back@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@.c)
 */

// Hidden C++ exception states: #wind=21 #try_helpers=1
void __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r9
  PVOID *v7; // rdi
  struct winrt::impl::resume_apartment_context **v8; // rdi
  char v9; // al
  __int64 v10; // r13
  struct _RTL_CRITICAL_SECTION **v11; // rdi
  struct _RTL_CRITICAL_SECTION *v12; // rdx
  struct _RTL_CRITICAL_SECTION **v13; // rsi
  CLauncherTipContextMenu *v14; // rcx
  struct _RTL_CRITICAL_SECTION *v15; // rax
  char IsEnabled; // al
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rsi
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 *v23; // rdi
  __int64 v24; // rdi
  int v25; // ecx
  int v26; // ecx
  bool v27; // zf
  __int64 v28; // rdi
  char v29; // cl
  __int64 Separator; // rax
  unsigned __int16 v31; // r9
  __int64 v32; // rdx
  _QWORD *v33; // rax
  const unsigned __int16 *v34; // rdx
  __int64 Command; // rax
  __int64 v36; // rdi
  unsigned __int64 v37; // r12
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *v38; // rsi
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *i; // rax
  __int64 *v40; // rcx
  unsigned __int64 *v41; // rax
  unsigned __int64 v42; // rax
  __int64 *v43; // rcx
  __int64 v44; // rcx
  __int64 *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  const unsigned __int16 *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 Container; // rax
  const char *v52; // r9
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 View; // rax
  __int64 v56; // rax
  __int16 v57; // ax
  __int64 *v58; // [rsp+40h] [rbp-128h]
  __int64 v59; // [rsp+48h] [rbp-120h]
  __int64 v60; // [rsp+50h] [rbp-118h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *v63; // [rsp+180h] [rbp+18h]

  v1 = a1;
  v2 = a1;
  if ( (unsigned __int16)(*(_WORD *)(a1 + 8) + 1) > 8u )
  {
LABEL_46:
    __debugbreak();
  }
  else
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 1:
      case 3:
        goto LABEL_44;
      case 0:
        goto LABEL_46;
      case 2:
        *(_QWORD *)(a1 + 1152) = a1 + 1;
        *(_QWORD *)(a1 + 2096) = a1 + 1;
        *(_QWORD *)(a1 + 1168) = a1 + 2113;
        *(_QWORD *)(a1 + 1184) = *(_QWORD *)(a1 + 2113);
        wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(a1 + 16);
        v3 = v1 + 24;
        winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)(v1 + 24));
        v4 = *(__int64 **)(v1 + 2113);
        if ( (unsigned int)CLauncherTipContextMenu::_EnsureMenu((CLauncherTipContextMenu *)v4, 0LL) != -2147483638 )
          goto LABEL_8;
        *(_QWORD *)(v1 + 1200) = v1 - 112;
        *(_QWORD *)(v1 + 2000) = v1 - 112;
        v5 = winrt::resume_on_signal(v1 + 40, v4[44], 0LL);
        v7 = (PVOID *)___await_transform_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperationWithProgress_UMeetAndChatInstallResult_MeetAndChat_Shell_Internal_Windows_winrt__UMeetAndChatInstallProgress_23456__Foundation_Windows_winrt__PEAUMeetAndChatManager_implementation_Shell_Internal_34__experimental_std__U__IAsyncOperationWithProgress_UMeetAndChatInstallResult_MeetAndChat_Shell_Internal_Windows_winrt__UMeetAndChatInstallProgress_23456__Foundation_Windows_winrt__UMeetAndChatInstallProgress_MeetAndChat_Shell_Internal_78__impl_winrt__QEAA_AU__notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__12___QEAUawaitable__1__resume_on_signal_2_YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__Z(
                        v6,
                        v1 + 96,
                        v5);
        *(_QWORD *)(v1 + 896) = v7;
        if ( !_await_ready___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)v7) )
        {
          *(_WORD *)(v1 + 8) = 4;
          ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std_____notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std___experimental_std___Z(v7);
          return;
        }
LABEL_7:
        _await_resume___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ(*(__int64 **)(v1 + 896));
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable(v1 + 40);
        v3 = v1 + 24;
LABEL_8:
        *(_QWORD *)(v1 + 1200) = v1 - 112;
        *(_QWORD *)(v1 + 2000) = v1 - 112;
        *(_QWORD *)(v1 + 384) = v1 - 112;
        *(_QWORD *)(v1 + 1024) = v1 - 112;
        v8 = (struct winrt::impl::resume_apartment_context **)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::await_transform<winrt::apartment_context &>(
                                                                v1 - 112,
                                                                v1 + 112,
                                                                v3);
        *(_QWORD *)(v1 + 400) = v8;
        v9 = winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(v8);
        *(_BYTE *)(v1 + 1056) = v9;
        if ( !v9 )
        {
          *(_WORD *)(v1 + 8) = 6;
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CMultitaskingViewManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type>(v8);
          return;
        }
LABEL_11:
        winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(*(_QWORD *)(v1 + 400));
        v10 = v1 + 128;
        v60 = v1 + 128;
        *(_QWORD *)(v1 + 128) = 0LL;
        *(_QWORD *)(v1 + 136) = 0LL;
        *(_QWORD *)(v1 + 144) = 0LL;
        v11 = (struct _RTL_CRITICAL_SECTION **)(*(_QWORD *)(v1 + 1152) + 2112LL);
        *(_QWORD *)(v1 + 1216) = v11;
        v12 = *v11;
        *(_QWORD *)(v1 + 1232) = *v11;
        v12 += 6;
        *(_QWORD *)(v1 + 1248) = v12;
        v13 = (struct _RTL_CRITICAL_SECTION **)(v1 + 152);
        wil::EnterCriticalSection((struct _RTL_CRITICAL_SECTION **)(v1 + 152), v12);
        try
        {
          *(_QWORD *)(v1 + 1264) = v11;
          v14 = (CLauncherTipContextMenu *)*v11;
          *(_QWORD *)(v1 + 1280) = *v11;
          CLauncherTipContextMenu::_EnumerateAndBuildShutdownMenu(v14);
          *(_QWORD *)(v1 + 1296) = v11;
          v15 = *v11;
          *(_QWORD *)(v1 + 1312) = *v11;
          v15 += 8;
          *(_QWORD *)(v1 + 1328) = v15;
          if ( !LOBYTE(v15->DebugInfo) )
            goto LABEL_42;
          *(_BYTE *)(v1 + 160) = 0;
          IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895>::GetImpl'::`2'::impl);
          *(_BYTE *)(v1 + 416) = IsEnabled;
          if ( IsEnabled )
          {
            *(_BYTE *)(v1 + 1008) = 1;
            *(_QWORD *)(v1 + 168) = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v1 + 168));
            if ( SHGetKnownFolderItem(
                   &FOLDERID_LocalAppData,
                   KF_FLAG_DEFAULT,
                   0LL,
                   &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                   (void **)(v1 + 168)) >= 0 )
            {
              *(_QWORD *)(v1 + 184) = 0LL;
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v1 + 184));
              if ( SHCreateItemFromRelativeName(
                     *(IShellItem **)(v1 + 168),
                     L"Microsoft\\WindowsApps\\wt.exe",
                     0LL,
                     &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                     (void **)(v1 + 184)) >= 0 )
                *(_BYTE *)(v1 + 160) = 1;
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v1 + 184));
            }
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v1 + 168));
          }
          else
          {
            *(_BYTE *)(v1 + 1008) = 0;
            *(_BYTE *)(v1 + 160) = 1;
          }
          *(_QWORD *)(v1 + 1344) = v11;
          v17 = (__int64 *)*v11;
          *(_QWORD *)(v1 + 1360) = *v11;
          v17 += 23;
          *(_QWORD *)(v1 + 1376) = v17;
          v18 = *v17;
          *(_QWORD *)(v1 + 1392) = *v17;
          while ( 1 )
          {
            *(_QWORD *)(v1 + 200) = v18;
            if ( !v18 )
            {
              v13 = (struct _RTL_CRITICAL_SECTION **)(v1 + 152);
LABEL_42:
              wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v13);
              goto LABEL_49;
            }
            v19 = (__int64 *)(*(_QWORD *)(v1 + 1152) + 2112LL);
            *(_QWORD *)(v1 + 1408) = v19;
            v20 = (__int64 *)*v19;
            *(_QWORD *)(v1 + 1424) = *v19;
            v20 += 22;
            *(_QWORD *)(v1 + 1440) = v20;
            *(_QWORD *)(v1 + 432) = v20;
            v21 = 8 * v18;
            *(_QWORD *)(v1 + 1456) = v21;
            v22 = *v20;
            *(_QWORD *)(v1 + 1472) = *v20;
            v23 = (__int64 *)(v21 + v22);
            *(_QWORD *)(v1 + 1488) = v23--;
            *(_QWORD *)(v1 + 1504) = v23;
            *(_QWORD *)(v1 + 992) = v23;
            v24 = *v23;
            *(_QWORD *)(v1 + 1520) = v24;
            *(_QWORD *)(v1 + 208) = v24;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v1 + 208));
            *(_QWORD *)(v1 + 1536) = v24 + 112;
            v25 = *(_DWORD *)(v24 + 112);
            *(_DWORD *)(v1 + 1552) = v25;
            v26 = v25 & 0x800;
            *(_DWORD *)(v1 + 1568) = v26;
            if ( v26 )
            {
              *(_DWORD *)(v1 + 448) = 1;
              if ( !*(_BYTE *)(v1 + 160) )
                goto LABEL_40;
            }
            else
            {
              *(_DWORD *)(v1 + 448) = 0;
            }
            v27 = (*(_DWORD *)(v1 + 1552) & 0x100) == 0;
            *(_DWORD *)(v1 + 1584) = *(_DWORD *)(v1 + 1552) & 0x100;
            if ( v27 )
            {
              *(_DWORD *)(v1 + 464) = 0;
            }
            else
            {
              *(_DWORD *)(v1 + 464) = 1;
              if ( *(_BYTE *)(v1 + 160) )
                goto LABEL_40;
            }
            v28 = *(_QWORD *)(v1 + 208);
            *(_QWORD *)(v1 + 1600) = v28 + 8;
            v29 = *(_BYTE *)(v28 + 8);
            *(_BYTE *)(v1 + 1616) = v29;
            if ( v29 )
            {
              winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 216), &LocaleName);
              Separator = winrt::WindowsUdk::UI::MenuItem::CreateSeparator((const struct winrt::param::hstring *)(v1 + 248));
              *(_QWORD *)(v1 + 1072) = Separator;
              std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v1 + 128, Separator);
              winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 248));
            }
            else
            {
              *(_QWORD *)(v1 + 304) = v1 + 264;
              *(_QWORD *)(v1 + 1632) = v19;
              v32 = *v19;
              *(_QWORD *)(v1 + 1648) = *v19;
              v33 = lambda_66881fa05591413bac4099d171e5aec0_::_lambda_66881fa05591413bac4099d171e5aec0_(
                      (_QWORD *)(v1 + 264),
                      v32,
                      v1 + 16,
                      v1 + 208,
                      (struct winrt::impl::resume_apartment_context *)(v1 + 24));
              *(_QWORD *)(v1 + 944) = v33;
              winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_66881fa05591413bac4099d171e5aec0___(
                (_QWORD *)(v1 + 256),
                (__int64)v33);
              *(_QWORD *)(v1 + 312) = 0LL;
              *(_QWORD *)(v1 + 1664) = v28 + 16;
              v34 = *(const unsigned __int16 **)(v28 + 16);
              *(_QWORD *)(v1 + 1680) = v34;
              winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 320), v34);
              winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 352), &LocaleName);
              Command = winrt::WindowsUdk::UI::MenuItem::CreateCommand(
                          (int)v1 + 480,
                          (int)v1 + 352,
                          (int)v1 + 320,
                          (int)v1 + 312,
                          v1 + 256);
              *(_QWORD *)(v1 + 1088) = Command;
              std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v1 + 128, Command);
              winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 480));
              winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 312));
              winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 256));
            }
            if ( *(_QWORD *)(v1 + 200) == 2LL )
            {
              v36 = v1 + 488;
              *(_QWORD *)(v1 + 488) = 0LL;
              *(_QWORD *)(v1 + 496) = 0LL;
              *(_QWORD *)(v1 + 504) = 0LL;
              *(_QWORD *)(v1 + 512) = 0LL;
              v37 = 0LL;
              v38 = (winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 528);
              for ( i = (winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 672); ; i = v63 )
              {
                v63 = i;
                v40 = (__int64 *)(*(_QWORD *)(v1 + 1152) + 2112LL);
                v58 = v40;
                *(_QWORD *)(v1 + 1696) = v40;
                v41 = (unsigned __int64 *)*v40;
                *(_QWORD *)(v1 + 1712) = *v40;
                v41 += 27;
                *(_QWORD *)(v1 + 1728) = v41;
                v42 = *v41;
                *(_QWORD *)(v1 + 1744) = v42;
                if ( v37 >= v42 )
                  break;
                *(_QWORD *)(v1 + 1760) = v40;
                v43 = (__int64 *)*v40;
                *(_QWORD *)(v1 + 1776) = v43;
                v43 += 26;
                *(_QWORD *)(v1 + 1792) = v43;
                *(_QWORD *)(v1 + 848) = v43;
                *(_QWORD *)(v1 + 1808) = 8 * v37;
                v44 = *v43;
                *(_QWORD *)(v1 + 1824) = v44;
                v45 = (__int64 *)(8 * v37 + v44);
                *(_QWORD *)(v1 + 1840) = v45;
                *(_QWORD *)(v1 + 1000) = v45;
                v59 = *v45;
                *(_QWORD *)(v1 + 1856) = *v45;
                *(_QWORD *)(v1 + 520) = v59;
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v1 + 520));
                *(_QWORD *)(v1 + 592) = v1 + 536;
                *(_QWORD *)(v1 + 1872) = v1 + 9;
                *(_QWORD *)(v1 + 1888) = v1 + 2121;
                *(_QWORD *)(v1 + 1904) = v58;
                v46 = *v58;
                *(_QWORD *)(v1 + 1920) = *v58;
                v47 = lambda_ead74eb18ddaf5d60afd1f95853bb976_::_lambda_ead74eb18ddaf5d60afd1f95853bb976_(
                        v1 + 536,
                        v46,
                        v1 + 16,
                        v1 + 520,
                        (_OWORD *)(v1 + 2121),
                        (struct winrt::impl::resume_apartment_context *)(v1 + 24));
                *(_QWORD *)(v1 + 960) = v47;
                winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_ead74eb18ddaf5d60afd1f95853bb976___(
                  v38,
                  v47);
                *(_QWORD *)(v1 + 600) = 0LL;
                *(_QWORD *)(v1 + 1936) = v59 + 16;
                v48 = *(const unsigned __int16 **)(v59 + 16);
                *(_QWORD *)(v1 + 1952) = v48;
                winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 608), v48);
                winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 640), &LocaleName);
                v49 = winrt::WindowsUdk::UI::MenuItem::CreateCommand(
                        (_DWORD)v63,
                        (int)v1 + 640,
                        (int)v1 + 608,
                        (int)v1 + 600,
                        (__int64)v38);
                *(_QWORD *)(v1 + 1104) = v49;
                v36 = v1 + 488;
                std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v1 + 488, v49);
                winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(v63);
                winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 600));
                winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(v38);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v1 + 520));
                *(_QWORD *)(v1 + 1968) = ++v37;
                *(_QWORD *)(v1 + 512) = v37;
              }
              *(_QWORD *)(v1 + 680) = 0LL;
              *(_QWORD *)(v1 + 688) = 0LL;
              *(_QWORD *)(v1 + 696) = 0LL;
              if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                          v1 + 680,
                          &_ImageBase,
                          0x2AB2u,
                          v31) >= 0 )
              {
                v50 = winrt::single_threaded_vector<winrt::WindowsUdk::UI::MenuItem,std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
                        v1 + 720,
                        v36);
                *(_QWORD *)(v1 + 1120) = v50;
                winrt::param::vector<winrt::WindowsUdk::UI::MenuItem>::vector<winrt::WindowsUdk::UI::MenuItem>(
                  v1 + 704,
                  v50);
                *(_QWORD *)(v1 + 728) = 0LL;
                winrt::param::hstring::hstring(
                  (winrt::param::hstring *)(v1 + 736),
                  *(const unsigned __int16 **)(v1 + 680));
                winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 768), &LocaleName);
                Container = winrt::WindowsUdk::UI::MenuItem::CreateContainer(
                              (int)v1 + 800,
                              (int)v1 + 768,
                              (int)v1 + 736,
                              (int)v1 + 728,
                              v1 + 704);
                *(_QWORD *)(v1 + 864) = Container;
                std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v1 + 128, Container);
                winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 800));
                winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 728));
                winrt::param::vector<winrt::WindowsUdk::UI::MenuItem>::~vector<winrt::WindowsUdk::UI::MenuItem>(v1 + 704);
                winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 720));
                v36 = v1 + 488;
              }
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v1 + 680);
              std::vector<winrt::WindowsUdk::UI::MenuItem>::_Tidy(v36);
            }
LABEL_40:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v1 + 208));
            v18 = *(_QWORD *)(v1 + 200) - 1LL;
            *(_QWORD *)(v1 + 1984) = v18;
          }
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x7B7,
            (unsigned int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
            v52);
          v1 = a1;
          v2 = a1;
          v10 = v60;
        }
LABEL_49:
        v53 = *(_QWORD *)(v1 + 384);
        *(_QWORD *)(v1 + 880) = v53;
        v54 = winrt::single_threaded_vector<winrt::WindowsUdk::UI::MenuItem,std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
                v1 + 808,
                v10);
        *(_QWORD *)(v1 + 1136) = v54;
        View = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::WindowsUdk::UI::MenuItem>::GetView(
                 v54,
                 v1 + 816);
        *(_QWORD *)(v1 + 976) = View;
        std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type::return_value(
          v53,
          View);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 816));
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 808));
        std::vector<winrt::WindowsUdk::UI::MenuItem>::_Tidy(v10);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(v1 + 24));
        wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(v1 + 16);
        *(_QWORD *)(v2 + 1040) = *(_QWORD *)(v1 + 1024);
        v56 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend(
                *(_QWORD *)(v1 + 1040),
                v1 + 832);
        *(_QWORD *)(v1 + 824) = v56;
        *(_WORD *)(v1 + 8) = 0;
        if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend_awaiter::await_suspend(v56) )
        {
LABEL_44:
          *(_QWORD *)(v1 + 1200) = v1 - 112;
          std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type::~promise_type(v1 - 112);
          *(_QWORD *)(v1 + 2016) = v1 + 10;
          v57 = *(_WORD *)(v1 + 10);
          *(_WORD *)(v1 + 2032) = v57;
          if ( v57 )
          {
            *(_QWORD *)(v1 + 2048) = 2249LL;
            *(_QWORD *)(v1 + 928) = 2249LL;
            *(_QWORD *)(v2 + 912) = v1 - 112;
            operator delete(*(void **)(v1 + 912));
          }
        }
        break;
      case 4:
        goto LABEL_7;
      case 5:
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 40);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(v1 + 24));
        wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(v1 + 16);
        goto LABEL_44;
      case 6:
        goto LABEL_11;
      case 7:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 24));
        wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(v1 + 16);
        goto LABEL_44;
    }
  }
}
