/*
 * XREFs of sub_1409E190C @ 0x1409E190C
 * Callers:
 *     sub_1409E1B94 @ 0x1409E1B94 (sub_1409E1B94.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409E190C(PCWSTR SourceString, wchar_t *Str1, size_t MaxCount)
{
  size_t v3; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  wchar_t *Pool2; // rdi
  NTSTATUS v10; // ebx
  int v11; // r14d
  NTSTATUS v12; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v18[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-58h]
  _DWORD KeyInformation[136]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = (unsigned int)MaxCount;
  v19 = 0LL;
  memset(v18, 0, sizeof(v18));
  memset(KeyInformation, 0, 0x218uLL);
  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v6 = -1LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  do
    ++v6;
  while ( SourceString[v6] );
  v7 = 2LL * (unsigned int)(v6 + v3 + 2);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v7, 1350005829LL);
  if ( !Pool2 )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v10 >= 0 )
  {
    v11 = -1;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = ZwEnumerateKey(KeyHandle, ++v11, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength);
        v10 = v12;
        if ( v12 >= 0 )
          break;
        if ( v12 != -1073741789 && v12 != -2147483643 )
          goto LABEL_14;
      }
      if ( KeyInformation[3] == 2 * v3 )
      {
        *((_WORD *)&KeyInformation[4] + v3) = 0;
        if ( !wcsncmp(Str1, (const wchar_t *)&KeyInformation[4], v3) )
          break;
      }
    }
    sub_1402E1280(Pool2, v7, L"%ws\\%ws", SourceString, &KeyInformation[4]);
    RtlInitUnicodeString(&DestinationString, Pool2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes);
    if ( v10 >= 0 )
    {
      ZwDeleteKey(Handle);
      ZwClose(Handle);
      v10 = ZwQueryKey(KeyHandle, KeyCachedInformation, v18, 0x28u, &ResultLength);
      if ( v10 >= 0 && !HIDWORD(v18[0]) )
        ZwDeleteKey(KeyHandle);
    }
LABEL_14:
    ZwClose(KeyHandle);
  }
  ExFreePoolWithTag(Pool2, 0x50777445u);
  return (unsigned int)v10;
}
