/*
 * XREFs of DupObjData @ 0x1C00169A0
 * Callers:
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     Return @ 0x1C00174B0 (Return.c)
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     EvalPackageElement @ 0x1C0024344 (EvalPackageElement.c)
 *     Simulator_Copy_Arguments @ 0x1C0064C68 (Simulator_Copy_Arguments.c)
 *     Simulator_DuplicateObjData @ 0x1C0064D30 (Simulator_DuplicateObjData.c)
 *     ParseDLMObjectInternal @ 0x1C0066C60 (ParseDLMObjectInternal.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 *     CopyObject @ 0x1C0069E40 (CopyObject.c)
 *     ProcessLoadTable @ 0x1C006A9B0 (ProcessLoadTable.c)
 *     ParseNestedContext @ 0x1C006BFA0 (ParseNestedContext.c)
 * Callees:
 *     NewObjData @ 0x1C0015D5C (NewObjData.c)
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall DupObjData(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebp
  __int64 result; // rax
  _SLIST_ENTRY *v8; // rax
  int v9; // ecx
  _DWORD *v10; // r12
  _DWORD *v11; // r15
  int v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx

  v6 = 0;
  if ( a2 == a3 )
    return 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  if ( !*(_QWORD *)(a3 + 32) )
    return 0LL;
  v8 = NewObjData(a1, a3);
  *(_QWORD *)(a2 + 32) = v8;
  if ( v8 )
  {
    memmove(v8, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v9 = *(unsigned __int16 *)(a2 + 2);
    if ( v9 == 4 )
    {
      v10 = *(_DWORD **)(a2 + 32);
      v11 = *(_DWORD **)(a3 + 32);
      v12 = 0;
      for ( *v10 = *v11; v12 < *v11; ++v12 )
      {
        v6 = DupObjData(a1, &v10[10 * v12 + 2], &v11[10 * v12 + 2]);
        if ( v6 )
          break;
      }
    }
    else
    {
      v13 = v9 - 5;
      if ( !v13 )
        goto LABEL_24;
      v14 = v13 - 125;
      if ( !v14 )
      {
        v17 = *(_QWORD **)(a2 + 32);
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*v17 + 112LL));
          v17 = *(_QWORD **)(a2 + 32);
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v17[1] + 112LL));
        goto LABEL_9;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v16 = *(_QWORD **)(a2 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v16[1] + 112LL));
            v16 = *(_QWORD **)(a2 + 32);
          }
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(*v16 + 112LL));
        }
      }
      else
      {
LABEL_24:
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
      }
    }
LABEL_9:
    *(_WORD *)a2 &= ~1u;
    result = v6;
    _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
    return result;
  }
  LogError(3221225626LL);
  AcpiDiagTraceAmlError(0LL, 3221225626LL);
  PrintDebugMessage(43, 0, 0, 0, 0LL);
  return 3221225626LL;
}
