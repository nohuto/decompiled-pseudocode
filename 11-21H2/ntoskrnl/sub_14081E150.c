/*
 * XREFs of sub_14081E150 @ 0x14081E150
 * Callers:
 *     <none>
 * Callees:
 *     sub_14081E300 @ 0x14081E300 (sub_14081E300.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 */

NTSTATUS __fastcall sub_14081E150(PDRIVER_OBJECT DriverObject)
{
  PDRIVER_EXTENSION DriverExtension; // rax
  NTSTATUS result; // eax
  PDEVICE_OBJECT TargetDevice; // [rsp+50h] [rbp+8h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  TargetDevice = 0LL;
  qword_140C4C180 = DriverObject;
  DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)sub_14081E300;
  DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)sub_14081A830;
  DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)&sub_140A52150;
  DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)&sub_140865090;
  result = IoReportDetectedDevice(
             DriverObject,
             InterfaceTypeUndefined,
             0xFFFFFFFF,
             0xFFFFFFFF,
             0LL,
             0LL,
             0,
             &TargetDevice);
  if ( result >= 0 )
  {
    sub_14081E300(DriverObject, TargetDevice);
    return 0;
  }
  return result;
}
