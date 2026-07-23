/*
 * XREFs of RtlVirtualUnwind @ 0x14030D4E0
 * Callers:
 *     RtlDispatchException @ 0x1402A3CA0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402A4C20 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x1402A5960 (RtlpxVirtualUnwind.c)
 */

PEXCEPTION_ROUTINE __cdecl RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  EXCEPTION_DISPOSITION (__cdecl *v9)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+60h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+68h] [rbp-20h] BYREF

  v10[2] = ContextPointers;
  v9 = 0LL;
  v10[0] = 0LL;
  v10[1] = 0LL;
  RtlpxVirtualUnwind(
    HandlerType,
    ImageBase,
    ControlPc,
    &FunctionEntry->BeginAddress,
    (__int64)ContextRecord,
    0LL,
    HandlerData,
    EstablisherFrame,
    &v9,
    (__int64)v10);
  return v9;
}
