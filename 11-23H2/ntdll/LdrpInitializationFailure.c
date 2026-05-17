/*
 * XREFs of LdrpInitializationFailure @ 0x18008ACF0
 * Callers:
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 *     LdrpLoadShimEngine @ 0x180079E58 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007A070 (LdrpInitializeShimDllDependencies.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x18008AD5C (LdrpLogFatalLdrEtwEvent.c)
 *     NtRaiseHardError @ 0x1800A3D00 (NtRaiseHardError.c)
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
    2598LL,
    (__int64)"LdrpInitializationFailure",
    0LL,
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
