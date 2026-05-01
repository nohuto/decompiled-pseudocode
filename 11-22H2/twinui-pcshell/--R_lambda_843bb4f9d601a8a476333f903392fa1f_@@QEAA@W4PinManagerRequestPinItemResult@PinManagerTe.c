/*
 * XREFs of ??R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x18069F1BC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 * Callees:
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54A4 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54F0 (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     ?SetStopResult@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXJPEAJ@Z @ 0x1806A569C (-SetStopResult@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflecto.c)
 *     ?Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1806A63D8 (-Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@.c)
 */

__int64 __fastcall _lambda_843bb4f9d601a8a476333f903392fa1f_::operator()(_QWORD *a1, int a2, unsigned int a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // rbp
  LPCWSTR *v8; // rax
  LPWSTR FileNameW; // rdi
  __int64 v10; // rbx
  _BYTE v12[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1 + 2;
  v5 = a1 + 6;
  if ( a1[5] >= 8uLL )
    v3 = (_QWORD *)*v3;
  v8 = (LPCWSTR *)PinRequestContext::RequestorImagePath(*a1, v12);
  FileNameW = PathFindFileNameW(*v8);
  v10 = *(_QWORD *)PinRequestContext::RequestorBestAvailableAppId(*a1, v13);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
    v5,
    a3);
  return PinManagerTelemetry::PinManagerRequestPinItem::Stop(v5, v10, FileNameW, v3, a2);
}
