/*
 * XREFs of sub_140953314 @ 0x140953314
 * Callers:
 *     sub_140562A68 @ 0x140562A68 (sub_140562A68.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 */

void sub_140953314()
{
  MmUnlockPagableImageSection(ImageSectionHandle);
  ExNotifyCallback(qword_140C158D0, (PVOID)3, (PVOID)1);
}
