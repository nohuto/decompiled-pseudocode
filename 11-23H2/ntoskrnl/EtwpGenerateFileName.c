/*
 * XREFs of EtwpGenerateFileName @ 0x1407E9570
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x1406BB400 (EtwpFlushBufferToLogfile.c)
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     EtwpIncrementTraceFile @ 0x1409E81C0 (EtwpIncrementTraceFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140229714 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     wcschr @ 0x1403DBAF0 (wcschr.c)
 *     wcsrchr @ 0x1403DBCF0 (wcsrchr.c)
 *     wcsstr @ 0x1403DBD80 (wcsstr.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpGenerateFileName(unsigned __int16 *a1, volatile signed __int32 *a2, UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  wchar_t *v7; // rdi
  signed __int32 v8; // ebp
  __int64 v9; // r14
  wchar_t *Pool2; // rax
  WCHAR *v11; // rdi

  v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
  if ( !v5 )
    return 3221225520LL;
  v7 = wcschr(v5, 0x25u);
  if ( v7 && v7 == wcsrchr(*((const wchar_t **)a1 + 1), 0x25u) && wcsstr(*((const wchar_t **)a1 + 1), L"%d") )
  {
    v8 = _InterlockedExchangeAdd(a2, 1u);
    v9 = a1[1];
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v9 + 64, 1350005829LL);
    v11 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    if ( !RtlStringCbPrintfW(Pool2, v9 + 64, *((NTSTRSAFE_PCWSTR *)a1 + 1), (unsigned int)(v8 + 1))
      && memcmp(*((const void **)a1 + 1), v11, *a1) )
    {
      RtlFreeUnicodeString(a3);
      RtlInitUnicodeString(a3, v11);
      return 0LL;
    }
    ExFreePoolWithTag(v11, 0);
    return 3221225520LL;
  }
  return 3221225523LL;
}
