/*
 * XREFs of MmVerifyCallbackFunction @ 0x140A30768
 * Callers:
 *     KeRegisterBoundCallback @ 0x14056C9F0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14039FF1C (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
