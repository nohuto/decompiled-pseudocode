/*
 * XREFs of ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C012DD90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142E8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0115960 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167E0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisMQueuedPromoteMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  bool v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  _UNICODE_STRING *pAdapterInstanceName; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  v2 = Ndis::BindState::SetBinding(&a1->Bindings.Miniport, BindingEnabled, Reason_SecondaryMiniport);
  pAdapterInstanceName = 0LL;
  if ( v2 && (unsigned __int8)byte_1C00F5443 >= 4u )
  {
    if ( a1 )
      pAdapterInstanceName = a1->pAdapterInstanceName;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v3,
        0x1Cu,
        0x63u,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        &pAdapterInstanceName->Length,
        a1);
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v3);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
  IoSetDeviceInterfaceState(&a1->SymbolicLinkName, 1u);
  ndisDereferenceMiniport(a1, 0x21u);
}
