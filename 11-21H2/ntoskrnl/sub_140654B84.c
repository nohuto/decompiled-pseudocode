/*
 * XREFs of sub_140654B84 @ 0x140654B84
 * Callers:
 *     sub_140A04C34 @ 0x140A04C34 (sub_140A04C34.c)
 * Callees:
 *     sub_1406EB7B0 @ 0x1406EB7B0 (sub_1406EB7B0.c)
 */

void __fastcall sub_140654B84(_DWORD *a1)
{
  if ( a1 )
  {
    if ( a1[26] == 903790814 )
    {
      a1[26] = 0;
      sub_1406EB7B0(0LL, a1);
    }
  }
}
