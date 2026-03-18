/*
 * XREFs of VfDriverInitStarting @ 0x140A7BE34
 * Callers:
 *     MmCallDllInitialize @ 0x14082ED84 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140B11D58 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
