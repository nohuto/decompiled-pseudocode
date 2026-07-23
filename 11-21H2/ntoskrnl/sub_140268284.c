/*
 * XREFs of sub_140268284 @ 0x140268284
 * Callers:
 *     sub_14025BDC8 @ 0x14025BDC8 (sub_14025BDC8.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     sub_14026A574 @ 0x14026A574 (sub_14026A574.c)
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     sub_14057F9FC @ 0x14057F9FC (sub_14057F9FC.c)
 *     sub_140586E78 @ 0x140586E78 (sub_140586E78.c)
 *     sub_1405B2670 @ 0x1405B2670 (sub_1405B2670.c)
 *     sub_1405B2914 @ 0x1405B2914 (sub_1405B2914.c)
 *     sub_1407F8CF0 @ 0x1407F8CF0 (sub_1407F8CF0.c)
 *     sub_14097E8C8 @ 0x14097E8C8 (sub_14097E8C8.c)
 *     sub_140983AC0 @ 0x140983AC0 (sub_140983AC0.c)
 * Callees:
 *     sub_1402682BC @ 0x1402682BC (sub_1402682BC.c)
 */

__int64 __fastcall sub_140268284(__int64 a1)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 4; ++i )
  {
    result = sub_1402682BC(a1, i);
    a1 += 32LL;
  }
  return result;
}
