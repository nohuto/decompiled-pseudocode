/*
 * XREFs of LdrpInitializeApplicationVerifierPackage @ 0x1800DCD78
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x18007C230 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 */

__int64 __fastcall LdrpInitializeApplicationVerifierPackage(
        unsigned __int16 *a1,
        __int64 a2,
        char a3,
        void *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int16 *v9; // rbx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // ecx
  wchar_t *i; // rax
  __int64 result; // rax
  int v15; // ecx
  PULONG v16; // rdi
  ULONG v17; // r13d
  unsigned __int16 *v18; // r14
  NTSTATUS v19; // eax
  NTSTATUS v20; // ebx
  void *v21; // r15
  int v22; // ecx
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v26; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING String1; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+60h] [rbp-A0h] BYREF

  v9 = a1;
  if ( MEMORY[0x7FFE02EC] )
  {
    *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
    return 0LL;
  }
  if ( a3 )
  {
    v10 = *a1;
    v11 = *a1;
    v12 = v10;
    for ( i = (wchar_t *)(*((_QWORD *)v9 + 1) + v11); v12; v12 -= 2 )
    {
      if ( *(i - 1) == 92 )
        break;
      --i;
    }
    String1.Buffer = i;
    String1.Length = v10 - v12;
    RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
    if ( !RtlCompareUnicodeString(&String1, &DestinationString, 1u) )
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
      return 0LL;
    }
  }
  LdrpShouldCreateStackTraceDb = (*(_DWORD *)(a2 + 188) & 0x2000100) != 0;
  LOBYTE(a1) = a3;
  result = AVrfInitializeVerifier((_DWORD)a1, (_DWORD)v9, (_DWORD)a4, 0, a5, a6);
  v15 = *(_DWORD *)(a2 + 188);
  if ( (int)result < 0 )
  {
    dword_180174238 = 0;
    *(_DWORD *)(a2 + 188) = v15 & 0xFDFFFEFF;
    *RtlpDebugPageHeapTable = 0;
    return result;
  }
  if ( (v15 & 0x2000000) != 0 )
  {
    v16 = RtlpDebugPageHeapTable;
    *(_DWORD *)(a2 + 188) = v15 & 0xFFFF670F;
    LdrpShouldCreateStackTraceDb = 1;
    v17 = *v16;
    *v16 = -1;
    if ( !a4 )
    {
LABEL_41:
      if ( *v16 == -1 )
        *v16 = v17;
      if ( (((*v16 & 0x400) != 0) & _bittest(&AVrfpVerifierFlags, 0xFu)) != 0 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          7921,
          (__int64)"LdrpInitializeApplicationVerifierPackage",
          2u,
          "Per-DLL page heap is disabled since fast fill heap is enabled\n");
        *RtlpDebugPageHeapTable &= ~0x400u;
      }
      dword_180174238 = 1;
      return 0LL;
    }
    if ( RtlInitUnicodeStringEx(&String1, L"PageHeapFlags") < 0 )
    {
LABEL_40:
      *v16 = -1;
      goto LABEL_41;
    }
    v18 = (unsigned __int16 *)KeyValueInformation;
    v19 = NtQueryValueKey(a4, &String1, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength);
    v20 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -2147483643 )
      {
        while ( 1 )
        {
          Length = ResultLength;
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
          v21 = Heap;
          if ( !Heap )
            break;
          v18 = (unsigned __int16 *)Heap;
          v26 = NtQueryValueKey(a4, &String1, KeyValuePartialInformation, Heap, Length, &ResultLength);
          v20 = v26;
          if ( v26 >= 0 )
            goto LABEL_16;
          if ( v26 != -2147483643 )
            goto LABEL_36;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        }
      }
LABEL_39:
      v16 = RtlpDebugPageHeapTable;
      goto LABEL_40;
    }
    v21 = 0LL;
LABEL_16:
    v22 = *((_DWORD *)v18 + 1);
    if ( ((v22 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v22 == 4 )
      {
        if ( *((_DWORD *)v18 + 2) != 4 )
        {
          v20 = -1073741820;
          goto LABEL_35;
        }
        ResultLength = 4;
        if ( v16 )
        {
          *v16 = *((_DWORD *)v18 + 3);
          goto LABEL_35;
        }
LABEL_33:
        v20 = -2147483643;
        goto LABEL_35;
      }
      if ( v22 == 1 )
      {
        if ( ((unsigned __int8)v16 & 3) != 0 )
        {
          v20 = -2147483646;
          goto LABEL_35;
        }
        ResultLength = 4;
        if ( v16 )
        {
          String1.Buffer = v18 + 6;
          String1.Length = v18[4];
          String1.MaximumLength = v18[4];
          v20 = RtlUnicodeStringToInteger(&String1, 0, v16);
          goto LABEL_35;
        }
        goto LABEL_33;
      }
    }
    v20 = -1073741788;
LABEL_35:
    if ( v21 )
LABEL_36:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
    if ( v20 >= 0 )
    {
      v16 = RtlpDebugPageHeapTable;
      goto LABEL_41;
    }
    goto LABEL_39;
  }
  return 0LL;
}
