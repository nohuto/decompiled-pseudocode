/*
 * XREFs of BgkpDisableConsole @ 0x14054EFAC
 * Callers:
 *     BgkDestroy @ 0x140AEEA68 (BgkDestroy.c)
 * Callees:
 *     ExRundownCompleted @ 0x140208880 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A340 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C0BD38);
  ExRundownCompleted(&stru_140C0BD38);
}
