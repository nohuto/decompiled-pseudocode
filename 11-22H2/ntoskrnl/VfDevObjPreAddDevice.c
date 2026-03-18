/*
 * XREFs of VfDevObjPreAddDevice @ 0x140AD31C8
 * Callers:
 *     PpvUtilCallAddDevice @ 0x140322130 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A590 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140AE020C (VfFilterAttach.c)
 */

LOGICAL __fastcall VfDevObjPreAddDevice(PDEVICE_OBJECT TargetDevice, struct _DRIVER_OBJECT *DriverObject)
{
  LOGICAL result; // eax

  result = MmIsDriverVerifying(DriverObject);
  if ( result )
  {
    result = MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VfFilterAttach(TargetDevice);
  }
  return result;
}
