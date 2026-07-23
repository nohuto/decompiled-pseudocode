/*
 * XREFs of sub_140A48C5C @ 0x140A48C5C
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_140989CC0 @ 0x140989CC0 (sub_140989CC0.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char sub_140A48C5C()
{
  if ( (struct _KTHREAD *)qword_140C22290 == KeGetCurrentThread() )
    qword_140C22290 = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C23198, 0LL);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
