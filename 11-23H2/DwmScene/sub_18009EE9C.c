/*
 * XREFs of sub_18009EE9C @ 0x18009EE9C
 * Callers:
 *     sub_18009F624 @ 0x18009F624 (sub_18009F624.c)
 * Callees:
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18009F05C @ 0x18009F05C (sub_18009F05C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009EE9C(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &Spectre::Engine::RenderTargetState::`vftable';
  sub_18000C8C8(a1 + 8, 16LL, 8LL);
  sub_18000C8C8(a1 + 136, 16LL, 8LL);
  sub_18000C8C8(a1 + 264, 16LL, 8LL);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_BYTE *)(a1 + 440) = 1;
  sub_18009F05C(a1 + 264, a2 + 1184);
  sub_1800124F8((__int64 *)(a1 + 424), (_QWORD *)(a2 + 1312));
  return a1;
}
