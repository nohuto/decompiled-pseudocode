/*
 * XREFs of sub_1402D8398 @ 0x1402D8398
 * Callers:
 *     sub_1402D8234 @ 0x1402D8234 (sub_1402D8234.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1402D8398(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v3 == 1 )
    return 0LL;
  else
    return (a2 >> 12) % v3;
}
