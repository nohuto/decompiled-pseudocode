/*
 * XREFs of sub_180013510 @ 0x180013510
 * Callers:
 *     sub_180016570 @ 0x180016570 (sub_180016570.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_1800446C0 @ 0x1800446C0 (sub_1800446C0.c)
 *     sub_1800446D8 @ 0x1800446D8 (sub_1800446D8.c)
 */

__int64 __fastcall sub_180013510(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = (_QWORD *)(a1 + 16);
  sub_1800124F8((__int64 *)(a1 + 16), a2);
  LOBYTE(v3) = 1;
  *(_WORD *)(*v2 + 112LL) |= 0x10u;
  *(_WORD *)(*v2 + 112LL) &= ~2u;
  *(_WORD *)(*v2 + 112LL) |= 1u;
  sub_1800446D8(*v2, &unk_1801D7E68, v3);
  sub_1800446C0(*v2, v4, 1LL);
  return 0LL;
}
