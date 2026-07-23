/*
 * XREFs of RtlpPopulateListIndex @ 0x1800478D4
 * Callers:
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlpExtendListLookup @ 0x18004A628 (RtlpExtendListLookup.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x180044D74 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180048FDC (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180116718 (RtlpHeapHandleError.c)
 */

__int64 __fastcall RtlpPopulateListIndex(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  _DWORD *v4; // r15
  __int64 i; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  int v12; // ebp
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  v4 = (_DWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    v14 = 2 * (*v4 - *(_DWORD *)(a2 + 24) - 1);
    if ( !*(_DWORD *)(a2 + 12) )
      v14 = *v4 - *(_DWORD *)(a2 + 24) - 1;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v14) = 0LL;
    v15 = *v4 - *(_DWORD *)(a2 + 24) - 1;
    a3 = (unsigned __int64)v15 >> 5;
    result = (unsigned int)~(1 << (v15 & 0x1F));
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * a3) &= result;
  }
  for ( i = *(_QWORD *)(a1 + 344); a1 + 336 != i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i - 5) != (*(_BYTE *)(i - 8) ^ (unsigned __int8)(*(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6))) )
        RtlpAnalyzeHeapFailure(a1, i - 16, a3);
    }
    v8 = *(unsigned __int16 *)(i - 8);
    v9 = a2;
    v10 = (unsigned int)*v4;
    if ( v8 < v10 )
    {
LABEL_20:
      v12 = *(unsigned __int16 *)(i - 8);
    }
    else
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v9;
        if ( !*(_QWORD *)v9 )
          break;
        v9 = *(_QWORD *)v9;
        if ( v8 < *(unsigned int *)(v11 + 8) )
          goto LABEL_20;
      }
      v12 = *(_DWORD *)(v9 + 8) - 1;
    }
    if ( *(_QWORD *)a2 )
    {
      v13 = v10 - 1;
      if ( (unsigned int)v8 < (unsigned int)v10 )
        v13 = *(unsigned __int16 *)(i - 8);
      LOBYTE(v10) = 1;
      RtlpHeapRemoveListEntry(a1, a2, v10, i, v13, *(unsigned __int16 *)(i - 8));
    }
    result = RtlpHeapAddListEntry(a1, v9, 1, i, v12, *(unsigned __int16 *)(i - 8));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(v9 + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v12 - *(_DWORD *)(v9 + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v12 - *(_BYTE *)(v9 + 24)) & 0x1F) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        result = RtlpHeapHandleError(1LL);
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(i - 5) = *(_BYTE *)(i - 8) ^ *(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6);
      result = *(unsigned int *)(a1 + 136);
      *(_DWORD *)(i - 8) ^= result;
    }
  }
  return result;
}
