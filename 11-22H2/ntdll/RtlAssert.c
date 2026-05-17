/*
 * XREFs of RtlAssert @ 0x1800F8BD0
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B790 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001D1D8 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180083CE8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 * Callees:
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x18009F850 (NtTerminateThread.c)
 *     RtlCaptureContext @ 0x1800A3110 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1800EB110 (DbgPrompt.c)
 *     RtlIsAnyDebuggerPresent @ 0x18010C100 (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlAssert(const char *a1, const char *a2, int a3, const char *a4)
{
  __int64 result; // rax
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  char v13; // [rsp+40h] [rbp-518h]
  struct _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  if ( !a4 )
    a4 = byte_180136DCA;
  while ( 1 )
  {
    DbgPrintEx(101, 0, "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n", a4, a1, a2, a3);
    result = RtlIsAnyDebuggerPresent();
    if ( !(_BYTE)result )
      return result;
    result = DbgPrompt((__int64)"Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ");
    if ( !(_DWORD)result )
    {
      __debugbreak();
      return ZwTerminateProcess();
    }
    if ( v13 > 98 )
    {
      v10 = v13 - 105;
      v9 = v13 == 105;
    }
    else
    {
      if ( v13 == 98 || v13 == 66 )
        goto LABEL_15;
      v10 = v13 - 73;
      v9 = v13 == 73;
    }
    if ( v9 )
      return result;
    v11 = v10 - 6;
    if ( !v11 )
    {
LABEL_15:
      DbgPrintEx(101, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v12 = v11 - 1;
    if ( !v12 )
      return ZwTerminateProcess();
    if ( v12 == 4 )
      NtTerminateThread();
  }
}
