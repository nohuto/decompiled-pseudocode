/*
 * XREFs of ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x18022BE82
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x18022BE2A (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 * Callees:
 *     SysStringLen_0 @ 0x18018F6D3 (SysStringLen_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18022A1B6 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x18022A1DE (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x1802DA030 (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::hresult_error::message(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  __int64 v4; // rcx
  UINT v5; // eax
  winrt::impl *v6; // rdx
  OLECHAR *v8[2]; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+60h] [rbp+20h] BYREF
  BSTR pbstr; // [rsp+70h] [rbp+30h] BYREF
  BSTR v11; // [rsp+78h] [rbp+38h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    goto LABEL_9;
  v9 = 0;
  v11 = 0LL;
  pbstr = 0LL;
  v8[0] = 0LL;
  if ( (*(unsigned int (__fastcall **)(__int64, BSTR *, int *, BSTR *, OLECHAR **))(*(_QWORD *)v4 + 24LL))(
         v4,
         &v11,
         &v9,
         &pbstr,
         v8)
    || v9 != *(_DWORD *)(a1 + 12) )
  {
    winrt::handle_type<winrt::impl::bstr_traits>::close(v8);
    winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
    winrt::handle_type<winrt::impl::bstr_traits>::close(&v11);
LABEL_9:
    winrt::impl::message_from_hresult(a2, *(unsigned int *)(a1 + 12));
    return a2;
  }
  if ( pbstr )
  {
    v5 = SysStringLen_0(pbstr);
    v6 = (winrt::impl *)pbstr;
  }
  else
  {
    v5 = SysStringLen_0(v11);
    v6 = (winrt::impl *)v11;
  }
  winrt::impl::trim_hresult_message(a2, v6, v5);
  winrt::handle_type<winrt::impl::bstr_traits>::close(v8);
  winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
  winrt::handle_type<winrt::impl::bstr_traits>::close(&v11);
  return a2;
}
