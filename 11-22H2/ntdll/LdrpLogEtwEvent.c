/*
 * XREFs of LdrpLogEtwEvent @ 0x1800DB9FC
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpCallInitRoutine @ 0x180028D74 (LdrpCallInitRoutine.c)
 *     LdrpFindLoadedDllByName @ 0x180029C10 (LdrpFindLoadedDllByName.c)
 *     LdrpCompleteMapModule @ 0x18002CF00 (LdrpCompleteMapModule.c)
 *     LdrpLogDllStateEx2 @ 0x18003207C (LdrpLogDllStateEx2.c)
 *     RtlpWaitOnCriticalSection @ 0x1800340F0 (RtlpWaitOnCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x180051124 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     LdrpInitializationComplete @ 0x180074060 (LdrpInitializationComplete.c)
 *     LdrpLogError @ 0x1800824EC (LdrpLogError.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800D982C (LdrpTryAcquireLoaderLock.c)
 *     LdrpEtwLogLoaderSnaps @ 0x1800DB308 (LdrpEtwLogLoaderSnaps.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800AD32E (LdrpEventAddUnicodeString.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpLogEtwEvent(__int16 a1, __int64 a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  _BYTE *v6; // rdi
  unsigned int v7; // ebx
  _BYTE *Heap; // rax
  size_t v11; // r8
  __int64 v12; // rcx
  int v15[3]; // [rsp+24h] [rbp-284h] BYREF
  _BYTE Fields[576]; // [rsp+30h] [rbp-278h] BYREF

  v6 = Fields;
  v7 = 0;
  LOWORD(v15[0]) = a1;
  if ( a5 )
  {
    v7 = *a5 + 2;
    if ( a6 )
      v7 += *a6 + 2;
  }
  if ( v7 <= 0x214 || (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7 + 42), (v6 = Heap) != 0LL) )
  {
    v11 = 576LL;
    if ( v7 + 42 > 0x240 )
      v11 = v7 + 42;
    memset_thunk_772440563353939046(v6, 0, v11);
    *((_WORD *)v6 + 3) = v15[0];
    if ( a2 != -1 )
    {
      v6[40] = a3;
      *((_QWORD *)v6 + 4) = a2;
      v6[41] = a4;
      if ( v7 )
      {
        LdrpEventAddUnicodeString((__int64)a5, (_WORD *)v6 + 21, v7, v15);
        if ( a6 )
          LdrpEventAddUnicodeString((__int64)a6, &v6[v15[0] + 42], v7 - v15[0], v15);
      }
    }
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476LL;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v12, 0x402u, v7 + 10, v6);
    Heap = Fields;
    if ( Fields != v6 )
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  return (int)Heap;
}
