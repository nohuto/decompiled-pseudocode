/*
 * XREFs of PushFrame @ 0x1C0053C54
 * Callers:
 *     ReadObject @ 0x1C0005BEE (ReadObject.c)
 *     LoadDDB @ 0x1C004FA60 (LoadDDB.c)
 *     SleepQueueRequest @ 0x1C005150C (SleepQueueRequest.c)
 *     AccessBaseField @ 0x1C00517D0 (AccessBaseField.c)
 *     PushAccFieldObj @ 0x1C0052608 (PushAccFieldObj.c)
 *     PushPreserveWriteObj @ 0x1C0052714 (PushPreserveWriteObj.c)
 *     WriteField @ 0x1C00530B0 (WriteField.c)
 *     WriteObject @ 0x1C00532C0 (WriteObject.c)
 *     PushCall @ 0x1C0053B18 (PushCall.c)
 *     PushPost @ 0x1C0053D00 (PushPost.c)
 *     PushScope @ 0x1C0053D60 (PushScope.c)
 *     PushTerm @ 0x1C0053E38 (PushTerm.c)
 *     NestAsyncEvalObject @ 0x1C005498C (NestAsyncEvalObject.c)
 *     Release @ 0x1C0055870 (Release.c)
 *     Acquire @ 0x1C0055CB0 (Acquire.c)
 *     Package @ 0x1C0058010 (Package.c)
 *     ParseCall @ 0x1C005A6C0 (ParseCall.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E244 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB9C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC58 (HeapAlloc.c)
 */

__int64 __fastcall PushFrame(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax

  v8 = 0;
  v9 = HeapAlloc(a1 + 480, 1297237576, a3);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v9;
    *(_DWORD *)v9 = a2;
    *(_QWORD *)(v9 + 24) = a4;
    if ( a5 )
      *a5 = v9;
  }
  else
  {
    LogError(-1072431102);
    AcpiDiagTraceAmlError(a1, -1072431102);
    PrintDebugMessage(153, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
