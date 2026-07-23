/*
 * XREFs of RtlDebugAllocateHeap @ 0x180104194
 * Callers:
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlLogStackBackTraceEx @ 0x18001D3E0 (RtlLogStackBackTraceEx.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpGetExtraStuffPointer @ 0x180078E10 (RtlpGetExtraStuffPointer.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpGetTagName @ 0x1800FF464 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x180106C88 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x18010728C (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

PVOID __fastcall RtlDebugAllocateHeap(_DWORD *Src, ULONG a2, SIZE_T a3)
{
  ULONG v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  SIZE_T v10; // rax
  PVOID Heap; // rbx
  __int64 v12; // rbx
  _WORD *ExtraStuffPointer; // rax
  _WORD *v14; // r15
  unsigned __int16 v15; // ax
  struct _PEB *v16; // rcx
  wchar_t *TagName; // rax
  _RTL_CRITICAL_SECTION *v18; // rbx
  signed __int32 LockCount; // r15d
  HANDLE LockSemaphore; // rdi
  char v22; // [rsp+20h] [rbp-78h]
  PVOID v23; // [rsp+28h] [rbp-70h]
  _DWORD *v24; // [rsp+A0h] [rbp+8h] BYREF
  ULONG v25; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v26; // [rsp+B8h] [rbp+20h]

  v25 = a2;
  v24 = Src;
  v22 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (PVOID)((__int64 (*)(void))qword_180174250)();
  if ( !RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_46;
  v7 = Src[29] | 0x10000100 | a2;
  v25 = v7;
  v8 = a3;
  if ( !a3 )
    v8 = 1LL;
  v9 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v8);
  if ( v9 < 0x20 )
    v9 = 32LL;
  v10 = v9 + 16;
  if ( v10 < a3 || v10 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)Src + 25));
LABEL_46:
    v23 = 0LL;
    goto LABEL_47;
  }
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v22 = 1;
    v7 |= 1u;
    v25 = v7;
  }
  RtlpValidateHeap((_DWORD)Src);
  Heap = RtlAllocateHeap(Src, v7, a3);
  v23 = Heap;
  RtlpValidateHeapHeaders(Src);
  if ( !Heap )
    goto LABEL_47;
  v12 = (__int64)Heap - 16;
  _m_prefetchw((const void *)v12);
  if ( *(_BYTE *)(v12 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v12 + 8) ^= Src[34];
    if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
      RtlpAnalyzeHeapFailure(Src, v12);
  }
  if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v12);
    v14 = ExtraStuffPointer;
    if ( (Src[28] & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    else
      *ExtraStuffPointer = 0;
    v15 = v14[1];
  }
  else
  {
    v15 = *(unsigned __int8 *)(v12 + 11);
  }
  v26 = v15;
  if ( Src[31] )
  {
    *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
    *(_DWORD *)(v12 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    RtlpValidateHeap((_DWORD)Src);
  v16 = NtCurrentPeb();
  if ( v23 == (PVOID)RtlpHeapStopOn )
  {
    if ( v16->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
  }
  else
  {
    if ( (v16->NtGlobalFlag & 0x800) == 0 || !v26 || v26 != word_180178C88 || *((_WORD *)Src + 104) != word_180178C8A )
      goto LABEL_47;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v26);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v23, a3, TagName);
  }
  RtlpBreakPointHeap();
LABEL_47:
  if ( v22 )
  {
    v18 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)Src + 44);
    if ( v18->RecursionCount-- == 1 )
    {
      v18->OwningThread = 0LL;
      LockCount = _InterlockedCompareExchange(&v18->LockCount, -1, -2);
      if ( LockCount != -2 )
      {
        if ( (v18->LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v18);
        LockSemaphore = v18->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v18);
        LODWORD(v24) = 0;
        while ( LockCount != _InterlockedCompareExchange(&v18->LockCount, (LockCount & 2 | 1) + LockCount, LockCount) )
        {
          RtlBackoff((unsigned int *)&v24);
          _m_prefetchw(&v18->LockCount);
          LockCount = v18->LockCount;
        }
        if ( (LockCount & 2) != 0 )
          RtlpUnWaitCriticalSectionEx((__int64)v18, LockSemaphore);
      }
    }
  }
  return v23;
}
