/*
 * XREFs of ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0147590
 * Callers:
 *     ?ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005900C (-ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C0059490 (NdisIMDeInitializeDeviceInstance.c)
 *     ?ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007A484 (-ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisResetEvent @ 0x1C00088B0 (NdisResetEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001B880 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001DD6C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x1C0034420 (-ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_ql @ 0x1C005BB6C (WPP_RECORDER_SF_ql_ea_1C005BB6C.c)
 *     ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00648D4 (-ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00657A8 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065B74 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00703BC (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00715D8 (-ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C5A8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C010BB6C (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120B38 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012EE78 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisPnPRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  char v3; // r15
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  KIRQL v6; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rsi
  _UNICODE_STRING *pAdapterInstanceName; // rdx
  unsigned int v9; // r8d
  PVOID v10; // rsi
  unsigned __int16 *v11; // rcx
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  PVOID WnodeEventItem; // [rsp+58h] [rbp-B0h] BYREF
  char v16[160]; // [rsp+68h] [rbp-A0h] BYREF
  char v17; // [rsp+108h] [rbp+0h] BYREF

  v3 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x5Cu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  DriverHandle = a1->DriverHandle;
  if ( DriverHandle )
  {
    if ( (DriverHandle->Flags & 1) != 0 )
    {
      ndisWaitForKernelObject(&DriverHandle->IMStartRemoveMutex);
      v3 = 1;
      DriverHandle->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
    }
    ndisCancelWaitWake(a1);
    v6 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
    for ( i = DriverHandle->MiniportQueue; i && i != a1; i = i->NextMiniport )
      ;
    KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v6);
    if ( i != a1 || a1->Ref.Closing == 1 )
    {
      a1->Ref.Closing = 1;
    }
    else
    {
      ndisReferenceDriver(DriverHandle, 1u);
      NdisResetEvent(&a1->OpenReadyEvent);
      pAdapterInstanceName = a1->pAdapterInstanceName;
      if ( pAdapterInstanceName )
      {
        v9 = a1->MiniportName.Length + 2;
        WnodeEventItem = 0LL;
        ndisSetupWmiNode(
          a1,
          pAdapterInstanceName,
          v9,
          (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL,
          (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
        v10 = WnodeEventItem;
        if ( WnodeEventItem )
        {
          v11 = (unsigned __int16 *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
          *v11 = a1->MiniportName.Length;
          memmove(v11 + 1, a1->MiniportName.Buffer, a1->MiniportName.Length);
          if ( IoWMIWriteEvent(v10) < 0 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0x12u,
                0x5Du,
                (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids);
            if ( (byte_1C00EE581 & 0x10) != 0 )
              McTemplateK0jqxd_EtwWriteTransfer();
            ExFreePoolWithTag(v10, 0);
          }
        }
      }
      Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
      if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_RemovingMiniport) )
      {
        memset(v16, 0, sizeof(v16));
        if ( (unsigned __int8)byte_1C00EC66B >= 4u )
        {
          ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v16);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v12,
              0x1Cu,
              0x5Eu,
              (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
              *(unsigned __int16 **)&v16[8],
              *(_QWORD *)v16);
        }
      }
      Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v12);
      Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
      SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
      if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 5) == 5 )
        ndisIovTeardownVf(a1);
      ndisMSetMiniportReadyForBinding(a1, 0, 4096, RunSynchronous);
      if ( (a1->PnPFlags & 0x8000000) != 0 )
        ndisIMDeleteIfStackEntry(a1);
      ndisIovDeleteDefaultNicSwitch(a1);
      ndisMHaltMiniport(a1);
      ndisMCleanupMiniportBlockOnStop(a1);
      ndisDereferenceDriver(DriverHandle, 0, 1u);
      *(_QWORD *)&DestinationString.Length = 0x1000000LL;
      DestinationString.Buffer = (wchar_t *)&v17;
      RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
      if ( RtlAppendUnicodeStringToString(&DestinationString, &a1->BaseName) >= 0 )
        IoDeleteSymbolicLink(&DestinationString);
    }
    if ( v3 == 1 )
    {
      DriverHandle->IMStartRemoveMutexOwnerThread = 0LL;
      KeReleaseMutex(&DriverHandle->IMStartRemoveMutex, 0);
    }
  }
  if ( a2 )
    ndisPnPCompleteRemoveDevice(a1);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x5Fu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      a1);
}
