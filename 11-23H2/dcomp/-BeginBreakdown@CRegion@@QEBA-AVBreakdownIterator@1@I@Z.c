/*
 * XREFs of ?BeginBreakdown@CRegion@@QEBA?AVBreakdownIterator@1@I@Z @ 0x1801B2308
 * Callers:
 *     ?ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z @ 0x1800FE198 (-ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800816D8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall CRegion::BeginBreakdown(int **a1, __int64 a2, int a3)
{
  __int64 v4; // r11
  int *v5; // r8
  __int64 v6; // r10
  int v7; // eax
  _DWORD *v8; // r8
  FastRegion::Internal::CRgnData *v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // rax
  __m256i v16; // [rsp+20h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h]

  v4 = 0LL;
  v5 = *a1;
  v6 = a2;
  v16.m256i_i64[0] = (__int64)v5;
  v7 = *v5;
  if ( *v5 )
  {
    LODWORD(v17) = 0;
    v8 = v5 + 3;
    v16.m256i_i64[2] = (__int64)v8;
    v9 = (FastRegion::Internal::CRgnData *)((char *)v8 + (int)v8[1]);
    v16.m256i_i64[1] = (__int64)&v8[2 * v7 - 2];
    v16.m256i_i64[3] = (__int64)v9;
    DWORD1(v17) = ((__int64)v8 + (int)v8[3] - (_QWORD)v9 + 8) >> 3;
    if ( SDWORD1(v17) > 0 )
      goto LABEL_6;
    FastRegion::Internal::CRgnData::StepIterator(v9, (struct FastRegion::CRegion::Iterator *)&v16);
  }
  else
  {
    *(_OWORD *)&v16.m256i_u64[1] = 0LL;
  }
  v8 = (_DWORD *)v16.m256i_i64[2];
LABEL_6:
  v10 = *(_OWORD *)v16.m256i_i8;
  *(_QWORD *)(v6 + 48) = v4;
  v11 = *(_OWORD *)&v16.m256i_u64[2];
  *(_DWORD *)(v6 + 56) = a3;
  *(_OWORD *)v6 = v10;
  v12 = v17;
  *(_OWORD *)(v6 + 16) = v11;
  *(_OWORD *)(v6 + 32) = v12;
  if ( (unsigned __int64)v8 < v16.m256i_i64[1] )
  {
    v13 = 2 * (int)v17;
    v14 = v16.m256i_i64[3];
    *(_DWORD *)(v6 + 48) = *v8;
    *(_DWORD *)(v6 + 52) = *(_DWORD *)(v14 + 4 * v13);
  }
  else
  {
    LOBYTE(v4) = 1;
  }
  *(_BYTE *)(v6 + 60) = v4;
  return v6;
}
