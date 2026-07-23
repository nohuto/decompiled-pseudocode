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

__int64 __fastcall RtlDebugFreeHeap(_DWORD *Src, ULONG a2, char *a3)
{
  ULONG v7; // esi
  unsigned __int64 v8; // rdx
  struct _PEB *v9; // rax
  _BYTE *v10; // rsi
  unsigned __int16 v11; // cx
  wchar_t *TagName; // rax
  _RTL_CRITICAL_SECTION *v13; // rdi
  int *p_LockCount; // rsi
  signed __int32 v16; // r14d
  HANDLE LockSemaphore; // r10
  int v18; // eax
  signed __int32 v19[8]; // [rsp+48h] [rbp-88h] BYREF
  char v20; // [rsp+68h] [rbp-68h]
  LOGICAL v21; // [rsp+6Ch] [rbp-64h]
  unsigned __int64 v22; // [rsp+78h] [rbp-58h]
  unsigned int NtGlobalFlag; // [rsp+80h] [rbp-50h]
  __int64 ExtraStuffPointer; // [rsp+88h] [rbp-48h]
  _DWORD *v25; // [rsp+D8h] [rbp+8h] BYREF
  ULONG Flags; // [rsp+E0h] [rbp+10h]
  unsigned __int16 v27; // [rsp+F0h] [rbp+20h]

  Flags = a2;
  v25 = Src;
  v21 = 0;
  v20 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (*)(void))qword_180174260)();
  if ( !RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v21 = 0;
    goto LABEL_33;
  }
  v7 = Src[29] | 0x10000000 | a2;
  Flags = v7;
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v20 = 1;
    Flags = v7 | 1;
  }
  RtlpValidateHeap((_DWORD)Src);
  v8 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
  v22 = v8;
  if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v8, "RtlFreeHeap") )
    goto LABEL_33;
  v9 = NtCurrentPeb();
  if ( a3 == (char *)qword_180178CA0 )
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
    v10 = (_BYTE *)v22;
    if ( Src[31] )
    {
      *(_DWORD *)(v22 + 8) ^= Src[34];
      if ( v10[11] != (v10[8] ^ (unsigned __int8)(v10[9] ^ v10[10])) )
        RtlpAnalyzeHeapFailure(Src, v10);
    }
    if ( (v10[10] & 2) != 0 )
    {
      ExtraStuffPointer = RtlpGetExtraStuffPointer((__int64)v10);
      v11 = *(_WORD *)(ExtraStuffPointer + 2);
    }
    else
    {
      v11 = (unsigned __int8)v10[11];
    }
    v27 = v11;
    if ( Src[31] )
    {
      v10[11] = v10[8] ^ v10[9] ^ v10[10];
      *((_DWORD *)v10 + 2) ^= Src[34];
    }
    if ( !v11 || __PAIR32__(*((_WORD *)Src + 104), v11) != dword_180178CA8 )
      goto LABEL_32;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v27);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  RtlpBreakPointHeap();
LABEL_32:
  v21 = RtlFreeHeap(Src, Flags, a3);
  RtlpValidateHeapHeaders(Src);
  RtlpValidateHeap((_DWORD)Src);
LABEL_33:
  if ( v20 )
  {
    v13 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)Src + 44);
    if ( v13->RecursionCount-- == 1 )
    {
      v13->OwningThread = 0LL;
      p_LockCount = &v13->LockCount;
      v16 = _InterlockedCompareExchange(&v13->LockCount, -1, -2);
      if ( v16 != -2 )
      {
        if ( (*(_BYTE *)p_LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v13);
        LockSemaphore = v13->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v13);
        LODWORD(v25) = 0;
        while ( v16 != _InterlockedCompareExchange(p_LockCount, (v16 & 2 | 1) + v16, v16) )
        {
          RtlBackoff((unsigned int *)&v25);
          _m_prefetchw(p_LockCount);
          v16 = *p_LockCount;
        }
        if ( (v16 & 2) != 0 )
        {
          if ( LockSemaphore == (HANDLE)-1LL )
          {
            _InterlockedOr(v19, 0);
            RtlpWakeByAddress((unsigned __int64)&v13->LockCount, 0);
            v18 = 0;
          }
          else
          {
            v18 = ZwSetEvent(LockSemaphore, 0LL);
          }
          if ( v18 < 0 )
            RtlRaiseStatus(v18);
        }
      }
    }
  }
  return v21;
}
