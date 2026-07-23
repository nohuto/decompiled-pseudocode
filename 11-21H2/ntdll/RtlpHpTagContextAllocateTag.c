/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x18005867C
 * Callers:
 *     RtlpHpTagContextGetTag @ 0x1800A3794 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x1800557D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlpHpTagContextFindFreeTag @ 0x180058828 (RtlpHpTagContextFindFreeTag.c)
 *     RtlpHpTagContextFindMapping @ 0x180058870 (RtlpHpTagContextFindMapping.c)
 */

__int64 __fastcall RtlpHpTagContextAllocateTag(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  signed __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 Mapping; // rax
  unsigned __int16 FreeTag; // ax
  unsigned __int16 v12; // di
  __int64 v13; // rcx
  __int64 v14; // rdx
  signed __int64 *v15; // roff
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int128 v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 v20; // [rsp+50h] [rbp+20h]

  v19 = RtlpHpEnvHandle;
  v7 = RtlpHpMetadataAlloc(0x30uLL, 0x30uLL, 0, &v19);
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    v9 = *a2;
    *(_QWORD *)(v7 + 32) = a4;
    *(_QWORD *)(v7 + 8) = a3;
    *(_OWORD *)(v7 + 16) = v9;
    RtlAcquireSRWLockExclusive(&RtlpHpTagContext);
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
    if ( Mapping )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a4);
      v12 = *(_WORD *)(Mapping + 40);
    }
    else
    {
      FreeTag = RtlpHpTagContextFindFreeTag();
      v12 = FreeTag;
      if ( FreeTag )
      {
        *(_WORD *)(v8 + 40) = FreeTag;
        *(_QWORD *)(qword_180178B38 + 8LL * FreeTag - 8) = v8;
        v20 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_180178B2C & 0x1F));
        v13 = qword_180178B30;
        v14 = (37
             * (BYTE6(v20)
              + 37
              * (BYTE5(v20)
               + 37
               * (BYTE4(v20)
                + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
             + HIBYTE(v20)) & (((unsigned int)dword_180178B2C >> 5) - 1);
        v15 = (signed __int64 *)(qword_180178B30 + 8 * v14);
        _m_prefetchw(v15);
        v16 = *v15;
        do
        {
          *(_QWORD *)v8 = v16;
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8 * v14), v8, v16);
        }
        while ( v17 != v16 );
        word_180178B40 = v12;
        ++dword_180178B28;
        v8 = 0LL;
        ++word_180178B42;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    if ( v8 )
    {
      v19 = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v8, &v19);
    }
  }
  else
  {
    return 0;
  }
  return v12;
}
