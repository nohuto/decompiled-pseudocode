/*
 * XREFs of sub_14080B840 @ 0x14080B840
 * Callers:
 *     sub_140540798 @ 0x140540798 (sub_140540798.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 */

bool sub_14080B840()
{
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v3[2]; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF
  int v7; // [rsp+A0h] [rbp+47h]

  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v7 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v3[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\FullLiveKernelReports";
  ValueName.Buffer = L"FullLiveReportsMax";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
  KeyValueInformation = 0LL;
  v3[0] = 11272362LL;
  *(_QWORD *)&ValueName.Length = 2490404LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0;
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) < 0
    || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
  {
    ZwClose(KeyHandle);
    return 0;
  }
  ZwClose(KeyHandle);
  return HIDWORD(KeyValueInformation) == 0;
}
