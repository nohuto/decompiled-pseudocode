/*
 * XREFs of _lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_::_lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_ @ 0x18019B304
 * Callers:
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001FF78 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *__fastcall lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_::_lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_(
        winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a1,
        const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(a1, a2);
  *((_QWORD *)a1 + 1) = *a3;
  *((_QWORD *)a1 + 2) = *a4;
  return a1;
}
