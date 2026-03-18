/*
 * XREFs of PfTGenerateTrace @ 0x1407DABA4
 * Callers:
 *     PfTLoggingWorker @ 0x140882180 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     PfTCreateTraceDump @ 0x1407DABF0 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x1407DBAC0 (PfTTraceListAdd.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140C4EC90;
    qword_140C4EA20 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
