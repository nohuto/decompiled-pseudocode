/*
 * XREFs of sub_1403DCFAC @ 0x1403DCFAC
 * Callers:
 *     sub_1406EA1C8 @ 0x1406EA1C8 (sub_1406EA1C8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 */

int sub_1403DCFAC()
{
  int result; // eax
  int v1; // ecx
  int Data; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+2Fh] BYREF
  int v8; // [rsp+98h] [rbp+3Fh]

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ResultLength = 0;
  Data = 0;
  v8 = 0;
  ValueName.Buffer = L"FeatureSettings";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &stru_140D3CEC8;
  KeyValueInformation = 0LL;
  *(_QWORD *)&ValueName.Length = 2097182LL;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result < 0 )
    goto LABEL_7;
  result = ZwQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result == -1073741772 )
  {
    v1 = 0;
  }
  else
  {
    if ( result < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
      goto LABEL_7;
    v1 = HIDWORD(KeyValueInformation);
  }
  Data = v1 ^ (v1 ^ dword_140C2AF00) & 0x1C0000;
  result = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
LABEL_7:
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
