/*
 * XREFs of MmVerifyCallbackFunction @ 0x140A30A18
 * Callers:
 *     KeRegisterBoundCallback @ 0x14056D0B0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403A00FC (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
