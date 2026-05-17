/*
 * XREFs of RtlpHpLargeFree @ 0x180058AC4
 * Callers:
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001A490 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlpHeapLogRangeRelease @ 0x180114FF4 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v5; // esi
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp+28h] BYREF

  v19 = a2;
  v5 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(a1 + 64, a2, a3, a4);
    a2 = v19;
  }
  v6 = (unsigned __int64 *)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v7 )
    v7 ^= (unsigned __int64)v6;
  while ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v8 )
    {
      if ( a2 <= v8 )
        break;
      v9 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v7;
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v9 )
      v7 ^= v9;
    else
      v7 = v9;
  }
  if ( v7 )
  {
    RtlRbRemoveNode(v6, v7);
    if ( !v5 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    v10 = *(_QWORD *)(v7 + 32);
    v11 = (unsigned __int8)v10 >> 2;
    v17 = *(_OWORD *)a1;
    v12 = (((v10 >> 12) + ((v10 >> 1) & 1)) << 12) - 1;
    v18 = (1LL << v11) - (((1LL << v11) - 1) & ((1LL << v11) + v12)) + v12;
    RtlpHpFreeVA(&v19, &v18, 0x8000, &v17);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(*(_QWORD *)(v7 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)(v18 >> 12));
    v17 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v7, &v17);
    v13 = v18;
    v14 = v18;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v13 = v18;
      v15 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v15 = 2147353480LL;
    }
    if ( *(_BYTE *)v15 )
      RtlpHeapLogRangeRelease(a1, v19, v13);
  }
  else
  {
    if ( !v5 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
      LODWORD(a2) = v19;
    }
    RtlpLogHeapFailure(8, a1, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  return v14;
}
