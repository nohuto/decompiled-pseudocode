/*
 * XREFs of VfDriverInitSuccess @ 0x140ABD430
 * Callers:
 *     MmCallDllInitialize @ 0x140810E60 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140B3DA00 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x140ACA964 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
