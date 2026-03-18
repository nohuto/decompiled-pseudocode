/*
 * XREFs of IoGetAttachedDevice @ 0x1402AF410
 * Callers:
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730490 (IopDeleteFile.c)
 *     FsRtlQueryOpen @ 0x1407ABB44 (FsRtlQueryOpen.c)
 *     NtUnlockFile @ 0x1407B4AD0 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x140875A48 (IopCopyOffloadCapable.c)
 *     PipSendGuestAssignedNotification @ 0x14096F004 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x140A99EE4 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x140ADF23C (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDevice(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  PDEVICE_OBJECT result; // rax

  AttachedDevice = DeviceObject->AttachedDevice;
  if ( !AttachedDevice )
    return DeviceObject;
  do
  {
    result = AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  while ( AttachedDevice );
  return result;
}
