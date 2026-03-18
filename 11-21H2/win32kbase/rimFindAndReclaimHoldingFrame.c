/*
 * XREFs of rimFindAndReclaimHoldingFrame @ 0x1C01A6D9C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1C01A4FA0 (-DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_R.c)
 *     rimFindHoldingFrame @ 0x1C01A6DDC (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C01A7B2C (rimReclaimHoldingFrame.c)
 */

__int64 __fastcall rimFindAndReclaimHoldingFrame(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = rimFindHoldingFrame(a1, a2);
  v4 = result;
  if ( result )
  {
    InputTraceLogging::RIM::DropCompleteFrame(v3, result);
    return rimReclaimHoldingFrame(v6, v5, v4);
  }
  return result;
}
