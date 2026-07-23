/*
 * XREFs of sub_14067F788 @ 0x14067F788
 * Callers:
 *     sub_14067EFD0 @ 0x14067EFD0 (sub_14067EFD0.c)
 *     sub_14067F130 @ 0x14067F130 (sub_14067F130.c)
 *     sub_14067F34C @ 0x14067F34C (sub_14067F34C.c)
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 *     sub_140681834 @ 0x140681834 (sub_140681834.c)
 *     sub_1406A0010 @ 0x1406A0010 (sub_1406A0010.c)
 *     sub_1406E26C4 @ 0x1406E26C4 (sub_1406E26C4.c)
 *     sub_1406E7AC4 @ 0x1406E7AC4 (sub_1406E7AC4.c)
 *     sub_140741B7C @ 0x140741B7C (sub_140741B7C.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 *     sub_14091BC64 @ 0x14091BC64 (sub_14091BC64.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall sub_14067F788(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
