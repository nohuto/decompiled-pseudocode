/*
 * XREFs of StorpDeviceLogPagesWorkItemRoutine @ 0x1C006C070
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetryEnumUnitNvmeLogPages @ 0x1C006DE4C (StorpTelemetryEnumUnitNvmeLogPages.c)
 *     StorpTelemetryFindUnitNvmeLogPages @ 0x1C006E018 (StorpTelemetryFindUnitNvmeLogPages.c)
 */

void __fastcall StorpDeviceLogPagesWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v4; // rax
  __int64 v5; // r8

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 123) == 1 )
  {
    v4 = DeviceExtension[224];
    if ( (!v4 || !*(_DWORD *)(v4 + 16)) && *((_DWORD *)DeviceExtension + 836) == 17 )
    {
      StorpTelemetryEnumUnitNvmeLogPages(
        DeviceObject->DeviceExtension,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\NVMeLogPages\\Common");
      LOBYTE(v5) = 1;
      StorpTelemetryFindUnitNvmeLogPages(
        DeviceExtension,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\NVMeLogPages",
        v5,
        0LL);
    }
  }
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  IoFreeWorkItem(Context);
}
