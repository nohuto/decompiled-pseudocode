/*
 * XREFs of LdrpGenericExceptionFilter @ 0x1800E19A8
 * Callers:
 *     LdrpProtectedCopyMemory @ 0x1800012B0 (LdrpProtectedCopyMemory.c)
 *     LdrpHandleTlsData @ 0x180004568 (LdrpHandleTlsData.c)
 *     LdrpAllocateTlsEntry @ 0x180004A84 (LdrpAllocateTlsEntry.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpAllocateTls @ 0x1800295AC (LdrpAllocateTls.c)
 *     LdrUnlockLoaderLock @ 0x180050F30 (LdrUnlockLoaderLock.c)
 *     LdrLockLoaderLock @ 0x180051030 (LdrLockLoaderLock.c)
 *     LdrpTouchThreadStack @ 0x180084B3C (LdrpTouchThreadStack.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D8A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DC6A4 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x18008AD5C (LdrpLogFatalLdrEtwEvent.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A1910 (NtTerminateThread.c)
 *     DbgPrompt @ 0x1800EC440 (DbgPrompt.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  NTSTATUS v3; // edi
  bool v4; // zf
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
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
        v5 = Response - 105;
        v4 = Response == 105;
      }
      else
      {
        if ( Response == 98 || Response == 66 )
          goto LABEL_13;
        v5 = Response - 73;
        v4 = Response == 73;
      }
      if ( v4 )
        return 1LL;
      v6 = v5 - 6;
      if ( !v6 )
      {
LABEL_13:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LoaderFatalErrorThread);
          NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, v3);
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LoaderFatalErrorProc);
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
      }
    }
  }
  return 1LL;
}
