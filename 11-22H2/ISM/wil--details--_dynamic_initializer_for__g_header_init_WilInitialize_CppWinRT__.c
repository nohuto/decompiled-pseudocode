/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_CppWinRT__ @ 0x1800020D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_CppWinRT__()
{
  void *result; // rax

  g_pfnResultFromCaughtException_CppWinRt = (__int64)wil::details::ResultFromCaughtException_CppWinRt;
  winrt_to_hresult_handler = (__int64)wil::winrt_to_hresult;
  result = &wil::winrt_throw_hresult;
  winrt_throw_hresult_handler = (__int64)&wil::winrt_throw_hresult;
  return result;
}
