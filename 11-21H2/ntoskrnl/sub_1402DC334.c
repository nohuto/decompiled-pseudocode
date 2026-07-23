/*
 * XREFs of sub_1402DC334 @ 0x1402DC334
 * Callers:
 *     sub_14076200C @ 0x14076200C (sub_14076200C.c)
 *     sub_1407621C0 @ 0x1407621C0 (sub_1407621C0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_1402DC334(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F4E0, 0LL);
}
