/*
 * XREFs of PdcPortClose @ 0x1C0143E14
 * Callers:
 *     PdcTaskClientUnregister @ 0x1C0143D48 (PdcTaskClientUnregister.c)
 * Callees:
 *     PdcpPortReleaseResources @ 0x1C0143FD8 (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortClose(struct _EX_RUNDOWN_REF *P)
{
  ExWaitForRundownProtectionRelease(P + 1);
  ExRundownCompleted(P + 1);
  return PdcpPortReleaseResources(P);
}
