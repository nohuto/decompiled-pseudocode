/*
 * XREFs of VfDriverInitSuccess @ 0x140A7C528
 * Callers:
 *     MmCallDllInitialize @ 0x14082ED84 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140B11D58 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x140A89FE0 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
