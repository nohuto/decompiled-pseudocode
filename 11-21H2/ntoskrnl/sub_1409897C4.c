/*
 * XREFs of sub_1409897C4 @ 0x1409897C4
 * Callers:
 *     sub_1405D13F0 @ 0x1405D13F0 (sub_1405D13F0.c)
 *     sub_140998544 @ 0x140998544 (sub_140998544.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 */

char sub_1409897C4()
{
  char v0; // bl
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING v4; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF
  int v8; // [rsp+A0h] [rbp+47h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  v4 = 0LL;
  v8 = 0;
  v0 = 0;
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"fDenyTSConnections");
  RtlInitUnicodeString(&v4, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v4;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
    && ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && (*(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || !HIDWORD(KeyValueInformation)) )
  {
    v0 = 1;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
