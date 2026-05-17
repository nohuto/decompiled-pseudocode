/*
 * XREFs of RtlpPopulateListIndex @ 0x18001FF74
 * Callers:
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlpExtendListLookup @ 0x180053A48 (RtlpExtendListLookup.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpHeapAddListEntry @ 0x18002192C (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x18002E790 (RtlpHeapRemoveListEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180114EB0 (RtlpHeapHandleError.c)
 */

__int64 __fastcall RtlpPopulateListIndex(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 i; // rsi
  unsigned __int64 v6; // rdx
  __int64 *v7; // r15
  unsigned __int64 v8; // r8
  __int64 *v9; // rax
  int v10; // r14d
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *a2 )
  {
    v12 = *((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1;
    v13 = 2 * v12;
    if ( !*((_DWORD *)a2 + 3) )
      v13 = v12;
    *(_QWORD *)(a2[6] + 8 * v13) = 0LL;
    v14 = (unsigned __int64)(unsigned int)(*((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1) >> 5;
    result = (unsigned int)~(1 << ((*((_BYTE *)a2 + 8) - *((_BYTE *)a2 + 24) - 1) & 0x1F));
    *(_DWORD *)(a2[5] + 4 * v14) &= result;
  }
  for ( i = *(_QWORD *)(a1 + 344); a1 + 336 != i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i - 5) != (*(_BYTE *)(i - 8) ^ (unsigned __int8)(*(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6))) )
        RtlpAnalyzeHeapFailure(a1, i - 16);
    }
    v6 = *(unsigned __int16 *)(i - 8);
    v7 = a2;
    v8 = *((unsigned int *)a2 + 2);
    if ( v6 < v8 )
    {
LABEL_20:
      v10 = *(unsigned __int16 *)(i - 8);
    }
    else
    {
      while ( 1 )
      {
        v9 = (__int64 *)*v7;
        if ( !*v7 )
          break;
        v7 = (__int64 *)*v7;
        if ( v6 < *((unsigned int *)v9 + 2) )
          goto LABEL_20;
      }
      v10 = *((_DWORD *)v7 + 2) - 1;
    }
    if ( *a2 )
    {
      v11 = v8 - 1;
      if ( (unsigned int)v6 < (unsigned int)v8 )
        v11 = *(unsigned __int16 *)(i - 8);
      LOBYTE(v8) = 1;
      RtlpHeapRemoveListEntry(a1, (_DWORD)a2, v8, i, v11, *(unsigned __int16 *)(i - 8));
    }
    LOBYTE(v8) = 1;
    result = RtlpHeapAddListEntry(a1, (_DWORD)v7, v8, i, v10, *(unsigned __int16 *)(i - 8));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(v7[5] + 4 * ((unsigned __int64)(unsigned int)(v10 - *((_DWORD *)v7 + 6)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v10 - *((_BYTE *)v7 + 24)) & 0x1F) )
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
