/*
 * XREFs of sub_140B53550 @ 0x140B53550
 * Callers:
 *     sub_140B2BF58 @ 0x140B2BF58 (sub_140B2BF58.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     sub_1407934D0 @ 0x1407934D0 (sub_1407934D0.c)
 */

NTSTATUS sub_140B53550()
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+40h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v5; // [rsp+90h] [rbp+47h]

  KeyHandle = 0LL;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v5 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  KeyValueInformation = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_14000A900,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL && HIDWORD(KeyValueInformation) )
      result = sub_1407934D0((int)&qword_1400377B0, 0, 0, 0, 0LL, 0, 0);
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
