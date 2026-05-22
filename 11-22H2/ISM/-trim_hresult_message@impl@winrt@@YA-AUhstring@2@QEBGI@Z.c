/*
 * XREFs of ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1800AD300
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800AAEA0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x1800ACAFC (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1800F3690 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800AC680 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::impl::trim_hresult_message(
        struct winrt::impl::hstring_header **a1,
        winrt::impl *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *i; // rdi

  v3 = a3;
  for ( i = (unsigned __int16 *)((char *)a2 + 2 * a3 - 2); v3; --v3 )
  {
    if ( !(unsigned int)_o_iswspace(*i) )
      break;
    --i;
  }
  *a1 = winrt::impl::create_hstring_on_heap(a2, (winrt::impl *)v3);
  return a1;
}
