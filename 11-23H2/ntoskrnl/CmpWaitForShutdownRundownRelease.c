/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x140A1F69C
 * Callers:
 *     CmShutdownSystem2 @ 0x140615E1C (CmShutdownSystem2.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A340 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpShutdownRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpShutdownRundown, 1LL);
}
