/*
 * XREFs of sub_1403629E0 @ 0x1403629E0
 * Callers:
 *     sub_140362978 @ 0x140362978 (sub_140362978.c)
 *     sub_1405F34F0 @ 0x1405F34F0 (sub_1405F34F0.c)
 * Callees:
 *     sub_1405E6364 @ 0x1405E6364 (sub_1405E6364.c)
 *     sub_1405E6408 @ 0x1405E6408 (sub_1405E6408.c)
 */

__int64 __fastcall sub_1403629E0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdi
  signed __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  const signed __int64 *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  _OWORD v18[5]; // [rsp+28h] [rbp-50h] BYREF

  v18[0] = 0LL;
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
    {
      if ( _bittest64(*(const signed __int64 **)a1, a2 >> 15) )
      {
        v9 = (__int64)a2 / 0x8000;
        v10 = v7 <= 1 ? 1LL : v7;
        v11 = (const signed __int64 *)(*(_QWORD *)(a1 + 8) + (v9 << 12));
        *(_QWORD *)&v18[0] = v6 + v10;
        *((_QWORD *)&v18[0] + 1) = v11;
        if ( _bittest64(v11, v6) )
        {
          v12 = 0LL;
        }
        else
        {
          v13 = a2 & 0x7FFF;
          v12 = v7 <= 0 ? -sub_1405E6364(v18, v13, -v7) : sub_1405E6408(v18, v13);
        }
        if ( (__int64)abs64(v12) < (__int64)abs64(v7) )
          return v6 + v12 + (v9 << 15);
      }
    }
    else
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
    a2 += v7;
    a3 -= v7;
  }
  return -1LL;
}
