/*
 * XREFs of LdrpInitializationFailure @ 0x18008A4F0
 * Callers:
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 *     LdrpLoadShimEngine @ 0x1800797E8 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180079A00 (LdrpInitializeShimDllDependencies.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x18008A55C (LdrpLogFatalLdrEtwEvent.c)
 *     NtRaiseHardError @ 0x1800A1C40 (NtRaiseHardError.c)
 */

NTSTATUS __fastcall LdrpInitializationFailure(int a1)
{
  unsigned __int64 v1; // rbx
  NTSTATUS result; // eax
  ULONG Response; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 Parameters; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    2596,
    (__int64)"LdrpInitializationFailure",
    0,
    "Process initialization failed with status 0x%08lx\n",
    a1);
  result = LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName, "\a");
  if ( !LdrpFatalHardErrorCount )
  {
    Parameters = v1;
    return NtRaiseHardError(-1073741499, 1u, 0, &Parameters, 1u, &Response);
  }
  return result;
}
