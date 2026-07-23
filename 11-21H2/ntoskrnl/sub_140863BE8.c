/*
 * XREFs of sub_140863BE8 @ 0x140863BE8
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     sub_1402D21B8 @ 0x1402D21B8 (sub_1402D21B8.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 */

__int64 __fastcall sub_140863BE8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  sub_1402D21B8(&stru_1400134D0, 0, 0LL);
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 312LL) + 40LL);
  LODWORD(v4) = 3;
  BYTE4(v4) = byte_140C4629A;
  sub_140777578(v2, a1, (__int64)&v4, 0, 0, 0, 0);
  sub_1402D21B8(&stru_1400134C0, 0, 0LL);
  return 0LL;
}
