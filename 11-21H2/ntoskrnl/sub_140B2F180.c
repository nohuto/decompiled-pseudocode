/*
 * XREFs of sub_140B2F180 @ 0x140B2F180
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     sub_140797CE4 @ 0x140797CE4 (sub_140797CE4.c)
 */

__int64 sub_140B2F180()
{
  unsigned int PersistedStateLocation; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  ULONG BufferLengthOut; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING ValueName; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[256]; // [rsp+A0h] [rbp-60h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ValueName = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\Security");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&FallbackHandle, 0x20019u, &ObjectAttributes) < 0 )
    FallbackHandle = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"ETWSecurityPath",
                             0LL,
                             0LL,
                             LocationTypeRegistry,
                             SourceString,
                             0x1FEu,
                             &BufferLengthOut);
  if ( PersistedStateLocation
    || (RtlInitUnicodeString(&DestinationString, SourceString),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        (PersistedStateLocation = ZwOpenKey(&PrimaryHandle, 0x20019u, &ObjectAttributes)) != 0) )
  {
    if ( !FallbackHandle )
      return PersistedStateLocation;
    PrimaryHandle = 0LL;
    PersistedStateLocation = 0;
  }
  RtlInitUnicodeString(&ValueName, L"0811c1af-7a07-4a06-82ed-869455cdf713");
  sub_140797CE4(&ValueName, &qword_140D00C10);
  if ( !qword_140D00C10 )
    qword_140D00C10 = qword_140D06B18;
  return PersistedStateLocation;
}
