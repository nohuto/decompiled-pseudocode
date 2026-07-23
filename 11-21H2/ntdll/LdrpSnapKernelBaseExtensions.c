/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x1800437E8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlxAnsiStringToUnicodeSize @ 0x18000DEC0 (RtlxAnsiStringToUnicodeSize.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlInitAnsiString @ 0x180035350 (RtlInitAnsiString.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x180035DB0 (LdrpResolveDelayLoadDescriptor.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003D5E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     ApiSetResolveToHost @ 0x180044D4C (ApiSetResolveToHost.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     LdrGetDllHandleByName @ 0x18007ED20 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x180095110 (_strnicmp.c)
 */

__int64 LdrpSnapKernelBaseExtensions()
{
  NTSTATUS v0; // eax
  __int64 v1; // rcx
  int Descriptor; // ebx
  unsigned int v3; // esi
  unsigned int v4; // edi
  void *ApiSetMap; // r13
  __int64 v6; // r12
  __int64 v7; // r15
  const char *v8; // r14
  unsigned int v9; // eax
  SIZE_T v10; // rbx
  int v11; // eax
  char v12; // r14
  unsigned __int16 v13; // ax
  wchar_t *Buffer; // rax
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING String2; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+40h] BYREF
  PVOID DllHandle; // [rsp+A8h] [rbp+48h] BYREF
  __int64 OutHeaders; // [rsp+B0h] [rbp+50h] BYREF

  DllHandle = 0LL;
  LdrGetDllHandleByName((PUNICODE_STRING)&LdrpKernelbaseDllName, 0LL, &DllHandle);
  v0 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)DllHandle, 1, 0xDu, &v19, (PIMAGE_NT_HEADERS)&OutHeaders);
  v1 = OutHeaders;
  if ( v0 < 0 )
    v1 = 0LL;
  OutHeaders = v1;
  if ( !v1 )
    return 0LL;
  Descriptor = 0;
  v3 = v19 >> 5;
  v4 = 0;
  UnicodeString = 0LL;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  if ( !(v19 >> 5) )
    return (unsigned int)Descriptor;
  v6 = OutHeaders;
  while ( 1 )
  {
    v7 = v6 + 32LL * v4;
    if ( !*(_DWORD *)(v7 + 4) )
      goto LABEL_17;
    v8 = (char *)DllHandle + *(unsigned int *)(v7 + 4);
    if ( !strnicmp(v8, "EXT-", 4uLL) )
      break;
LABEL_16:
    if ( ++v4 >= v3 )
      goto LABEL_17;
  }
  RtlInitAnsiString(&DestinationString, v8);
  v9 = RtlxAnsiStringToUnicodeSize((PCSTR *)&DestinationString);
  v10 = v9;
  if ( v9 <= UnicodeString.MaximumLength )
  {
    UnicodeString.Length = 0;
LABEL_10:
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
    LdrpLogDllState(0LL, &UnicodeString, 5328LL);
    v11 = ApiSetResolveToHost((_DWORD)ApiSetMap, (unsigned int)&UnicodeString, 0, (unsigned int)&v19, (__int64)&String2);
    v12 = v19;
    Descriptor = v11;
    if ( v11 >= 0 && (_BYTE)v19 )
    {
      if ( String2.Length )
        v13 = 5329;
      else
        v13 = 5330;
    }
    else
    {
      v13 = 5331;
    }
    LdrpLogDllState(0LL, &UnicodeString, v13);
    if ( v12 && !RtlCompareUnicodeString((PUNICODE_STRING)&LdrpKernel32DllName, &String2, 1u) )
    {
      Descriptor = LdrpResolveDelayLoadDescriptor((char *)DllHandle, (PCIMAGE_DELAYLOAD_DESCRIPTOR)(v6 + 32LL * v4));
      if ( Descriptor < 0 )
        goto LABEL_17;
      Descriptor = 0;
    }
    goto LABEL_16;
  }
  if ( v9 >= 0xFFFE )
  {
    Descriptor = -1073741675;
LABEL_17:
    Buffer = UnicodeString.Buffer;
    goto LABEL_18;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v10);
  UnicodeString.Buffer = Buffer;
  if ( Buffer )
  {
    UnicodeString.MaximumLength = v10;
    goto LABEL_10;
  }
  Descriptor = -1073741670;
LABEL_18:
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)Descriptor;
}
