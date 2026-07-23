/*
 * XREFs of RtlDebugReAllocateHeap @ 0x180105704
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18002A180 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlLogStackBackTraceEx @ 0x18005FC44 (RtlLogStackBackTraceEx.c)
 *     RtlpGetExtraStuffPointer @ 0x180076534 (RtlpGetExtraStuffPointer.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180086E64 (RtlpValidateHeapEntry.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpGetTagName @ 0x1800FF164 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x1801069E8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180106FF4 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

char *__fastcall RtlDebugReAllocateHeap(_DWORD *Src, ULONG a2, char *a3, SIZE_T a4)
{
  ULONG v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  struct _PEB *v14; // rax
  unsigned __int16 v15; // cx
  _BYTE *v16; // rsi
  wchar_t *TagName; // rax
  char *Heap; // rax
  __int64 v19; // r8
  __int64 v20; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v22; // r14
  unsigned __int16 v23; // ax
  struct _PEB *v24; // rcx
  wchar_t *v25; // rax
  _RTL_CRITICAL_SECTION *v26; // rdi
  signed __int32 LockCount; // r14d
  HANDLE LockSemaphore; // rsi
  char v30; // [rsp+30h] [rbp-88h]
  unsigned __int16 v31; // [rsp+34h] [rbp-84h]
  char *v32; // [rsp+38h] [rbp-80h]
  _BYTE *v33; // [rsp+40h] [rbp-78h]
  _DWORD *v34; // [rsp+C0h] [rbp+8h] BYREF
  ULONG Flags; // [rsp+C8h] [rbp+10h]

  Flags = a2;
  v34 = Src;
  v30 = 0;
  v32 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return (char *)((__int64 (*)(void))qword_18017E848)();
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
    v32 = 0LL;
    goto LABEL_68;
  }
  v31 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v30 = 1;
    Flags = v9 | 1;
  }
  RtlpValidateHeap((_DWORD)Src);
  v12 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v33 = (_BYTE *)v12;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v12, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == (char *)qword_180182F10 )
    {
      if ( v14->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_180182F10, a4);
    }
    else
    {
      if ( (v14->NtGlobalFlag & 0x800) == 0 || !dword_180182F18 )
        goto LABEL_35;
      if ( Src[31] )
      {
        *(_DWORD *)(v12 + 8) ^= Src[34];
        if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v12, v13);
      }
      if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
      {
        v15 = *(_WORD *)(RtlpGetExtraStuffPointer(v12) + 2);
        v16 = (_BYTE *)(v12 + 11);
      }
      else
      {
        v16 = (_BYTE *)(v12 + 11);
        v15 = (unsigned __int8)v33[11];
      }
      v31 = v15;
      if ( Src[31] )
      {
        *v16 = v33[8] ^ v33[9] ^ v33[10];
        *((_DWORD *)v33 + 2) ^= Src[34];
      }
      if ( !v15 || __PAIR32__(*((_WORD *)Src + 104), v15) != dword_180182F18 )
        goto LABEL_35;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v31);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap();
LABEL_35:
    Heap = (char *)RtlReAllocateHeap(Src, Flags, a3, a4);
    v32 = Heap;
    if ( Heap )
    {
      v20 = (__int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v20 -= 16LL * *(unsigned __int8 *)(v20 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v20 + 8) ^= Src[34];
        if ( *(_BYTE *)(v20 + 11) != (*(_BYTE *)(v20 + 8) ^ (unsigned __int8)(*(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v20, v19);
      }
      if ( (*(_BYTE *)(v20 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v20);
        v22 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v23 = v22[1];
      }
      else
      {
        v23 = *(unsigned __int8 *)(v20 + 11);
      }
      v31 = v23;
      if ( Src[31] )
      {
        *(_BYTE *)(v20 + 11) = *(_BYTE *)(v20 + 8) ^ *(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10);
        *(_DWORD *)(v20 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap((_DWORD)Src);
  }
  if ( v32 )
  {
    v24 = NtCurrentPeb();
    if ( v32 == (char *)qword_180182F10 )
    {
      if ( v24->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_180182F10, a4);
    }
    else
    {
      if ( (v24->NtGlobalFlag & 0x800) == 0 || __PAIR32__(*((_WORD *)Src + 104), v31) != dword_180182F18 )
        goto LABEL_68;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v25 = RtlpGetTagName((__int64)Src, v31);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v32, a4, v25);
    }
    RtlpBreakPointHeap();
  }
LABEL_68:
  if ( v30 )
  {
    v26 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)Src + 44);
    if ( v26->RecursionCount-- == 1 )
    {
      v26->OwningThread = 0LL;
      LockCount = _InterlockedCompareExchange(&v26->LockCount, -1, -2);
      if ( LockCount != -2 )
      {
        if ( (v26->LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v26);
        LockSemaphore = v26->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v26);
        LODWORD(v34) = 0;
        while ( LockCount != _InterlockedCompareExchange(&v26->LockCount, (LockCount & 2 | 1) + LockCount, LockCount) )
        {
          RtlBackoff((unsigned int *)&v34);
          _m_prefetchw(&v26->LockCount);
          LockCount = v26->LockCount;
        }
        if ( (LockCount & 2) != 0 )
          RtlpUnWaitCriticalSectionEx((__int64)v26, LockSemaphore);
      }
    }
  }
  return v32;
}
