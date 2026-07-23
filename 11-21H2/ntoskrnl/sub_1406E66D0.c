/*
 * XREFs of sub_1406E66D0 @ 0x1406E66D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E66D0(__int64 a1, _BYTE *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax

  v2 = *(_DWORD *)(a1 + 1052);
  v3 = v2 - 1;
  v4 = v2 + 1;
  if ( !*a2 )
    v4 = v3;
  *(_DWORD *)(a1 + 1052) = v4;
  return 0LL;
}
