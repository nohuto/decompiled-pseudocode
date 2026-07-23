/*
 * XREFs of sub_14080FCA4 @ 0x14080FCA4
 * Callers:
 *     sub_14080FBCC @ 0x14080FBCC (sub_14080FBCC.c)
 *     sub_140919308 @ 0x140919308 (sub_140919308.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char sub_14080FCA4()
{
  ExReleasePushLockEx((ULONG_PTR)&qword_140C49220, 0LL);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
