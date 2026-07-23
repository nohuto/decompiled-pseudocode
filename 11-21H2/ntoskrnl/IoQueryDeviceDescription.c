/*
 * XREFs of IoQueryDeviceDescription @ 0x1406DDED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoQueryDeviceDescription(
        PINTERFACE_TYPE BusType,
        PULONG BusNumber,
        PCONFIGURATION_TYPE ControllerType,
        PULONG ControllerNumber,
        PCONFIGURATION_TYPE PeripheralType,
        PULONG PeripheralNumber,
        PIO_QUERY_DEVICE_ROUTINE CalloutRoutine,
        PVOID Context)
{
  NTSTATUS v8; // ebx
  HANDLE Handle[2]; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING v12; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v13[8]; // [rsp+60h] [rbp-9h] BYREF
  int v14; // [rsp+B0h] [rbp+47h] BYREF

  Handle[0] = 0LL;
  v14 = -1;
  Destination = 0LL;
  if ( !BusType )
    return -1073741822;
  v13[4] = PeripheralType;
  v13[5] = PeripheralNumber;
  v13[6] = CalloutRoutine;
  v13[1] = BusNumber;
  v13[0] = BusType;
  v13[2] = ControllerType;
  v13[7] = Context;
  v13[3] = ControllerNumber;
  Destination.MaximumLength = 2048;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, 2048LL, 1314025289LL);
  if ( !Destination.Buffer )
    return -1073741670;
  RtlAppendUnicodeStringToString(&Destination, &stru_140D3CD08);
  v8 = sub_1406DE960(Handle, 0LL, &Destination, 131097LL, 0);
  if ( v8 >= 0 )
  {
    v12 = Destination;
    v8 = sub_1406DE494((unsigned int)v13, (unsigned int)&v12, Handle[0], (unsigned int)&v14, 1);
    ZwClose(Handle[0]);
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v8 == -2147483622 )
    return -1073741772;
  return v8;
}
