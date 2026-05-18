/*
 * XREFs of sub_18005D514 @ 0x18005D514
 * Callers:
 *     sub_18001AF40 @ 0x18001AF40 (sub_18001AF40.c)
 *     sub_18005CC00 @ 0x18005CC00 (sub_18005CC00.c)
 *     sub_18005D990 @ 0x18005D990 (sub_18005D990.c)
 *     sub_18005DCB8 @ 0x18005DCB8 (sub_18005DCB8.c)
 *     sub_18005DEF0 @ 0x18005DEF0 (sub_18005DEF0.c)
 *     sub_18005E068 @ 0x18005E068 (sub_18005E068.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005D514(__int64 a1, int a2, int a3, _OWORD *a4)
{
  __int64 result; // rax
  __int128 v5; // xmm1
  __int64 v6; // r8
  __int128 v7; // xmm0
  __int128 v8; // xmm1

  result = a3;
  v5 = a4[1];
  v6 = (a3 + 4LL * a2) << 6;
  *(_OWORD *)(v6 + a1 + 548) = *a4;
  v7 = a4[2];
  *(_OWORD *)(v6 + a1 + 564) = v5;
  v8 = a4[3];
  *(_OWORD *)(v6 + a1 + 580) = v7;
  *(_OWORD *)(v6 + a1 + 596) = v8;
  return result;
}
