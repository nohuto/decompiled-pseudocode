/*
 * XREFs of sub_14036BF44 @ 0x14036BF44
 * Callers:
 *     sub_14036AC64 @ 0x14036AC64 (sub_14036AC64.c)
 *     sub_14036BE80 @ 0x14036BE80 (sub_14036BE80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14036BF44(_WORD *a1, unsigned __int64 a2, unsigned __int16 *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  unsigned __int16 v5; // ax
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // r8
  _WORD *v9; // rax

  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFE )
    return 3221225485LL;
  v4 = *a3;
  if ( (v4 & 1) != 0
    || (v5 = a3[1], (v5 & 1) != 0)
    || (unsigned __int16)v4 > v5
    || v5 == 0xFFFF
    || (v6 = *((_QWORD *)a3 + 1)) == 0 && ((_WORD)v4 || v5) )
  {
    *a1 = 0;
    return 3221225485LL;
  }
  v7 = (v4 >> 1) - v3;
  v8 = v6 - (_QWORD)a1;
  do
  {
    if ( !(v7 + v3) )
      break;
    *a1 = *(_WORD *)((char *)a1 + v8);
    ++a1;
    --v3;
  }
  while ( v3 );
  v9 = a1 - 1;
  if ( v3 )
    v9 = a1;
  *v9 = 0;
  return v3 == 0 ? 0x80000005 : 0;
}
