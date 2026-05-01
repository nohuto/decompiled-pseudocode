/*
 * XREFs of ?SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z @ 0x18004CD28
 * Callers:
 *     ?SupportsSuspendOnClose@CortanaStoreAppExperienceManager@@UEAAJPEBGPEAH@Z @ 0x18004CAB0 (-SupportsSuspendOnClose@CortanaStoreAppExperienceManager@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@5@@impl@winrt@@QEBA@I@Z @ 0x18004CE68 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UAppExtension@AppExte.c)
 *     ?FindAll@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x18004CEC8 (-FindAll@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtension.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?ApplicationUserModelId@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800918B8 (-ApplicationUserModelId@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppE.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@Z @ 0x18045AAE8 (--$call@AEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall ConversationalAgentHelpers::SupportsSuspendOnClose(
        ConversationalAgentHelpers *this,
        const struct winrt::hstring *a2)
{
  char v3; // si
  __int64 v4; // rcx
  unsigned int v5; // r14d
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  char v9; // di
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-40h]
  _QWORD v14[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v15[40]; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+A8h] [rbp+38h] BYREF
  int v17; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+48h] BYREF

  v3 = 1;
  v16 = 1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v15,
    L"com.microsoft.windows.app.conversationalAgent.supportSuspendOnClose",
    0x43uLL);
  v14[0] = v15;
  v14[1] = &v16;
  v13 = &qword_18098E268;
  _InterlockedAdd64(&qword_18098E268, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::FindAll(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
      &v11,
      v15,
      &v16);
    _InterlockedDecrement64(&qword_18098E268);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E268);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6efd2761bda3320a8aa70aa0ac08757d_ &>(
      v4,
      &v11,
      v14);
  }
  v5 = 0;
  v17 = 0;
  v6 = v11;
  v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 56LL))(v11, &v17);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  while ( 1 )
  {
    if ( v5 == v17 )
    {
      v3 = 0;
      goto LABEL_10;
    }
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>,winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>::GetAt(
      &v11,
      &v18,
      v5);
    v8 = winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
           &v18,
           v12);
    v9 = winrt::operator==(v8, this);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v12);
    if ( v9 )
      break;
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    ++v5;
  }
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
LABEL_10:
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  return v3;
}
