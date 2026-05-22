/*
 * XREFs of ?AddRef@error_info_fallback@impl@winrt@@UEAAIXZ @ 0x180081B70
 * Callers:
 *     ?AddRef@error_info_fallback@impl@winrt@@W7EAAIXZ @ 0x18004EB60 (-AddRef@error_info_fallback@impl@winrt@@W7EAAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::error_info_fallback::AddRef(winrt::impl::error_info_fallback *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
