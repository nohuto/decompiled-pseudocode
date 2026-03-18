/*
 * XREFs of RtlpHpVaMgrRangeCreate @ 0x14023D3C8
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x14023CCE0 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x14023CDE0 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlSparseArrayElementAllocate @ 0x14023D4C8 (RtlSparseArrayElementAllocate.c)
 *     RtlCSparseBitmapBitsClear @ 0x140368170 (RtlCSparseBitmapBitsClear.c)
 */

_BYTE *__fastcall RtlpHpVaMgrRangeCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbp
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  __int64 v10; // r14
  unsigned __int64 v11; // rsi
  __int64 v12; // rax

  if ( (*(_BYTE *)a3 & 4) != 0 )
    v6 = *(_QWORD *)(a3 + 24);
  else
    v6 = *(unsigned __int16 *)(a3 + 24);
  v7 = (_BYTE *)RtlSparseArrayElementAllocate(
                  *(_QWORD *)(a1 + 24) + 16LL,
                  (unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20);
  v8 = v7;
  if ( v7 )
  {
    if ( (*v7 & 4) == 0 )
    {
      v10 = a2 + 0x100000;
      *(_BYTE *)a3 |= 2u;
      v11 = 1LL;
      *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 44);
      *(_OWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)(a3 + 24) = 2309737967LL;
      while ( v11 < v6 )
      {
        if ( !RtlSparseArrayElementAllocate(
                *(_QWORD *)(a1 + 24) + 16LL,
                (unsigned __int64)(v10 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20) )
        {
          do
          {
            v12 = *(_QWORD *)(a1 + 24);
            RtlCSparseBitmapBitsClear(
              v12 + 32,
              8 * ((unsigned __int64)&v8[-*(_QWORD *)(v12 + 40)] >> *(_DWORD *)(v12 + 24) << *(_DWORD *)(v12 + 24)),
              8 * (1LL << *(_DWORD *)(v12 + 24)));
            v8 += 32;
            --v11;
          }
          while ( v11 );
          return 0LL;
        }
        ++v11;
        v10 += 0x100000LL;
      }
    }
  }
  else
  {
    v8 = 0LL;
    if ( v6 )
      return 0LL;
  }
  return v8;
}
