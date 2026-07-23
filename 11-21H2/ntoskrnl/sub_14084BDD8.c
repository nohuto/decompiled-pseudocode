/*
 * XREFs of sub_14084BDD8 @ 0x14084BDD8
 * Callers:
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_140AF71F0 @ 0x140AF71F0 (sub_140AF71F0.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403CF960 @ 0x1403CF960 (sub_1403CF960.c)
 *     sub_1403DD52C @ 0x1403DD52C (sub_1403DD52C.c)
 *     sub_14084BE78 @ 0x14084BE78 (sub_14084BE78.c)
 */

char __fastcall sub_14084BDD8(__int64 a1, __int128 *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v5; // di
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  if ( byte_140D00A88 || !byte_140C0C6B9 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C48520, 1u);
  v7 = *a2;
  v5 = sub_14084BE78(a1, &v7);
  if ( v5 )
  {
    sub_1403CF960();
  }
  else if ( byte_140C097BF )
  {
    sub_1403DD52C();
  }
  ExReleaseResourceLite(&stru_140C48520);
  sub_1402F9540((__int64)CurrentThread);
  return v5;
}
