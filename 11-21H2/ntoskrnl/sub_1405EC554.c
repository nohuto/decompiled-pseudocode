/*
 * XREFs of sub_1405EC554 @ 0x1405EC554
 * Callers:
 *     sub_140B06F28 @ 0x140B06F28 (sub_140B06F28.c)
 * Callees:
 *     strncmp @ 0x1403E0910 (strncmp.c)
 */

const char *__fastcall sub_1405EC554(__int64 a1, const char *a2)
{
  unsigned __int16 v2; // si
  const char *v3; // rbx
  __int16 v5; // di

  v2 = *(_WORD *)(a1 + 6);
  v3 = (const char *)(*(unsigned __int16 *)(a1 + 20) + a1 + 24);
  v5 = 0;
  if ( !v2 )
    return 0LL;
  while ( strncmp(v3, a2, 8uLL) )
  {
    v3 += 40;
    if ( (unsigned __int16)++v5 >= v2 )
      return 0LL;
  }
  return v3;
}
