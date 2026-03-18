/*
 * XREFs of WPP_IFR_SF_qdd @ 0x1C0026A80
 * Callers:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C0006540 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025E58 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002ABB0 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     imp_WdfCompanionTargetSendTaskSynchronously @ 0x1C002CC30 (imp_WdfCompanionTargetSendTaskSynchronously.c)
 *     imp_WdfDeviceInitSetRemoveLockOptions @ 0x1C002FBE0 (imp_WdfDeviceInitSetRemoveLockOptions.c)
 *     StopIdleWorker @ 0x1C0031584 (StopIdleWorker.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C0031C30 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfDeviceGetDeviceState @ 0x1C0032AA0 (imp_WdfDeviceGetDeviceState.c)
 *     imp_WdfDeviceQueryProperty @ 0x1C0032EE0 (imp_WdfDeviceQueryProperty.c)
 *     imp_WdfDeviceSetDeviceState @ 0x1C0033370 (imp_WdfDeviceSetDeviceState.c)
 *     imp_WdfDeviceSetPnpCapabilities @ 0x1C00335B0 (imp_WdfDeviceSetPnpCapabilities.c)
 *     imp_WdfDeviceSetPowerCapabilities @ 0x1C00336D0 (imp_WdfDeviceSetPowerCapabilities.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0039AD4 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0039EAC (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C003A144 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C003AE4C (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     imp_WdfCmResourceListRemove @ 0x1C0048FC0 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfIoResourceListRemove @ 0x1C0049400 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x1C0049600 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x1C0049840 (imp_WdfIoResourceRequirementsListRemove.c)
 *     imp_WdfRegistryQueryString @ 0x1C004B880 (imp_WdfRegistryQueryString.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0051FC0 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfIoTargetQueryTargetProperty @ 0x1C0052210 (imp_WdfIoTargetQueryTargetProperty.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoteOpenParams@@@Z @ 0x1C0056120 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoteOpe.c)
 *     imp_WdfUsbTargetDeviceGetInterface @ 0x1C0058C50 (imp_WdfUsbTargetDeviceGetInterface.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C005AD1C (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0060A78 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C00676D4 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     imp_WdfInterruptGetInfo @ 0x1C0068180 (imp_WdfInterruptGetInfo.c)
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C0068350 (imp_WdfInterruptSetExtendedPolicy.c)
 *     ?_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00698A0 (-_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0072A98 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C007D228 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qdd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        int _a2,
        unsigned int _a3)
{
  int v12; // eax
  unsigned __int64 v13; // rbx

  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v12, (flags - 1) & 0x1F) )
  {
    v13 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v13 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v13),
        43LL,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        4LL,
        &_a3,
        4LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 4LL, &_a3, 4LL, 0LL);
}
