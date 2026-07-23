/*
 * XREFs of sub_140B229D0 @ 0x140B229D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     IoRegisterFileSystem @ 0x14080F4B0 (IoRegisterFileSystem.c)
 *     IoRegisterShutdownNotification @ 0x14084DF00 (IoRegisterShutdownNotification.c)
 */

NTSTATUS __fastcall sub_140B229D0(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\RawDisk");
  result = IoCreateDevice(DriverObject, 0, &DestinationString, 8u, 0, 0, &qword_140C1BD10);
  if ( result >= 0 )
  {
    DriverObject->DriverUnload = (PDRIVER_UNLOAD)sub_1409B4F00;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\RawCdRom");
    v3 = IoCreateDevice(DriverObject, 0, &DestinationString, 3u, 0, 0, &qword_140C1BD20);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Device\\RawTape");
      v3 = IoCreateDevice(DriverObject, 0, &DestinationString, 0x20u, 0, 0, &qword_140C1BD18);
      if ( v3 >= 0 )
      {
        v3 = IoRegisterShutdownNotification(qword_140C1BD18);
        if ( v3 >= 0 )
        {
          qword_140C1BD10->Flags |= 0x10u;
          qword_140C1BD20->Flags |= 0x10u;
          qword_140C1BD18->Flags |= 0x10u;
          DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[13] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[10] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[6] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[5] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[4] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)sub_14074B9B0;
          DriverObject->MajorFunction[16] = (PDRIVER_DISPATCH)sub_1409B4E80;
          IoRegisterFileSystem(qword_140C1BD10);
          IoRegisterFileSystem(qword_140C1BD20);
          IoRegisterFileSystem(qword_140C1BD18);
          ObfReferenceObjectWithTag(qword_140C1BD10, 0x746C6644u);
          ObfReferenceObjectWithTag(qword_140C1BD20, 0x746C6644u);
          ObfReferenceObjectWithTag(qword_140C1BD18, 0x746C6644u);
          stru_140C1BCC0.Owner = 0LL;
          stru_140C1BCC0.Contention = 0;
          stru_140C1BCC0.Event.Header.SignalState = 0;
          qword_140C1BD08 = (__int64)&qword_140C1BD00;
          qword_140C1BD00 = (__int64)&qword_140C1BD00;
          qword_140C1BCB8 = (__int64)&qword_140C1BCB0;
          qword_140C1BCB0 = (__int64)&qword_140C1BCB0;
          stru_140C1BCC0.Event.Header.WaitListHead.Blink = &stru_140C1BCC0.Event.Header.WaitListHead;
          stru_140C1BCC0.Event.Header.WaitListHead.Flink = &stru_140C1BCC0.Event.Header.WaitListHead;
          result = 0;
          stru_140C1BCC0.Count = 1;
          LOWORD(stru_140C1BCC0.Event.Header.Lock) = 1;
          stru_140C1BCC0.Event.Header.Size = 6;
          return result;
        }
        IoDeleteDevice(qword_140C1BD18);
      }
      IoDeleteDevice(qword_140C1BD20);
    }
    IoDeleteDevice(qword_140C1BD10);
    return v3;
  }
  return result;
}
