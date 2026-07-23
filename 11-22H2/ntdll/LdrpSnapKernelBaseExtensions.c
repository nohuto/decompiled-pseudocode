/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x180018AA0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitAnsiString @ 0x18000C450 (RtlInitAnsiString.c)
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180014C80 (RtlCompareUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x180018D20 (RtlxAnsiStringToUnicodeSize.c)
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180019DD0 (ApiSetResolveToHost.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025040 (RtlAnsiStringToUnicodeString.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x18002BFD4 (LdrpResolveDelayLoadDescriptor.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     LdrGetDllHandleByName @ 0x1800771D0 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x1800900E0 (_strnicmp.c)
 */

__int64 LdrpSnapKernelBaseExtensions()
{
  int v0; // eax
  __int64 v1; // rcx
  int Descriptor; // ebx
  unsigned int v3; // esi
  unsigned int v4; // edi
  void *ApiSetMap; // r13
  __int64 v6; // r12
  __int64 v7; // r15
  const char *v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  char v13; // r14
  unsigned __int16 v14; // ax
  wchar_t *Buffer; // rax
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING String2; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+40h] BYREF
  PVOID DllHandle; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+50h] BYREF

  DllHandle = 0LL;
  LdrGetDllHandleByName((PUNICODE_STRING)&LdrpKernelbaseDllName, 0LL, &DllHandle);
  v0 = RtlpImageDirectoryEntryToDataEx(DllHandle, (__int64)&v22);
  v1 = v22;
  if ( v0 < 0 )
    v1 = 0LL;
  v22 = v1;
  if ( !v1 )
    return 0LL;
  Descriptor = 0;
  v3 = v20 >> 5;
  v4 = 0;
  UnicodeString = 0LL;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  if ( !(v20 >> 5) )
    return (unsigned int)Descriptor;
  v6 = v22;
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
  v9 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v11 = v9;
  if ( v9 <= UnicodeString.MaximumLength )
  {
    UnicodeString.Length = 0;
LABEL_10:
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
    LdrpLogDllState(0LL, &UnicodeString, 5328LL);
    v12 = ApiSetResolveToHost((_DWORD)ApiSetMap, (unsigned int)&UnicodeString, 0, (unsigned int)&v20, (__int64)&String2);
    v13 = v20;
    Descriptor = v12;
    if ( v12 >= 0 && (_BYTE)v20 )
    {
      if ( String2.Length )
        v14 = 5329;
      else
        v14 = 5330;
    }
    else
    {
      v14 = 5331;
    }
    LdrpLogDllState(0LL, &UnicodeString, v14);
    if ( v13 && !RtlCompareUnicodeString((PUNICODE_STRING)&LdrpKernel32DllName, &String2, 1u) )
    {
      Descriptor = LdrpResolveDelayLoadDescriptor(DllHandle, (PCIMAGE_DELAYLOAD_DESCRIPTOR)(v6 + 32LL * v4));
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
  Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v11, v10);
  UnicodeString.Buffer = Buffer;
  if ( Buffer )
  {
    UnicodeString.MaximumLength = v11;
    goto LABEL_10;
  }
  Descriptor = -1073741670;
LABEL_18:
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)Descriptor;
}
