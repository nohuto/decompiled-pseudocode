/*
 * XREFs of ??0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x1801110E8
 * Callers:
 *     ??$make_self@VSnapFlyoutHost@@PEAUIPrivilegedArrangementOperations@@@winrt@@YA?AU?$com_ptr@VSnapFlyoutHost@@@0@$$QEAPEAUIPrivilegedArrangementOperations@@@Z @ 0x180110FAC (--$make_self@VSnapFlyoutHost@@PEAUIPrivilegedArrangementOperations@@@winrt@@YA-AU-$com_ptr@VSnap.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800A6C70 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?make_weak_ref@?$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801113CC (-make_weak_ref@-$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U1.c)
 *     ?add@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@2@@Z @ 0x18011149C (-add@-$event@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation.c)
 *     ??0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x180111728 (--0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_057b330fc7f4aad09d5892332e220aec___ @ 0x1802254A8 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--Wi.c)
 *     _lambda_f7708ede42cbb90dfb878b61b26817f2_::_lambda_f7708ede42cbb90dfb878b61b26817f2_ @ 0x180225678 (_lambda_f7708ede42cbb90dfb878b61b26817f2_--_lambda_f7708ede42cbb90dfb878b61b26817f2_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x18038CC34 (--0bad_alloc@std@@QEAA@XZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18048D96C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=17
SnapFlyoutHost *__fastcall SnapFlyoutHost::SnapFlyoutHost(
        SnapFlyoutHost *this,
        struct IPrivilegedArrangementOperations *a2)
{
  __int64 *v4; // rdi
  _QWORD *v5; // rbx
  size_t size_of; // rax
  _QWORD *v7; // rax
  wil::details *Event; // rbx
  const char *v9; // r9
  WindowDragInputProvider *v10; // rbx
  __int64 v11; // rbx
  __int64 weak_ref; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v22; // [rsp+B8h] [rbp+58h] BYREF

  *((_QWORD *)this + 2) = &winrt::impl::produce<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<SnapFlyoutHost>::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v4 = (__int64 *)((char *)this + 112);
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v5 = (_QWORD *)((char *)this + 144);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *v5 = v7;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x1817,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v9);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 10,
    Event);
  v10 = (WindowDragInputProvider *)operator new(0x68uLL);
  WindowDragInputProvider::WindowDragInputProvider(v10, a2);
  *(_QWORD *)v10 = &WindowDragInputProvider::`vftable';
  v17 = (__int64)v10;
  if ( v4 == &v17 )
  {
    if ( v10 )
      winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v17);
  }
  else
  {
    if ( *v4 )
      winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(v4);
    *v4 = (__int64)v10;
  }
  v11 = *v4;
  weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::make_weak_ref(this);
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v17 = weak_ref;
  v22 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, &v22);
  if ( v13 < 0 )
    winrt::throw_hresult((unsigned int)v13);
  winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v17);
  v14 = lambda_f7708ede42cbb90dfb878b61b26817f2_::_lambda_f7708ede42cbb90dfb878b61b26817f2_(v18, &v22);
  winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_057b330fc7f4aad09d5892332e220aec___(
    &v16,
    v14);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::add(
    v11 + 64,
    v19,
    &v16);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( v22 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v22);
  return this;
}
