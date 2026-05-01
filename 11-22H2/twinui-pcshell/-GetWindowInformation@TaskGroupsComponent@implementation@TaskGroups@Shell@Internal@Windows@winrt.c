/*
 * XREFs of ?GetWindowInformation@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUTaskGroupWindowInformation@34567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180647E94
 * Callers:
 *     ?GetWindowInformation@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x180647E10 (-GetWindowInformation@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Wi.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D37B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails@@@detai.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1802E8D84 (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@23@XZ @ 0x180645DBC (--$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActiv.c)
 *     ??$call@P6A?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x180646794 (--$call@P6A-AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@AEBUIActivatio.c)
 *     ?DisplayRect@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1806477EC (-DisplayRect@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroup.c)
 */

// Hidden C++ exception states: #wind=6
__int64 **__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetWindowInformation(
        __int64 a1,
        __int64 **a2,
        unsigned int a3)
{
  HWND v3; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  signed int v8; // eax
  char v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  signed int v12; // eax
  signed int v13; // eax
  char v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rcx
  __int64 *v18; // [rsp+20h] [rbp-29h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v19)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+28h] [rbp-21h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-19h] BYREF
  __int128 v21; // [rsp+38h] [rbp-11h] BYREF
  __int128 v22; // [rsp+48h] [rbp-1h] BYREF
  __int64 *v23; // [rsp+60h] [rbp+17h]
  __int128 v24; // [rsp+68h] [rbp+1Fh] BYREF
  __int128 v25; // [rsp+78h] [rbp+2Fh] BYREF

  v3 = (HWND)a3;
  v23 = &qword_1809914C8;
  _InterlockedIncrement64(&qword_1809914C8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory>,
      &v18);
    _InterlockedDecrement64(&qword_1809914C8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1809914C8);
    v19 = _lambda_03a15210bdec9bc9667e9262e995253b_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)&v18,
      (void (__fastcall **)(__int64, __int64 *))&v19);
  }
  v20 = 0LL;
  v6 = *(__int64 **)(a1 + 136);
  v7 = *v6;
  v20 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, HWND, __int64 **))(v7 + 48))(v6, v3, &v20) < 0 || IsIconic(v3) )
  {
    v21 = 0LL;
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      &v18,
      &v21);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails>::GetImpl'::`2'::impl,
      1u,
      v14,
      v15);
    v21 = 0LL;
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::DisplayRect(
      &v18,
      &v21);
  }
  else
  {
    v24 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v20 + 128))(v20, &v24);
    if ( v8 < 0 )
      winrt::throw_hresult(v8);
    *(float *)&v22 = (float)(int)v24;
    *((float *)&v22 + 1) = (float)SDWORD1(v24);
    *((float *)&v22 + 2) = (float)(DWORD2(v24) - v24);
    *((float *)&v22 + 3) = (float)(HIDWORD(v24) - DWORD1(v24));
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      &v18,
      &v22);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails>::GetImpl'::`2'::impl,
      1u,
      v9,
      v10);
    v19 = 0LL;
    v11 = *v20;
    v19 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v11 + 80))(v20, &v19);
    if ( v12 < 0 )
      winrt::throw_hresult(v12);
    v25 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v19 + 88LL))(v19, &v25);
    if ( v13 < 0 )
      winrt::throw_hresult(v13);
    *(float *)&v21 = (float)(int)v25;
    *((float *)&v21 + 1) = (float)SDWORD1(v25);
    *((float *)&v21 + 2) = (float)(DWORD2(v25) - v25);
    *((float *)&v21 + 3) = (float)(HIDWORD(v25) - DWORD1(v25));
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::DisplayRect(
      &v18,
      &v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  }
  v16 = v18;
  v18 = 0LL;
  *a2 = v16;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  return a2;
}
