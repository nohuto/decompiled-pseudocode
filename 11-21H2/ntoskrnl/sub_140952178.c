/*
 * XREFs of sub_140952178 @ 0x140952178
 * Callers:
 *     sub_1409528A8 @ 0x1409528A8 (sub_1409528A8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     wcsncat_s @ 0x1403E7750 (wcsncat_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140952178(PUNICODE_STRING DestinationString)
{
  __int64 Pool2; // rdi
  int v3; // ebx
  NTSTATUS v4; // eax
  __int64 v5; // rax
  rsize_t v6; // r14
  wchar_t *v7; // rax
  wchar_t *v8; // rsi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationStringa; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF
  void *v15; // [rsp+C8h] [rbp+48h] BYREF

  v15 = 0LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  Pool2 = 0LL;
  DestinationStringa = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  v3 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v15);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationStringa, L"Control\\Pnp");
    ObjectAttributes.RootDirectory = v15;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationStringa;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"ReplaceDriver");
      v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
      v3 = v4;
      if ( v4 == -2147483643 || v4 == -1073741789 )
      {
        Pool2 = ExAllocatePool2(256LL, ResultLength, 1366322768LL);
        if ( Pool2 )
        {
          v3 = ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 (PVOID)Pool2,
                 ResultLength,
                 &ResultLength);
          if ( v3 >= 0 )
          {
            if ( (unsigned int)(*(_DWORD *)(Pool2 + 4) - 1) > 1 || (v5 = *(unsigned int *)(Pool2 + 8), (v5 & 1) != 0) )
            {
              v3 = -1073741811;
            }
            else
            {
              v6 = (unsigned __int64)(v5 + 26) >> 1;
              v7 = (wchar_t *)ExAllocatePool2(256LL, 2 * v6, 1366322768LL);
              v8 = v7;
              if ( DestinationString )
              {
                wcscpy_s(v7, v6, L"\\systemroot\\");
                wcsncat_s(v8, v6, (const wchar_t *)(Pool2 + 12), (unsigned __int64)*(unsigned int *)(Pool2 + 8) >> 1);
                RtlInitUnicodeString(DestinationString, v8);
              }
              else
              {
                v3 = -1073741670;
                if ( v7 )
                  ExFreePoolWithTag(v7, 0x51706E50u);
              }
            }
          }
        }
        else
        {
          v3 = -1073741670;
        }
      }
      else if ( v4 >= 0 )
      {
        v3 = -1073741823;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0x51706E50u);
  return (unsigned int)v3;
}
