/*
 * XREFs of sub_140649CA0 @ 0x140649CA0
 * Callers:
 *     sub_140A16F94 @ 0x140A16F94 (sub_140A16F94.c)
 * Callees:
 *     sub_1405DF018 @ 0x1405DF018 (sub_1405DF018.c)
 */

__int64 __fastcall sub_140649CA0(unsigned __int16 *a1, _WORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  if ( (v3 & 1) != 0 )
    return 3221225485LL;
  v5 = a1[1];
  if ( (v5 & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int16)v3 > (unsigned __int16)v5 )
    return 3221225485LL;
  if ( (_WORD)v5 == 0xFFFF )
    return 3221225485LL;
  v6 = *((_QWORD *)a1 + 1);
  if ( !v6 && ((_WORD)v3 || (_WORD)v5) )
    return 3221225485LL;
  v7 = a3 >> 1;
  v8 = v3 >> 1;
  if ( v7 > 0x7FFF )
    return 3221225485LL;
  v10 = 0LL;
  result = sub_1405DF018(v6 + 2 * v8, (v5 >> 1) - v8, &v10, a2, v7);
  *a1 = 2 * (v10 + v8);
  return result;
}
