/*
 * XREFs of sub_14038A250 @ 0x14038A250
 * Callers:
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14038A2A8 @ 0x14038A2A8 (sub_14038A2A8.c)
 */

__int64 sub_14038A250()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51DE0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51DF0);
  return sub_14038A2A8(sub_140395670, 0LL);
}
