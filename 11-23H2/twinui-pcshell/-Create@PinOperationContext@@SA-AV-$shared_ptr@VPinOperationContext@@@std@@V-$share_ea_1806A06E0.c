/*
 * XREFs of ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1806A06E0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 * Callees:
 *     ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x180084D90 (-get@-$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180509684 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$make_shared@VPinOperationContext@@$$V@std@@YA?AV?$shared_ptr@VPinOperationContext@@@0@XZ @ 0x18069D038 (--$make_shared@VPinOperationContext@@$$V@std@@YA-AV-$shared_ptr@VPinOperationContext@@@0@XZ.c)
 *     ??4?$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18069EF94 (--4-$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54A4 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54F0 (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall PinOperationContext::Create(__int64 **a1, _QWORD *a2, const ITEMIDLIST *a3, void **a4)
{
  __int64 *v8; // rbx
  LPITEMIDLIST v9; // rax
  void *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  std::_Ref_count_base *v17; // rcx
  __int64 v19; // [rsp+48h] [rbp-21h] BYREF
  __int64 v20; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v21[16]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+78h] [rbp+Fh] BYREF

  v19 = (__int64)a1;
  v23 = (__int64)a2;
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinOperationContext,>((__int64)a1);
  std::shared_ptr<PinRequestContext>::operator=(*a1, a2);
  *((_DWORD *)*a1 + 4) = 2;
  v8 = *a1;
  v9 = ILClone(a3);
  v10 = (void *)v8[11];
  v8[11] = (__int64)v9;
  if ( v10 )
    CoTaskMemFree(v10);
  std::wstring::assign((char *)*a1 + 24, *a4, _mm_srli_si128(*(__m128i *)a4, 8).m128i_u64[0]);
  v11 = *(_QWORD *)PinRequestContext::RequestorBestAvailableAppId(*a2, v21);
  v12 = *(_QWORD *)PinRequestContext::RequestorImagePath(*a2, v22);
  v14 = (_DWORD *)wil::details::static_lazy<PinManagerTelemetry>::get(
                    v13,
                    (void (__cdecl *)())_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_)[1];
  if ( *v14 > 5u )
  {
    v20 = 0x1000000LL;
    v23 = v11;
    v19 = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      (__int64)v14,
      (unsigned __int8 *)dword_1808770D0,
      v15,
      v16,
      (const WCHAR **)&v19,
      (const WCHAR **)&v23,
      (__int64)&v20);
  }
  v17 = (std::_Ref_count_base *)a2[1];
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  return a1;
}
