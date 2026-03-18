/*
 * XREFs of ConPrintf @ 0x1C00290CC
 * Callers:
 *     ParseArgObj @ 0x1C00083D4 (ParseArgObj.c)
 *     ReadObject @ 0x1C000A950 (ReadObject.c)
 *     ParseOpcode @ 0x1C000B180 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C000B2AC (ParseIntObj.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     ParseName @ 0x1C000BE54 (ParseName.c)
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     ParseSuperName @ 0x1C0015500 (ParseSuperName.c)
 *     ParseField @ 0x1C0015980 (ParseField.c)
 *     ParseFieldList @ 0x1C0015C40 (ParseFieldList.c)
 *     AccFieldUnit @ 0x1C0016690 (AccFieldUnit.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C001817C (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 *     ProcessEvalObj @ 0x1C0025310 (ProcessEvalObj.c)
 *     ParseString @ 0x1C0027434 (ParseString.c)
 *     ToHexStr @ 0x1C0028EF0 (ToHexStr.c)
 *     ParseInteger @ 0x1C0029E44 (ParseInteger.c)
 *     ParseLocalObj @ 0x1C002CB68 (ParseLocalObj.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     CatError @ 0x1C0067084 (CatError.c)
 *     DebugInPort @ 0x1C00672F0 (DebugInPort.c)
 *     DebugNotify @ 0x1C00673F0 (DebugNotify.c)
 *     DebugQuit @ 0x1C0067680 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C00676F0 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C0067BCC (PrintBuffData.c)
 *     PrintIndent @ 0x1C0067C48 (PrintIndent.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 *     RunMethodCallBack @ 0x1C0067DB0 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0068B08 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C0069C30 (BreakPoint.c)
 *     ToDecStr @ 0x1C006AF60 (ToDecStr.c)
 *     DbgParseOneArg @ 0x1C006BAA0 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1C00BD7A8 (AMLILoadDDB.c)
 * Callees:
 *     RtlStringCchVPrintfA @ 0x1C0029130 (RtlStringCchVPrintfA.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(Format, 0x400uLL, pszFormat, va);
  if ( qword_1C0081AA8 )
    return qword_1C0081AA8(Format, qword_1C0081AB0);
  else
    return DbgPrintEx(0x19u, 3u, Format);
}
