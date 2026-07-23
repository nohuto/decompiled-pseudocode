/*
 * XREFs of sub_140B2F9A0 @ 0x140B2F9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140B2F9A0(_BYTE *a1, _BYTE *a2)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // cl

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
