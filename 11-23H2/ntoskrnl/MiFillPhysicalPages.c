/*
 * XREFs of MiFillPhysicalPages @ 0x140339520
 * Callers:
 *     MiGetPoolPages @ 0x1402E3594 (MiGetPoolPages.c)
 *     MiInitializeSystemPageTable @ 0x1402E4838 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x14033948C (MiZeroPhysicalPage.c)
 *     MxMapVa @ 0x140B431AC (MxMapVa.c)
 *     MiInitializeDummyPages @ 0x140B44C50 (MiInitializeDummyPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1404249D0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140B58DFC (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPages(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  ULONG_PTR v4; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // r12
  void *MmInternal; // r13
  unsigned __int8 *v8; // rbp
  int v9; // r8d
  int v10; // eax
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 *v12; // rbx
  unsigned __int64 UltraMapping; // rsi
  unsigned __int64 *v14; // rcx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v17; // r9
  unsigned __int64 Phase0Mapping; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int8 v27; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  unsigned __int64 *v32; // [rsp+78h] [rbp+10h]

  v3 = a3;
  v32 = 0LL;
  v4 = BugCheckParameter2;
  CurrentIrql = 17;
  v6 = 0LL;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  v8 = (unsigned __int8 *)(48 * BugCheckParameter2 - 0x21FFFFFFFFDELL);
  do
  {
    if ( MmInternal )
    {
      v9 = 4;
      v10 = *v8 >> 6;
      if ( !v10 || v10 == 3 )
      {
        v9 = 12;
      }
      else if ( v10 == 2 )
      {
        v9 = 28;
      }
      ValidPte = MiMakeValidPte(0LL, v4, v9 | 0xA0000000);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v17) = 4;
        else
          v17 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v17;
      }
      v12 = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
      UltraMapping = MiGetUltraMapping(v12 + 1556, 3u, 1LL, 0);
      v14 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v12[1543] = (unsigned __int64)v14;
      v3 = a3;
      *v14 = ValidPte;
    }
    else
    {
      Phase0Mapping = MxGetPhase0Mapping();
      UltraMapping = Phase0Mapping;
      if ( !Phase0Mapping )
        KeBugCheckEx(0x1Au, 0x3030305uLL, v4, 0LL, 0LL);
      v32 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v19 = MiMakeValidPte((unsigned __int64)v32, v4, 2684354564LL);
      if ( !MiPteInShadowRange((unsigned __int64)v32) )
        goto LABEL_25;
      if ( !(unsigned int)MiPteHasShadow(v21, v20, v22) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v19 & 1) != 0 )
        {
          v19 |= 0x8000000000000000uLL;
        }
LABEL_25:
        *v32 = v19;
        goto LABEL_9;
      }
      if ( !HIBYTE(word_140C66CFC) && (v19 & 1) != 0 )
        v19 |= 0x8000000000000000uLL;
      *v32 = v19;
      MiWritePteShadow(v32, v19);
    }
LABEL_9:
    if ( v3 )
      memset64((void *)UltraMapping, v3, 0x200uLL);
    else
      KeZeroPages(UltraMapping, 4096LL);
    if ( !MmInternal )
    {
      v23 = ZeroPte;
      if ( MiPteInShadowRange((unsigned __int64)v32) )
      {
        if ( (unsigned int)MiPteHasShadow(v25, v24, v26) )
        {
          if ( !HIBYTE(word_140C66CFC) && (ZeroPte & 1) != 0 )
            v23 = ZeroPte | 0x8000000000000000uLL;
          *v32 = v23;
          MiWritePteShadow(v32, v23);
          goto LABEL_28;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v23 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *v32 = v23;
LABEL_28:
      result = KeFlushSingleTb(UltraMapping, 0, 1u);
      goto LABEL_15;
    }
    result = ZeroPte;
    *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
    *(_QWORD *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
    if ( CurrentIrql != 17 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
LABEL_15:
    ++v6;
    ++v4;
    v8 += 48;
  }
  while ( !v6 );
  return result;
}
