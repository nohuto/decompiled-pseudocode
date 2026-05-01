/*
 * XREFs of ??$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@23@XZ @ 0x18058827C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_03a15210bdec9bc9667e9262e995253b_@@CA?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@67@@Z @ 0x180587D40 (-_lambda_invoker_cdecl_@_lambda_03a15210bdec9bc9667e9262e995253b_@@CA-AUTaskGroupWindowInformati.c)
 *     ?GetWindowInformation@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUTaskGroupWindowInformation@34567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180589E04 (-GetWindowInformation@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation>(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v3; // eax
  void (__fastcall ***v4)(_QWORD, void *, _QWORD *); // rax
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)*a1 + 48LL))(
         *a1,
         &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  v4 = v6;
  if ( v6 )
  {
    v7 = 0LL;
    (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>, &v7);
    *a2 = v7;
    v4 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return a2;
}
