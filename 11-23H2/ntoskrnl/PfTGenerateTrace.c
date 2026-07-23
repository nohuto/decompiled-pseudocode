/*
 * XREFs of PfTGenerateTrace @ 0x14079CD94
 * Callers:
 *     PfTLoggingWorker @ 0x140838ED0 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     PfTTraceListAdd @ 0x14075EEC8 (PfTTraceListAdd.c)
 *     PfTCreateTraceDump @ 0x14079CDE0 (PfTCreateTraceDump.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140C65470;
    qword_140C65200 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
