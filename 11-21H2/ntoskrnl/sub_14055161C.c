/*
 * XREFs of sub_14055161C @ 0x14055161C
 * Callers:
 *     sub_140AAE8BC @ 0x140AAE8BC (sub_140AAE8BC.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void sub_14055161C()
{
  ExWaitForRundownProtectionRelease(&RunRef);
  ExRundownCompleted(&RunRef);
}
