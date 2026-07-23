/*
 * XREFs of IoGetAttachedDevice @ 0x1402AF6A0
 * Callers:
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730680 (IopDeleteFile.c)
 *     FsRtlQueryOpen @ 0x1407ABD34 (FsRtlQueryOpen.c)
 *     NtUnlockFile @ 0x1407B4DB0 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x140875C88 (IopCopyOffloadCapable.c)
 *     PipSendGuestAssignedNotification @ 0x14096F204 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x140A99D54 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x140ADF22C (VfFilterAttach.c)
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
