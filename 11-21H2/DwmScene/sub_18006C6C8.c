/*
 * XREFs of sub_18006C6C8 @ 0x18006C6C8
 * Callers:
 *     sub_18006C060 @ 0x18006C060 (sub_18006C060.c)
 *     sub_180079984 @ 0x180079984 (sub_180079984.c)
 *     sub_180103DFA @ 0x180103DFA (sub_180103DFA.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18006C6C8(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  char *v5; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 40);
    if ( v3 >= 8 )
      result = sub_180010884(*(char **)(v1 + 16), 2 * v3 + 2);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_QWORD *)(v1 + 40) = 7LL;
    *(_WORD *)(v1 + 16) = 0;
  }
  v5 = *(char **)(a1 + 8);
  if ( v5 )
    return sub_180010884(v5, 0x30uLL);
  return result;
}
