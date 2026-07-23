/*
 * XREFs of sub_140424F10 @ 0x140424F10
 * Callers:
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_1405FF8F0 @ 0x1405FF8F0 (sub_1405FF8F0.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_140B1D5F4 @ 0x140B1D5F4 (sub_140B1D5F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140424F10(_OWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 128LL;
  v2 = 32LL;
  do
  {
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1 += 8;
    *(a1 - 4) = 0LL;
    *(a1 - 3) = 0LL;
    --v2;
    *(a1 - 2) = 0LL;
    *(a1 - 1) = 0LL;
  }
  while ( v2 );
  return result;
}
