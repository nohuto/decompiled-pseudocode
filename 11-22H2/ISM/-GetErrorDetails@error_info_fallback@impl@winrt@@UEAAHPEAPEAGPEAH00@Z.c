/*
 * XREFs of ?GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z @ 0x1800AB510
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_IMPL_SysAllocString @ 0x1800587B9 (WINRT_IMPL_SysAllocString.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AC49C (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 */

__int64 __fastcall winrt::impl::error_info_fallback::GetErrorDetails(
        winrt::impl::error_info_fallback *this,
        unsigned __int16 **a2,
        int *a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  const OLECHAR *v6; // rax
  unsigned __int16 *v7; // rax

  *a2 = 0LL;
  *a3 = *((_DWORD *)this + 2);
  *a5 = 0LL;
  v6 = winrt::hstring::c_str((winrt::impl::error_info_fallback *)((char *)this + 16));
  v7 = WINRT_IMPL_SysAllocString(v6);
  *a4 = v7;
  return v7 == 0LL ? 0x8007000E : 0;
}
