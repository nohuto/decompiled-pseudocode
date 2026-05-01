/*
 * XREFs of ?GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z @ 0x18038DBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     WINRT_IMPL_SysAllocString @ 0x1801C7E0C (WINRT_IMPL_SysAllocString.c)
 */

__int64 __fastcall winrt::impl::error_info_fallback::GetDescription(
        winrt::impl::error_info_fallback *this,
        unsigned __int16 **a2)
{
  const OLECHAR *v3; // rax
  unsigned __int16 *v4; // rax

  v3 = winrt::hstring::c_str((winrt::impl::error_info_fallback *)((char *)this + 24));
  v4 = WINRT_IMPL_SysAllocString(v3);
  *a2 = v4;
  return v4 == 0LL ? 0x8007000E : 0;
}
