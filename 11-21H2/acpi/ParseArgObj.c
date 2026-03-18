/*
 * XREFs of ParseArgObj @ 0x1C00083D4
 * Callers:
 *     ParseOpcode @ 0x1C000B180 (ParseOpcode.c)
 * Callees:
 *     CopyObjData @ 0x1C000A900 (CopyObjData.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseArgObj(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // r9
  int v7; // r14d

  v2 = 0;
  v5 = *(_QWORD *)(a1 + 96);
  v6 = (unsigned int)**(unsigned __int8 **)(a1 + 120) - 104;
  v7 = v6;
  if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 60) )
  {
    LogError(3222536197LL);
    AcpiDiagTraceAmlError(a1, 3222536197LL);
    PrintDebugMessage(122, v7, 0, 0, 0LL);
    return (unsigned int)-1072431099;
  }
  else
  {
    CopyObjData(a2, *(_QWORD *)(v5 + 64) + 40 * v6);
    ++*(_QWORD *)(a1 + 120);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("Arg%d=");
      PrintObject(a2);
    }
  }
  return v2;
}
