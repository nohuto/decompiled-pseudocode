/*
 * XREFs of sub_180032A98 @ 0x180032A98
 * Callers:
 *     sub_180033D98 @ 0x180033D98 (sub_180033D98.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180032A98(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  char *v5; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 88);
    if ( v3 >= 8 )
      result = sub_180010884(*(char **)(v1 + 64), 2 * v3 + 2);
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_QWORD *)(v1 + 88) = 7LL;
    *(_WORD *)(v1 + 64) = 0;
  }
  v5 = *(char **)(a1 + 8);
  if ( v5 )
    return sub_180010884(v5, 0x60uLL);
  return result;
}
