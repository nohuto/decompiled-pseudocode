/*
 * XREFs of ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@@Z @ 0x1800ABDB0
 * Callers:
 *     ??$make_self@UTabTipAdapter@KeyboardHosting@@PEAVTouchKeyboardExperienceManager@@PEAUIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@PEAUIDesktopKeyboardHostingPolicy@2678@@winrt@@YA?AU?$com_ptr@UTabTipAdapter@KeyboardHosting@@@0@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAPEAUIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@$$QEAPEAUIDesktopKeyboardHostingPolicy@KeyboardHosting@567@@Z @ 0x1800AB814 (--$make_self@UTabTipAdapter@KeyboardHosting@@PEAVTouchKeyboardExperienceManager@@PEAUIShellKeybo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x18008B504 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1800AC3F4 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
KeyboardHosting::TabTipAdapter *__fastcall KeyboardHosting::TabTipAdapter::TabTipAdapter(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::Internal::Shell::Text::IInputExperienceHost *a2,
        struct Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy *a3,
        struct Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy *a4)
{
  __int64 *v7; // r14
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  int v11; // eax
  HSTRING v12; // rbx
  int ActivationFactory; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  int v16; // eax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, char *); // rbx
  int v19; // eax
  HSTRING v20; // rbx
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, char *); // rdi
  int v24; // eax
  __int64 v26; // [rsp+28h] [rbp-39h] BYREF
  __int64 v27; // [rsp+30h] [rbp-31h] BYREF
  struct Windows::Internal::Shell::Text::IInputExperienceHost *v28; // [rsp+38h] [rbp-29h]
  KeyboardHosting::TabTipAdapter *v29; // [rsp+40h] [rbp-21h]
  char *v30; // [rsp+48h] [rbp-19h]
  HSTRING string; // [rsp+50h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-9h] BYREF
  HSTRING v33; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING_HEADER v34; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v28 = a2;
  v29 = this;
  *(_QWORD *)this = &Windows::Foundation::Collections::IIterable<unsigned int>::`vftable';
  *((_QWORD *)this + 1) = &winrt::impl::producers_base<winrt::immersive_shell_component,std::tuple<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,void>'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IRemoteTabTipAdapter,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable';
  v7 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = a2;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 16) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy *))(*(_QWORD *)a4 + 8LL))(a4);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 42) = 0;
  memset_0((char *)this + 176, 0, 0xC0uLL);
  *((_QWORD *)this + 46) = 0LL;
  *((_WORD *)this + 188) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 96) = 11;
  *((_WORD *)this + 194) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 11;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_WORD *)this + 218) = 0;
  *(_OWORD *)((char *)this + 440) = 0LL;
  *(_OWORD *)((char *)this + 456) = 0LL;
  *((_BYTE *)this + 476) = 0;
  *((_DWORD *)this + 120) = 0;
  *((_WORD *)this + 242) = 0;
  *((_DWORD *)this + 122) = 0;
  v30 = (char *)this + 496;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((_QWORD *)this + 62);
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  if ( !v28 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x170,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v8);
  if ( !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x171,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v8);
  if ( !a4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x172,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  v9 = CoreUICreate((char *)this + 96);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x174,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v9,
      v26);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
  v10 = CoreUIFactoryCreate((char *)this + 80);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x175,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v10,
      v26);
  v11 = SharedMessagePortRefPtr::Initialize((char *)this + 136);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x176,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v11,
      v26);
  v27 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.UI.Internal.Text.Core.CoreKeyboardManager",
         0x31u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v12 = string;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
  ActivationFactory = RoGetActivationFactory(v12, &GUID_4781e102_173f_40ee_b985_685f98a866aa, &v27);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17C,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v26);
  v14 = v27;
  v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 48LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  v16 = v15(v14, v7);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17D,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v16,
      v26);
  v17 = *v7;
  v18 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v7 + 680LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  v19 = v18(v17, (char *)this + 40);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17E,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v19,
      v26);
  v26 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.UI.Internal.Text.Core.CoreInputViewManager", 0x32u, &v34, &v33) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v20 = v33;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  v21 = RoGetActivationFactory(v20, &GUID_6fa49ca9_046b_4d5c_b942_7dbc066f6579, &v26);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x184,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v21,
      v26);
  v22 = v26;
  v23 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 48LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 6);
  v24 = v23(v22, (char *)this + 48);
  if ( v24 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x185,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v24,
      v26);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
  return this;
}
