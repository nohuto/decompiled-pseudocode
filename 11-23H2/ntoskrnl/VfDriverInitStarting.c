/*
 * XREFs of VfDriverInitStarting @ 0x140ABD2F4
 * Callers:
 *     MmCallDllInitialize @ 0x140811130 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140B3DA00 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
