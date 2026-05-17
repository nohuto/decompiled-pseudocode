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
 *     RtlpHeapLogRangeRelease @ 0x18011688C (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapFailure @ 0x1801229F0 (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2, char a3)
{
  int v4; // esi
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp+28h] BYREF

  v18 = a2;
  v4 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    a2 = v18;
  }
  v5 = a1 + 72;
  v6 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v6 )
    v6 ^= v5;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v7 )
    {
      if ( a2 <= v7 )
        break;
      v8 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v6;
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  if ( v6 )
  {
    RtlRbRemoveNode(v5, v6);
    if ( !v4 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    v9 = *(_QWORD *)(v6 + 32);
    v10 = (unsigned __int8)v9 >> 2;
    v16 = *(_OWORD *)a1;
    v11 = (((v9 >> 12) + ((v9 >> 1) & 1)) << 12) - 1;
    v17 = (1LL << v10) - (((1LL << v10) - 1) & ((1LL << v10) + v11)) + v11;
    RtlpHpFreeVA(&v18, &v17, 0x8000, &v16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(*(_QWORD *)(v6 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)(v17 >> 12));
    v16 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v6, &v16);
    v12 = v17;
    v13 = v17;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
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
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
      LODWORD(a2) = v18;
    }
    RtlpLogHeapFailure(8, a1, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  return v13;
}
