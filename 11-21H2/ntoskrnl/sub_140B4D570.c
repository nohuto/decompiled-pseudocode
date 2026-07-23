/*
 * XREFs of sub_140B4D570 @ 0x140B4D570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140B4D570(_WORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // cx

  v2 = a1[4];
  v3 = a2[4];
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
