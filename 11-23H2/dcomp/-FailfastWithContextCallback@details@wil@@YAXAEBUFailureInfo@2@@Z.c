/*
 * XREFs of ?FailfastWithContextCallback@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180187EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FailfastWithContextCallback(wil::details *this, const struct wil::FailureInfo *a2)
{
  __int64 v3; // rax
  BSTR v4; // [rsp+30h] [rbp-10h] BYREF
  BSTR v5; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+18h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+20h] BYREF
  BSTR bstrString; // [rsp+68h] [rbp+28h] BYREF

  v7 = 0LL;
  if ( !(unsigned int)GetRestrictedErrorInfo(&v7, a2) )
  {
    v6 = *((_DWORD *)this + 2);
    v3 = *v7;
    bstrString = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, BSTR *, unsigned int *, BSTR *, BSTR *))(v3 + 24))(
           v7,
           &v5,
           &v6,
           &v4,
           &bstrString) >= 0
      && v6 == *((_DWORD *)this + 2) )
    {
      SetRestrictedErrorInfo(v7);
      RoFailFastWithErrorContext(v6);
    }
    else
    {
      SetRestrictedErrorInfo(v7);
    }
    if ( bstrString )
      SysFreeString(bstrString);
    if ( v4 )
      SysFreeString(v4);
    if ( v5 )
      SysFreeString(v5);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
}
