/*
 * XREFs of BgkpDisableConsole @ 0x14054F66C
 * Callers:
 *     BgkDestroy @ 0x140AEEA68 (BgkDestroy.c)
 * Callees:
 *     ExRundownCompleted @ 0x140208880 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C0BD48);
  ExRundownCompleted(&stru_140C0BD48);
}
