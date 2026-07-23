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

char *__fastcall RtlDebugReAllocateHeap(_DWORD *Src, ULONG a2, char *a3, SIZE_T a4)
{
  ULONG v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  struct _PEB *v13; // rax
  unsigned __int16 v14; // cx
  wchar_t *TagName; // rax
  char *Heap; // rax
  __int64 v17; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v19; // r14
  unsigned __int16 v20; // ax
  struct _PEB *v21; // rcx
  wchar_t *v22; // rax
  _RTL_CRITICAL_SECTION *v23; // rdi
  signed __int32 LockCount; // r14d
  HANDLE LockSemaphore; // rsi
  char v27; // [rsp+30h] [rbp-88h]
  unsigned __int16 v28; // [rsp+34h] [rbp-84h]
  char *v29; // [rsp+38h] [rbp-80h]
  __int64 v30; // [rsp+40h] [rbp-78h]
  _DWORD *v31; // [rsp+C0h] [rbp+8h] BYREF
  ULONG Flags; // [rsp+C8h] [rbp+10h]

  Flags = a2;
  v31 = Src;
  v27 = 0;
  v29 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return (char *)((__int64 (*)(void))qword_180174258)();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_67;
  v9 = Src[29] | 0x10000100 | a2;
  Flags = v9;
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
    v29 = 0LL;
    goto LABEL_68;
  }
  v28 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v27 = 1;
    Flags = v9 | 1;
  }
  RtlpValidateHeap((_DWORD)Src);
  v12 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v30 = v12;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v12, "RtlReAllocateHeap") )
  {
    v13 = NtCurrentPeb();
    if ( a3 == (char *)qword_180178C90 )
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
        *(_DWORD *)(v30 + 8) ^= Src[34];
        if ( *(_BYTE *)(v30 + 11) != (*(_BYTE *)(v30 + 8) ^ (unsigned __int8)(*(_BYTE *)(v30 + 9) ^ *(_BYTE *)(v30 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v30);
      }
      if ( (*(_BYTE *)(v30 + 10) & 2) != 0 )
        v14 = *(_WORD *)(RtlpGetExtraStuffPointer(v30) + 2);
      else
        v14 = *(unsigned __int8 *)(v30 + 11);
      v28 = v14;
      if ( Src[31] )
      {
        *(_BYTE *)(v30 + 11) = *(_BYTE *)(v30 + 8) ^ *(_BYTE *)(v30 + 9) ^ *(_BYTE *)(v30 + 10);
        *(_DWORD *)(v30 + 8) ^= Src[34];
      }
      if ( !v14 || __PAIR32__(*((_WORD *)Src + 104), v14) != dword_180178C98 )
        goto LABEL_35;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v28);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap();
LABEL_35:
    Heap = (char *)RtlReAllocateHeap(Src, Flags, a3, a4);
    v29 = Heap;
    if ( Heap )
    {
      v17 = (__int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v17 -= 16LL * *(unsigned __int8 *)(v17 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v17 + 8) ^= Src[34];
        if ( *(_BYTE *)(v17 + 11) != (*(_BYTE *)(v17 + 8) ^ (unsigned __int8)(*(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v17);
      }
      if ( (*(_BYTE *)(v17 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v17);
        v19 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v20 = v19[1];
      }
      else
      {
        v20 = *(unsigned __int8 *)(v17 + 11);
      }
      v28 = v20;
      if ( Src[31] )
      {
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
        *(_DWORD *)(v17 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap((_DWORD)Src);
  }
  if ( v29 )
  {
    v21 = NtCurrentPeb();
    if ( v29 == (char *)qword_180178C90 )
    {
      if ( v21->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_180178C90, a4);
    }
    else
    {
      if ( (v21->NtGlobalFlag & 0x800) == 0 || __PAIR32__(*((_WORD *)Src + 104), v28) != dword_180178C98 )
        goto LABEL_68;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v22 = RtlpGetTagName((__int64)Src, v28);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v29, a4, v22);
    }
    RtlpBreakPointHeap();
  }
LABEL_68:
  if ( v27 )
  {
    v23 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)Src + 44);
    if ( v23->RecursionCount-- == 1 )
    {
      v23->OwningThread = 0LL;
      LockCount = _InterlockedCompareExchange(&v23->LockCount, -1, -2);
      if ( LockCount != -2 )
      {
        if ( (v23->LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v23);
        LockSemaphore = v23->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v23);
        LODWORD(v31) = 0;
        while ( LockCount != _InterlockedCompareExchange(&v23->LockCount, (LockCount & 2 | 1) + LockCount, LockCount) )
        {
          RtlBackoff((unsigned int *)&v31);
          _m_prefetchw(&v23->LockCount);
          LockCount = v23->LockCount;
        }
        if ( (LockCount & 2) != 0 )
          RtlpUnWaitCriticalSectionEx((__int64)v23, LockSemaphore);
      }
    }
  }
  return v29;
}
