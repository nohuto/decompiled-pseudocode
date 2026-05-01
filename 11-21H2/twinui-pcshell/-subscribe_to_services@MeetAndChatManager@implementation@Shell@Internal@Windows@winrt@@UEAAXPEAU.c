/*
 * XREFs of ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180153E30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?make_weak_ref@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800F9E24 (-make_weak_ref@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServicePr.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?add@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18015154C (-add@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@.c)
 *     ?Start@ListenerWindow@@QEAAXXZ @ 0x1801540E8 (-Start@ListenerWindow@@QEAAXXZ.c)
 *     ?RegisterHotKeys@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801541E8 (-RegisterHotKeys@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1801A3CC0 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802D6558 (--0bad_alloc@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v5; // eax
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v7; // eax
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v9; // eax
  RTL_SRWLOCK *v10; // rdi
  __int64 weak_ref; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  LSTATUS DWORD; // eax
  unsigned int v17; // ecx
  int v18; // [rsp+20h] [rbp-58h]
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  PVOID v20; // [rsp+40h] [rbp-38h] BYREF
  RTL_SRWLOCK *v21; // [rsp+48h] [rbp-30h] BYREF
  __int64 pExceptionObject; // [rsp+50h] [rbp-28h] BYREF
  __int128 v23; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  unsigned int v25; // [rsp+B0h] [rbp+38h] BYREF
  __int64 *p_pExceptionObject; // [rsp+B8h] [rbp+40h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+50h] BYREF

  LODWORD(p_pExceptionObject) = 0;
  wil::AcquireSRWLockExclusive(&v21, (RTL_SRWLOCK *)this + 12);
  QueryService = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 18);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         (char *)this + 144);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x195,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v5,
      v18);
  v6 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 20);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v6)(
         a2,
         &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
         &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
         (char *)this + 160);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x198,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v7,
      v18);
  v8 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 21);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v8)(
         a2,
         &SID_InputHostLayout,
         &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
         (char *)this + 168);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19B,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v9,
      v18);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::RegisterHotKeys((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this - 16));
  ListenerWindow::Start(*((ListenerWindow **)this + 11));
  v10 = (RTL_SRWLOCK *)*((_QWORD *)this + 11);
  weak_ref = winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::make_weak_ref((volatile signed __int64 *)this + 4);
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)&pExceptionObject);
    throw (std::bad_alloc *)&pExceptionObject;
  }
  *(_QWORD *)&v19 = weak_ref;
  v27 = 0LL;
  LODWORD(p_pExceptionObject) = 2;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, &v27);
  winrt::check_hresult(v12);
  winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v19);
  *(_QWORD *)&v19 = winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::OnListenerWindowMessage;
  DWORD2(v19) = 0;
  v13 = v27;
  v27 = 0LL;
  pExceptionObject = v13;
  v23 = v19;
  p_pExceptionObject = &pExceptionObject;
  v14 = operator new(0x28uLL);
  v15 = pExceptionObject;
  pExceptionObject = 0LL;
  v14[1] = v15;
  *((_OWORD *)v14 + 1) = v23;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v14 + 8) = 1;
  *v14 = &winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,_lambda_7d98499c6cec3547b2371cefd2f8849f_>::`vftable';
  p_pExceptionObject = v14;
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&pExceptionObject);
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::add(
    v10 + 4,
    &v20,
    (__int64)&p_pExceptionObject);
  *((_QWORD *)this + 31) = v20;
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&p_pExceptionObject);
  if ( v27 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v27);
  DWORD = SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
            L"LastInstallTimestamp",
            &v25);
  v17 = v25;
  if ( DWORD < 0 )
    v17 = 0;
  v25 = v17;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
}
