/*
 * XREFs of VerifyCriticalRegionExit @ 0x1C0061AA0
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00C55F0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00C5720 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00C57D0 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00C5900 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00C59B0 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00C5AE0 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00C5B70 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00C5C00 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00C5CA0 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00C5DD0 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00C5E60 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00C5EF0 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00C5F80 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00C6010 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00C60A0 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00C6130 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00C61E0 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00C6290 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00C6320 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00C64E0 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00C66B0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00C6880 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00C6A40 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00C6AD0 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00C6BC0 (VfEvtIoWrite.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall VerifyCriticalRegionExit(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int8 OldCritRegion,
        unsigned __int64 Pfn)
{
  if ( KeGetCurrentIrql() <= 1u && OldCritRegion != KeAreApcsDisabled() )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_VERIFIER_CRITICAL_REGION_MISMATCH, Pfn, 0LL);
}
