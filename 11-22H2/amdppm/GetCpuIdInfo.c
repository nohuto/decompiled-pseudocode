/*
 * XREFs of GetCpuIdInfo @ 0x1C000C420
 * Callers:
 *     IsFastCppcSupported @ 0x1C000315C (IsFastCppcSupported.c)
 *     IsRaplSupported @ 0x1C00200E0 (IsRaplSupported.c)
 *     InitMonitorMWaitSupport @ 0x1C0020350 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C0020414 (IsMonitorMWaitSupported.c)
 *     InitDriver @ 0x1C0020BC0 (InitDriver.c)
 *     IsACountMCountSupported @ 0x1C0020E58 (IsACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x1C0020ED0 (ValidatePStateCapability.c)
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
