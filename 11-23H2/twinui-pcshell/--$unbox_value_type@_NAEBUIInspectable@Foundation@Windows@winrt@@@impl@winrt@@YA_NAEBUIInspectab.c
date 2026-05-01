/*
 * XREFs of ??$unbox_value_type@_NAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1806993F0
 * Callers:
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1806994E4 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     ?GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1806995D0 (-GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hresult_no_interface@winrt@@QEAA@XZ @ 0x1804F9730 (--0hresult_no_interface@winrt@@QEAA@XZ.c)
 *     ??$as@U?$IReference@_N@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@_N@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1806990F8 (--$as@U-$IReference@_N@Foundation@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@.c)
 */

char __fastcall winrt::impl::unbox_value_type<bool,winrt::Windows::Foundation::IInspectable const &>(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 v1; // rbx
  signed int v2; // eax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  if ( !*a1 )
  {
    winrt::hresult_no_interface::hresult_no_interface((winrt::hresult_no_interface *)pExceptionObject);
    throw (winrt::hresult_no_interface *)pExceptionObject;
  }
  winrt::impl::as<winrt::Windows::Foundation::IReference<bool>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v6,
    *a1);
  v5 = 0;
  v1 = v6;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, &v5);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  if ( v1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return v5;
}
