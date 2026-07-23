/*
 * XREFs of IopLoadCrashdumpDriver @ 0x1403946F0
 * Callers:
 *     IopInitializeCrashDump @ 0x1408347D8 (IopInitializeCrashDump.c)
 *     IoGetDumpStack @ 0x140943ADC (IoGetDumpStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     IopGetPhysicalMemoryBlock @ 0x140394850 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  __int64 result; // rax
  PIMAGE_NT_HEADERS v1; // rax
  __int64 (__fastcall *v2)(UNICODE_STRING **, int *); // rbx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING *v4; // [rsp+50h] [rbp+17h] BYREF
  __int64 PhysicalMemoryBlock; // [rsp+58h] [rbp+1Fh]
  __int64 (__fastcall *v6)(int, int, int, int, __int64, __int64); // [rsp+60h] [rbp+27h]
  __int64 (__fastcall *v7)(ULONG_PTR); // [rsp+68h] [rbp+2Fh]
  __int64 (__fastcall *v8)(int, int, int, int, __int64); // [rsp+70h] [rbp+37h]
  __int64 v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+80h] [rbp+47h]
  int v11; // [rsp+84h] [rbp+4Bh]
  UNICODE_STRING *v12; // [rsp+88h] [rbp+4Fh]
  PVOID BaseOfImage; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+6Fh] BYREF

  v14 = 0LL;
  PhysicalMemoryBlock = 0LL;
  v11 = 0;
  BaseOfImage = 0LL;
  DestinationString = 0LL;
  if ( CrashdmpImageEntry )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  result = MmLoadSystemImageEx((unsigned int)&DestinationString, 0, 0, 0, 2, (__int64)&v14, (__int64)&BaseOfImage);
  if ( (_DWORD)result == -1073741554 || (int)result >= 0 )
  {
    v1 = RtlImageNtHeader(BaseOfImage);
    if ( !v1 )
      return 3221225473LL;
    v2 = (__int64 (__fastcall *)(UNICODE_STRING **, int *))((char *)BaseOfImage + v1->OptionalHeader.AddressOfEntryPoint);
    v4 = &IoArcBootDeviceName;
    v12 = &PoHiberFileRoot;
    PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
    if ( !PhysicalMemoryBlock )
      return 3221225626LL;
    v6 = IopLoadCrashdmpImage;
    v7 = MmUnloadSystemImage;
    v9 = IopReportBugCheckProgress;
    v8 = HvlGetEncryptedData;
    v10 = VslVsmEnabled ? ((HvlpFlags & 2) != 0) + 1 : 0;
    CrashdmpCallTable = 1;
    dword_140C6AD24 = 12;
    result = v2(&v4, &CrashdmpCallTable);
    if ( (int)result >= 0 )
    {
      CrashdmpImageEntry = v14;
      CrashdmpImageBase = BaseOfImage;
      return 0LL;
    }
  }
  return result;
}
