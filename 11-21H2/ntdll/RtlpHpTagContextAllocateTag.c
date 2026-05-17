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
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  signed __int64 v11; // rbx
  __int128 v12; // xmm0
  __int64 Mapping; // rax
  unsigned __int16 FreeTag; // ax
  unsigned __int16 v15; // di
  __int64 v16; // rcx
  __int64 v17; // rdx
  signed __int64 *v18; // roff
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int128 v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+50h] [rbp+20h]

  v22 = RtlpHpEnvHandle;
  v7 = RtlpHpMetadataAlloc(0x30uLL, 0x30uLL, 0, &v22);
  v11 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    v12 = *a2;
    *(_QWORD *)(v7 + 32) = a4;
    *(_QWORD *)(v7 + 8) = a3;
    *(_OWORD *)(v7 + 16) = v12;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpTagContext, v8, v9, v10);
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
    if ( Mapping )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a4);
      v15 = *(_WORD *)(Mapping + 40);
    }
    else
    {
      FreeTag = RtlpHpTagContextFindFreeTag();
      v15 = FreeTag;
      if ( FreeTag )
      {
        *(_WORD *)(v11 + 40) = FreeTag;
        *(_QWORD *)(qword_180178B38 + 8LL * FreeTag - 8) = v11;
        v23 = *(_QWORD *)(v11 + 8) & (-1LL << (dword_180178B2C & 0x1F));
        v16 = qword_180178B30;
        v17 = (37
             * (BYTE6(v23)
              + 37
              * (BYTE5(v23)
               + 37
               * (BYTE4(v23)
                + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
             + HIBYTE(v23)) & (((unsigned int)dword_180178B2C >> 5) - 1);
        v18 = (signed __int64 *)(qword_180178B30 + 8 * v17);
        _m_prefetchw(v18);
        v19 = *v18;
        do
        {
          *(_QWORD *)v11 = v19;
          v20 = v19;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 8 * v17), v11, v19);
        }
        while ( v20 != v19 );
        word_180178B40 = v15;
        ++dword_180178B28;
        v11 = 0LL;
        ++word_180178B42;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    if ( v11 )
    {
      v22 = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v11, &v22);
    }
  }
  else
  {
    return 0;
  }
  return v15;
}
