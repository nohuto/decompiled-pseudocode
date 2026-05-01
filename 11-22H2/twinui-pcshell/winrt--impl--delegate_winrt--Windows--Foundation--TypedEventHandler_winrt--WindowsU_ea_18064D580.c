/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs___lambda_81777c60ccc5db889236df1644364211___::Invoke @ 0x18064D580
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_81777c60ccc5db889236df1644364211_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const__winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs_const__ @ 0x18064C4FC (_lambda_81777c60ccc5db889236df1644364211_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs___lambda_81777c60ccc5db889236df1644364211___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = a1 + 8;
  try
  {
    lambda_81777c60ccc5db889236df1644364211_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const__winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs_const__(
      v3,
      a2,
      (const struct winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
