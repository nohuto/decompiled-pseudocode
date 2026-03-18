/*
 * XREFs of VfDriverInitStarting @ 0x140ABD304
 * Callers:
 *     MmCallDllInitialize @ 0x140810E60 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140B3DA00 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
