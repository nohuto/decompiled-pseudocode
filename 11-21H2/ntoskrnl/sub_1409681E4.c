/*
 * XREFs of sub_1409681E4 @ 0x1409681E4
 * Callers:
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 sub_1409681E4()
{
  int v0; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v7; // [rsp+90h] [rbp+47h]

  KeyHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ResultLength = 0;
  v0 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  v7 = 0;
  ValueName.Buffer = L"ClearPageFileAtShutdown";
  ObjectAttributes.ObjectName = &stru_140D3CEC8;
  KeyValueInformation = 0LL;
  *(_QWORD *)&ValueName.Length = 3145774LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
    && DWORD1(KeyValueInformation) == 4 )
  {
    v0 = HIDWORD(KeyValueInformation);
  }
  ObCloseHandle(KeyHandle, 0);
  if ( !v0 )
    return 0LL;
  byte_140C529C2 = 1;
  return 1LL;
}
