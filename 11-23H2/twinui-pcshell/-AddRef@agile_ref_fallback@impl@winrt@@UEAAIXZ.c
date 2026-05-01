/*
 * XREFs of ?AddRef@agile_ref_fallback@impl@winrt@@UEAAIXZ @ 0x18040F450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::agile_ref_fallback::AddRef(winrt::impl::agile_ref_fallback *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 5);
}
