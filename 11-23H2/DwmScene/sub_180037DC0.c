/*
 * XREFs of sub_180037DC0 @ 0x180037DC0
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 * Callees:
 *     sub_180020094 @ 0x180020094 (sub_180020094.c)
 *     sub_18002A80C @ 0x18002A80C (sub_18002A80C.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 */

__int64 __fastcall sub_180037DC0(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v9; // [rsp+28h] [rbp-10h]

  sub_180020094(
    *(_QWORD **)(a1 + 464),
    0,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1661,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick");
  v9 = *(_QWORD *)(a1 + 944);
  v2 = *(_QWORD **)(a1 + 464);
  *(_QWORD *)(a1 + 944) = v9 + 1;
  sub_18002A80C(
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1662,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick_FrameNumber",
    v9);
  v7 = sub_180070B94(v4, v3, v5, v6);
  return sub_180070A1C(v7);
}
