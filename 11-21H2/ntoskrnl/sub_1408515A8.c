/*
 * XREFs of sub_1408515A8 @ 0x1408515A8
 * Callers:
 *     sub_140851328 @ 0x140851328 (sub_140851328.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1408515A8(PCWSTR Path, const WCHAR *a2, _RTL_AVL_TABLE *a3)
{
  WCHAR *v5; // rsi
  __int64 v6; // rbx
  ULONG v7; // r13d
  PCWSTR v8; // rax
  unsigned __int64 v9; // r15
  wchar_t *Pool2; // rbx
  NTSTATUS v11; // edi
  NTSTATUS v12; // ecx
  const WCHAR *v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  BOOLEAN NewElement[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ValueData; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  PRTL_AVL_TABLE Table; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD KeyInformation[72]; // [rsp+90h] [rbp-70h] BYREF

  Table = a3;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  NewElement[0] = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v6 = -1LL;
  v7 = 0;
  if ( a2 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a2[v14] );
    v15 = -1LL;
    do
      ++v15;
    while ( Path[v15] );
    v8 = Path;
    if ( v15 <= v14 )
      v8 = a2;
  }
  else
  {
    v8 = Path;
  }
  do
    ++v6;
  while ( v8[v6] );
  RtlInitUnicodeString(&DestinationString, Path);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v9 = (unsigned int)(2 * v6 + 260);
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v9, 1953985605LL);
    if ( Pool2 )
    {
      if ( !a2 || (v5 = (WCHAR *)ExAllocatePool2(256LL, v9, 1953985605LL)) != 0LL )
      {
        do
        {
          v11 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
          if ( v11 < 0 )
          {
            v12 = v11;
            if ( v11 == -2147483622 )
              v12 = 0;
            ValueData = RtlNtStatusToDosError(v12);
            v13 = a2;
            if ( !a2 )
              v13 = Path;
            RtlWriteRegistryValue(0, v13, L"Status", 4u, &ValueData, 4u);
            if ( v11 == -2147483643 || v11 == -1073741789 )
              v11 = 0;
          }
          else if ( KeyInformation[3] < 0x102u )
          {
            *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
            RtlInsertElementGenericTableAvl(Table, &KeyInformation[4], KeyInformation[3] + 2, NewElement);
            if ( NewElement[0] )
            {
              if ( !(unsigned int)sub_1402E1280(Pool2, v9, L"%ws\\%ws", Path, &KeyInformation[4])
                && (!a2 || !(unsigned int)sub_1402E1280(v5, v9, L"%ws\\%ws", a2, &KeyInformation[4])) )
              {
                sub_140817CD8((wchar_t *)&KeyInformation[4], (__int64)Pool2, v5);
              }
            }
          }
          ++v7;
        }
        while ( v11 >= 0 );
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
}
