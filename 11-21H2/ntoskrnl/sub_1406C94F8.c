/*
 * XREFs of sub_1406C94F8 @ 0x1406C94F8
 * Callers:
 *     sub_1406E6424 @ 0x1406E6424 (sub_1406E6424.c)
 *     sub_14078A988 @ 0x14078A988 (sub_14078A988.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C94F8(__int64 a1, __int16 *a2)
{
  unsigned __int16 v2; // ax
  __int16 *v4; // r9
  __int16 v5; // dx
  __int16 *v6; // r10
  __int16 v7; // ax

  v2 = *a2;
  if ( (unsigned __int16)*a2 > *(_WORD *)(a1 + 2) )
    return 3221225507LL;
  v4 = (__int16 *)*((_QWORD *)a2 + 1);
  v5 = v2 >> 1;
  v6 = *(__int16 **)(a1 + 8);
  if ( v2 >> 1 )
  {
    do
    {
      --v5;
      v7 = *v4;
      if ( *v4 == 92 || v7 == 47 )
        v7 = 35;
      *v6 = v7;
      ++v4;
      ++v6;
    }
    while ( v5 );
    v2 = *a2;
  }
  *(_WORD *)a1 = v2;
  return 0LL;
}
