/*
 * XREFs of sub_14038A214 @ 0x14038A214
 * Callers:
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14038A2A8 @ 0x14038A2A8 (sub_14038A2A8.c)
 */

void sub_14038A214()
{
  sub_14038A2A8(sub_140395670, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C51DF0);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C51DE0);
}
