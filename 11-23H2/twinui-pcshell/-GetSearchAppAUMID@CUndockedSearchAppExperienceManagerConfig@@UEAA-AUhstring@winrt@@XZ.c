/*
 * XREFs of ?GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x1800916A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplicationUserModelId@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800918B8 (-ApplicationUserModelId@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppE.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x18009355C (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1801BC6D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1801F045C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ.c)
 *     ??0hstring@winrt@@QEAA@$$QEAU01@@Z @ 0x18038CDBC (--0hstring@winrt@@QEAA@$$QEAU01@@Z.c)
 *     ?GetIdentityToUse@SearchAppIdentity@Search@Windows@@CA?AW4SearchAppIdentityToUse@123@XZ @ 0x180467B58 (-GetIdentityToUse@SearchAppIdentity@Search@Windows@@CA-AW4SearchAppIdentityToUse@123@XZ.c)
 */

// Hidden C++ exception states: #wind=8
winrt::hstring *__fastcall CUndockedSearchAppExperienceManagerConfig::GetSearchAppAUMID(__int64 a1, winrt::hstring *a2)
{
  __int64 v3; // rax
  char v4; // di
  int *v5; // rdx
  int IdentityToUse; // eax
  const unsigned __int16 *v7; // rdx
  _BYTE v9[8]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v10[8]; // [rsp+48h] [rbp-1h] BYREF
  _BYTE v11[8]; // [rsp+50h] [rbp+7h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp+Fh] BYREF
  _BYTE v13[8]; // [rsp+60h] [rbp+17h] BYREF
  _BYTE v14[8]; // [rsp+68h] [rbp+1Fh] BYREF
  _BYTE v15[8]; // [rsp+70h] [rbp+27h] BYREF
  _QWORD v16[5]; // [rsp+78h] [rbp+2Fh] BYREF
  int pvData; // [rsp+C0h] [rbp+77h] BYREF
  int v18; // [rsp+C8h] [rbp+7Fh] BYREF

  pcbData[1] = 0;
  v18 = 1;
  v16[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)v10, L"com.microsoft.windows.app.search");
  winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
    (const struct winrt::param::hstring *)v9,
    (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v16);
  winrt::hstring::~hstring((winrt::hstring *)v10);
  if ( (unsigned __int8)wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(v9) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53852258>::GetImpl'::`2'::impl) )
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
        v9,
        v11);
      v18 = 1;
      v16[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)v13, L"com.microsoft.windows.app.searchMI");
      winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
        (const struct winrt::param::hstring *)v10,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v16);
      winrt::hstring::~hstring((winrt::hstring *)v13);
      if ( (unsigned __int8)wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(v10) )
      {
        v3 = winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
               v10,
               v15);
        v4 = 1;
      }
      else
      {
        v3 = winrt::hstring::hstring((winrt::hstring *)v14, (const struct winrt::hstring *)v11);
        v4 = 2;
      }
      winrt::hstring::hstring(&v18, v3);
      if ( (v4 & 2) != 0 )
      {
        v4 &= ~2u;
        winrt::hstring::~hstring((winrt::hstring *)v14);
      }
      if ( (v4 & 1) != 0 )
        winrt::hstring::~hstring((winrt::hstring *)v15);
      pvData = 0;
      pcbData[0] = 4;
      if ( RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
             L"LaunchLowILNextTime",
             0x10u,
             0LL,
             &pvData,
             pcbData)
        || pvData != 1 )
      {
        v5 = &v18;
      }
      else
      {
        v5 = (int *)v11;
      }
      winrt::hstring::hstring(a2, v5);
      winrt::hstring::~hstring((winrt::hstring *)&v18);
      winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>(v10);
      winrt::hstring::~hstring((winrt::hstring *)v11);
    }
    else
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
        v9,
        a2);
    }
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>(v9);
  }
  else
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>(v9);
    IdentityToUse = Windows::Search::SearchAppIdentity::GetIdentityToUse();
    if ( IdentityToUse )
    {
      if ( IdentityToUse == 1 )
        v7 = L"Microsoft.Search_8wekyb3d8bbwe!CortanaUI";
      else
        v7 = L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI";
    }
    else
    {
      v7 = L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI";
    }
    winrt::hstring::hstring(a2, v7);
  }
  return a2;
}
