/*
 * XREFs of ?value@?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGBAAEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@XZ @ 0x180698FF0
 * Callers:
 *     _lambda_0c5affb431bf714a4aabb516927c6336_::operator() @ 0x180235F10 (_lambda_0c5affb431bf714a4aabb516927c6336_--operator().c)
 *     _lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::operator() @ 0x180236F2C (_lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_--operator().c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 4) )
    std::_Throw_bad_optional_access();
  return a1;
}
