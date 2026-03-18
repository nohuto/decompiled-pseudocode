/*
 * XREFs of ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C0095198
 * Callers:
 *     _lambda_18e42bef8aab6193ee3628fe412f6142_::_lambda_invoker_cdecl_ @ 0x1C00160D0 (_lambda_18e42bef8aab6193ee3628fe412f6142_--_lambda_invoker_cdecl_.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C0094AA8 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C0094BD0 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     _lambda_b12a9ee524689ad3f22c234f981ca7cb_::_lambda_invoker_cdecl_ @ 0x1C0094C60 (_lambda_b12a9ee524689ad3f22c234f981ca7cb_--_lambda_invoker_cdecl_.c)
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1C0094CFC (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     _lambda_dc07bf9eeab06415d9a9c521953e95b1_::_lambda_invoker_cdecl_ @ 0x1C0095100 (_lambda_dc07bf9eeab06415d9a9c521953e95b1_--_lambda_invoker_cdecl_.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CFF84 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C01210F8 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0122140 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 */

bool __fastcall IsWindowActivateable(const struct tagWND *a1)
{
  char v2; // dl
  struct tagWND *CompositeAppFrameWindowOrSelf; // rbx

  if ( !a1 )
    return 0;
  v2 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v2 & 0x10) == 0 || (v2 & 8) != 0 )
    return 0;
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(a1);
  return (unsigned int)IsWindowHolographicForHitTest(CompositeAppFrameWindowOrSelf)
      || GetWindowCloakState(CompositeAppFrameWindowOrSelf) == 0;
}
