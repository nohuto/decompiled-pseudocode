/*
 * XREFs of HalpBlkWdFatalExceptionCheck @ 0x14052B114
 * Callers:
 *     HalpBlkPoBusyWait @ 0x14052A710 (HalpBlkPoBusyWait.c)
 *     HalpBlkWdWorkerRoutine @ 0x14052B1A0 (HalpBlkWdWorkerRoutine.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall HalpBlkWdFatalExceptionCheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r8
  __int64 v2; // rcx
  ULONG_PTR result; // rax

  v1 = (unsigned int)BugCheckParameter2;
  v2 = *(_QWORD *)(HalpBlkPcr + 8LL * (unsigned int)BugCheckParameter2);
  result = *(_QWORD *)(v2 + 120);
  if ( result )
    KeBugCheckEx(0x1DAu, 5uLL, v1, *(unsigned __int8 *)(v2 + 112), result);
  return result;
}
