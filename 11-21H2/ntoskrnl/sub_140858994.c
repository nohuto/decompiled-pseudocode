/*
 * XREFs of sub_140858994 @ 0x140858994
 * Callers:
 *     sub_140858820 @ 0x140858820 (sub_140858820.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 */

int __fastcall sub_140858994(__int64 a1, _DWORD *a2)
{
  HANDLE *v2; // rdi
  bool v3; // zf
  int result; // eax
  ULONG Disposition; // [rsp+40h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+44h] [rbp-15h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+27h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF
  int v12; // [rsp+A0h] [rbp+47h]

  Disposition = 0;
  v2 = (HANDLE *)(a1 + 544);
  ResultLength = 0;
  KeyHandle = (HANDLE)-1LL;
  *a2 = 3;
  v3 = *(_QWORD *)(a1 + 544) == -1LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v12 = 0;
  KeyValueInformation = 0LL;
  if ( !v3 )
    goto LABEL_8;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &stru_140D3CE18;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control\\Power");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateKey(v2, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( result >= 0 )
    {
LABEL_8:
      RtlInitUnicodeString(&DestinationString, L"DirectedDripsAction");
      result = ZwQueryValueKey(
                 *v2,
                 &DestinationString,
                 KeyValuePartialInformation,
                 &KeyValueInformation,
                 0x14u,
                 &ResultLength);
      if ( result >= 0 && DWORD2(KeyValueInformation) == 4 )
      {
        result = HIDWORD(KeyValueInformation);
        *a2 = HIDWORD(KeyValueInformation);
      }
    }
  }
  if ( KeyHandle != (HANDLE)-1LL )
    return ZwClose(KeyHandle);
  return result;
}
