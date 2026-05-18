/*
 * XREFs of sub_180065944 @ 0x180065944
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_180064ED0 @ 0x180064ED0 (sub_180064ED0.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_180066028 @ 0x180066028 (sub_180066028.c)
 *     sub_180066258 @ 0x180066258 (sub_180066258.c)
 *     sub_18006642C @ 0x18006642C (sub_18006642C.c)
 *     sub_1800664E8 @ 0x1800664E8 (sub_1800664E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180065944(__int64 a1, int a2, int a3, _OWORD *a4)
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
