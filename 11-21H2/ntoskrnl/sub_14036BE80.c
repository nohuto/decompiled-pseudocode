/*
 * XREFs of sub_14036BE80 @ 0x14036BE80
 * Callers:
 *     sub_14036BBCC @ 0x14036BBCC (sub_14036BBCC.c)
 * Callees:
 *     sub_14036BF44 @ 0x14036BF44 (sub_14036BF44.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14036BE80(unsigned __int16 *a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

  v4 = *a2;
  v6 = *a1;
  v8 = a3 - *a2;
  v9 = v6 + 2;
  if ( v6 + 2 > v8 )
    return 3221225485LL;
  if ( a4 && (_WORD)v6 )
  {
    v10 = *((_QWORD *)a1 + 1);
    if ( (v10 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = v10 + v6;
    if ( v11 > 0x7FFFFFFF0000LL || v11 < v10 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( (int)sub_14036BF44(v4, v9) < 0 )
    return 3221225485LL;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(v4 + 2 * v12) );
  if ( *a1 != 2 * v12 )
    return 3221225485LL;
  *a2 += 2 * v12 + 2;
  return 0LL;
}
