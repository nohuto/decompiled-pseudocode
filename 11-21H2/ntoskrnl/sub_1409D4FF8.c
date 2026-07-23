/*
 * XREFs of sub_1409D4FF8 @ 0x1409D4FF8
 * Callers:
 *     sub_1406E5AA0 @ 0x1406E5AA0 (sub_1406E5AA0.c)
 * Callees:
 *     sub_1409D8588 @ 0x1409D8588 (sub_1409D8588.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409D4FF8(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0;
  if ( a3 != 20 )
    return 3221225990LL;
  if ( a4 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v7 = a2;
    *(_BYTE *)v7 = *(_BYTE *)v7;
    *(_BYTE *)(v7 + 19) = *(_BYTE *)(v7 + 19);
  }
  v9 = *(_OWORD *)a2;
  v8 = *(_DWORD *)(a2 + 16);
  v10 = v8;
  if ( (_BYTE)v9 != 1 )
    return 3221225561LL;
  if ( (v9 & 0xFFFFFE00) != 0 || !v8 || SHIDWORD(v9) >= 2 )
    return 3221225485LL;
  result = sub_1409D8588(a1, &v9);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)a2 = v9;
    *(_DWORD *)(a2 + 16) = v10;
    return 0LL;
  }
  return result;
}
