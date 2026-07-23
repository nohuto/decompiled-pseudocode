/*
 * XREFs of sub_140244090 @ 0x140244090
 * Callers:
 *     sub_14024F7C8 @ 0x14024F7C8 (sub_14024F7C8.c)
 *     sub_140365DD0 @ 0x140365DD0 (sub_140365DD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140244090(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = *a1;
  v3 = *(_QWORD *)(a2 + 24);
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
