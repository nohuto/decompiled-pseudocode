/*
 * XREFs of CmRegisterCallback @ 0x140850CF0
 * Callers:
 *     DifCmRegisterCallbackWrapper @ 0x1405D65A0 (DifCmRegisterCallbackWrapper.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x140850D1C (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return CmpRegisterCallbackInternal(
           (_DWORD)Function,
           (_DWORD)Context,
           (unsigned int)&CmLegacyAltitude,
           1,
           0,
           (__int64)Cookie);
}
