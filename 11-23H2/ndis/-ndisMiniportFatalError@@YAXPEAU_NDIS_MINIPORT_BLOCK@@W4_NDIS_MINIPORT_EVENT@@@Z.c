/*
 * XREFs of ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0135ACC
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000EA30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C0063E60 (NdisIMInitializeDeviceInstanceEx.c)
 *     ?ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00AE4D0 (-ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0146970 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C014B610 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0021450 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00214DC (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C005D7DC (-NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_ql @ 0x1C0060DDC (WPP_RECORDER_SF_ql_ea_1C0060DDC.c)
 */

void __fastcall ndisMiniportFatalError(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  unsigned __int8 v4; // si
  struct _NDIS_IF_BLOCK *v5; // rax
  _NDIS_M_DRIVER_BLOCK **p_DriverHandle; // rdi
  _DEVICE_RESET_INTERFACE_STANDARD *ReenumerateSelfInterface; // rax

  v4 = 1;
  v5 = ndisMReferenceIfBlock(a1, 0x13u);
  if ( !v5 )
  {
    p_DriverHandle = &a1->DriverHandle;
LABEL_9:
    v4 = 0;
    goto LABEL_10;
  }
  v5->LastMiniportFatalErrorReason = a2;
  _InterlockedOr((volatile signed __int32 *)&v5->InterlockedFlags, 1u);
  ndisMDereferenceIfBlock(a1, MPIFREF_FATAL_ERROR);
  p_DriverHandle = &a1->DriverHandle;
  if ( !a1->DriverHandle->ReenumerateFailedAdapterHandler )
    goto LABEL_9;
  ReenumerateSelfInterface = a1->ReenumerateSelfInterface;
  if ( !ReenumerateSelfInterface
    || !ReenumerateSelfInterface->DeviceReset
    || (a1->PnPFlags & 0x1080000) != 0
    || (a1->Flags & 0x80000000) != 0
    || a1->PnPDeviceState != NdisPnPDeviceStarted )
  {
    goto LABEL_9;
  }
LABEL_10:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x40u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a1,
      v4);
  if ( v4 )
    (*p_DriverHandle)->ReenumerateFailedAdapterHandler(a1->MiniportAdapterContext);
  else
    NdisMRemoveMiniportInternal(a1, a2);
}
