/*
 * XREFs of LdrpGenericExceptionFilter @ 0x18008FD68
 * Callers:
 *     LdrpProtectedCopyMemory @ 0x1800012C0 (LdrpProtectedCopyMemory.c)
 *     LdrpAllocateTlsEntry @ 0x1800311E4 (LdrpAllocateTlsEntry.c)
 *     LdrpHandleTlsData @ 0x180033A94 (LdrpHandleTlsData.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpAllocateTls @ 0x180042A74 (LdrpAllocateTls.c)
 *     LdrLockLoaderLock @ 0x1800844D0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180085240 (LdrUnlockLoaderLock.c)
 *     LdrpProtectAndRelocateImage @ 0x180088EBC (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x180089280 (LdrpTouchThreadStack.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180092650 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180091FAC (LdrpLogFatalLdrEtwEvent.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A4AD0 (NtTerminateThread.c)
 *     DbgPrompt @ 0x1800EBC60 (DbgPrompt.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  NTSTATUS v3; // edi
  bool v5; // zf
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  CHAR Response; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_DWORD *)*a1;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrutil.c",
    563,
    (__int64)"LdrpGenericExceptionFilter",
    0,
    "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
    a2,
    v3,
    *a1,
    a1[1]);
  if ( (LdrpDebugFlags & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &Response, 2u);
      if ( Response > 98 )
      {
        v6 = Response - 105;
        v5 = Response == 105;
      }
      else
      {
        if ( Response == 98 || Response == 66 )
          goto LABEL_14;
        v6 = Response - 73;
        v5 = Response == 73;
      }
      if ( v5 )
        return 1LL;
      v7 = v6 - 6;
      if ( !v7 )
      {
LABEL_14:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName, &LoaderFatalErrorThread);
          NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, v3);
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName, &LoaderFatalErrorProc);
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
      }
    }
  }
  return 1LL;
}
