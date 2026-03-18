/*
 * XREFs of PushCall @ 0x1C0016ABC
 * Callers:
 *     ParseNameObj @ 0x1C000BCC4 (ParseNameObj.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseLoad @ 0x1C0028400 (ParseLoad.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall PushCall(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  _SLIST_ENTRY *v6; // rax
  unsigned int v7; // ebp
  _SLIST_ENTRY *v8; // rbx
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  _SLIST_ENTRY *v12; // rax

  v6 = HeapAlloc(a1 + 30, 1297237576, 0x190u);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    *((_QWORD *)&v6->Next + 1) = a1[26].Next;
    a1[26].Next = v6;
    LODWORD(v6->Next) = 1280065859;
    *((_QWORD *)&v6[1].Next + 1) = ParseCall;
    if ( a2 )
    {
      v9 = *(_QWORD *)(a2 + 96);
      v6[3].Next = (_SLIST_ENTRY *)a2;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
      if ( (*(_BYTE *)(v9 + 193) & 8) != 0 )
        LODWORD(v6[1].Next) |= 0x10000u;
      if ( *(_WORD *)(a2 + 66) == 8 && _bittest16((const signed __int16 *)(a2 + 64), 9u) )
        LODWORD(v6[1].Next) |= 0x80000u;
      v10 = (*(_BYTE *)(v9 + 193) & 7) == 0;
      v11 = *(_BYTE *)(v9 + 193) & 7;
      *((_DWORD *)&v8[3].Next + 3) = v11;
      if ( !v10 )
      {
        v12 = HeapAlloc(a1[20].Next, 1413563464, 40 * v11);
        v8[4].Next = v12;
        if ( v12 )
        {
          memset(v12, 0, 40LL * *((unsigned int *)&v8[3].Next + 3));
        }
        else
        {
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          PrintDebugMessage(152, 0, 0, 0, 0LL);
          v7 = -1073741670;
        }
      }
    }
    else
    {
      a1[6].Next = v6;
      LODWORD(v6[1].Next) = 5;
    }
    *((_QWORD *)&v8[24].Next + 1) = a3;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v7;
}
