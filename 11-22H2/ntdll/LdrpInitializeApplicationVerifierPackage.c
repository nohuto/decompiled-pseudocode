/*
 * XREFs of LdrpInitializeApplicationVerifierPackage @ 0x1800DD4F8
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180014C80 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180076E90 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 */

__int64 __fastcall LdrpInitializeApplicationVerifierPackage(
        unsigned __int16 *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int16 *v9; // rbx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // ecx
  _DWORD *i; // rax
  __int64 result; // rax
  int v15; // ecx
  int *v16; // rdi
  int v17; // r12d
  char *v18; // r14
  int ValueKey; // eax
  int v20; // ebx
  __int64 v21; // r15
  int v22; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v28[4]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v29; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  char v31; // [rsp+60h] [rbp-A0h] BYREF

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
    for ( i = (_DWORD *)(*((_QWORD *)v9 + 1) + v11); v12; v12 -= 2 )
    {
      if ( *((_WORD *)i - 1) == 92 )
        break;
      i = (_DWORD *)((char *)i - 2);
    }
    v29 = i;
    v28[0] = v10 - v12;
    RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
    if ( !(unsigned int)RtlCompareUnicodeString(v28, &DestinationString.Length, 1) )
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
      return 0LL;
    }
  }
  LdrpShouldCreateStackTraceDb = (*(_DWORD *)(a2 + 188) & 0x2000100) != 0;
  LOBYTE(a1) = a3;
  result = AVrfInitializeVerifier((_DWORD)a1, (_DWORD)v9, a4, 0, a5, a6);
  v15 = *(_DWORD *)(a2 + 188);
  if ( (int)result < 0 )
  {
    dword_18017E828 = 0;
    *(_DWORD *)(a2 + 188) = v15 & 0xFDFFFEFF;
    *(_DWORD *)RtlpDebugPageHeapTable = 0;
    return result;
  }
  if ( (v15 & 0x2000000) != 0 )
  {
    v16 = (int *)RtlpDebugPageHeapTable;
    *(_DWORD *)(a2 + 188) = v15 & 0xFFFF670F;
    LdrpShouldCreateStackTraceDb = 1;
    v17 = *v16;
    *v16 = -1;
    if ( !a4 )
    {
LABEL_41:
      v26 = *v16;
      if ( *v16 == -1 )
      {
        LOWORD(v26) = v17;
        *v16 = v17;
      }
      if ( (((v26 & 0x400) != 0) & _bittest(&AVrfpVerifierFlags, 0xFu)) != 0 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          8027LL,
          (__int64)"LdrpInitializeApplicationVerifierPackage",
          2LL,
          "Per-DLL page heap is disabled since fast fill heap is enabled\n");
        *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
      }
      dword_18017E828 = 1;
      return 0LL;
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v28, (__int64)L"PageHeapFlags") < 0 )
    {
LABEL_40:
      *v16 = -1;
      goto LABEL_41;
    }
    v18 = &v31;
    ValueKey = NtQueryValueKey();
    v20 = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey == -2147483643 )
      {
        while ( 1 )
        {
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v27);
          v21 = Heap;
          if ( !Heap )
            break;
          v18 = (char *)Heap;
          v25 = NtQueryValueKey();
          v20 = v25;
          if ( v25 >= 0 )
            goto LABEL_16;
          if ( v25 != -2147483643 )
            goto LABEL_36;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v18);
        }
      }
LABEL_39:
      v16 = (int *)RtlpDebugPageHeapTable;
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
        if ( v16 )
        {
          v29 = v18 + 12;
          v28[0] = *((_WORD *)v18 + 4);
          v28[1] = *((_WORD *)v18 + 4);
          v20 = RtlUnicodeStringToInteger(v28, 0, v16);
          goto LABEL_35;
        }
        goto LABEL_33;
      }
    }
    v20 = -1073741788;
LABEL_35:
    if ( v21 )
LABEL_36:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
    if ( v20 >= 0 )
    {
      v16 = (int *)RtlpDebugPageHeapTable;
      goto LABEL_41;
    }
    goto LABEL_39;
  }
  return 0LL;
}
