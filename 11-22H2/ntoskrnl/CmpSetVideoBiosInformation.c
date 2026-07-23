/*
 * XREFs of CmpSetVideoBiosInformation @ 0x140B99C0C
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x140B3A520 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwMapViewOfSection @ 0x14041ABA0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14041ABE0 (ZwUnmapViewOfSection.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     CmpGetBiosDate @ 0x140B9947C (CmpGetBiosDate.c)
 *     CmpGetBiosVersion @ 0x140B996AC (CmpGetBiosVersion.c)
 */

void __fastcall CmpSetVideoBiosInformation(HANDLE SectionHandle, HANDLE KeyHandle)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  _WORD *Pool2; // rdi
  _WORD *v8; // rsi
  unsigned int v9; // ebx
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-90h] BYREF
  STRING v14; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  CHAR SourceString[128]; // [rsp+A0h] [rbp-60h] BYREF

  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  ViewSize = 4096LL;
  v4 = 0;
  v14 = 0LL;
  UnicodeString = 0LL;
  DestinationString = 0LL;
  v5 = 786432;
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0x1000uLL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u) >= 0 )
  {
    v6 = ((*((_DWORD *)BaseAddress + 16) & 0xFFF0) + (*((_DWORD *)BaseAddress + 16) >> 12)) & 0xFFFF8000;
    if ( v6 < 0xC0000 )
      v6 = 786432;
    v5 = v6;
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  }
  BaseAddress = 0LL;
  ViewSize = 0x8000LL;
  SectionOffset.QuadPart = v5;
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0x8000uLL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u) >= 0 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 0x1000uLL, 0x20204D43u);
    if ( CmpGetBiosDate((__int64)BaseAddress, 0x8000u, (__int64)SourceString, 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"VideoBiosDate");
      RtlInitAnsiString(&v14, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &v14, 1u) >= 0 )
      {
        ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
    if ( Pool2 && CmpGetBiosVersion((__int64)BaseAddress, 0x8000u, (__int64)SourceString) )
    {
      v8 = Pool2;
      do
      {
        RtlInitAnsiString(&v14, SourceString);
        if ( RtlAnsiStringToUnicodeString(&UnicodeString, &v14, 1u) >= 0 )
        {
          v9 = UnicodeString.Length + 2;
          memmove(v8, UnicodeString.Buffer, v9);
          v4 += v9;
          RtlFreeUnicodeString(&UnicodeString);
          if ( (unsigned __int64)v4 + 260 > 0x1000 )
            break;
          v8 = (_WORD *)((char *)v8 + v9);
        }
      }
      while ( CmpGetBiosVersion(0LL, 0, (__int64)SourceString) );
      if ( v4 - 1 <= 0xFFD )
      {
        *v8 = 0;
        RtlInitUnicodeString(&DestinationString, L"VideoBiosVersion");
        ZwSetValueKey(KeyHandle, &DestinationString, 0, 7u, Pool2, v4 + 2);
      }
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
