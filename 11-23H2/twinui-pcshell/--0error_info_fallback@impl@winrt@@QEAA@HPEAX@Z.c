/*
 * XREFs of ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x18038CC5C
 * Callers:
 *     ?fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z @ 0x1803901A0 (-fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x1803902B0 (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 */

winrt::impl::error_info_fallback *__fastcall winrt::impl::error_info_fallback::error_info_fallback(
        winrt::impl::error_info_fallback *this,
        struct winrt::impl::hstring_header *a2,
        winrt::impl *a3)
{
  struct winrt::impl::hstring_header **v4; // rax
  char v5; // bl
  struct winrt::impl::hstring_header *v6; // rcx
  struct winrt::impl::hstring_header *v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h]
  volatile signed __int32 *v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)this = &winrt::impl::error_info_fallback::`vftable'{for `winrt::impl::IErrorInfo'};
  *((_QWORD *)this + 1) = &winrt::impl::error_info_fallback::`vftable'{for `winrt::impl::IRestrictedErrorInfo'};
  *((_DWORD *)this + 4) = (_DWORD)a2;
  if ( a3 )
  {
    v8 = winrt::impl::duplicate_hstring(a3, a2, (unsigned int)a3);
    v4 = &v8;
    v5 = 1;
  }
  else
  {
    v4 = (struct winrt::impl::hstring_header **)winrt::impl::message_from_hresult(&v10, a2);
    v5 = 2;
  }
  v6 = *v4;
  *v4 = 0LL;
  *((_QWORD *)this + 3) = v6;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  }
  if ( (v5 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v8);
  *((_DWORD *)this + 8) = 1;
  return this;
}
