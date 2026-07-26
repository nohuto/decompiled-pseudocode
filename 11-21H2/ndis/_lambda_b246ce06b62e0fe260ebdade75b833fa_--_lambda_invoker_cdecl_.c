/*
 * XREFs of _lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_ @ 0x1C012E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0112D0C (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_(struct _NDIS_MINIPORT_BLOCK **a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges(&(*a1)->BindEngine, RunSynchronous, 1);
  Ndis::Initmode::DisableIfNeeded(*a1, RunSynchronous, v2);
}
