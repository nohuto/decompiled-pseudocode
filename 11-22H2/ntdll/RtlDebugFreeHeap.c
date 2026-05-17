/*
 * XREFs of RtlDebugFreeHeap @ 0x180104C90
 * Callers:
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x180076534 (RtlpGetExtraStuffPointer.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180086E64 (RtlpValidateHeapEntry.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpGetTagName @ 0x1800FF164 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x1801069E8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180106FF4 (RtlpValidateHeapHeaders.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugFreeHeap(_DWORD *Src, unsigned int a2, __int64 a3)
{
  int v7; // esi
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  struct _PEB *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // r14
  unsigned __int16 v14; // cx
  _BYTE *v15; // rsi
  wchar_t *TagName; // rax
  __int64 v17; // rdi
  _BYTE *v19; // rsi
  signed __int32 v20; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v22; // eax
  signed __int32 v23[8]; // [rsp+38h] [rbp-88h] BYREF
  char v24; // [rsp+58h] [rbp-68h]
  unsigned int v25; // [rsp+5Ch] [rbp-64h]
  unsigned __int64 v26; // [rsp+68h] [rbp-58h]
  unsigned int NtGlobalFlag; // [rsp+70h] [rbp-50h]
  __int64 ExtraStuffPointer; // [rsp+78h] [rbp-48h]
  _DWORD *v29; // [rsp+C8h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+D0h] [rbp+10h]
  unsigned __int16 v31; // [rsp+E0h] [rbp+20h]

  v30 = a2;
  v29 = Src;
  v25 = 0;
  v24 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (*)(void))qword_18017E850)();
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
  v10 = NtCurrentPeb();
  if ( a3 == qword_180182F20 )
  {
    if ( v10->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)qword_180182F20);
  }
  else
  {
    NtGlobalFlag = v10->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x800) == 0 || !dword_180182F28 )
      goto LABEL_32;
    v13 = (_BYTE *)v26;
    if ( Src[31] )
    {
      *(_DWORD *)(v26 + 8) ^= Src[34];
      if ( v13[11] != (v13[8] ^ (unsigned __int8)(v13[9] ^ v13[10])) )
        RtlpAnalyzeHeapFailure(Src, v13, v9);
    }
    if ( (v13[10] & 2) != 0 )
    {
      ExtraStuffPointer = RtlpGetExtraStuffPointer((__int64)v13);
      v14 = *(_WORD *)(ExtraStuffPointer + 2);
      v15 = (_BYTE *)(v8 + 11);
    }
    else
    {
      v15 = v13 + 11;
      v14 = (unsigned __int8)v13[11];
    }
    v31 = v14;
    if ( Src[31] )
    {
      *v15 = v13[8] ^ v13[9] ^ v13[10];
      *((_DWORD *)v13 + 2) ^= Src[34];
    }
    if ( !v14 || __PAIR32__(*((_WORD *)Src + 104), v14) != dword_180182F28 )
      goto LABEL_32;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v31);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  RtlpBreakPointHeap(v12, v11);
LABEL_32:
  v25 = RtlFreeHeap((__int64)Src, v30, a3);
  RtlpValidateHeapHeaders(Src);
  RtlpValidateHeap(Src, 0LL);
LABEL_33:
  if ( v24 )
  {
    v17 = *((_QWORD *)Src + 44);
    if ( (*(_DWORD *)(v17 + 12))-- == 1 )
    {
      *(_QWORD *)(v17 + 16) = 0LL;
      v19 = (_BYTE *)(v17 + 8);
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), -1, -2);
      if ( v20 != -2 )
      {
        if ( (*v19 & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v17);
        DeferredCriticalSectionEvent = *(HANDLE *)(v17 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v17);
        LODWORD(v29) = 0;
        while ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)v19, (v20 & 2 | 1) + v20, v20) )
        {
          RtlBackoff((unsigned int *)&v29);
          _m_prefetchw(v19);
          v20 = *(_DWORD *)v19;
        }
        if ( (v20 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v23, 0);
            RtlpWakeByAddress(v17 + 8, 0);
            v22 = 0;
          }
          else
          {
            v22 = ZwSetEvent();
          }
          if ( v22 < 0 )
            RtlRaiseStatus((unsigned int)v22);
        }
      }
    }
  }
  return v25;
}
