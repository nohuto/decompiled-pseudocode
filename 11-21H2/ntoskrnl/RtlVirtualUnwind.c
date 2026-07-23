/*
 * XREFs of RtlVirtualUnwind @ 0x140294B90
 * Callers:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     sub_140295210 @ 0x140295210 (sub_140295210.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 * Callees:
 *     sub_140296FC0 @ 0x140296FC0 (sub_140296FC0.c)
 */

PEXCEPTION_ROUTINE __cdecl RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  EXCEPTION_DISPOSITION (__cdecl *v9)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+60h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+68h] [rbp-20h] BYREF

  v10[2] = ContextPointers;
  v9 = 0LL;
  v10[0] = 0LL;
  v10[1] = 0LL;
  sub_140296FC0(
    HandlerType,
    ImageBase,
    ControlPc,
    (_DWORD)FunctionEntry,
    (__int64)ContextRecord,
    0LL,
    (__int64)HandlerData,
    (__int64)EstablisherFrame,
    (__int64)&v9,
    (__int64)v10);
  return v9;
}
