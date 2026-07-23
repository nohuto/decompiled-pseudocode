/*
 * XREFs of sub_140B2EDD8 @ 0x140B2EDD8
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     sub_14020E0AC @ 0x14020E0AC (sub_14020E0AC.c)
 *     sub_14020F30C @ 0x14020F30C (sub_14020F30C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS sub_140B2EDD8()
{
  unsigned int v0; // ebx
  NTSTATUS result; // eax
  unsigned int v2; // edx
  int i; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD KeyValueInformation[68]; // [rsp+90h] [rbp-70h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ResultLength = 0;
  KeyHandle = 0LL;
  v6[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v0 = 32;
  ValueName.Buffer = L"ReservedCpuSets";
  v6[0] = 9699474LL;
  *(_QWORD *)&ValueName.Length = 2097182LL;
  memset(&unk_140D08290, 0, 0x100uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x110u,
               &ResultLength);
    if ( result >= 0 && KeyValueInformation[1] == 3 && (KeyValueInformation[2] & 7) == 0 )
    {
      result = sub_14020F30C((char *)&KeyValueInformation[3], KeyValueInformation[2] >> 3);
      if ( result >= 0 )
      {
        if ( v2 >= 0x20 || (v0 = v2) != 0 )
          memmove(&unk_140D08290, &KeyValueInformation[3], 8LL * v0);
        for ( i = 0; i < 2; ++i )
          result = sub_14020E0AC(0, 0LL, i);
      }
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
