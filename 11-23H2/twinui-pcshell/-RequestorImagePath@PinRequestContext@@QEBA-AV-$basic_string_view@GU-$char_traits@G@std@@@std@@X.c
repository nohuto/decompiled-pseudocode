/*
 * XREFs of ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54F0
 * Callers:
 *     ??R_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x18069F118 (--R_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ??R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x18069F1BC (--R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x18069F790 (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x1806A0458 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1806A06E0 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$share_ea_1806A06E0.c)
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1806A0DFC (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x1806A137C (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1806A7FD4 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall PinRequestContext::RequestorImagePath(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  _OWORD *result; // rax
  __int128 v5; // [rsp+0h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)&v5 = *(_QWORD *)(a1 + 32);
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v2 + 2 * v3) );
    *((_QWORD *)&v5 + 1) = v3;
  }
  else
  {
    v5 = 0uLL;
  }
  result = a2;
  *a2 = v5;
  return result;
}
