/*
 * XREFs of ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C016894C
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0034BE0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

void __fastcall DxLddmLogProcessPrimaryLockCount(ULONG a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // r14d
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  PWSTR Buffer; // rsi
  __int64 v9; // rbx
  char *ErrorLogEntry; // rax
  char *v11; // rdi
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _WORD Src[12]; // [rsp+50h] [rbp-20h] BYREF

  *(_QWORD *)&String.Length = 1441792LL;
  String.Buffer = Src;
  if ( RtlIntegerToUnicodeString(a1, 0xAu, &String) >= 0 )
  {
    v3 = -1LL;
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
    v5 = 2 * v4 + 2;
    UnicodeString = 0LL;
    DestinationString = 0LL;
    CurrentProcess = PsGetCurrentProcess(Src, v1, v2);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      do
        ++v3;
      while ( UnicodeString.Buffer[v3] );
      v9 = (unsigned int)(2 * v3 + 2);
      if ( (unsigned int)v9 + v5 + 40 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(
                                  gpWin32kDriverObject,
                                  (unsigned __int8)v9 + (unsigned __int8)v5 + 40);
        v11 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = 1073742069;
          *((_DWORD *)ErrorLogEntry + 1) = 2621442;
          memmove(ErrorLogEntry + 40, Buffer, (unsigned int)v9);
          memmove(&v11[v9 + 40], Src, v5);
          IoWriteErrorLogEntry(v11);
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
}
