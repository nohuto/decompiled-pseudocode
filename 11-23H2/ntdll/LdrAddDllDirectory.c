/*
 * XREFs of LdrAddDllDirectory @ 0x180078AB0
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085A44 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BBE0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpInvalidatePathCache @ 0x180079030 (RtlpInvalidatePathCache.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800792D0 (RtlDetermineDosPathNameType_U.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _local_unwind @ 0x1800901F0 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x1800A1650 (ZwQueryAttributesFile.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall LdrAddDllDirectory(unsigned __int16 *a1, __int64 *a2)
{
  unsigned int v4; // eax
  int v5; // ebx
  __int64 Heap; // rax
  __int64 v7; // rbx
  unsigned int v8; // edx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  int v12; // ecx
  _DWORD v13[18]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int16 v14; // [rsp+48h] [rbp-80h] BYREF
  __int64 v15; // [rsp+50h] [rbp-78h]
  _DWORD *v16; // [rsp+58h] [rbp-70h]
  int v17; // [rsp+60h] [rbp-68h] BYREF
  __int64 v18; // [rsp+68h] [rbp-60h]
  unsigned __int16 *v19; // [rsp+70h] [rbp-58h]
  int v20; // [rsp+78h] [rbp-50h]
  __int128 v21; // [rsp+80h] [rbp-48h]
  char v22[40]; // [rsp+90h] [rbp-38h] BYREF

  v16 = v13;
  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  v4 = RtlDetermineDosPathNameType_U(*((_QWORD *)a1 + 1));
  if ( v4 <= 5 )
  {
    v12 = 41;
    if ( _bittest(&v12, v4) )
      return 3221225485LL;
  }
  v5 = RtlpDosPathNameToRelativeNtPathName(0, (__m128i *)a1, 0LL, &v14, 0LL, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    v17 = 48;
    v18 = 0LL;
    v20 = 64;
    v19 = &v14;
    v21 = 0LL;
    v5 = ZwQueryAttributesFile(&v17, v22);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
  }
  if ( v5 < 0 )
    return (unsigned int)v5;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1 + 18LL);
  v7 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove((void *)(Heap + 18), *((const void **)a1 + 1), *a1);
  *(_WORD *)(v7 + 16) = *a1;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v8 = *a1 + (unsigned __int16)word_180181220 + 2;
  v13[16] = v8;
  if ( v8 > 0xFFFE )
  {
    local_unwind(v16, sub_1800CCDC6);
LABEL_11:
    __fastfail(3u);
  }
  word_180181220 = v8;
  v9 = LdrpUserDllDirectories;
  if ( *((_UNKNOWN ***)LdrpUserDllDirectories + 1) != &LdrpUserDllDirectories )
    goto LABEL_11;
  *(_QWORD *)v7 = LdrpUserDllDirectories;
  *(_QWORD *)(v7 + 8) = &LdrpUserDllDirectories;
  v9[1] = v7;
  LdrpUserDllDirectories = (_UNKNOWN *)v7;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v10 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v10 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  *a2 = v7;
  return 0LL;
}
