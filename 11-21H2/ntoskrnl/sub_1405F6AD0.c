/*
 * XREFs of sub_1405F6AD0 @ 0x1405F6AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405F6AD0(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx

  if ( !a1 )
  {
    v4 = *a3;
    if ( (*a3 & 3) == 1 )
    {
      v5 = v4 & 0xFFFFF003;
      if ( ((v4 >> 2) & 0x3FF) > a2 )
        v5 |= ((_WORD)v4 - 4 * (_WORD)a2) & 0xFFC;
      *a3 = v5;
    }
  }
  return 0LL;
}
