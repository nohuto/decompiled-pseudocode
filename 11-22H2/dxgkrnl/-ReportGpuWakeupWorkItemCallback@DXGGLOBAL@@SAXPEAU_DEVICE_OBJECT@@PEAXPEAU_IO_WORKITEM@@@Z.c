/*
 * XREFs of ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02E6700
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x1C01F165C (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z.c)
 */

void __fastcall DXGGLOBAL::ReportGpuWakeupWorkItemCallback(
        struct _DEVICE_OBJECT *IoObject,
        PVOID Context,
        PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  DXGGLOBAL *Global; // rax

  if ( Context )
  {
    WdLogSingleEntry1(1LL, 454LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Context == NULL", 454LL, 0LL, 0LL, 0LL, 0LL);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(IoObject);
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(Global, (__int64)DeviceAttachmentBaseRef, 0LL);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
