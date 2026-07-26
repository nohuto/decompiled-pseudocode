/*
 * XREFs of ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C010BB6C
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00169C8 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0030784 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisLWMStartNetworkInterface @ 0x1C0059BD0 (NdisLWMStartNetworkInterface.c)
 *     NdisWdfMiniportStarted @ 0x1C005B3A0 (NdisWdfMiniportStarted.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C005E700 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C007B0B4 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C007B738 (-ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisMiniportDeviceReadyNotification @ 0x1C0115170 (ndisMiniportDeviceReadyNotification.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0139680 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139F48 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0147590 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00342C8 (-ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LZq @ 0x1C006AF0C (WPP_RECORDER_SF_LZq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisMSetMiniportReadyForBinding(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        __int32 a3,
        enum CallRunMode a4)
{
  Ndis::BindState *p_Miniport; // rcx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  int v10; // r8d
  _UNICODE_STRING *v11; // rcx
  unsigned __int16 v12; // r9

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  p_Miniport = &a1->Bindings.Miniport;
  if ( a2 )
  {
    if ( !Ndis::BindState::SetBinding(p_Miniport, BindingEnabled, (enum NDIS_DO_NOT_BIND_REASON)a3)
      || (unsigned __int8)byte_1C00EC66B < 4u )
    {
      goto LABEL_4;
    }
    v11 = a1 ? a1->pAdapterInstanceName : 0LL;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_4;
    v12 = 250;
  }
  else
  {
    if ( !Ndis::BindState::SetBinding(p_Miniport, BindingDisabled, (enum NDIS_DO_NOT_BIND_REASON)a3)
      || (unsigned __int8)byte_1C00EC66B < 4u )
    {
      goto LABEL_4;
    }
    v11 = a1 ? a1->pAdapterInstanceName : 0LL;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_4;
    v12 = 251;
  }
  WPP_RECORDER_SF_LZq(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    (int)v9,
    v10,
    v12,
    (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
    a3,
    &v11->Length,
    a1);
LABEL_4:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v9);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, a4, 0);
  if ( a2 )
  {
    if ( (a3 & 2) != 0 )
      ndisInitialBindCompleted(a1);
  }
}
