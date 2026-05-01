/*
 * XREFs of ?HardwareVendorId@?$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804004CC
 * Callers:
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x180403670 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Gaming_Input_IRawGameController<winrt::Windows::Gaming::Input::IRawGameController>::HardwareVendorId(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  unsigned __int16 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v1 + 80LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
