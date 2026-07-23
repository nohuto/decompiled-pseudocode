/*
 * XREFs of sub_140236694 @ 0x140236694
 * Callers:
 *     sub_1406AECC0 @ 0x1406AECC0 (sub_1406AECC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140236694(_DWORD *a1)
{
  int v1; // eax

  if ( (unsigned int)(*a1 - 7) > 1 )
    return 1LL;
  v1 = a1[1];
  if ( (v1 & 0x10) != 0 )
    return 2LL;
  if ( (v1 & 1) != 0 )
    return 3LL;
  return ((unsigned __int8)~*((_BYTE *)a1 + 4) >> 3) & 4;
}
