/*
 * XREFs of ReadObject @ 0x1C000A950
 * Callers:
 *     DerefOf @ 0x1C000A880 (DerefOf.c)
 *     ParseNameObj @ 0x1C000BCC4 (ParseNameObj.c)
 *     IncDec @ 0x1C002A760 (IncDec.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C00662A8 (AMLIReadNamespaceOverrideObject.c)
 *     LoadFieldUnitDDB @ 0x1C00683E8 (LoadFieldUnitDDB.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 * Callees:
 *     CopyObjData @ 0x1C000A900 (CopyObjData.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     ReadField @ 0x1C0016430 (ReadField.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ReadObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  __int16 v7; // ax
  __int64 v8; // rax

  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_WORD *)(a2 + 2);
      if ( v7 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( v7 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( v7 == 5 )
  {
    v8 = HeapAlloc(a1 + 480, 1297237576LL, 48LL);
    if ( v8 )
    {
      *(_QWORD *)(v8 + 8) = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 416) = v8;
      *(_QWORD *)(v8 + 24) = AccFieldUnit;
      *(_DWORD *)v8 = 1430668097;
      *(_QWORD *)(v8 + 32) = a2;
      *(_DWORD *)(v8 + 16) = 0x10000;
      *(_QWORD *)(v8 + 40) = a3;
    }
    else
    {
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(a1, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
      return (unsigned int)-1072431102;
    }
  }
  else if ( v7 == 14 )
  {
    return (unsigned int)ReadField(a1, a2, *(_QWORD *)(a2 + 32) + 12LL, a3);
  }
  else
  {
    CopyObjData(a3, a2);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("=");
      PrintObject(a3);
    }
  }
  return v6;
}
