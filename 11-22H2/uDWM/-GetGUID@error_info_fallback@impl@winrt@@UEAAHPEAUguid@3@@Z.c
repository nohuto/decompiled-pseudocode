/*
 * XREFs of ?GetGUID@error_info_fallback@impl@winrt@@UEAAHPEAUguid@3@@Z @ 0x180058FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::error_info_fallback::GetGUID(
        winrt::impl::error_info_fallback *this,
        struct winrt::guid *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = 0LL;
  return result;
}
