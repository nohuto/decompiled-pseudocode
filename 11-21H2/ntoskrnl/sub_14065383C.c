/*
 * XREFs of sub_14065383C @ 0x14065383C
 * Callers:
 *     sub_14065327C @ 0x14065327C (sub_14065327C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14065383C(unsigned __int16 *a1, __int64 a2)
{
  char v3; // al
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( (unsigned int)*a1 + 3 < *(unsigned __int16 *)(a2 + 2) )
    return 3221225495LL;
  v3 = *(_BYTE *)(a2 + 263);
  *((_BYTE *)a1 + 2) = v3;
  *a1 = 0;
  if ( !v3 )
  {
    v4 = *(_WORD *)(a2 + 2);
    if ( v4 > 3u )
    {
      v5 = v4 - 3;
      *a1 = v5;
      memmove((char *)a1 + 3, (const void *)(a2 + 264), v5);
    }
  }
  return 0LL;
}
