/*
 * XREFs of ?GetWindowInformation@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUTaskGroupWindowInformation@34567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180589E04
 * Callers:
 *     ?GetWindowInformation@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x180589D80 (-GetWindowInformation@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Wi.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@23@XZ @ 0x18058827C (--$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActiv.c)
 *     ??$call@P6A?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@2@$$QEAP6A?AU345672@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x1805887FC (--$call@P6A-AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@AEBUIActivatio.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBURect@Foundation@Windows@3@@Z @ 0x18058B20C (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetWindowInformation(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  HWND v3; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF

  v3 = (HWND)a3;
  v14 = &qword_1807B63E8;
  _InterlockedIncrement64(&qword_1807B63E8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory>,
      &v11);
    _InterlockedDecrement64(&qword_1807B63E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B63E8);
    *(_QWORD *)&v15 = _lambda_03a15210bdec9bc9667e9262e995253b_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)&v11,
      (void (__fastcall **)(__int64, __int64 *))&v15);
  }
  v12 = 0LL;
  v6 = *(__int64 **)(a1 + 136);
  v7 = *v6;
  v12 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, HWND, __int64 *))(v7 + 48))(v6, v3, &v12) < 0 || IsIconic(v3) )
  {
    v13 = 0LL;
  }
  else
  {
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 128LL))(v12, &v15);
    if ( v8 < 0 )
      winrt::throw_hresult(v8);
    *(float *)&v13 = (float)(int)v15;
    *((float *)&v13 + 1) = (float)SDWORD1(v15);
    *((float *)&v13 + 2) = (float)(DWORD2(v15) - v15);
    *((float *)&v13 + 3) = (float)(HIDWORD(v15) - DWORD1(v15));
  }
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
    &v11,
    &v13);
  v9 = v11;
  v11 = 0LL;
  *a2 = v9;
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  return a2;
}
