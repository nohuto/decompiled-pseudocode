/*
 * XREFs of _lambda_84f420e9fd48b9ac970d52d3a20d74fc_::operator() @ 0x180198004
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_84f420e9fd48b9ac970d52d3a20d74fc___::Run @ 0x1801984D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_84f420e9fd48b9ac970d52d3a20d74fc___--Run.c)
 * Callees:
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x18000A854 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800A46A0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A47E0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180387584 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_84f420e9fd48b9ac970d52d3a20d74fc_::operator()(_BYTE *a1)
{
  int v2; // eax
  __int64 v3; // r8
  int v4; // eax
  const unsigned __int16 *v5; // rax
  const WCHAR *v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  const char *v11; // r9
  __int64 result; // rax
  const unsigned __int16 *v13; // rax
  const WCHAR *v14; // rdx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int32 *v21; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    CortanaExperienceHelpers::GetStoreCortanaAumId(&v21);
    if ( *a1 )
    {
      v19 = 0LL;
      v23 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
             v23,
             &v19);
      if ( v2 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x27D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v2,
          v16);
      v20 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
      Windows::Internal::StringReference::_ConstructorHelper(
        (Windows::Internal::StringReference *)&hstringHeader,
        CortanaStoreAppExperienceManager::s_PreLaunchActivationKey);
      v4 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
             (HSTRING)hstringHeader.Reserved.Reserved1,
             v3,
             1);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x281,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v4,
          v16);
      v5 = winrt::hstring::c_str((winrt::hstring *)&v21);
      v7 = ActivateApplicationForExperienceWithPropertySet(v5, v6, 0LL, v19, 1u, 0LL);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x289,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v7,
          v17);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    }
    else
    {
      v13 = winrt::hstring::c_str((winrt::hstring *)&v21);
      v15 = ActivateApplicationForExperienceWithPropertySet(v13, v14, 0LL, 0LL, 1u, 0LL);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x292,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v15,
          v18);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v21, v8, v9, v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x294,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v11);
  }
  return result;
}
