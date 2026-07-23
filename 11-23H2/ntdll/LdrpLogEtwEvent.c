/*
 * XREFs of LdrpLogEtwEvent @ 0x1800DB3AC
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800109E4 (LdrpMapDllNtFileName.c)
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpCallInitRoutine @ 0x180028BA4 (LdrpCallInitRoutine.c)
 *     LdrpFindLoadedDllByName @ 0x180029A40 (LdrpFindLoadedDllByName.c)
 *     LdrpCompleteMapModule @ 0x18002CD30 (LdrpCompleteMapModule.c)
 *     LdrpLogDllStateEx2 @ 0x180031F1C (LdrpLogDllStateEx2.c)
 *     RtlpWaitOnCriticalSection @ 0x180033F90 (RtlpWaitOnCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x180050FC4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051228 (LdrpAcquireLoaderLock.c)
 *     LdrpInitializationComplete @ 0x1800746D0 (LdrpInitializationComplete.c)
 *     LdrpLogError @ 0x180082B5C (LdrpLogError.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800D91DC (LdrpTryAcquireLoaderLock.c)
 *     LdrpEtwLogLoaderSnaps @ 0x1800DACB8 (LdrpEtwLogLoaderSnaps.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800AF3FE (LdrpEventAddUnicodeString.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
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
