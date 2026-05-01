/*
 * XREFs of ?value@?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGBAAEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@XZ @ 0x1801D0188
 * Callers:
 *     _lambda_b5a77111c728e18e017b33cb0f4bfddb_::operator() @ 0x1801C5310 (_lambda_b5a77111c728e18e017b33cb0f4bfddb_--operator().c)
 *     _lambda_b61fe1c2b60bf875518a0bd6b3647bbb_::operator() @ 0x1801C54CC (_lambda_b61fe1c2b60bf875518a0bd6b3647bbb_--operator().c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802EBABC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 4) )
    std::_Throw_bad_optional_access();
  return a1;
}
