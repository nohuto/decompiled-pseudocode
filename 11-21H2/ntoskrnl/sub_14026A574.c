/*
 * XREFs of sub_14026A574 @ 0x14026A574
 * Callers:
 *     sub_14025BDC8 @ 0x14025BDC8 (sub_14025BDC8.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 *     sub_1403D3CA0 @ 0x1403D3CA0 (sub_1403D3CA0.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     sub_140586E78 @ 0x140586E78 (sub_140586E78.c)
 *     sub_1407F8CF0 @ 0x1407F8CF0 (sub_1407F8CF0.c)
 *     sub_14097E8C8 @ 0x14097E8C8 (sub_14097E8C8.c)
 *     sub_1409839C0 @ 0x1409839C0 (sub_1409839C0.c)
 *     sub_140A59E20 @ 0x140A59E20 (sub_140A59E20.c)
 * Callees:
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     sub_14026A5DC @ 0x14026A5DC (sub_14026A5DC.c)
 */

__int64 __fastcall sub_14026A574(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  while ( !_bittest(&a3, v6) || (unsigned int)sub_14026A5DC(a1 + 32LL * v6, v6, a2) )
  {
    if ( ++v6 >= 4 )
      return 1LL;
  }
  sub_140268284(a1);
  return 0LL;
}
