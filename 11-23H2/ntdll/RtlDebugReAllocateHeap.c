/*
 * XREFs of RtlDebugReAllocateHeap @ 0x180106B14
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x180029FB0 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlReAllocateHeap @ 0x1800421C0 (RtlReAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlLogStackBackTraceEx @ 0x18005CDB4 (RtlLogStackBackTraceEx.c)
 *     RtlpGetExtraStuffPointer @ 0x180076BA4 (RtlpGetExtraStuffPointer.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180087664 (RtlpValidateHeapEntry.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpGetTagName @ 0x180100574 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180108404 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163D4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1801228D8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugReAllocateHeap(_DWORD *Src, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  int v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  struct _PEB *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 v17; // cx
  _BYTE *v18; // rsi
  wchar_t *TagName; // rax
  __int64 Heap; // rax
  __int64 v21; // r8
  __int64 v22; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v24; // r14
  unsigned __int16 v25; // ax
  struct _PEB *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  wchar_t *v29; // rax
  __int64 v30; // rdi
  signed __int32 v32; // r14d
  HANDLE DeferredCriticalSectionEvent; // rsi
  char v34; // [rsp+30h] [rbp-88h]
  unsigned __int16 v35; // [rsp+34h] [rbp-84h]
  __int64 v36; // [rsp+38h] [rbp-80h]
  _BYTE *v37; // [rsp+40h] [rbp-78h]
  _DWORD *v38; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v39; // [rsp+C8h] [rbp+10h]

  v39 = a2;
  v38 = Src;
  v34 = 0;
  v36 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180181258)();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_67;
  v9 = Src[29] | 0x10000100 | a2;
  v39 = v9;
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
    v36 = 0LL;
    goto LABEL_68;
  }
  v35 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v34 = 1;
    v39 = v9 | 1;
  }
  RtlpValidateHeap(Src, 0LL);
  v12 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v37 = (_BYTE *)v12;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v12, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == qword_180185FB0 )
    {
      if ( v14->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_180185FB0, a4);
    }
    else
    {
      if ( (v14->NtGlobalFlag & 0x800) == 0 || !dword_180185FB8 )
        goto LABEL_35;
      if ( Src[31] )
      {
        *(_DWORD *)(v12 + 8) ^= Src[34];
        if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v12, v13);
      }
      if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
      {
        v17 = *(_WORD *)(RtlpGetExtraStuffPointer(v12) + 2);
        v18 = (_BYTE *)(v12 + 11);
      }
      else
      {
        v18 = (_BYTE *)(v12 + 11);
        v17 = (unsigned __int8)v37[11];
      }
      v35 = v17;
      if ( Src[31] )
      {
        *v18 = v37[8] ^ v37[9] ^ v37[10];
        *((_DWORD *)v37 + 2) ^= Src[34];
      }
      if ( !v17 || __PAIR32__(*((_WORD *)Src + 104), v17) != dword_180185FB8 )
        goto LABEL_35;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v35);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap(v16, v15);
LABEL_35:
    Heap = RtlReAllocateHeap((__int64)Src, v39, a3, a4);
    v36 = Heap;
    if ( Heap )
    {
      v22 = Heap - 16;
      _m_prefetchw((const void *)(Heap - 16));
      if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
        v22 -= 16LL * *(unsigned __int8 *)(v22 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v22 + 8) ^= Src[34];
        if ( *(_BYTE *)(v22 + 11) != (*(_BYTE *)(v22 + 8) ^ (unsigned __int8)(*(_BYTE *)(v22 + 9) ^ *(_BYTE *)(v22 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v22, v21);
      }
      if ( (*(_BYTE *)(v22 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v22);
        v24 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v25 = v24[1];
      }
      else
      {
        v25 = *(unsigned __int8 *)(v22 + 11);
      }
      v35 = v25;
      if ( Src[31] )
      {
        *(_BYTE *)(v22 + 11) = *(_BYTE *)(v22 + 8) ^ *(_BYTE *)(v22 + 9) ^ *(_BYTE *)(v22 + 10);
        *(_DWORD *)(v22 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap(Src, 0LL);
  }
  if ( v36 )
  {
    v26 = NtCurrentPeb();
    if ( v36 == qword_180185FB0 )
    {
      if ( v26->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_180185FB0, a4);
    }
    else
    {
      if ( (v26->NtGlobalFlag & 0x800) == 0 || __PAIR32__(*((_WORD *)Src + 104), v35) != dword_180185FB8 )
        goto LABEL_68;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v29 = RtlpGetTagName((__int64)Src, v35);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v36, a4, v29);
    }
    RtlpBreakPointHeap(v28, v27);
  }
LABEL_68:
  if ( v34 )
  {
    v30 = *((_QWORD *)Src + 44);
    if ( (*(_DWORD *)(v30 + 12))-- == 1 )
    {
      *(_QWORD *)(v30 + 16) = 0LL;
      v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 8), -1, -2);
      if ( v32 != -2 )
      {
        if ( (*(_BYTE *)(v30 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v30);
        DeferredCriticalSectionEvent = *(HANDLE *)(v30 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v30);
        LODWORD(v38) = 0;
        while ( v32 != _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 8), (v32 & 2 | 1) + v32, v32) )
        {
          RtlBackoff((unsigned int *)&v38);
          _m_prefetchw((const void *)(v30 + 8));
          v32 = *(_DWORD *)(v30 + 8);
        }
        if ( (v32 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v30, (__int64)DeferredCriticalSectionEvent);
      }
    }
  }
  return v36;
}
