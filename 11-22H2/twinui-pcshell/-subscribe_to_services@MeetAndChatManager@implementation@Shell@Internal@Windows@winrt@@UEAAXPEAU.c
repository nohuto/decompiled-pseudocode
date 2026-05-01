/*
 * XREFs of ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E8760
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NXZ @ 0x180098788 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAA_NXZ @ 0x180098904 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?add@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x1800B1C7C (-add@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$get_weak@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAA?AU?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800DC048 (--$get_weak@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@-$root_implements@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterHotKeys@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18019B0E0 (-RegisterHotKeys@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?Start@ListenerWindow@@QEAAXXZ @ 0x1801A15B0 (-Start@ListenerWindow@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        struct IServiceProvider *a2)
{
  RTL_SRWLOCK *v4; // r15
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v6; // eax
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v8; // eax
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v10; // eax
  RTL_SRWLOCK *v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  LSTATUS DWORD; // eax
  unsigned int v16; // edx
  int v17; // [rsp+20h] [rbp-88h]
  __int128 v18; // [rsp+40h] [rbp-68h]
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  __int128 v20; // [rsp+58h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v22; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+10h] BYREF
  __int64 *v24; // [rsp+C0h] [rbp+18h] BYREF
  PVOID v25; // [rsp+C8h] [rbp+20h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockExclusive((PSRWLOCK)this + 12);
  QueryService = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 18);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
         (char *)this + 144);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19B,
      (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v6,
      v17);
  v7 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 20);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
         a2,
         &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
         &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
         (char *)this + 160);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19E,
      (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v8,
      v17);
  v9 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 21);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v9)(
          a2,
          &SID_InputHostLayout,
          &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
          (char *)this + 168);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A1,
      (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v10,
      v17);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::RegisterHotKeys((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this - 16));
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveChat>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_RemoveChat>::GetImpl'::`2'::impl)
    && !wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::GetImpl'::`2'::impl) )
  {
    ListenerWindow::Start(*((ListenerWindow **)this + 11));
    v11 = (RTL_SRWLOCK *)*((_QWORD *)this + 11);
    winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::get_weak<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>(
      (volatile signed __int64 *)this + 4,
      &v23);
    *(_QWORD *)&v18 = winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::OnListenerWindowMessage;
    DWORD2(v18) = 0;
    v12 = v23;
    v23 = 0LL;
    v19 = v12;
    v20 = v18;
    v24 = &v19;
    v13 = operator new(0x28uLL);
    v14 = v19;
    v19 = 0LL;
    v13[1] = v14;
    *((_OWORD *)v13 + 1) = v20;
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *((_DWORD *)v13 + 8) = 1;
    *v13 = &winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,_lambda_7d98499c6cec3547b2371cefd2f8849f_>::`vftable';
    v24 = v13;
    if ( v19 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v19);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::add(
      v11 + 4,
      &v25,
      (__int64)&v24);
    *((_QWORD *)this + 33) = v25;
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    if ( v23 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v23);
  }
  DWORD = SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
            L"LastInstallTimestamp",
            &v22);
  v16 = v22;
  if ( DWORD < 0 )
    v16 = 0;
  v22 = v16;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
