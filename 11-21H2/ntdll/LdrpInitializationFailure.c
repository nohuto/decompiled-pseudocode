/*
 * XREFs of LdrpInitializationFailure @ 0x180091F40
 * Callers:
 *     LdrpLoadShimEngine @ 0x180072888 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180072B40 (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180091FAC (LdrpLogFatalLdrEtwEvent.c)
 *     NtRaiseHardError @ 0x1800A6E60 (NtRaiseHardError.c)
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
    2595,
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
