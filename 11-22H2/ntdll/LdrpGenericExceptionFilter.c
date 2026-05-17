/*
 * XREFs of LdrpGenericExceptionFilter @ 0x1800E0678
 * Callers:
 *     LdrpProtectedCopyMemory @ 0x1800012B0 (LdrpProtectedCopyMemory.c)
 *     LdrpHandleTlsData @ 0x180004574 (LdrpHandleTlsData.c)
 *     LdrpAllocateTlsEntry @ 0x180004A90 (LdrpAllocateTlsEntry.c)
 *     LdrpSnapModule @ 0x180023FF0 (LdrpSnapModule.c)
 *     LdrpAllocateTls @ 0x18002977C (LdrpAllocateTls.c)
 *     LdrUnlockLoaderLock @ 0x180051090 (LdrUnlockLoaderLock.c)
 *     LdrLockLoaderLock @ 0x180051190 (LdrLockLoaderLock.c)
 *     LdrpTouchThreadStack @ 0x18008433C (LdrpTouchThreadStack.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DCCF4 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x18008A55C (LdrpLogFatalLdrEtwEvent.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x18009F850 (NtTerminateThread.c)
 *     DbgPrompt @ 0x1800EB110 (DbgPrompt.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  bool v3; // zf
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  char v8; // [rsp+60h] [rbp+8h] BYREF

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrutil.c",
    563LL,
    (__int64)"LdrpGenericExceptionFilter",
    0LL,
    "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
    a2,
    *(_DWORD *)*a1,
    *a1,
    a1[1]);
  if ( (LdrpDebugFlags & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &v8, 2LL);
      if ( v8 > 98 )
      {
        v4 = v8 - 105;
        v3 = v8 == 105;
      }
      else
      {
        if ( v8 == 98 || v8 == 66 )
          goto LABEL_13;
        v4 = v8 - 73;
        v3 = v8 == 73;
      }
      if ( v3 )
        return 1LL;
      v5 = v4 - 6;
      if ( !v5 )
      {
LABEL_13:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LoaderFatalErrorThread);
          NtTerminateThread();
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LoaderFatalErrorProc);
        ZwTerminateProcess();
      }
    }
  }
  return 1LL;
}
