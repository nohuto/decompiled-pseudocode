/*
 * XREFs of PopDirectedDripsDiagInitialize @ 0x140B4EF98
 * Callers:
 *     PopDirectedDripsInitializePhase3 @ 0x140B6C83C (PopDirectedDripsInitializePhase3.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140B71C9C (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408220DC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall PopDirectedDripsDiagInitialize(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      PopDirectedDripsDiagTraceHandleRegistered = 0;
      if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140D53950, 0LL, 0LL) >= 0 )
        PopDirectedDripsDiagTraceHandleRegistered = 1;
    }
  }
  else
  {
    RtlInitUnicodeString(&PopDirectedDripsDiagEmptyString, &word_140B776D0);
    PopDirectedDripsDiagLock = 0LL;
    memset(&PopDirectedDripsDiagSessionContext, 0, 0x230uLL);
    qword_140C38FF0 = 0LL;
    qword_140C38FD8 = (__int64)&qword_140C38FD0;
    qword_140C38FD0 = &qword_140C38FD0;
    qword_140C38FC8 = (__int64)&PopDirectedDripsDiagSessionContext;
    PopDirectedDripsDiagSessionContext = &PopDirectedDripsDiagSessionContext;
    dword_140C391E0 = 1;
    dword_140C391E4 = 1;
  }
}
