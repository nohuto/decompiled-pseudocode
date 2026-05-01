/*
 * XREFs of _lambda_3a3935ecbddde1d51cea1162795583a1_::_lambda_3a3935ecbddde1d51cea1162795583a1_ @ 0x18019B22C
 * Callers:
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001FF78 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *__fastcall lambda_3a3935ecbddde1d51cea1162795583a1_::_lambda_3a3935ecbddde1d51cea1162795583a1_(
        winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a1,
        const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a2,
        _QWORD *a3)
{
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(a1, a2);
  *((_QWORD *)a1 + 1) = *a3;
  return a1;
}
