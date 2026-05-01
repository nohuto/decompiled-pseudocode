/*
 * XREFs of ??$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEAY0BD@$$CBGAEAW4SearchAppActivationMode@3456@AEBURect@Foundation@Windows@6@$$T_N@winrt@@YA?AUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@0@AEAY0BD@$$CBGAEAW4SearchAppActivationMode@2340@AEBURect@Foundation@Windows@0@$$QEA$$T$$QEA_N@Z @ 0x1803A099C
 * Callers:
 *     ?ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z @ 0x1801A731C (-ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z @ 0x1800F4970 (--0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z @ 0x1800FA4B8 (--0-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@AEBUhstring@2@AEBW4SearchAppActivationMode@Shell@UI@WindowsUdk@2@AEBU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@2@AEBUDeferralCompletedHandler@9Windows@2@_N0AEBUSearchAppHost@5672@@Z @ 0x18019B730 (--0-$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@imp.c)
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

// Hidden C++ exception states: #wind=11
volatile signed __int32 *winrt::make<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,unsigned short const (&)[19],enum winrt::WindowsUdk::UI::Shell::SearchAppActivationMode &,winrt::Windows::Foundation::Rect const &,std::nullptr_t,bool>(
        volatile signed __int32 *a1,
        void (__fastcall **a2)(_QWORD, __int64 *, __int64 *),
        __int64 a3,
        __int64 a4,
        ...)
{
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF
  volatile signed __int32 *v17; // [rsp+90h] [rbp+30h] BYREF
  void (__fastcall **v18)(_QWORD, __int64 *, __int64 *); // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+50h] BYREF

  va_start(va, a4);
  v18 = a2;
  v17 = a1;
  v7 = operator new(0x98uLL);
  v16[2] = v7;
  winrt::WindowsUdk::UI::Shell::TaskbarLayout::TaskbarLayout(v16);
  winrt::hstring::hstring((winrt::hstring *)va, &LocaleName);
  v16[1] = 0LL;
  winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>::IReference<winrt::Windows::Foundation::Rect>(
    &v18,
    a4);
  winrt::hstring::hstring((winrt::hstring *)&v17, L"TaskBarSearchHover");
  v8 = winrt::impl::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>(
         v7,
         (__int64)&v17,
         a3,
         (__int64)&v18);
  if ( v8 )
    v8 += 2;
  *(_QWORD *)a1 = v8;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v17, v9, v10, v11);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)va, v12, v13, v14);
  winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal((winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal *)v16);
  return a1;
}
