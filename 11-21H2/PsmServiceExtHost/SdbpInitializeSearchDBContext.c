/*
 * XREFs of SdbpInitializeSearchDBContext @ 0x18009BC38
 * Callers:
 *     SdbpCheckMatchingDir @ 0x180099B40 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180099D10 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A828 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009AC20 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     memmove_0 @ 0x18005022E (memmove_0.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1800957A4 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpGetProcessHistory @ 0x1800963E8 (SdbpGetProcessHistory.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpInitializeSearchDBContext(__int64 a1)
{
  __int64 result; // rax
  const wchar_t *ProcessHistory; // r14
  WCHAR *v4; // rcx
  const char *v5; // r9
  int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rdi
  wchar_t *Heap; // rax
  __int64 v10; // rsi
  size_t v11; // rdi

  if ( *(_QWORD *)(a1 + 72) )
    return 1LL;
  ProcessHistory = *(const wchar_t **)(a1 + 64);
  if ( !ProcessHistory )
  {
    if ( (*(_BYTE *)a1 & 2) != 0 || (v4 = *(WCHAR **)(a1 + 56)) == 0LL )
    {
      v7 = -1LL;
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)(*(_QWORD *)(a1 + 32) + 2 * v8) );
      do
        ++v7;
      while ( *(_WORD *)(*(_QWORD *)(a1 + 40) + 2 * v7) );
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (unsigned int)(v7 + v8 + 1));
      ProcessHistory = Heap;
      if ( !Heap )
      {
        v5 = "Failed to allocate process history buffer";
        v6 = 353;
        goto LABEL_13;
      }
      v10 = (unsigned int)v8;
      v11 = (unsigned int)v8;
      memmove_0(Heap, *(const void **)(a1 + 32), v11 * 2);
      memmove_0((void *)&ProcessHistory[v11], *(const void **)(a1 + 40), 2LL * (unsigned int)v7);
      ProcessHistory[(unsigned int)v7 + v10] = 0;
    }
    else
    {
      ProcessHistory = SdbpGetProcessHistory(v4, *(const void **)(a1 + 32), *(void **)(a1 + 40));
      if ( !ProcessHistory )
      {
        v5 = "Failed to retrieve process history";
        v6 = 368;
LABEL_13:
        AslLogCallPrintf(1, (unsigned int)"SdbpInitializeSearchDBContext", v6, (_DWORD)v5);
        return 0LL;
      }
    }
  }
  *(_QWORD *)(a1 + 64) = ProcessHistory;
  result = SdbpCreateSearchPathPartsFromPath(ProcessHistory, (_QWORD *)(a1 + 72));
  if ( (_DWORD)result )
    *(_DWORD *)a1 |= 1u;
  return result;
}
