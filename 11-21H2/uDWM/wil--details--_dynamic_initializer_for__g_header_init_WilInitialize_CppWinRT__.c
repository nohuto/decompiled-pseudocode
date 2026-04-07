/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_CppWinRT__ @ 0x180001180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_CppWinRT__())(wil *__hidden this, void *)
{
  __int64 (__fastcall *result)(wil *__hidden, void *); // rax

  g_pfnResultFromCaughtException_CppWinRt = (__int64)wil::details::ResultFromCaughtException_CppWinRt;
  result = wil::winrt_to_hresult;
  winrt_to_hresult_handler = (__int64)wil::winrt_to_hresult;
  return result;
}
