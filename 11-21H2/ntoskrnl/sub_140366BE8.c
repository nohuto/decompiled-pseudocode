/*
 * XREFs of sub_140366BE8 @ 0x140366BE8
 * Callers:
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140365C94 @ 0x140365C94 (sub_140365C94.c)
 * Callees:
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 */

__int64 __fastcall sub_140366BE8(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // rax
  unsigned int v6; // ecx

  if ( (((a3 & 2) == 0) & (*(_BYTE *)(a1 + 1384) >> 6)) != 0 )
    return 0;
  if ( (int)sub_14033D760(a1) < 2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 336));
    return 0;
  }
  v5 = *(_QWORD *)(v3 + 432);
  v6 = 0;
  if ( !v5 || v5 == v4 && *(_QWORD *)(v3 + 440) == *(_QWORD *)(v4 + 1232) )
    return 1;
  return v6;
}
