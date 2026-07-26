/*
 * XREFs of ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C012D9C4
 * Callers:
 *     ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006B994 (-ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C001454C (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0018258 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E040 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142E8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C01161A0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167E0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C013E218 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C013E2A8 (-ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z.c)
 */

void __fastcall ndisMApplyInterfaceChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        struct _NDIS_STATUS_INDICATION *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  _UNICODE_STRING *v7; // rax
  struct _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int v9; // edx
  struct _NDIS_MINIPORT_BLOCK *v10; // rdx

  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0);
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, a2);
  ndisPowerSaveStop((__int64)a1, 11LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_InterfaceChangeInProgress)
    && (unsigned __int8)byte_1C00F5443 >= 4u )
  {
    v7 = a1 ? a1->pAdapterInstanceName : 0LL;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v6,
        0x1Cu,
        0xAEu,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        &v7->Length,
        a1);
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v6);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
  ndisPowerSaveClearStop((__int64)a1, 0xBu);
  ndisMRawIndicateStatusEx((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a1, a3);
  if ( a3->StatusCode == 1073873072 )
  {
    ndisIfUpdateCurrentMacAddressAndNotify(a1->IfBlock, (const struct _IF_PHYSICAL_ADDRESS_LH *)a3->StatusBuffer);
  }
  else if ( a3->StatusCode == 1073873073 )
  {
    IfBlock = a1->IfBlock;
    v9 = *(_DWORD *)a3->StatusBuffer;
    a1->TopFilterRestartAttributes.MtuSize = v9;
    ndisIfUpdateL2MtuSizeAndNotify(IfBlock, v9);
  }
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0);
  _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, ~a2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_InterfaceChangeInProgress)
    && (unsigned __int8)byte_1C00F5443 >= 4u
    && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v10,
      0x1Cu,
      0xAFu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      &a1->pAdapterInstanceName->Length,
      a1);
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v10);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunAsynchronous, 0);
}
