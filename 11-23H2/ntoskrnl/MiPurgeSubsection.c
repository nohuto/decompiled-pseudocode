/*
 * XREFs of MiPurgeSubsection @ 0x140625C24
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140624098 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402DC0C0 (MiCheckProtoPtePageState.c)
 *     MiDereferenceControlAreaPfnList @ 0x140339E00 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int8 v5; // bl
  unsigned int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // r14
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  ULONG_PTR v12; // rsi
  __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // r8
  char v16; // dl
  bool v17; // zf
  unsigned __int64 v18; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  unsigned __int8 v24; // [rsp+80h] [rbp+8h] BYREF
  int v25; // [rsp+88h] [rbp+10h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h]
  unsigned __int64 v27; // [rsp+98h] [rbp+20h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v3 = *(unsigned int *)(BugCheckParameter2 + 44);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = 17;
  v26 = *(_QWORD *)BugCheckParameter2;
  v6 = 1;
  v24 = 17;
  v7 = 0LL;
  v27 = v1 + 8 * v3;
  if ( v1 >= v27 )
    return v6;
  while ( (v1 & 0xFFF) == 0 || v5 == 17 )
  {
    if ( v5 != 17 )
      MiUnlockProtoPoolPage(v7, v5);
    v7 = MiCheckProtoPtePageState(v1, (__int64)&v24);
    if ( v7 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        MiUnlockProtoPoolPage(v7, v24);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      v5 = v24;
      break;
    }
    v1 = (v1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_36:
    v5 = v24;
LABEL_37:
    if ( v1 >= v27 )
      goto LABEL_41;
  }
  v8 = MiLockLeafPage((unsigned __int64 *)v1, 0LL);
  BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v1);
  v11 = BugCheckParameter4;
  if ( !v8 )
  {
    if ( (BugCheckParameter4 & 0xC00) == 0 && BugCheckParameter4 )
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v1, BugCheckParameter4);
    v1 += 8LL;
    goto LABEL_37;
  }
  if ( (BugCheckParameter4 & 1) == 0 )
  {
    if ( qword_140C65B40 )
    {
      if ( (BugCheckParameter4 & 0x10) != 0 )
        v11 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v11 = ~qword_140C65B40 & BugCheckParameter4;
    }
    v12 = (v11 >> 12) & 0xFFFFFFFFFFLL;
    v8 = 48 * v12 - 0x220000000000LL;
    if ( (*(_BYTE *)(v8 + 34) & 0x10) == 0 && !*(_WORD *)(v8 + 32) )
    {
      MiDereferenceControlAreaPfnList(v4, BugCheckParameter2, v10, 2);
      v13 = *(_QWORD *)(v8 + 16);
      v14 = 0;
      if ( MiPteInShadowRange(v1) )
      {
        if ( MiPteHasShadow() )
        {
          v14 = 1;
          if ( HIBYTE(word_140C66CFC) == v16 )
          {
            v17 = (v13 & 1) == 0;
            goto LABEL_28;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v17 = (v13 & 1) == 0;
LABEL_28:
          if ( !v17 )
            v13 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v1 = v13;
      if ( v14 )
        MiWritePteShadow(v1, v13, v15);
      MiUnlinkPageFromListEx(48 * v12 - 0x220000000000LL, 0LL);
      MiInsertPageInFreeOrZeroedList(v12, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      MiDecrementShareCount(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = v26;
      v1 += 8LL;
      goto LABEL_36;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v5 = v24;
  v6 = 0;
LABEL_41:
  if ( v5 != 17 )
    MiUnlockProtoPoolPage(v7, v5);
  if ( !v6 )
  {
    v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
    *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v18 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v17 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v18);
  }
  return v6;
}
