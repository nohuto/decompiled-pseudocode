/*
 * XREFs of sub_1408089C4 @ 0x1408089C4
 * Callers:
 *     sub_14062C800 @ 0x14062C800 (sub_14062C800.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char sub_1408089C4()
{
  ExReleaseResourceLite(&stru_140C165C0);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
