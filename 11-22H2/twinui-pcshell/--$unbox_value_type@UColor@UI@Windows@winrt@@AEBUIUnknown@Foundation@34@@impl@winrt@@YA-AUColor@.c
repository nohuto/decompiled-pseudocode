/*
 * XREFs of ??$unbox_value_type@UColor@UI@Windows@winrt@@AEBUIUnknown@Foundation@34@@impl@winrt@@YA?AUColor@UI@Windows@1@AEBUIUnknown@Foundation@41@@Z @ 0x180658830
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18065988C (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hresult_no_interface@winrt@@QEAA@XZ @ 0x1804F9730 (--0hresult_no_interface@winrt@@QEAA@XZ.c)
 *     ??$as@U?$IReference@UColor@UI@Windows@winrt@@@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@UColor@UI@Windows@winrt@@@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180657A8C (--$as@U-$IReference@UColor@UI@Windows@winrt@@@Foundation@Windows@winrt@@Utype@-$abi@UIUnknown@Fo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::unbox_value_type<winrt::Windows::UI::Color,winrt::Windows::Foundation::IUnknown const &>(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 v1; // rdi
  signed int v2; // eax
  unsigned int v3; // ebx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  if ( !*a1 )
  {
    winrt::hresult_no_interface::hresult_no_interface((winrt::hresult_no_interface *)pExceptionObject);
    throw (winrt::hresult_no_interface *)pExceptionObject;
  }
  winrt::impl::as<winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v7,
    *a1);
  v6 = 0;
  v1 = v7;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 48LL))(v7, &v6);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  v3 = v6;
  if ( v1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  return v3;
}
