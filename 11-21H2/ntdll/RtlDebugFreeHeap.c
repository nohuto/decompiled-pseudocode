/*
 * XREFs of RtlDebugFreeHeap @ 0x180104FAC
 * Callers:
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpGetExtraStuffPointer @ 0x180078E10 (RtlpGetExtraStuffPointer.c)
 *     RtlpValidateHeapEntry @ 0x18007C0D8 (RtlpValidateHeapEntry.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpGetTagName @ 0x1800FF464 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x180106C88 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x18010728C (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugFreeHeap(_DWORD *Src, unsigned int a2, __int64 a3)
{
  int v7; // esi
  unsigned __int64 v8; // rdx
  struct _PEB *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rsi
  unsigned __int16 v13; // cx
  wchar_t *TagName; // rax
  __int64 v15; // rdi
  _BYTE *v17; // rsi
  signed __int32 v18; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  signed __int32 v23[8]; // [rsp+48h] [rbp-88h] BYREF
  char v24; // [rsp+68h] [rbp-68h]
  unsigned int v25; // [rsp+6Ch] [rbp-64h]
  unsigned __int64 v26; // [rsp+78h] [rbp-58h]
  unsigned int NtGlobalFlag; // [rsp+80h] [rbp-50h]
  __int64 ExtraStuffPointer; // [rsp+88h] [rbp-48h]
  _DWORD *v29; // [rsp+D8h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+E0h] [rbp+10h]
  unsigned __int16 v31; // [rsp+F0h] [rbp+20h]

  v30 = a2;
  v29 = Src;
  v25 = 0;
  v24 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (*)(void))qword_180174260)();
  if ( !RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v25 = 0;
    goto LABEL_33;
  }
  v7 = Src[29] | 0x10000000 | a2;
  v30 = v7;
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v24 = 1;
    v30 = v7 | 1;
  }
  RtlpValidateHeap(Src, 0LL);
  v8 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
  v26 = v8;
  if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v8, "RtlFreeHeap") )
    goto LABEL_33;
  v9 = NtCurrentPeb();
  if ( a3 == qword_180178CA0 )
  {
    if ( v9->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)qword_180178CA0);
  }
  else
  {
    NtGlobalFlag = v9->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x800) == 0 || !dword_180178CA8 )
      goto LABEL_32;
    v12 = (_BYTE *)v26;
    if ( Src[31] )
    {
      *(_DWORD *)(v26 + 8) ^= Src[34];
      if ( v12[11] != (v12[8] ^ (unsigned __int8)(v12[9] ^ v12[10])) )
        RtlpAnalyzeHeapFailure(Src, v12);
    }
    if ( (v12[10] & 2) != 0 )
    {
      ExtraStuffPointer = RtlpGetExtraStuffPointer((__int64)v12);
      v13 = *(_WORD *)(ExtraStuffPointer + 2);
    }
    else
    {
      v13 = (unsigned __int8)v12[11];
    }
    v31 = v13;
    if ( Src[31] )
    {
      v12[11] = v12[8] ^ v12[9] ^ v12[10];
      *((_DWORD *)v12 + 2) ^= Src[34];
    }
    if ( !v13 || __PAIR32__(*((_WORD *)Src + 104), v13) != dword_180178CA8 )
      goto LABEL_32;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v31);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  RtlpBreakPointHeap(v11, v10);
LABEL_32:
  v25 = RtlFreeHeap((__int64)Src, v30, a3);
  RtlpValidateHeapHeaders(Src);
  RtlpValidateHeap(Src, 0LL);
LABEL_33:
  if ( v24 )
  {
    v15 = *((_QWORD *)Src + 44);
    if ( (*(_DWORD *)(v15 + 12))-- == 1 )
    {
      *(_QWORD *)(v15 + 16) = 0LL;
      v17 = (_BYTE *)(v15 + 8);
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), -1, -2);
      if ( v18 != -2 )
      {
        if ( (*v17 & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v15);
        DeferredCriticalSectionEvent = *(HANDLE *)(v15 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v15);
        LODWORD(v29) = 0;
        while ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)v17, (v18 & 2 | 1) + v18, v18) )
        {
          RtlBackoff((unsigned int *)&v29);
          _m_prefetchw(v17);
          v18 = *(_DWORD *)v17;
        }
        if ( (v18 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v23, 0);
            RtlpWakeByAddress(v15 + 8, 0);
            v20 = 0;
          }
          else
          {
            v20 = ZwSetEvent();
          }
          if ( v20 < 0 )
            RtlRaiseStatus(v20, v21, v22);
        }
      }
    }
  }
  return v25;
}
