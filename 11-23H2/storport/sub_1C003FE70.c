/*
 * XREFs of sub_1C003FE70 @ 0x1C003FE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C00A9738 @ 0x1C00A9738 (sub_1C00A9738.c)
 *     sub_1C00A99CC @ 0x1C00A99CC (sub_1C00A99CC.c)
 */

__int64 __fastcall sub_1C003FE70(PDRIVER_OBJECT DriverObject)
{
  PVOID DriverObjectExtension; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003EF0C(
      (__int64)off_1C0093070->AttachedDevice,
      0xAu,
      (__int64)&unk_1C0089898,
      DriverObject,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, StorPortGetSrb);
  sub_1C00A9738(DriverObjectExtension);
  if ( _InterlockedExchangeAdd(&dword_1C0093C5C, 0xFFFFFFFF) == 1 )
  {
    if ( DeviceObject )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\StorportControl");
      IoDeleteSymbolicLink(&DestinationString);
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
    if ( byte_1C0093C58 )
    {
      sub_1C00A99CC();
      byte_1C0093C58 = 0;
    }
    if ( Registration )
    {
      PcwUnregister(Registration);
      Registration = 0LL;
    }
    if ( qword_1C0093B78 )
    {
      PcwUnregister(qword_1C0093B78);
      qword_1C0093B78 = 0LL;
    }
    if ( qword_1C0093B98 )
    {
      PcwUnregister(qword_1C0093B98);
      qword_1C0093B98 = 0LL;
    }
    if ( qword_1C0093B70 )
    {
      PcwUnregister(qword_1C0093B70);
      qword_1C0093B70 = 0LL;
    }
  }
  return 0LL;
}
