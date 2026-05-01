/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@ULogoCandidateWithStream@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805E5A98
 * Callers:
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@ULogoCandidateWithStream@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1805E5B40 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@ULogoCandidateWithStream@StartScreen@UI@Window.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@ULogoCandidateWithStream@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@ULogoCandidateWithStream@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@XZ @ 0x1805E2E7C (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@ULogoCandidateWithSt.c)
 */

_QWORD *__fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::LogoCandidateWithStream>>::await_resume(
        __int64 a1,
        _QWORD *a2)
{
  signed int v4; // ecx
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = *(_DWORD *)(a1 + 20);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::LogoCandidateWithStream>,winrt::WindowsUdk::UI::StartScreen::LogoCandidateWithStream>::GetResults(
    *(_QWORD **)(a1 + 8),
    a2);
  return a2;
}
