/*
 * XREFs of sub_140699698 @ 0x140699698
 * Callers:
 *     sub_14069954C @ 0x14069954C (sub_14069954C.c)
 *     sub_140A0AC70 @ 0x140A0AC70 (sub_140A0AC70.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_140699698(UNICODE_STRING *a1, UNICODE_STRING *a2, _DWORD *a3)
{
  NTSTATUS v5; // ebx
  bool v7; // cl
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+27h] BYREF
  int v12; // [rsp+74h] [rbp+2Bh]
  unsigned int v13; // [rsp+78h] [rbp+2Fh]
  __int64 v14; // [rsp+7Ch] [rbp+33h]

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v5 = ZwOpenKey(&KeyHandle, 0x20119u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, KeyValueInformation, 0x18u, &ResultLength);
    if ( v5 >= 0 )
    {
      v7 = 1;
      if ( (unsigned int)v14 > 1 )
        v7 = (_DWORD)v14 == 0xFFFF;
      if ( v12 == 4 && v13 >= 4 && v7 )
        *a3 = v14;
      else
        *a3 = 0xFFFF;
    }
    ZwClose(KeyHandle);
  }
  if ( v5 == -1073741772 )
  {
    *a3 = 0xFFFF;
    return 0;
  }
  return (unsigned int)v5;
}
