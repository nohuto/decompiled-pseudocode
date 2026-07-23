/*
 * XREFs of sub_1409D5E24 @ 0x1409D5E24
 * Callers:
 *     sub_1409D5FA4 @ 0x1409D5FA4 (sub_1409D5FA4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409D5E24(UNICODE_STRING *a1, __int64 a2, HANDLE *a3)
{
  NTSTATUS v6; // ebx
  __int64 v7; // rcx
  _WORD *v8; // rax
  unsigned int v9; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD KeyValueInformation[68]; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  ValueName = 0LL;
  memset(KeyValueInformation, 0, 0x10CuLL);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    if ( *(_QWORD *)(a2 + 16) )
    {
      v7 = 0x7FFFLL;
      v8 = *(_WORD **)(a2 + 16);
      while ( *v8 )
      {
        ++v8;
        if ( !--v7 )
          goto LABEL_8;
      }
      ValueName.Buffer = *(wchar_t **)(a2 + 16);
      ValueName.Length = -2 - 2 * v7;
      ValueName.MaximumLength = -2 * v7;
    }
LABEL_8:
    v6 = ZwQueryValueKey(
           KeyHandle,
           &ValueName,
           KeyValuePartialInformationAlign64,
           KeyValueInformation,
           0x10Cu,
           &ResultLength);
    if ( v6 >= 0 )
    {
      if ( a3 )
      {
        if ( KeyValueInformation[0] == 3 )
        {
          v9 = *(_DWORD *)(a2 + 32);
          if ( KeyValueInformation[1] == v9 )
          {
            memmove(*(void **)(a2 + 24), &KeyValueInformation[2], v9);
            v6 = 0;
            *a3 = KeyHandle;
            return (unsigned int)v6;
          }
        }
        v6 = -1073741772;
      }
      else
      {
        v6 = 0;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v6;
}
