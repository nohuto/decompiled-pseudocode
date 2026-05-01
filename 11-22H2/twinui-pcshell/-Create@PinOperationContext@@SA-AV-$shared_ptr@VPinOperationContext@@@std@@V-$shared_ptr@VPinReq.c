/*
 * XREFs of ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x1806A0458
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1806A3594 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@SAX$$QEAPEBG000AEAW4PinOperationType@@@Z @ 0x18069A5D0 (--$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@.c)
 *     ??$make_shared@VPinOperationContext@@$$V@std@@YA?AV?$shared_ptr@VPinOperationContext@@@0@XZ @ 0x18069D038 (--$make_shared@VPinOperationContext@@$$V@std@@YA-AV-$shared_ptr@VPinOperationContext@@@0@XZ.c)
 *     ??4?$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18069EF94 (--4-$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetPinnablePidl@@YA?AV?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A2130 (-GetPinnablePidl@@YA-AV-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54A4 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54F0 (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall PinOperationContext::Create(__int64 **a1, _QWORD *a2, winrt::hstring *a3, winrt::hstring *a4)
{
  unsigned __int64 v8; // rdi
  void **v9; // rax
  const unsigned __int16 *v10; // rcx
  __int64 v11; // rax
  unsigned __int16 *v12; // rax
  __m128i *v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 *v16; // rdx
  const unsigned __int16 *v17; // rcx
  __int64 v18; // rax
  void *v19; // rcx
  void *v20; // rax
  __int64 *PinnablePidl; // rcx
  __int64 *v22; // rdx
  __int64 v23; // rax
  void *v24; // rcx
  void *v25; // rcx
  int *v26; // r9
  std::_Ref_count_base *v27; // rcx
  const unsigned __int16 *v29; // [rsp+30h] [rbp-49h] BYREF
  __int64 v30; // [rsp+38h] [rbp-41h]
  int v31; // [rsp+40h] [rbp-39h]
  LPVOID pv[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 **v33; // [rsp+60h] [rbp-19h] BYREF
  __int128 v34; // [rsp+70h] [rbp-9h] BYREF
  char v35[16]; // [rsp+80h] [rbp+7h] BYREF
  _QWORD *v36; // [rsp+90h] [rbp+17h] BYREF

  v33 = a1;
  v36 = a2;
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinOperationContext,>((__int64)a1);
  v31 = 1;
  std::shared_ptr<PinRequestContext>::operator=(*a1, a2);
  v8 = -1LL;
  if ( *(_QWORD *)a3 )
  {
    v10 = winrt::hstring::c_str(a3);
    v29 = v10;
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v30 = v11;
    v9 = (void **)&v29;
  }
  else
  {
    v9 = (void **)PinRequestContext::RequestorBestAvailableAppId(*a2, &v34);
  }
  std::wstring::assign((char *)*a1 + 24, *v9, _mm_srli_si128(*(__m128i *)v9, 8).m128i_u64[0]);
  v12 = (unsigned __int16 *)winrt::hstring::c_str(a4);
  do
    ++v8;
  while ( v12[v8] );
  std::wstring::assign((char *)*a1 + 56, v12, v8);
  v13 = (__m128i *)PinRequestContext::RequestorBestAvailableAppId(*a2, &v34);
  v14 = *a1;
  v15 = (__int64)(*a1 + 3);
  if ( (unsigned __int64)(*a1)[6] >= 8 )
    v15 = v14[3];
  *((_DWORD *)v14 + 4) = !std::_Traits_equal<std::char_traits<unsigned short>>(
                            v15,
                            v14[5],
                            v13->m128i_i64[0],
                            _mm_srli_si128(*v13, 8).m128i_i64[0]);
  v16 = *a1;
  v17 = (const unsigned __int16 *)(*a1 + 7);
  if ( (unsigned __int64)(*a1)[10] >= 8 )
    v17 = (const unsigned __int16 *)v16[7];
  v18 = v16[9];
  v29 = v17;
  v30 = v18;
  v19 = v16 + 3;
  if ( (unsigned __int64)v16[6] >= 8 )
    v19 = (void *)v16[3];
  v20 = (void *)v16[5];
  pv[0] = v19;
  pv[1] = v20;
  v34 = *(_OWORD *)pv;
  PinnablePidl = (__int64 *)GetPinnablePidl(pv, &v34, &v29);
  v22 = *a1;
  v23 = *PinnablePidl;
  *PinnablePidl = 0LL;
  v24 = (void *)v22[11];
  v22[11] = v23;
  if ( v24 )
    CoTaskMemFree(v24);
  v25 = pv[0];
  pv[0] = 0LL;
  if ( v25 )
    CoTaskMemFree(v25);
  pv[0] = (LPVOID)winrt::hstring::c_str(a4);
  v29 = winrt::hstring::c_str(a3);
  v36 = *(_QWORD **)PinRequestContext::RequestorBestAvailableAppId(*a2, &v34);
  v33 = *(__int64 ***)PinRequestContext::RequestorImagePath(*a2, v35);
  PinManagerTelemetry::OperationContextCreatedStandard<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,enum PinOperationType &>(
    (__int64 *)&v33,
    (__int64 *)&v36,
    (__int64 *)&v29,
    (__int64 *)pv,
    v26);
  v27 = (std::_Ref_count_base *)a2[1];
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  return a1;
}
