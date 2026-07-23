/*
 * XREFs of EtwpInitializeSecurity @ 0x140B73B6C
 * Callers:
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5400 (RtlGetPersistedStateLocation.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x140741744 (EtwpGetGuidSecurityDescriptor.c)
 */

__int64 EtwpInitializeSecurity()
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
  if ( ZwOpenKey(&EtwpSecurityKeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    EtwpSecurityKeyHandle = 0LL;
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
        (PersistedStateLocation = ZwOpenKey(&EtwpMutableSecurityKeyHandle, 0x20019u, &ObjectAttributes)) != 0) )
  {
    if ( !EtwpSecurityKeyHandle )
      return PersistedStateLocation;
    EtwpMutableSecurityKeyHandle = 0LL;
    PersistedStateLocation = 0;
  }
  RtlInitUnicodeString(&ValueName, L"0811c1af-7a07-4a06-82ed-869455cdf713");
  EtwpGetGuidSecurityDescriptor(&ValueName, &EtwpDefaultTraceSecurityDescriptor);
  if ( !EtwpDefaultTraceSecurityDescriptor )
    EtwpDefaultTraceSecurityDescriptor = WmipDefaultAccessSd;
  return PersistedStateLocation;
}
