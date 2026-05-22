/*
 * XREFs of ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x1800814E0
 * Callers:
 *     ?fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z @ 0x180083290 (-fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180082F9C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180082FE8 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x180083460 (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 */

winrt::impl::error_info_fallback *__fastcall winrt::impl::error_info_fallback::error_info_fallback(
        winrt::impl::error_info_fallback *this,
        int a2,
        struct winrt::impl::hstring_header *hstring_on_heap)
{
  struct winrt::impl::hstring_header **v4; // rax
  char v5; // bl
  char v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h]
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)this = &winrt::impl::error_info_fallback::`vftable'{for `winrt::impl::IErrorInfo'};
  *((_QWORD *)this + 1) = &winrt::impl::error_info_fallback::`vftable'{for `winrt::impl::IRestrictedErrorInfo'};
  *((_DWORD *)this + 4) = a2;
  if ( hstring_on_heap )
  {
    if ( (*(_BYTE *)hstring_on_heap & 1) != 0 )
      hstring_on_heap = winrt::impl::create_hstring_on_heap(
                          *((winrt::impl **)hstring_on_heap + 2),
                          (winrt::impl *)*((unsigned int *)hstring_on_heap + 1),
                          (unsigned int)hstring_on_heap);
    else
      _InterlockedExchangeAdd((volatile signed __int32 *)hstring_on_heap + 6, 1u);
    v4 = (struct winrt::impl::hstring_header **)&v9;
    v5 = 1;
  }
  else
  {
    v4 = (struct winrt::impl::hstring_header **)winrt::impl::message_from_hresult(&v7);
    v5 = 2;
    hstring_on_heap = *v4;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 3) = hstring_on_heap;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  }
  if ( (v5 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  *((_DWORD *)this + 8) = 1;
  return this;
}
