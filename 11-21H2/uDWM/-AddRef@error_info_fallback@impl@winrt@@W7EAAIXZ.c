/*
 * XREFs of ?AddRef@error_info_fallback@impl@winrt@@W7EAAIXZ @ 0x180063880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall winrt::impl::error_info_fallback::AddRef(__int64 a1)
{
  return winrt::impl::error_info_fallback::AddRef((winrt::impl::error_info_fallback *)(a1 - 8));
}
