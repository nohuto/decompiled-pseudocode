/*
 * XREFs of sub_1407882D4 @ 0x1407882D4
 * Callers:
 *     sub_1407880F0 @ 0x1407880F0 (sub_1407880F0.c)
 *     sub_1407881D0 @ 0x1407881D0 (sub_1407881D0.c)
 *     sub_140788A80 @ 0x140788A80 (sub_140788A80.c)
 *     sub_140789110 @ 0x140789110 (sub_140789110.c)
 *     sub_140A30A20 @ 0x140A30A20 (sub_140A30A20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407882D4(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 392);
  return v3;
}
