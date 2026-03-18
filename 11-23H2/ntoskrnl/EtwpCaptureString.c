/*
 * XREFs of EtwpCaptureString @ 0x1407FAC30
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpFlushTrace @ 0x1407F59F8 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F7F7C (EtwpUpdateTrace.c)
 *     EtwpAcquireLoggerContext @ 0x1407F8A40 (EtwpAcquireLoggerContext.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE10C (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     RtlCreateUnicodeString @ 0x1407FB060 (RtlCreateUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCaptureString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  unsigned int v4; // esi
  char PreviousMode; // bl
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  WCHAR *Pool2; // rax
  WCHAR *v9; // rbx

  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RtlInitUnicodeString(a2, 0LL);
  if ( PreviousMode )
  {
    v6 = *a1;
    if ( (_WORD)v6 )
    {
      v7 = *((_QWORD *)a1 + 1);
      if ( (v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, *a1 + 2LL, 1350005829LL);
  v9 = Pool2;
  if ( !Pool2
    || (memmove(Pool2, *((const void **)a1 + 1), *a1),
        v9[(unsigned __int64)*a1 >> 1] = 0,
        !RtlCreateUnicodeString(a2, v9)) )
  {
    v4 = -1073741801;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v4;
}
