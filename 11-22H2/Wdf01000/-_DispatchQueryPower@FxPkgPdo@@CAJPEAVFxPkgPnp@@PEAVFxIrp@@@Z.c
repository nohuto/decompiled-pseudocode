/*
 * XREFs of ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0080950
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0071FB0 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C00744C8 (-PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C007451C (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPdo::_DispatchQueryPower(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned int Power; // r8d
  __int64 v5; // r9

  Power = 0;
  if ( !Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options
    && FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
  {
    Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(This, *(_DWORD *)(v5 + 24));
  }
  return FxPkgPnp::CompletePowerRequest(This, Irp, Power);
}
