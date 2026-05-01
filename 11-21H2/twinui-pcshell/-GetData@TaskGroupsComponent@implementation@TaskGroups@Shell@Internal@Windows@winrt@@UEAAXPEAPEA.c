/*
 * XREFs of ?GetData@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAPEAXPEA_J0@Z @ 0x1805896D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDataModel@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@3@XZ @ 0x180064790 (-CreateDataModel@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvi.c)
 *     ?CreateManager@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTaskGroupManager@TaskGroups@Shell@Internal@Windows@3@AEBUTaskGroupDataModel@56783@AEBUITaskGroupHost@56783@@Z @ 0x1800647E4 (-CreateManager@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvide.c)
 *     ??$call@P6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProviderStatics@23456@@Z@?$factory_cache_entry@UTaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupProviderStatics@23456@@impl@winrt@@QEAA?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@2@$$QEAP6A?AU345672@AEBUITaskGroupProviderStatics@45672@@Z@Z @ 0x180067C38 (--$call@P6A-AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProvider.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetData(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this,
        void **a2,
        __int64 *a3,
        void **a4)
{
  signed int v7; // eax
  void *v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall *v9)(__int64, __int64); // [rsp+28h] [rbp-18h] BYREF
  void *v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF

  *a2 = this;
  _InterlockedIncrement64(&qword_1807B42D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics> )
  {
    v12 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>
                                                       + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>,
           &v12);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    v11 = v12;
    _InterlockedDecrement64(&qword_1807B42D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B42D8);
    v9 = _lambda_34d03d9a202a7fc782dd640c0005da4a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::call<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics const &)>(
      0LL,
      (__int64)&v11,
      (void (__fastcall **)(__int64, __int64 *))&v9);
  }
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider>::CreateDataModel(
    &v11,
    &v8);
  v9 = (__int64 (__fastcall *)(__int64, __int64))((char *)this + 24);
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider>::CreateManager(
    &v11,
    &v10,
    &v8,
    &v9);
  *a3 = -44219213LL;
  *a4 = v8;
  a3[2] = -22109370LL;
  a4[2] = v10;
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
}
