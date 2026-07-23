/*
 * XREFs of sub_14091CA34 @ 0x14091CA34
 * Callers:
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void sub_14091CA34()
{
  ExWaitForRundownProtectionRelease(&stru_140C49430);
  ExRundownCompleted(&stru_140C49430);
}
