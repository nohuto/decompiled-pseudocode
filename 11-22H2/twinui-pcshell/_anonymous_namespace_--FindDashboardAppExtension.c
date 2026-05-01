/*
 * XREFs of _anonymous_namespace_::FindDashboardAppExtension @ 0x18023A414
 * Callers:
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x18023BE40 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x18009355C (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x18023BFA8 (_anonymous_namespace_--GetDashboardExtensionName.c)
 *     _anonymous_namespace_::GetDashboardPackageFamilyName @ 0x18023C07C (_anonymous_namespace_--GetDashboardPackageFamilyName.c)
 *     _anonymous_namespace_::IsInternalDevUnlocked @ 0x18023F27C (_anonymous_namespace_--IsInternalDevUnlocked.c)
 *     ?PackageFamilyName@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension2@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180240504 (-PackageFamilyName@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension2@UAppExtens.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??D?$fast_iterator@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@XZ @ 0x18045ACD0 (--D-$fast_iterator@U-$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@.c)
 *     ?FindAll@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x18045B2FC (-FindAll@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AE.c)
 */

// Hidden C++ exception states: #wind=7
winrt::Windows::Foundation::IUnknown *__fastcall anonymous_namespace_::FindDashboardAppExtension(
        winrt::Windows::Foundation::IUnknown *this)
{
  int v2; // esi
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // r8
  char v6; // bl
  winrt::Windows::Foundation::IUnknown *v7; // rax
  __int64 v9; // [rsp+28h] [rbp-21h] BYREF
  void *v10; // [rsp+30h] [rbp-19h] BYREF
  void *v11; // [rsp+38h] [rbp-11h] BYREF
  void *v12; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-1h] BYREF
  int v14; // [rsp+50h] [rbp+7h]
  _QWORD v15[9]; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+B8h] [rbp+6Fh] BYREF
  int v17; // [rsp+C0h] [rbp+77h] BYREF
  void *v18; // [rsp+C8h] [rbp+7Fh] BYREF

  *(_QWORD *)this = 0LL;
  if ( (unsigned __int8)anonymous_namespace_::IsInternalDevUnlocked(this) )
  {
    anonymous_namespace_::GetDashboardPackageFamilyName((winrt::hstring *)&v10);
    if ( v10 )
    {
      v17 = 9;
      v15[0] = *(_QWORD *)anonymous_namespace_::GetDashboardExtensionName((winrt::hstring *)&v11);
      winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::FindAll(
        (const struct winrt::param::hstring *)&v9,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v15);
      winrt::hstring::~hstring(&v11);
      v13 = &v9;
      v2 = 0;
      v14 = 0;
      LODWORD(v16) = 0;
      v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 56LL))(v9, &v16);
      if ( v3 < 0 )
        winrt::throw_hresult((unsigned int)v3);
      while ( v2 != (_DWORD)v16 )
      {
        winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>>::operator*(
          &v13,
          &v18);
        v4 = winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension2<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>::PackageFamilyName(
               &v18,
               &v12);
        v6 = winrt::operator==(v4, (__int64)&v10, v5);
        winrt::hstring::~hstring(&v12);
        if ( v6 )
          winrt::Windows::Foundation::IUnknown::operator=(this, (winrt::Windows::Foundation::IUnknown *)&v18);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v18);
        v14 = ++v2;
      }
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v9);
    }
    winrt::hstring::~hstring(&v10);
  }
  v16 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this, &v16) )
  {
    LODWORD(v16) = 8;
    v15[0] = *(_QWORD *)anonymous_namespace_::GetDashboardExtensionName((winrt::hstring *)&v18);
    v7 = winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
           (const struct winrt::param::hstring *)&v17,
           (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v15,
           (__int64)&v16);
    winrt::Windows::Foundation::IUnknown::operator=(this, v7);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v17);
    winrt::hstring::~hstring(&v18);
  }
  return this;
}
