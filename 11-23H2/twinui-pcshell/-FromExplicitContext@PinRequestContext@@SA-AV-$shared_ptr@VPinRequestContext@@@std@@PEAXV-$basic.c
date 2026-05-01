/*
 * XREFs of ?FromExplicitContext@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1806A11F0
 * Callers:
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A1BAC (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 * Callees:
 *     ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x180084D90 (-get@-$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z.c)
 *     ?TryGetProcessImagePath@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x180086DB0 (-TryGetProcessImagePath@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18009658C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180097B94 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180509684 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$make_shared@VPinRequestContext@@$$V@std@@YA?AV?$shared_ptr@VPinRequestContext@@@0@XZ @ 0x18069D0E0 (--$make_shared@VPinRequestContext@@$$V@std@@YA-AV-$shared_ptr@VPinRequestContext@@@0@XZ.c)
 *     ?UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ @ 0x1806A8B1C (-UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void ***__fastcall PinRequestContext::FromExplicitContext(void ***a1, __int64 a2, __int64 *a3)
{
  void **v5; // rcx
  void *v6; // rbx
  void *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF

  v17 = (__int64)a1;
  v18 = 0LL;
  TryGetProcessImagePath((LPVOID *)&v18, a2);
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinRequestContext,>((__int64)a1);
  v16 = 1;
  v5 = *a1 + 4;
  if ( v5 == (void **)&v18 )
  {
    v6 = (void *)v18;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v5,
      (void *)v18);
    v6 = 0LL;
    v18 = 0LL;
  }
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    *a3,
    a3[1]);
  v16 = 3;
  if ( *a1 == &pv )
  {
    v7 = pv;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      *a1,
      pv);
    v7 = 0LL;
    pv = 0LL;
  }
  if ( v7 )
    CoTaskMemFree(v7);
  PinRequestContext::UpdateRequestorBestAvailableAppId((PinRequestContext *)*a1);
  *((_BYTE *)*a1 + 40) = 1;
  v8 = (__int64)**a1;
  v9 = (__int64)(*a1)[4];
  v11 = (_DWORD *)wil::details::static_lazy<PinManagerTelemetry>::get(
                    v10,
                    (void (__cdecl *)())_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_)[1];
  if ( *v11 > 5u )
  {
    pv = (LPVOID)0x1000000;
    v18 = v8;
    v17 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      (__int64)v11,
      (unsigned __int8 *)dword_1808771E1,
      v12,
      v13,
      (const WCHAR **)&v17,
      (const WCHAR **)&v18,
      (__int64)&pv);
  }
  if ( v6 )
    CoTaskMemFree(v6);
  return a1;
}
