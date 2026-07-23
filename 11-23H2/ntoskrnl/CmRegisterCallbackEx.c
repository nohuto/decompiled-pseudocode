/*
 * XREFs of CmRegisterCallbackEx @ 0x140850F50
 * Callers:
 *     DifCmRegisterCallbackExWrapper @ 0x1405D69B0 (DifCmRegisterCallbackExWrapper.c)
 *     EtwpRegTraceEnableCallback @ 0x1409F4760 (EtwpRegTraceEnableCallback.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x14085101C (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallbackEx(
        PEX_CALLBACK_FUNCTION Function,
        PCUNICODE_STRING Altitude,
        PVOID Driver,
        PVOID Context,
        PLARGE_INTEGER Cookie,
        PVOID Reserved)
{
  if ( !Driver )
    return -1073741583;
  if ( Reserved )
    return -1073741580;
  return CmpRegisterCallbackInternal((_DWORD)Function, (_DWORD)Context, (_DWORD)Altitude, 0, 0, (__int64)Cookie);
}
