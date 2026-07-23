/*
 * XREFs of CmpSetSystemBiosInformation @ 0x140B9886C
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x140B36E28 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1402F6EE0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwMapViewOfSection @ 0x14041B5F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14041B630 (ZwUnmapViewOfSection.c)
 *     ZwSetValueKey @ 0x14041BCF0 (ZwSetValueKey.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     RtlCompareUnicodeString @ 0x1406DA170 (RtlCompareUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     CmpGetAcpiBiosVersion @ 0x140B983F0 (CmpGetAcpiBiosVersion.c)
 *     CmpGetBiosDate @ 0x140B9847C (CmpGetBiosDate.c)
 *     CmpGetBiosVersion @ 0x140B986AC (CmpGetBiosVersion.c)
 *     CmpGetRegistryValue @ 0x140B992CC (CmpGetRegistryValue.c)
 */

void __fastcall CmpSetSystemBiosInformation(__int64 a1, void *a2, void *a3)
{
  unsigned int v4; // r13d
  _WORD *v5; // rsi
  char *v6; // rbx
  unsigned __int16 v7; // di
  _WORD *v8; // r14
  __int64 v9; // r12
  int i; // edi
  unsigned int v11; // edx
  PVOID v12; // rcx
  unsigned int v13; // ebx
  HANDLE v14; // r12
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h]
  UNICODE_STRING String2; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-50h]
  PVOID Data; // [rsp+B8h] [rbp-48h]
  HANDLE KeyHandle; // [rsp+C0h] [rbp-40h]
  CHAR SourceString[128]; // [rsp+D0h] [rbp-30h] BYREF

  v23 = a1;
  KeyHandle = a3;
  P = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0x10000LL;
  SectionOffset.QuadPart = 983040LL;
  DestinationString = 0LL;
  v4 = 0;
  String2 = 0LL;
  String1 = 0LL;
  ValueName = 0LL;
  if ( ZwMapViewOfSection(
         a2,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0x10000uLL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u) >= 0 )
  {
    Data = (PVOID)ExAllocatePool2(256LL, 0x1000uLL, 0x20204D43u);
    v5 = Data;
    if ( CmpGetBiosDate((__int64)BaseAddress + 65525, 8u, (__int64)SourceString, 1) )
    {
      RtlInitAnsiString(&DestinationString, SourceString);
      if ( RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"SystemBiosDate");
        if ( (int)CmpGetRegistryValue(a3) >= 0 )
        {
          v6 = (char *)P;
          if ( P )
          {
            String2.MaximumLength = *((_WORD *)P + 4);
            v7 = String2.MaximumLength - 2;
            String2.Buffer = (wchar_t *)((char *)P + 12);
            String2.Length = String2.MaximumLength - 2;
            if ( RtlCompareUnicodeString(&String1, &String2, 1u) )
            {
              RtlInitUnicodeString(&ValueName, L"OldSystemBiosDate");
              ZwSetValueKey(a3, &ValueName, 0, 1u, v6 + 12, v7 + 2);
            }
            ExFreePoolWithTag(v6, 0);
          }
        }
        RtlFreeUnicodeString(&String1);
      }
    }
    if ( CmpGetBiosDate((__int64)BaseAddress, 0x10000u, (__int64)SourceString, 1) )
    {
      RtlInitUnicodeString(&ValueName, L"SystemBiosDate");
      RtlInitAnsiString(&DestinationString, SourceString);
      if ( RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u) >= 0 )
      {
        ZwSetValueKey(a3, &ValueName, 0, 1u, String1.Buffer, String1.Length + 2);
        RtlFreeUnicodeString(&String1);
      }
    }
    v8 = v5;
    if ( v5 )
    {
      v9 = v23;
      for ( i = 0; ; ++i )
      {
        if ( i )
        {
          v11 = 0x10000;
          v12 = 0LL;
          if ( i == 1 )
            v12 = BaseAddress;
          else
            v11 = 0;
          if ( !CmpGetBiosVersion((__int64)v12, v11, (__int64)SourceString) )
          {
LABEL_26:
            v5 = Data;
            v14 = KeyHandle;
            if ( v4 )
            {
              *v8 = 0;
              RtlInitUnicodeString(&ValueName, L"SystemBiosVersion");
              ZwSetValueKey(v14, &ValueName, 0, 7u, v5, v4 + 2);
            }
            break;
          }
        }
        else if ( !CmpGetAcpiBiosVersion(v9, SourceString) )
        {
          continue;
        }
        RtlInitAnsiString(&DestinationString, SourceString);
        if ( RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u) >= 0 )
        {
          v13 = String1.Length + 2;
          memmove(v8, String1.Buffer, v13);
          v4 += v13;
          RtlFreeUnicodeString(&String1);
          if ( (unsigned __int64)v4 + 260 > 0x1000 )
            goto LABEL_26;
          v8 = (_WORD *)((char *)v8 + v13);
        }
      }
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
}
