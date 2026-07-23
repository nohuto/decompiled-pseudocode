/*
 * XREFs of LdrpLogEtwEvent @ 0x1800DB4E4
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18001D420 (RtlpWaitOnCriticalSection.c)
 *     LdrpLogDllStateEx2 @ 0x18001DE58 (LdrpLogDllStateEx2.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 *     LdrpCallInitRoutine @ 0x18003FFAC (LdrpCallInitRoutine.c)
 *     LdrpFindLoadedDllByName @ 0x180041240 (LdrpFindLoadedDllByName.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     LdrpCompleteMapModule @ 0x18004CFB8 (LdrpCompleteMapModule.c)
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 *     LdrpLogError @ 0x180053F2C (LdrpLogError.c)
 *     LdrpInitializationComplete @ 0x18007B3A4 (LdrpInitializationComplete.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800D97B4 (LdrpTryAcquireLoaderLock.c)
 *     LdrpEtwLogLoaderSnaps @ 0x1800DAF24 (LdrpEtwLogLoaderSnaps.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     LdrpEventAddUnicodeString @ 0x1800B0530 (LdrpEventAddUnicodeString.c)
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
    memset(v6, 0, v11);
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
