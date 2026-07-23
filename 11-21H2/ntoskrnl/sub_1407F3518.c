/*
 * XREFs of sub_1407F3518 @ 0x1407F3518
 * Callers:
 *     sub_14036D9B8 @ 0x14036D9B8 (sub_14036D9B8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1407F3518(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1368) = a2;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x10000u);
}
