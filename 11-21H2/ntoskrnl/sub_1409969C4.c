/*
 * XREFs of sub_1409969C4 @ 0x1409969C4
 * Callers:
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char sub_1409969C4()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C207A0, 1u);
  if ( (dword_140C20808 & 4) != 0 )
    dword_140C20808 &= ~4u;
  ExReleaseResourceLite(&stru_140C207A0);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
