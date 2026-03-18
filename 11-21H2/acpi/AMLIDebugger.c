/*
 * XREFs of AMLIDebugger @ 0x1C0067034
 * Callers:
 *     ParseOpcode @ 0x1C000B180 (ParseOpcode.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C001817C (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     Load @ 0x1C0022220 (Load.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 *     CatError @ 0x1C0067084 (CatError.c)
 *     BreakPoint @ 0x1C0069C30 (BreakPoint.c)
 *     ProcessLoadTable @ 0x1C006A9B0 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C00BD7A8 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     Debugger @ 0x1C00680E0 (Debugger.c)
 */

ULONG AMLIDebugger()
{
  ULONG result; // eax

  result = gdwfAMLIInit;
  if ( (gdwfAMLIInit & 0x40) != 0 )
  {
    if ( (gDebugger & 4) != 0 )
    {
      return ConPrintf("\nRe-entering AML debugger is not allowed.\nType 'g' to go back to the AML debugger.\n");
    }
    else
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFFD);
      _InterlockedOr(&gDebugger, 1u);
      result = Debugger();
      _InterlockedAnd(&gDebugger, 0xFFFFFFFC);
    }
  }
  return result;
}
