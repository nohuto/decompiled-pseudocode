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

__int64 __fastcall LdrpInitializationFailure(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  char v3; // [rsp+48h] [rbp+10h] BYREF
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

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
    v4 = v1;
    return NtRaiseHardError(3221225797LL, 1LL, 0LL, &v4, 1, &v3);
  }
  return result;
}
