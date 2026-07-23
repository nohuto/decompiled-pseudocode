/*
 * XREFs of sub_140390724 @ 0x140390724
 * Callers:
 *     sub_1403792D8 @ 0x1403792D8 (sub_1403792D8.c)
 *     sub_1403794AC @ 0x1403794AC (sub_1403794AC.c)
 *     sub_1403905FC @ 0x1403905FC (sub_1403905FC.c)
 * Callees:
 *     sub_1402376A4 @ 0x1402376A4 (sub_1402376A4.c)
 */

__int64 __fastcall sub_140390724(__int64 a1, __int64 a2, int a3)
{
  if ( *(_QWORD *)(a1 + 6576) != a2 )
    return 1LL;
  if ( (unsigned int)sub_1402376A4(a1 + 6360, a3) == -1073741536 )
  {
    *(_QWORD *)(a1 + 6576) = 0LL;
    return 1LL;
  }
  return 0LL;
}
