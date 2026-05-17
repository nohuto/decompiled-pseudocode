/*
 * XREFs of RtlDebugAllocateHeap @ 0x180105270
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x180029FB0 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlLogStackBackTraceEx @ 0x18005CDB4 (RtlLogStackBackTraceEx.c)
 *     RtlpGetExtraStuffPointer @ 0x180076BA4 (RtlpGetExtraStuffPointer.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpGetTagName @ 0x180100574 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180108404 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163D4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1801228D8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugAllocateHeap(_DWORD *Src, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 Heap; // rbx
  __int64 v12; // r8
  __int64 v13; // rbx
  _WORD *ExtraStuffPointer; // rax
  _WORD *v15; // r15
  unsigned __int16 v16; // ax
  struct _PEB *v17; // rcx
  wchar_t *TagName; // rax
  __int64 v19; // rbx
  signed __int32 v21; // r15d
  HANDLE DeferredCriticalSectionEvent; // rdi
  char v23; // [rsp+20h] [rbp-78h]
  __int64 v24; // [rsp+28h] [rbp-70h]
  _DWORD *v25; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v27; // [rsp+B8h] [rbp+20h]

  v26 = a2;
  v25 = Src;
  v23 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180181250)();
  if ( !RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_46;
  v7 = Src[29] | 0x10000100 | a2;
  v26 = v7;
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
    v24 = 0LL;
    goto LABEL_47;
  }
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v23 = 1;
    v7 |= 1u;
    v26 = v7;
  }
  RtlpValidateHeap(Src, 0LL);
  Heap = RtlAllocateHeap((__int64)Src, v7, a3);
  v24 = Heap;
  RtlpValidateHeapHeaders(Src);
  if ( !Heap )
    goto LABEL_47;
  v13 = Heap - 16;
  _m_prefetchw((const void *)v13);
  if ( *(_BYTE *)(v13 + 15) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v13 + 8) ^= Src[34];
    if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
      RtlpAnalyzeHeapFailure(Src, v13, v12);
  }
  if ( (*(_BYTE *)(v13 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v13);
    v15 = ExtraStuffPointer;
    if ( (Src[28] & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    else
      *ExtraStuffPointer = 0;
    v16 = v15[1];
  }
  else
  {
    v16 = *(unsigned __int8 *)(v13 + 11);
  }
  v27 = v16;
  if ( Src[31] )
  {
    *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
    *(_DWORD *)(v13 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    RtlpValidateHeap(Src, 0LL);
  v17 = NtCurrentPeb();
  if ( v24 == RtlpHeapStopOn )
  {
    if ( v17->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
  }
  else
  {
    if ( (v17->NtGlobalFlag & 0x800) == 0 || !v27 || v27 != word_180185FA8 || *((_WORD *)Src + 104) != word_180185FAA )
      goto LABEL_47;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v27);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v24, a3, TagName);
  }
  RtlpBreakPointHeap();
LABEL_47:
  if ( v23 )
  {
    v19 = *((_QWORD *)Src + 44);
    if ( (*(_DWORD *)(v19 + 12))-- == 1 )
    {
      *(_QWORD *)(v19 + 16) = 0LL;
      v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), -1, -2);
      if ( v21 != -2 )
      {
        if ( (*(_BYTE *)(v19 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v19);
        DeferredCriticalSectionEvent = *(HANDLE *)(v19 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v19);
        LODWORD(v25) = 0;
        while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), (v21 & 2 | 1) + v21, v21) )
        {
          RtlBackoff((unsigned int *)&v25);
          _m_prefetchw((const void *)(v19 + 8));
          v21 = *(_DWORD *)(v19 + 8);
        }
        if ( (v21 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v19, (__int64)DeferredCriticalSectionEvent);
      }
    }
  }
  return v24;
}
