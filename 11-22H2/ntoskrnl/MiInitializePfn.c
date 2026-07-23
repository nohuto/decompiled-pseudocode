/*
 * XREFs of MiInitializePfn @ 0x1402E1040
 * Callers:
 *     MiCreateSharedZeroPages @ 0x1402E0DC0 (MiCreateSharedZeroPages.c)
 *     MiInitializeProtoPfn @ 0x14066B2E0 (MiInitializeProtoPfn.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C70C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 *     MiSetNonResidentPteHeat @ 0x1402D90B0 (MiSetNonResidentPteHeat.c)
 *     MiGetContainingPageTable @ 0x1402E1270 (MiGetContainingPageTable.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E14F0 (MiGetEffectivePagePriorityThread.c)
 *     MiProtectionToCacheAttribute @ 0x1402E1560 (MiProtectionToCacheAttribute.c)
 *     MiSetPfnPteFrame @ 0x1402E15A0 (MiSetPfnPteFrame.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E1630 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348380 (MiLockNestedPageAtDpcInline.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializePfn(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // rbx
  char v9; // di
  unsigned __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 ContainingPageTable; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char EffectivePagePriorityThread; // r15
  unsigned __int8 v21; // r13
  __int64 v22; // rax
  char result; // al
  __int64 v24; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int64 v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v9 = a3;
  if ( MiPteInShadowRange(a2)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v26 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v27 = v4 | 0x20;
      if ( (v26 & 0x20) == 0 )
        v27 = v4;
      v4 = v27;
      if ( (v26 & 0x42) != 0 )
        v4 = v27 | 0x42;
    }
  }
  if ( (a4 & 4) != 0 )
  {
    v24 = 32LL * (v9 & 0x1F);
    if ( v4 )
      v4 = v24 | v4 & 0xFFFFFFFFFFFFFC1FuLL;
    else
      v4 = MiSwizzleInvalidPte(v24);
  }
  v33 = v4;
  MiSetNonResidentPteHeat(&v33, 0);
  v10 = v33;
  *(_QWORD *)(a1 + 16) = v33;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x8000000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)a1 &= 0xFFFFFFFFFFFFC00FuLL;
    *(_QWORD *)(a1 + 16) = v10 & 0xFFFFFFFFFC00FFFFuLL;
  }
  v11 = MiProtectionToCacheAttribute(a3);
  *(_WORD *)(a1 + 32) = 1;
  ContainingPageTable = MiGetContainingPageTable(a2);
  MiSetPfnPteFrame(a1, ContainingPageTable);
  v13 = 48 * ContainingPageTable - 0x220000000000LL;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v14, v15, v16);
  v21 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
    {
      v34 = a4 & 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    else
    {
      v21 = MiLockPageInline(a1);
    }
  }
  MiLockNestedPageAtDpcInline(v13, v17, v18, v19);
  *(_QWORD *)(v13 + 24) ^= ((*(_QWORD *)(v13 + 24) + 1LL) ^ *(_QWORD *)(v13 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != v11 )
    MiChangePageAttribute(a1, v11, 1LL);
  MiSetPfnTbFlushStamp(a1, 0LL, 1LL);
  v22 = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(a1 + 35) ^= (*(_BYTE *)(a1 + 35) ^ EffectivePagePriorityThread) & 7;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v22 & 0xC000000000000000uLL | 1;
  result = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_BYTE *)(a1 + 34) = result;
  if ( (a4 & 0x20) == 0 )
  {
    result |= 0x10u;
    *(_BYTE *)(a1 + 34) = result;
  }
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(a1 + 35) |= 0x20u;
  if ( (a4 & 1) == 0 )
  {
    result = -1;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a4 & 0x10) == 0 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v21 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (v21 + 1));
          v32 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = v21;
      __writecr8(v21);
    }
  }
  return result;
}
