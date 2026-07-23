/*
 * XREFs of RtlDebugFreeHeap @ 0x1801060A0
 * Callers:
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x180076BA4 (RtlpGetExtraStuffPointer.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180087664 (RtlpValidateHeapEntry.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpGetTagName @ 0x180100574 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180108404 (RtlpValidateHeapHeaders.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1801228A8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugFreeHeap(_DWORD *Src, ULONG a2, char *a3)
{
  ULONG v7; // esi
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  struct _PEB *v10; // rax
  _BYTE *v11; // r14
  unsigned __int16 v12; // cx
  _BYTE *v13; // rsi
  wchar_t *TagName; // rax
  _RTL_CRITICAL_SECTION *v15; // rdi
  int *p_LockCount; // rsi
  signed __int32 v18; // r14d
  HANDLE LockSemaphore; // r10
  int v20; // eax
  signed __int32 v21[8]; // [rsp+38h] [rbp-88h] BYREF
  char v22; // [rsp+58h] [rbp-68h]
  LOGICAL v23; // [rsp+5Ch] [rbp-64h]
  unsigned __int64 v24; // [rsp+68h] [rbp-58h]
  unsigned int NtGlobalFlag; // [rsp+70h] [rbp-50h]
  __int64 ExtraStuffPointer; // [rsp+78h] [rbp-48h]
  _DWORD *v27; // [rsp+C8h] [rbp+8h] BYREF
  ULONG Flags; // [rsp+D0h] [rbp+10h]
  unsigned __int16 v29; // [rsp+E0h] [rbp+20h]

  Flags = a2;
  v27 = Src;
  v23 = 0;
  v22 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (*)(void))qword_180181260)();
  if ( !RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v23 = 0;
    goto LABEL_33;
  }
  v7 = Src[29] | 0x10000000 | a2;
  Flags = v7;
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v22 = 1;
    Flags = v7 | 1;
  }
  RtlpValidateHeap((_DWORD)Src);
  v8 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
  v24 = v8;
  if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v8, "RtlFreeHeap") )
    goto LABEL_33;
  v10 = NtCurrentPeb();
  if ( a3 == (char *)qword_180185FC0 )
  {
    if ( v10->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)qword_180185FC0);
  }
  else
  {
    NtGlobalFlag = v10->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x800) == 0 || !dword_180185FC8 )
      goto LABEL_32;
    v11 = (_BYTE *)v24;
    if ( Src[31] )
    {
      *(_DWORD *)(v24 + 8) ^= Src[34];
      if ( v11[11] != (v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
        RtlpAnalyzeHeapFailure(Src, v11, v9);
    }
    if ( (v11[10] & 2) != 0 )
    {
      ExtraStuffPointer = RtlpGetExtraStuffPointer((__int64)v11);
      v12 = *(_WORD *)(ExtraStuffPointer + 2);
      v13 = (_BYTE *)(v8 + 11);
    }
    else
    {
      v13 = v11 + 11;
      v12 = (unsigned __int8)v11[11];
    }
    v29 = v12;
    if ( Src[31] )
    {
      *v13 = v11[8] ^ v11[9] ^ v11[10];
      *((_DWORD *)v11 + 2) ^= Src[34];
    }
    if ( !v12 || __PAIR32__(*((_WORD *)Src + 104), v12) != dword_180185FC8 )
      goto LABEL_32;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v29);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  RtlpBreakPointHeap();
LABEL_32:
  v23 = RtlFreeHeap(Src, Flags, a3);
  RtlpValidateHeapHeaders(Src);
  RtlpValidateHeap((_DWORD)Src);
LABEL_33:
  if ( v22 )
  {
    v15 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)Src + 44);
    if ( v15->RecursionCount-- == 1 )
    {
      v15->OwningThread = 0LL;
      p_LockCount = &v15->LockCount;
      v18 = _InterlockedCompareExchange(&v15->LockCount, -1, -2);
      if ( v18 != -2 )
      {
        if ( (*(_BYTE *)p_LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v15);
        LockSemaphore = v15->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v15);
        LODWORD(v27) = 0;
        while ( v18 != _InterlockedCompareExchange(p_LockCount, (v18 & 2 | 1) + v18, v18) )
        {
          RtlBackoff((unsigned int *)&v27);
          _m_prefetchw(p_LockCount);
          v18 = *p_LockCount;
        }
        if ( (v18 & 2) != 0 )
        {
          if ( LockSemaphore == (HANDLE)-1LL )
          {
            _InterlockedOr(v21, 0);
            RtlpWakeByAddress((unsigned __int64)&v15->LockCount, 0);
            v20 = 0;
          }
          else
          {
            v20 = ZwSetEvent(LockSemaphore, 0LL);
          }
          if ( v20 < 0 )
            RtlRaiseStatus(v20);
        }
      }
    }
  }
  return v23;
}
