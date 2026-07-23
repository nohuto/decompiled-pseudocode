/*
 * XREFs of VfPtComparePoolStackInfoCallback @ 0x140ADE730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VfPtComparePoolStackInfoCallback(_RTL_AVL_TABLE *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx

  if ( *a2 < *a3 )
    return 0LL;
  if ( *a2 > *a3 )
    return 1LL;
  v4 = a2[1];
  v5 = a3[1];
  if ( v5 <= v4 )
    return 2 - (unsigned int)(v5 < v4);
  else
    return 0LL;
}
