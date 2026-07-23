/*
 * XREFs of sub_140666C9C @ 0x140666C9C
 * Callers:
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_140668084 @ 0x140668084 (sub_140668084.c)
 * Callees:
 *     sub_1407A7B98 @ 0x1407A7B98 (sub_1407A7B98.c)
 *     sub_1407A7C84 @ 0x1407A7C84 (sub_1407A7C84.c)
 */

__int64 __fastcall sub_140666C9C(__int64 a1, __int64 a2, int a3, unsigned __int16 a4, char a5, char a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned int v9; // r10d

  if ( !a5 )
  {
    if ( (a3 & 0xC0000000) == 0x80000000 )
      a2 += 24LL;
    else
      a2 += 40LL;
  }
  if ( a6 && (unsigned __int64)a4 + a2 > 0x7FFFFFFF0000LL )
    return 3221225477LL;
  *(_QWORD *)(a1 + 176) = a2;
  v6 = sub_1407A7C84(a1, a2);
  if ( v8 > v6 )
    return (unsigned int)sub_1407A7B98(v7, v8, 0LL);
  return v9;
}
