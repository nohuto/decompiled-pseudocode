/*
 * XREFs of sub_18003C184 @ 0x18003C184
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 * Callees:
 *     sub_1800213A4 @ 0x1800213A4 (sub_1800213A4.c)
 *     sub_18002C9BC @ 0x18002C9BC (sub_18002C9BC.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 */

__int64 __fastcall sub_18003C184(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rax
  __int64 v5; // [rsp+28h] [rbp-10h]

  sub_1800213A4(
    *(_QWORD **)(a1 + 464),
    0,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1661,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick");
  v5 = *(_QWORD *)(a1 + 944);
  v2 = *(_QWORD **)(a1 + 464);
  *(_QWORD *)(a1 + 944) = v5 + 1;
  sub_18002C9BC(
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1662,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick_FrameNumber",
    v5);
  v3 = sub_18007BD8C();
  return sub_18007BBEC(v3);
}
