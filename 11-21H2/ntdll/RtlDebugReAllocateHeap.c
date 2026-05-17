/*
 * XREFs of RtlDebugReAllocateHeap @ 0x1801059F0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlLogStackBackTraceEx @ 0x18001D3E0 (RtlLogStackBackTraceEx.c)
 *     RtlReAllocateHeap @ 0x180024530 (RtlReAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpGetExtraStuffPointer @ 0x180078E10 (RtlpGetExtraStuffPointer.c)
 *     RtlpValidateHeapEntry @ 0x18007C0D8 (RtlpValidateHeapEntry.c)
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

__int64 __fastcall RtlDebugReAllocateHeap(_DWORD *Src, int a2, __int64 a3, unsigned __int64 a4)
{
  int v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  struct _PEB *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 v16; // cx
  wchar_t *TagName; // rax
  __int64 Heap; // rax
  __int64 v19; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v21; // r14
  unsigned __int16 v22; // ax
  struct _PEB *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  wchar_t *v26; // rax
  __int64 v27; // rdi
  signed __int32 v29; // r14d
  HANDLE DeferredCriticalSectionEvent; // rsi
  char v31; // [rsp+30h] [rbp-88h]
  unsigned __int16 v32; // [rsp+34h] [rbp-84h]
  __int64 v33; // [rsp+38h] [rbp-80h]
  __int64 v34; // [rsp+40h] [rbp-78h]
  _DWORD *v35; // [rsp+C0h] [rbp+8h] BYREF
  int v36; // [rsp+C8h] [rbp+10h]

  v36 = a2;
  v35 = Src;
  v31 = 0;
  v33 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180174258)();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_67;
  v9 = Src[29] | 0x10000100 | a2;
  v36 = v9;
  v10 = a4;
  if ( !a4 )
    v10 = 1LL;
  v11 = (*((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v10)) + 16;
  if ( v11 < a4 || v11 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)Src + 25));
LABEL_67:
    v33 = 0LL;
    goto LABEL_68;
  }
  v32 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v31 = 1;
    v36 = v9 | 1;
  }
  RtlpValidateHeap(Src, 0LL);
  v12 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v34 = v12;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v12, "RtlReAllocateHeap") )
  {
    v13 = NtCurrentPeb();
    if ( a3 == qword_180178C90 )
    {
      if ( v13->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_180178C90, a4);
    }
    else
    {
      if ( (v13->NtGlobalFlag & 0x800) == 0 || !dword_180178C98 )
        goto LABEL_35;
      if ( Src[31] )
      {
        *(_DWORD *)(v34 + 8) ^= Src[34];
        if ( *(_BYTE *)(v34 + 11) != (*(_BYTE *)(v34 + 8) ^ (unsigned __int8)(*(_BYTE *)(v34 + 9) ^ *(_BYTE *)(v34 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v34);
      }
      if ( (*(_BYTE *)(v34 + 10) & 2) != 0 )
        v16 = *(_WORD *)(RtlpGetExtraStuffPointer(v34) + 2);
      else
        v16 = *(unsigned __int8 *)(v34 + 11);
      v32 = v16;
      if ( Src[31] )
      {
        *(_BYTE *)(v34 + 11) = *(_BYTE *)(v34 + 8) ^ *(_BYTE *)(v34 + 9) ^ *(_BYTE *)(v34 + 10);
        *(_DWORD *)(v34 + 8) ^= Src[34];
      }
      if ( !v16 || __PAIR32__(*((_WORD *)Src + 104), v16) != dword_180178C98 )
        goto LABEL_35;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v32);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap(v15, v14);
LABEL_35:
    Heap = RtlReAllocateHeap((__int64)Src, v36, a3, a4);
    v33 = Heap;
    if ( Heap )
    {
      v19 = Heap - 16;
      _m_prefetchw((const void *)(Heap - 16));
      if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
        v19 -= 16LL * *(unsigned __int8 *)(v19 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v19 + 8) ^= Src[34];
        if ( *(_BYTE *)(v19 + 11) != (*(_BYTE *)(v19 + 8) ^ (unsigned __int8)(*(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v19);
      }
      if ( (*(_BYTE *)(v19 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v19);
        v21 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v22 = v21[1];
      }
      else
      {
        v22 = *(unsigned __int8 *)(v19 + 11);
      }
      v32 = v22;
      if ( Src[31] )
      {
        *(_BYTE *)(v19 + 11) = *(_BYTE *)(v19 + 8) ^ *(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10);
        *(_DWORD *)(v19 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap(Src, 0LL);
  }
  if ( v33 )
  {
    v23 = NtCurrentPeb();
    if ( v33 == qword_180178C90 )
    {
      if ( v23->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_180178C90, a4);
    }
    else
    {
      if ( (v23->NtGlobalFlag & 0x800) == 0 || __PAIR32__(*((_WORD *)Src + 104), v32) != dword_180178C98 )
        goto LABEL_68;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v26 = RtlpGetTagName((__int64)Src, v32);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v33, a4, v26);
    }
    RtlpBreakPointHeap(v25, v24);
  }
LABEL_68:
  if ( v31 )
  {
    v27 = *((_QWORD *)Src + 44);
    if ( (*(_DWORD *)(v27 + 12))-- == 1 )
    {
      *(_QWORD *)(v27 + 16) = 0LL;
      v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 8), -1, -2);
      if ( v29 != -2 )
      {
        if ( (*(_BYTE *)(v27 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v27);
        DeferredCriticalSectionEvent = *(HANDLE *)(v27 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v27);
        LODWORD(v35) = 0;
        while ( v29 != _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 8), (v29 & 2 | 1) + v29, v29) )
        {
          RtlBackoff((unsigned int *)&v35);
          _m_prefetchw((const void *)(v27 + 8));
          v29 = *(_DWORD *)(v27 + 8);
        }
        if ( (v29 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v27, (__int64)DeferredCriticalSectionEvent);
      }
    }
  }
  return v33;
}
