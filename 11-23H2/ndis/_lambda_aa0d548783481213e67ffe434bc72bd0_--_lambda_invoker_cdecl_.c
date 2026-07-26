/*
 * XREFs of _lambda_aa0d548783481213e67ffe434bc72bd0_::_lambda_invoker_cdecl_ @ 0x1C01394D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142A8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167A0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall lambda_aa0d548783481213e67ffe434bc72bd0_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  struct _NDIS_MINIPORT_BLOCK *v2; // rdx

  Miniport = a1->BindState.Miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&Miniport->BindEngine.m_lock, 0LL);
  Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine, v2);
  Ndis::BindEngine::ApplyBindChanges(
    &Miniport->BindEngine,
    (enum CallRunMode)(LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) != 0),
    0);
}
