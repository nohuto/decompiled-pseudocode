/*
 * XREFs of ??0MiniSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z @ 0x18005F0CC
 * Callers:
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VIMiniSearchAppPositioner@@U?$default_delete@VIMiniSearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005EFD8 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VIMiniSearchAppPositioner@@U-$default_delete@VIMin.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F628 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     ??$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@WindowsUdk@winrt@@UIPackageManagerStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@Z @ 0x180067020 (--$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@-$factory_cache_entry@UPackageManager@De.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?FindAssetReferencePath@?$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPackageManagerStatics@Deployment@Management@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@AEBU4param@3@@Z @ 0x1800FBFC4 (-FindAssetReferencePath@-$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPack.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1800FC0F8 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

// Hidden C++ exception states: #wind=4
MiniSearchAppPositionerConfig *__fastcall MiniSearchAppPositionerConfig::MiniSearchAppPositionerConfig(
        MiniSearchAppPositionerConfig *this,
        struct IServiceProvider *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // bl
  char v8; // bl
  bool v9; // si
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+90h] [rbp+38h] BYREF
  __int64 v14; // [rsp+98h] [rbp+40h] BYREF

  *(_QWORD *)this = &MiniSearchAppPositionerConfig::`vftable';
  v3 = (__int64 *)((char *)this + 8);
  *v3 = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v3);
  *((_BYTE *)this + 16) = 0;
  LOBYTE(v4) = 3;
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
    v5,
    v4);
  v14 = 0LL;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v12, L"TaskbarExistenceCheck", 0x15uLL);
  v11[0] = v12;
  v11[1] = &qword_1807B4208;
  _InterlockedIncrement64(&qword_1807B4208);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_Management_Deployment_IPackageManagerStatics<winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::FindAssetReferencePath(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>,
      &v13,
      v12);
    _InterlockedDecrement64(&qword_1807B4208);
    v7 = 25;
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B4208);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::call<_lambda_720477a61d445079ad03f3ff7eed504d_ &>(
      v6,
      &v13,
      v11);
    v7 = 9;
  }
  v8 = v7 | 6;
  v9 = (unsigned __int8)winrt::operator==(&v13, &v14) == 0;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  }
  if ( (v8 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  if ( v9 )
    *((_BYTE *)this + 16) = 1;
  return this;
}
