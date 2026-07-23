/*
 * XREFs of RtlCSparseBitmapFindBitSetCapped @ 0x180064910
 * Callers:
 *     RtlSparseArrayElementAllocated @ 0x1800648B4 (RtlSparseArrayElementAllocated.c)
 *     RtlSparseArrayElementFindCapped @ 0x180123F64 (RtlSparseArrayElementFindCapped.c)
 * Callees:
 *     RtlLengthCurrentClearRunBackwardEx @ 0x1800F96E0 (RtlLengthCurrentClearRunBackwardEx.c)
 *     RtlLengthCurrentClearRunForwardEx @ 0x1800F9790 (RtlLengthCurrentClearRunForwardEx.c)
 */

__int64 __fastcall RtlCSparseBitmapFindBitSetCapped(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r14
  signed __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  const signed __int64 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD v18[10]; // [rsp+28h] [rbp-50h] BYREF

  while ( a3 )
  {
    v6 = a2 & 0x7FFF;
    v7 = a3;
    v8 = v6 + a3;
    if ( a3 < 0 )
    {
      v7 = ~v6;
      if ( v8 >= 0 )
        v7 = a3;
    }
    else if ( v8 > 0x8000 )
    {
      v7 = 0x8000 - v6;
    }
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
      v9 = (_bittest64(*(const signed __int64 **)a1, a2 >> 15) != 0) + 1;
    else
      v9 = 0;
    if ( v9 < 2 )
    {
      if ( v9 != 1 )
      {
        v16 = a2 & 0x3FFFFFFF;
        v7 = a3;
        v17 = v16 + a3;
        if ( a3 >= 0 )
        {
          if ( v17 > 0x40000000 )
            v7 = 0x40000000 - v16;
        }
        else
        {
          v7 = ~(unsigned __int64)(unsigned int)v16;
          if ( v17 >= 0 )
            v7 = a3;
        }
      }
    }
    else
    {
      v10 = 1LL;
      if ( v7 > 1 )
        v10 = v7;
      v11 = (const signed __int64 *)(*(_QWORD *)(a1 + 8) + (((__int64)a2 / 0x8000) << 12));
      v18[0] = v6 + v10;
      v18[1] = v11;
      if ( _bittest64(v11, v6) )
      {
        v12 = 0LL;
      }
      else
      {
        v13 = a2 & 0x7FFF;
        if ( v7 <= 0 )
          v12 = -RtlLengthCurrentClearRunBackwardEx(v18, v13, -v7);
        else
          v12 = RtlLengthCurrentClearRunForwardEx(v18, v13, -1LL);
      }
      if ( (__int64)abs64(v12) < (__int64)abs64(v7) )
        return v6 + v12 + (((__int64)a2 / 0x8000) << 15);
    }
    a2 += v7;
    a3 -= v7;
  }
  return -1LL;
}
