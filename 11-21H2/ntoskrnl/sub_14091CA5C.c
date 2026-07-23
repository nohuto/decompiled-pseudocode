/*
 * XREFs of sub_14091CA5C @ 0x14091CA5C
 * Callers:
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void sub_14091CA5C()
{
  ExWaitForRundownProtectionRelease(&stru_140C49420);
  ExRundownCompleted(&stru_140C49420);
}
