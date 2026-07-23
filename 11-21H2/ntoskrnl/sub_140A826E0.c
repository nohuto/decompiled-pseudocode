/*
 * XREFs of sub_140A826E0 @ 0x140A826E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A826E0(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( !a1 || *a2 != *a1 || a2[1] != a1[1] )
    return 1;
  return v2;
}
