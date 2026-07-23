/*
 * XREFs of RtlpQueryPseudoEnvironmentVariable @ 0x180073684
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlFindCharInUnicodeString @ 0x180047A60 (RtlFindCharInUnicodeString.c)
 *     RtlStringCbPrintfExW @ 0x180073E68 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A4730 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x1800A6D80 (NtQuerySystemInformationEx.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

NTSTATUS __fastcall RtlpQueryPseudoEnvironmentVariable(int a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int16 *Heap; // rdi
  int v8; // ecx
  NTSTATUS result; // eax
  int v10; // r8d
  unsigned int i; // edx
  const wchar_t *Buffer; // rdx
  unsigned __int64 v13; // rbx
  size_t v14; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  NTSTATUS CharInUnicodeString; // eax
  unsigned __int64 Length; // rbx
  char v18; // [rsp+40h] [rbp-A8h]
  USHORT NonInclusivePrefixLength[2]; // [rsp+44h] [rbp-A4h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-98h]
  int InputBuffer; // [rsp+58h] [rbp-90h] BYREF
  int v23; // [rsp+5Ch] [rbp-8Ch]
  unsigned int v24; // [rsp+60h] [rbp-88h]
  _CURDIR *p_CurrentDirectory; // [rsp+68h] [rbp-80h] BYREF
  _BYTE SystemInformation[16]; // [rsp+70h] [rbp-78h] BYREF
  int v27; // [rsp+80h] [rbp-68h]
  _BYTE Src[32]; // [rsp+90h] [rbp-58h] BYREF

  v18 = 0;
  Heap = 0LL;
  BaseAddress = 0LL;
  if ( !a1 )
  {
    p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v18 = 1;
    Buffer = p_CurrentDirectory->DosPath.Buffer;
    Length = p_CurrentDirectory->DosPath.Length;
    Heap = (unsigned __int16 *)BaseAddress;
LABEL_24:
    v13 = Length >> 1;
    goto LABEL_11;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1u,
                            &ProcessParameters->ImagePathName,
                            &RtlDosPathSeperatorsString,
                            NonInclusivePrefixLength);
    Buffer = ProcessParameters->ImagePathName.Buffer;
    Heap = (unsigned __int16 *)BaseAddress;
    if ( CharInUnicodeString >= 0 )
    {
      v13 = (NonInclusivePrefixLength[0] >> 1) + 1;
      goto LABEL_11;
    }
    Length = ProcessParameters->ImagePathName.Length;
    goto LABEL_24;
  }
  if ( v8 != 1 )
  {
    result = NtQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL);
    *(_DWORD *)NonInclusivePrefixLength = result;
    if ( result < 0 )
      goto LABEL_28;
    if ( v27 == 1 )
    {
      Buffer = L"Legacy";
      v13 = 6LL;
    }
    else
    {
      Buffer = L"UEFI";
      v13 = 4LL;
    }
LABEL_11:
    if ( a2 )
    {
      if ( v13 < a3 )
      {
        *a4 = v13;
        v14 = v13;
        memmove(a2, Buffer, v14 * 2);
        a2[v14] = 0;
        result = 0;
LABEL_14:
        *(_DWORD *)NonInclusivePrefixLength = result;
        goto LABEL_28;
      }
      if ( a3 )
        *a2 = 0;
    }
    *a4 = v13 + 1;
    result = -1073741789;
    goto LABEL_14;
  }
  InputBuffer = 4;
  ReturnLength = 0;
  NtQuerySystemInformationEx(SystemLogicalProcessorAndGroupInformation, &InputBuffer, 4u, 0LL, 0, &ReturnLength);
  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
  BaseAddress = Heap;
  if ( !Heap )
  {
    result = -1073741801;
    goto LABEL_14;
  }
  result = NtQuerySystemInformationEx(
             SystemLogicalProcessorAndGroupInformation,
             &InputBuffer,
             4u,
             Heap,
             ReturnLength,
             &ReturnLength);
  *(_DWORD *)NonInclusivePrefixLength = result;
  if ( result >= 0 )
  {
    v10 = 0;
    v23 = 0;
    for ( i = 0; ; ++i )
    {
      v24 = i;
      if ( i >= Heap[5] )
        break;
      v10 += HIBYTE(Heap[24 * i + 16]);
      v23 = v10;
    }
    result = RtlStringCbPrintfExW((unsigned int)Src, 32, (unsigned int)&p_CurrentDirectory, 0, 0, (__int64)L"%u", v10);
    *(_DWORD *)NonInclusivePrefixLength = result;
    if ( result >= 0 )
    {
      Buffer = (const wchar_t *)Src;
      v13 = ((char *)p_CurrentDirectory - Src) >> 1;
      goto LABEL_11;
    }
  }
LABEL_28:
  if ( v18 )
  {
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    result = *(_DWORD *)NonInclusivePrefixLength;
    Heap = (unsigned __int16 *)BaseAddress;
  }
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return *(_DWORD *)NonInclusivePrefixLength;
  }
  return result;
}
