/*
 * XREFs of ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800AE6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$wait_get@U?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@1@@Z @ 0x1800AE83C (--$wait_get@U-$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows.c)
 *     ??$as@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800AE8DC (--$as@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown.c)
 *     ??$call@P6A?AU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEBUITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@34@@Z@?$factory_cache_entry@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataSourceAdapterStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@2@AEBUITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@52@@Z@Z @ 0x1800AE944 (--$call@P6A-AU-$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Window.c)
 *     ??$call@P6A?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupDataModelStatics@23456@@Z@?$factory_cache_entry@UTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@2@AEBUITaskGroupDataModelStatics@45672@@Z@Z @ 0x1800AEAA8 (--$call@P6A-AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupDataMode.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117E20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHostBackgroundInit@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118044 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHostBackgroundInit@@@details@wil.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801A2240 (-UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?Current@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModelStatics@UITaskGroupDataModelStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B1298 (-Current@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModelStatics@UITaskGroupDataM.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B5A88 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?InitializeDataAsync@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021A924 (-InitializeDataAsync@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 (__fastcall *v8)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *); // [rsp+28h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-20h] BYREF
  char v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 12) )
  {
    if ( *((_DWORD *)this + 62) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateAltTabFilterSetting((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this - 48));
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHostBackgroundInit>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_WindowTabHostBackgroundInit>::GetImpl'::`2'::impl,
      a2);
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync((char *)this - 48, &v10);
    LOBYTE(v3) = 3;
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::GetImpl'::`2'::impl,
      v4,
      v3);
    v9[1] = &qword_18098E638;
    _InterlockedIncrement64(&qword_18098E638);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics> )
    {
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModelStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>::Current(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>,
        &v11);
      _InterlockedDecrement64(&qword_18098E638);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E638);
      v8 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>::call<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics const &)>(
        v5,
        &v11,
        &v8);
    }
    winrt::Windows::Foundation::IUnknown::operator=((char *)this + 552, &v11);
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
    v9[2] = &qword_18098E618;
    _InterlockedIncrement64(&qword_18098E618);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics> )
    {
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>,
        &v12);
      _InterlockedDecrement64(&qword_18098E618);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E618);
      v9[0] = _lambda_b934989ba8aaeba51e213f69f24a2a8d_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::call<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter> (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics const &)>(
        v6,
        &v12,
        v9);
    }
    winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>>(
      &v7,
      &v12);
    winrt::impl::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v13,
      v7);
    winrt::Windows::Foundation::IUnknown::operator=((char *)this + 560, &v13);
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  }
}
