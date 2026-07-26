/*
 * XREFs of ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C011690C
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x1C011398C (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C58C (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002266C (-ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMAT.c)
 *     WPP_RECORDER_SF_LZq @ 0x1C00702D8 (WPP_RECORDER_SF_LZq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142A8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0115920 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C014B610 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 */

void __fastcall ndisMRestartMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  int v4; // edi
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  int v6; // r8d

  ndisInitializeMiniportRestartAttributes(a1, a2);
  a2->MiniportMacOptionsToPreserve = a1->MacOptions & 0x80;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Cu,
      0x12u,
      (struct _GUID *)&WPP_3780f8d1fffe30c913701ae5a436082a_Traceguids,
      a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v4 = ndisMRestartMiniportInner(a1, &a2->Attributes);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Cu,
      0x13u,
      (struct _GUID *)&WPP_3780f8d1fffe30c913701ae5a436082a_Traceguids,
      (char)a1,
      v4);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v4 )
  {
    a1->Bindings.Miniport.m_LastErrorCode = v4;
    if ( Ndis::BindState::SetBinding(&a1->Bindings.Miniport, BindingDisabled, Reason_LastRestartAttemptFailed)
      && (unsigned __int8)byte_1C00F5443 >= 4u
      && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_LZq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v5,
        v6,
        0x14u,
        (struct _GUID *)&WPP_3780f8d1fffe30c913701ae5a436082a_Traceguids,
        v4,
        &a1->pAdapterInstanceName->Length,
        a1);
    }
  }
  else
  {
    a1->Bindings.Miniport.m_actualPauseState = DatapathRunning;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v5);
}
