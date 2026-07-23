/*
 * XREFs of sub_1405DEF84 @ 0x1405DEF84
 * Callers:
 *     sub_1409A00F0 @ 0x1409A00F0 (sub_1409A00F0.c)
 * Callees:
 *     sub_1405DF018 @ 0x1405DF018 (sub_1405DF018.c)
 */

__int64 __fastcall sub_1405DEF84(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int16 v3; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // r10
  __int16 v7; // cx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_WORD *)a1;
  if ( (*(_WORD *)a1 & 1) != 0 )
    return 3221225485LL;
  v5 = *(unsigned __int16 *)(a1 + 2);
  if ( (v5 & 1) != 0 )
    return 3221225485LL;
  if ( v3 > (unsigned __int16)v5 )
    return 3221225485LL;
  if ( (_WORD)v5 == 0xFFFF )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  if ( !v6 && (v3 || (_WORD)v5) )
    return 3221225485LL;
  v9 = 0LL;
  if ( a3 <= 0x7FFF )
  {
    result = sub_1405DF018(v6, v5 >> 1, (unsigned int)&v9, a2, a3);
    v7 = v9;
  }
  else
  {
    result = 3221225485LL;
  }
  *(_WORD *)a1 = 2 * v7;
  return result;
}
