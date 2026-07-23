/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x140A1F94C
 * Callers:
 *     CmShutdownSystem2 @ 0x14061636C (CmShutdownSystem2.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpShutdownRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpShutdownRundown, 1LL);
}
