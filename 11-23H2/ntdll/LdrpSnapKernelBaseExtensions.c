/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x180018890
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitAnsiString @ 0x18000C230 (RtlInitAnsiString.c)
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180014A70 (RtlCompareUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x180018B10 (RtlxAnsiStringToUnicodeSize.c)
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180019BC0 (ApiSetResolveToHost.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024EF0 (RtlAnsiStringToUnicodeString.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x18002BE04 (LdrpResolveDelayLoadDescriptor.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     LdrGetDllHandleByName @ 0x180077840 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x1800908E0 (_strnicmp.c)
 */

__int64 LdrpSnapKernelBaseExtensions()
{
  int v0; // r8d
  int v1; // edx
  int v2; // eax
  __int64 v3; // rcx
  int Descriptor; // ebx
  unsigned int v5; // esi
  unsigned int v6; // edi
  void *ApiSetMap; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  const char *v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  char v15; // r14
  unsigned __int16 v16; // ax
  wchar_t *Buffer; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int16 v21[8]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+50h] BYREF

  v23 = 0LL;
  LdrGetDllHandleByName(&LdrpKernelbaseDllName, 0LL, &v23);
  LOWORD(v0) = 13;
  LOBYTE(v1) = 1;
  v2 = RtlpImageDirectoryEntryToDataEx(v23, v1, v0, (unsigned int)&v22, (__int64)&v24);
  v3 = v24;
  if ( v2 < 0 )
    v3 = 0LL;
  v24 = v3;
  if ( !v3 )
    return 0LL;
  Descriptor = 0;
  v5 = v22 >> 5;
  v6 = 0;
  UnicodeString = 0LL;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  if ( !(v22 >> 5) )
    return (unsigned int)Descriptor;
  v8 = v24;
  while ( 1 )
  {
    v9 = v8 + 32LL * v6;
    if ( !*(_DWORD *)(v9 + 4) )
      goto LABEL_17;
    v10 = (const char *)(v23 + *(unsigned int *)(v9 + 4));
    if ( !strnicmp(v10, "EXT-", 4uLL) )
      break;
LABEL_16:
    if ( ++v6 >= v5 )
      goto LABEL_17;
  }
  RtlInitAnsiString(&DestinationString, v10);
  v11 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v13 = v11;
  if ( v11 <= UnicodeString.MaximumLength )
  {
    UnicodeString.Length = 0;
LABEL_10:
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
    LdrpLogDllState(0LL, &UnicodeString, 5328LL);
    v14 = ApiSetResolveToHost((_DWORD)ApiSetMap, (unsigned int)&UnicodeString, 0, (unsigned int)&v22, (__int64)v21);
    v15 = v22;
    Descriptor = v14;
    if ( v14 >= 0 && (_BYTE)v22 )
    {
      if ( v21[0] )
        v16 = 5329;
      else
        v16 = 5330;
    }
    else
    {
      v16 = 5331;
    }
    LdrpLogDllState(0LL, &UnicodeString, v16);
    if ( v15 && !(unsigned int)RtlCompareUnicodeString(LdrpKernel32DllName, v21, 1) )
    {
      Descriptor = LdrpResolveDelayLoadDescriptor(v23, v8 + 32LL * v6);
      if ( Descriptor < 0 )
        goto LABEL_17;
      Descriptor = 0;
    }
    goto LABEL_16;
  }
  if ( v11 >= 0xFFFE )
  {
    Descriptor = -1073741675;
LABEL_17:
    Buffer = UnicodeString.Buffer;
    goto LABEL_18;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v13, v12);
  UnicodeString.Buffer = Buffer;
  if ( Buffer )
  {
    UnicodeString.MaximumLength = v13;
    goto LABEL_10;
  }
  Descriptor = -1073741670;
LABEL_18:
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)Descriptor;
}
