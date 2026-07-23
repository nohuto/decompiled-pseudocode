/*
 * XREFs of sub_140A5B770 @ 0x140A5B770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DC24C @ 0x1403DC24C (sub_1403DC24C.c)
 *     sub_1403DC270 @ 0x1403DC270 (sub_1403DC270.c)
 *     sub_140A5B7B4 @ 0x140A5B7B4 (sub_140A5B7B4.c)
 */

__int64 __fastcall sub_140A5B770(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 >= 0 )
  {
    if ( v2 <= 1 )
      return sub_140A5B7B4();
    switch ( v2 )
    {
      case 5:
        return sub_1403DC24C(a1, a2);
      case 3:
        return sub_1403DC270(a1, a2);
      case 12:
        return sub_1403DC24C(a1, a2);
    }
  }
  return 3221225659LL;
}
