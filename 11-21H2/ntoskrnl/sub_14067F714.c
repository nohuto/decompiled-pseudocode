/*
 * XREFs of sub_14067F714 @ 0x14067F714
 * Callers:
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 * Callees:
 *     sub_1409196EC @ 0x1409196EC (sub_1409196EC.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_14067F714(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = a1 + 16;
  while ( 1 )
  {
    v6 = sub_140AB4218(v3, &v9, 0LL);
    v7 = v6;
    if ( !v6 )
      break;
    if ( a2 && a2 == *(_QWORD *)(v6 + 56) || a3 && (unsigned __int8)sub_1409196EC(a3, v6 + 88) )
      return v7;
  }
  return 0LL;
}
