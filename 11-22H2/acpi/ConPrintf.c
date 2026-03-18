/*
 * XREFs of ConPrintf @ 0x1C004D7D8
 * Callers:
 *     InsertReadyQueue @ 0x1C00057E4 (InsertReadyQueue.c)
 *     ReadObject @ 0x1C0005BEE (ReadObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0047908 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047BBC (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D84 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F58 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C00484F0 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIDebugger @ 0x1C004D650 (AMLIDebugger.c)
 *     CatError @ 0x1C004D748 (CatError.c)
 *     DebugInPort @ 0x1C004DA30 (DebugInPort.c)
 *     DebugNotify @ 0x1C004DB30 (DebugNotify.c)
 *     DebugQuit @ 0x1C004DDC0 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C004DE30 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C004E428 (PrintBuffData.c)
 *     PrintIndent @ 0x1C004E4A4 (PrintIndent.c)
 *     PrintObject @ 0x1C004E4E8 (PrintObject.c)
 *     RunMethodCallBack @ 0x1C004E610 (RunMethodCallBack.c)
 *     AccFieldUnit @ 0x1C0051650 (AccFieldUnit.c)
 *     DumpObject @ 0x1C0051EB8 (DumpObject.c)
 *     RunContext @ 0x1C0053F54 (RunContext.c)
 *     AsyncEvalObject @ 0x1C00544F0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005498C (NestAsyncEvalObject.c)
 *     ProcessEvalObj @ 0x1C0054C80 (ProcessEvalObj.c)
 *     BreakPoint @ 0x1C00554F0 (BreakPoint.c)
 *     ParsePackage @ 0x1C0058180 (ParsePackage.c)
 *     ToDecStr @ 0x1C0058CE0 (ToDecStr.c)
 *     ToHexStr @ 0x1C00590D0 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C0059EE4 (DbgParseOneArg.c)
 *     ParseArgObj @ 0x1C005A600 (ParseArgObj.c)
 *     ParseCall @ 0x1C005A6C0 (ParseCall.c)
 *     ParseField @ 0x1C005AB50 (ParseField.c)
 *     ParseFieldList @ 0x1C005B250 (ParseFieldList.c)
 *     ParseIntObj @ 0x1C005B3C0 (ParseIntObj.c)
 *     ParseInteger @ 0x1C005B5A8 (ParseInteger.c)
 *     ParseLocalObj @ 0x1C005B80C (ParseLocalObj.c)
 *     ParseName @ 0x1C005B880 (ParseName.c)
 *     ParseOpcode @ 0x1C005BD60 (ParseOpcode.c)
 *     ParseScope @ 0x1C005C240 (ParseScope.c)
 *     ParseString @ 0x1C005C460 (ParseString.c)
 *     ParseSuperName @ 0x1C005C58C (ParseSuperName.c)
 *     ParseTerm @ 0x1C005C7B0 (ParseTerm.c)
 *     AMLILoadDDB @ 0x1C00AB134 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C0047280 (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C0070460, 0x400uLL, pszFormat, va);
  if ( qword_1C006F918 )
    return qword_1C006F918(byte_1C0070460, qword_1C006F920);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C0070460);
}
