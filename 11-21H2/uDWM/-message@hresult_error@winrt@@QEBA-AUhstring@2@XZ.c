/*
 * XREFs of ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x180096820
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x180094D38 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 * Callees:
 *     SysStringLen_0 @ 0x180062519 (SysStringLen_0.c)
 *     WINRT_IMPL_SysFreeString @ 0x180062525 (WINRT_IMPL_SysFreeString.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x18009693C (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x180096B08 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 */

__int64 __fastcall winrt::hresult_error::message(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  UINT v5; // eax
  BSTR v6; // rdx
  BSTR v8[2]; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+60h] [rbp+20h] BYREF
  BSTR pbstr; // [rsp+70h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+78h] [rbp+38h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
LABEL_19:
    winrt::impl::message_from_hresult(a2, *(unsigned int *)(a1 + 12));
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
    v6 = pbstr;
  }
  else
  {
    v5 = SysStringLen_0(v8[0]);
    v6 = v8[0];
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
