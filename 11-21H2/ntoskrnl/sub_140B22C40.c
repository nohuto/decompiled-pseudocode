/*
 * XREFs of sub_140B22C40 @ 0x140B22C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140261ADC @ 0x140261ADC (sub_140261ADC.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IoCreateSymbolicLink @ 0x1406C4C40 (IoCreateSymbolicLink.c)
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     IoRegisterShutdownNotification @ 0x14084DF00 (IoRegisterShutdownNotification.c)
 *     sub_140B22DD4 @ 0x140B22DD4 (sub_140B22DD4.c)
 *     sub_140B2305C @ 0x140B2305C (sub_140B2305C.c)
 *     sub_140B231D8 @ 0x140B231D8 (sub_140B231D8.c)
 */

NTSTATUS __fastcall sub_140B22C40(PDRIVER_OBJECT DriverObject)
{
  __int64 v2; // rdx
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  UNICODE_STRING DeviceName; // [rsp+40h] [rbp-38h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+60h] [rbp-18h] BYREF

  DeviceName = 0LL;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  sub_140261ADC((__int64)&Object, 0, 1, 0);
  sub_140B231D8(0LL, v2);
  WorkItem.Parameter = 0LL;
  WorkItem.List.Flink = 0LL;
  Lock = 0LL;
  WorkItem.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14069A660;
  result = sub_140B2305C();
  if ( result >= 0 )
  {
    RtlInitAnsiString(&DestinationString, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\WMI");
    RtlAnsiStringToUnicodeString(&stru_140C16490, &DestinationString, 1u);
    result = sub_140B22DD4();
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DeviceName, L"\\Device\\WMIDataDevice");
      result = IoCreateDevice(DriverObject, 0, &DeviceName, 0x22u, 0x100u, 0, &qword_140C164D8);
      if ( result >= 0 )
      {
        RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\WMIDataDevice");
        v4 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
        if ( v4 < 0 )
        {
          IoDeleteDevice(qword_140C164D8);
        }
        else
        {
          qword_140C164D8->StackSize = 2;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)sub_1406C3540;
          DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)sub_1406E5130;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)sub_1406E83E0;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)sub_1406E83E0;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)sub_1406E83E0;
          qword_140C164D8->Flags &= ~0x80u;
          IoWMIRegistrationControl(qword_140C164D8, 1u);
          IoRegisterShutdownNotification(qword_140C164D8);
        }
        return v4;
      }
    }
  }
  return result;
}
