/*
 * XREFs of ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1800CB0A0
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1800CA080 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 * Callees:
 *     WINRT_IMPL_SysFreeString @ 0x18004C24D (WINRT_IMPL_SysFreeString.c)
 *     SysStringLen_0 @ 0x18004C271 (SysStringLen_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x180083460 (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x180083C84 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::hresult_error::message(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  __int64 v4; // rcx
  UINT v5; // eax
  winrt::impl *v6; // rdx
  BSTR v8[2]; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+60h] [rbp+20h] BYREF
  BSTR pbstr; // [rsp+70h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+78h] [rbp+38h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
LABEL_19:
    winrt::impl::message_from_hresult((__int64)a2, *(_DWORD *)(a1 + 12));
    return a2;
  }
  v9 = 0;
  v8[0] = 0LL;
  pbstr = 0LL;
  bstrString = 0LL;
  if ( (*(unsigned int (__fastcall **)(__int64, BSTR *, int *, BSTR *, BSTR *))(*(_QWORD *)v4 + 24LL))(
         v4,
         v8,
         &v9,
         &pbstr,
         &bstrString)
    || v9 != *(_DWORD *)(a1 + 12) )
  {
    if ( bstrString )
    {
      WINRT_IMPL_SysFreeString(bstrString);
      bstrString = 0LL;
    }
    if ( pbstr )
    {
      WINRT_IMPL_SysFreeString(pbstr);
      pbstr = 0LL;
    }
    if ( v8[0] )
      WINRT_IMPL_SysFreeString(v8[0]);
    goto LABEL_19;
  }
  if ( pbstr )
  {
    v5 = SysStringLen_0(pbstr);
    v6 = (winrt::impl *)pbstr;
  }
  else
  {
    v5 = SysStringLen_0(v8[0]);
    v6 = (winrt::impl *)v8[0];
  }
  winrt::impl::trim_hresult_message(a2, v6, v5);
  if ( bstrString )
  {
    WINRT_IMPL_SysFreeString(bstrString);
    bstrString = 0LL;
  }
  if ( pbstr )
  {
    WINRT_IMPL_SysFreeString(pbstr);
    pbstr = 0LL;
  }
  if ( v8[0] )
    WINRT_IMPL_SysFreeString(v8[0]);
  return a2;
}
