/*
 * XREFs of sub_14045C75A @ 0x14045C75A
 * Callers:
 *     sub_14045C812 @ 0x14045C812 (sub_14045C812.c)
 *     sub_1405B3D90 @ 0x1405B3D90 (sub_1405B3D90.c)
 * Callees:
 *     sub_140264BD8 @ 0x140264BD8 (sub_140264BD8.c)
 *     sub_14045C7CC @ 0x14045C7CC (sub_14045C7CC.c)
 */

__int64 __fastcall sub_14045C75A(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r9
  __int64 v7; // r11

  if ( (unsigned __int64)sub_140264BD8(*(_QWORD *)(a1 + 16) + 24512LL * a2, a3, 4096) >= 0x200
    || (unsigned __int64)sub_14045C7CC(a1, a2, a3, v6) < 0x1000 )
  {
    return 0LL;
  }
  else
  {
    return 1024 - v7;
  }
}
