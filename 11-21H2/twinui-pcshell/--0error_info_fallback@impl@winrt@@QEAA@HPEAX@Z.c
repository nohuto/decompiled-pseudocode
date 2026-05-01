/*
 * XREFs of ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x1802D6580
 * Callers:
 *     ?fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z @ 0x1802D9F20 (-fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x1802DA030 (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 */

winrt::impl::error_info_fallback *__fastcall winrt::impl::error_info_fallback::error_info_fallback(
        winrt::impl::error_info_fallback *this,
        struct winrt::impl::hstring_header *a2,
        winrt::impl *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct winrt::impl::hstring_header **v7; // rax
  char v8; // bl
  struct winrt::impl::hstring_header *v9; // rcx
  struct winrt::impl::hstring_header *v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h]
  volatile signed __int32 *v13; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)this = &winrt::impl::error_info_fallback::`vftable'{for `winrt::impl::IErrorInfo'};
  *((_QWORD *)this + 1) = &winrt::impl::error_info_fallback::`vftable'{for `winrt::impl::IRestrictedErrorInfo'};
  *((_DWORD *)this + 4) = (_DWORD)a2;
  if ( a3 )
  {
    v11 = winrt::impl::duplicate_hstring(a3, a2);
    v7 = &v11;
    v8 = 1;
  }
  else
  {
    v7 = (struct winrt::impl::hstring_header **)winrt::impl::message_from_hresult(&v13, a2);
    v8 = 2;
  }
  v9 = *v7;
  *v7 = 0LL;
  *((_QWORD *)this + 3) = v9;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13, v4, v5, v6);
  }
  if ( (v8 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v11, v4, v5, v6);
  *((_DWORD *)this + 8) = 1;
  return this;
}
