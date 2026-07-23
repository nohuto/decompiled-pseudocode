/*
 * XREFs of RtlpHpLargeFree @ 0x180064104
 * Callers:
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038910 (RtlRbRemoveNode.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeVA @ 0x180047764 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 *     RtlpHeapLogRangeRelease @ 0x18011685C (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

ULONG_PTR __fastcall RtlpHpLargeFree(__int128 *a1, PVOID a2, char a3)
{
  int v4; // esi
  _RTL_RB_TREE *v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rax
  ULONG_PTR v12; // rbx
  ULONG_PTR v13; // rsi
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR v17; // [rsp+60h] [rbp+20h] BYREF
  PVOID v18; // [rsp+68h] [rbp+28h] BYREF

  v18 = a2;
  v4 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)a1 + 8);
    a2 = v18;
  }
  v5 = (_RTL_RB_TREE *)((char *)a1 + 72);
  v6 = *((_QWORD *)a1 + 9);
  if ( (a1[5] & 1) != 0 && v6 )
    v6 ^= (unsigned __int64)v5;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( (unsigned __int64)a2 >= v7 )
    {
      if ( (unsigned __int64)a2 <= v7 )
        break;
      v8 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v6;
    }
    if ( (a1[5] & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  if ( v6 )
  {
    RtlRbRemoveNode(v5, (PRTL_BALANCED_NODE)v6);
    if ( !v4 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a1 + 8);
    v9 = *(_QWORD *)(v6 + 32);
    v10 = (unsigned __int8)v9 >> 2;
    v16 = *a1;
    v11 = (((v9 >> 12) + ((v9 >> 1) & 1)) << 12) - 1;
    v17 = (1LL << v10) - (((1LL << v10) - 1) & ((1LL << v10) + v11)) + v11;
    RtlpHpFreeVA(&v18, &v17, 0x8000, &v16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 12, -(*(_QWORD *)(v6 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 11, -(__int64)(v17 >> 12));
    v16 = *a1;
    RtlpHpMetadataFree(v6, &v16);
    v12 = v17;
    v13 = v17;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = v17;
      v14 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v14 = 2147353480LL;
    }
    if ( *(_BYTE *)v14 )
      RtlpHeapLogRangeRelease(a1, v18, v12);
  }
  else
  {
    if ( !v4 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a1 + 8);
      LODWORD(a2) = (_DWORD)v18;
    }
    RtlpLogHeapFailure(8, (_DWORD)a1, (_DWORD)a2, 0, 0LL, 0LL);
    return 0LL;
  }
  return v13;
}
