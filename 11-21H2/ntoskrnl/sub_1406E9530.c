/*
 * XREFs of sub_1406E9530 @ 0x1406E9530
 * Callers:
 *     sub_140784CB0 @ 0x140784CB0 (sub_140784CB0.c)
 * Callees:
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall sub_1406E9530(int a1, ULONG a2, wchar_t *a3, __int64 a4, UNICODE_STRING *DestinationString)
{
  int v7; // ecx
  __int64 result; // rax
  signed int v9; // ebx
  int v10; // ecx
  __int64 v11; // rdi
  wchar_t *v12; // rcx
  wchar_t v13; // ax
  wchar_t *v14; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v18; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  char v20; // [rsp+90h] [rbp-70h] BYREF
  char KeyValueInformation[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v22; // [rsp+D4h] [rbp-2Ch]
  char v23[276]; // [rsp+DCh] [rbp-24h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  v18 = 0LL;
  v7 = a1 - 11;
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      if ( v10 != 2 )
        return (unsigned int)-1073741585;
      v11 = 64LL;
      v12 = a3;
      do
      {
        if ( v11 == -2147483582 )
          break;
        v13 = *(wchar_t *)((char *)v12 + (char *)L"\\SystemRoot\\System32\\l_intl.nls" - (char *)a3);
        if ( !v13 )
          break;
        *v12++ = v13;
        --v11;
      }
      while ( v11 );
      v14 = v12 - 1;
      if ( v11 )
        v14 = v12;
      *v14 = 0;
      v9 = v11 == 0 ? 0x80000005 : 0;
      if ( !v11 )
        return (unsigned int)v9;
    }
    else
    {
      RtlInitUnicodeString(&v18, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Normalization");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v18;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
      if ( v9 < 0 )
        return (unsigned int)v9;
      *(_QWORD *)&String.Length = 4194368LL;
      String.Buffer = (wchar_t *)&v20;
      RtlIntegerToUnicodeString(a2, 0x10u, &String);
      v9 = ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x120u, &ResultLength);
      ZwClose(KeyHandle);
      if ( v9 < 0 )
        return (unsigned int)v9;
      if ( v22 != 1 )
        return 3221225473LL;
      v9 = sub_1402E0198(a3, 64LL, L"\\SystemRoot\\System32\\%s", v23);
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
  }
  else
  {
    result = sub_1402E0198(a3, 64LL, L"\\SystemRoot\\System32\\c_%.3d.nls", a2);
    v9 = result;
    if ( (int)result < 0 )
      return result;
  }
  RtlInitUnicodeString(DestinationString, a3);
  return (unsigned int)v9;
}
