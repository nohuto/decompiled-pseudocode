/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x180065AB4
 * Callers:
 *     RtlpHpTagContextGetTag @ 0x1800A04A4 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180065DE8 (RtlpHpMetadataAlloc.c)
 *     RtlpHpTagContextFindMapping @ 0x180067444 (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagContextFindFreeTag @ 0x180067550 (RtlpHpTagContextFindFreeTag.c)
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
  __int64 v19; // [rsp+20h] [rbp-20h]
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF

  v20 = RtlpHpEnvHandle;
  v7 = RtlpHpMetadataAlloc(48LL, 48LL, 0LL, &v20);
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
        *(_QWORD *)(qword_180185DF8 + 8LL * FreeTag - 8) = v8;
        v19 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_180185DEC & 0x1F));
        v13 = qword_180185DF0;
        v14 = (37
             * (BYTE6(v19)
              + 37
              * (BYTE5(v19)
               + 37
               * (BYTE4(v19)
                + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
             + HIBYTE(v19)) & (((unsigned int)dword_180185DEC >> 5) - 1);
        v15 = (signed __int64 *)(qword_180185DF0 + 8 * v14);
        _m_prefetchw(v15);
        v16 = *v15;
        do
        {
          *(_QWORD *)v8 = v16;
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8 * v14), v8, v16);
        }
        while ( v17 != v16 );
        word_180185E00 = v12;
        ++dword_180185DE8;
        v8 = 0LL;
        ++word_180185E02;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    if ( v8 )
    {
      v20 = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v8, &v20);
    }
  }
  else
  {
    return 0;
  }
  return v12;
}
