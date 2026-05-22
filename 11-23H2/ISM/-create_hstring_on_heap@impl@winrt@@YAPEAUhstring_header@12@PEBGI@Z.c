/*
 * XREFs of ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x18009A0A0
 * Callers:
 *     ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x180098758 (--0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x18009AD20 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 * Callees:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x18009A690 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     memcpy_s_0 @ 0x18009AD94 (memcpy_s_0.c)
 */

struct winrt::impl::hstring_header *__fastcall winrt::impl::create_hstring_on_heap(winrt::impl *this, winrt::impl *a2)
{
  __int64 v2; // rdi
  struct winrt::impl::shared_hstring_header *v5; // rbx

  v2 = (unsigned int)a2;
  if ( !(_DWORD)a2 )
    return 0LL;
  v5 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)(unsigned int)a2, (unsigned int)a2);
  memcpy_s_0((char *)v5 + 28, 2 * v2, this, 2 * v2);
  return v5;
}
