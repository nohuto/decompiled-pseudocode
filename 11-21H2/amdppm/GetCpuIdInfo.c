/*
 * XREFs of GetCpuIdInfo @ 0x1C000BAE0
 * Callers:
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001F960 (InitEnergyCountersOnCurrentProcessor.c)
 *     InitMonitorMWaitSupport @ 0x1C001FDA0 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C001FE64 (IsMonitorMWaitSupported.c)
 *     InitDriver @ 0x1C00200A8 (InitDriver.c)
 *     IsACountMCountSupported @ 0x1C00202C0 (IsACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x1C0020340 (ValidatePStateCapability.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
