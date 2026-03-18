/*
 * XREFs of MiUpControlAreaRefs @ 0x14058C330
 * Callers:
 *     MiAllocateSplitVads @ 0x14079D6B0 (MiAllocateSplitVads.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x14097ECFC (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInsertChildVads @ 0x140980DD8 (MiInsertChildVads.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiDecrementSubsections @ 0x140286920 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1402869C0 (MiDecrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x140286DE0 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x140287380 (MiControlAreaRequiresCharge.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 *     MiLockNestedVad @ 0x14097EE0C (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14097EE28 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiUpControlAreaRefs(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 v7; // rdx
  int v8; // ecx
  bool v9; // zf
  __int64 v10; // rbp
  __int64 *v11; // rdi
  unsigned __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v14; // rax
  KIRQL v15; // al
  unsigned __int64 v16; // r12
  int v17; // ecx
  __int64 v18; // r14
  __int64 *v19; // rsi
  int active; // eax
  int v21; // r14d
  __int64 v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  ULONG_PTR v27; // rbp
  struct _KTHREAD *v28; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rdi
  unsigned int v31; // edx
  int v32; // r8d
  BOOL v33; // [rsp+30h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v35; // [rsp+40h] [rbp-58h] BYREF
  __int64 v36; // [rsp+48h] [rbp-50h]
  int v37; // [rsp+A0h] [rbp+8h]
  int v39; // [rsp+B0h] [rbp+18h]
  int v40; // [rsp+B8h] [rbp+20h]

  v40 = 0;
  v4 = **(_QWORD **)(a1 + 72);
  v5 = MiControlAreaRequiresCharge(v4);
  if ( !v5 )
    return 3221227019LL;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_DWORD *)(a1 + 48);
  v33 = v7 != 0;
  if ( ((v8 & 0xF80) == 0x200 || (v8 & 0xF80) == 0x300) && v7 && (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    if ( a2 )
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 1u);
    else
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 0xFFFFFFFF);
    v40 = 1;
  }
  v9 = (*(_DWORD *)(v4 + 56) & 0x400) == 0;
  v10 = 0LL;
  v37 = 0;
  v11 = 0LL;
  v39 = 0;
  BugCheckParameter2 = 0LL;
  v35 = 0LL;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad(a1);
    if ( !*(_QWORD *)(v4 + 64) || (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
    {
      v11 = (__int64 *)(v4 + 128);
      BugCheckParameter2 = v4 + 128;
    }
    else
    {
      MiGetProtoPteAddress(a1, v12, 0, (__int64 *)&BugCheckParameter2);
      v11 = (__int64 *)BugCheckParameter2;
    }
    if ( v11 )
      v39 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  if ( *(_QWORD *)(v4 + 64) )
  {
    CurrentThread = 0LL;
    v36 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v36 = *(_QWORD *)v4;
    v14 = v36;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v14 + 40, 0LL);
    v11 = (__int64 *)BugCheckParameter2;
  }
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  v16 = v15;
  ++*(_QWORD *)(v4 + 40);
  ++*(_QWORD *)(v4 + 48);
  if ( !v11 )
    goto LABEL_43;
  v17 = *(_DWORD *)(v4 + 56);
  if ( (v17 & 0x20) != 0 || !*(_QWORD *)(v4 + 64) )
  {
    if ( a2 )
    {
      active = MiReferenceActiveSubsection(v11, 8, v15);
      goto LABEL_36;
    }
    if ( (v17 & 0x20) == 0 )
    {
      v22 = MiDecrementSubsections((ULONG_PTR)v11, (__int64)v11, 8);
LABEL_40:
      v10 = v22;
LABEL_41:
      v21 = v37;
      goto LABEL_44;
    }
    if ( v5 == 2 )
    {
      v22 = MiDecrementSubsectionViewCount(v11, 24);
      goto LABEL_40;
    }
LABEL_43:
    v21 = 0;
    goto LABEL_44;
  }
  MiGetProtoPteAddress(
    a1,
    *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
    1,
    (__int64 *)&v35);
  v18 = 0LL;
  v19 = v11;
  while ( !a2 )
  {
    v10 += MiDecrementSubsections((ULONG_PTR)v19, (__int64)v19, 8);
LABEL_31:
    v18 = (__int64)v19;
    if ( v19 != v35 )
    {
      v19 = (__int64 *)v19[2];
      if ( v19 )
        continue;
    }
    goto LABEL_41;
  }
  active = MiReferenceActiveSubsection(v19, 8, v16);
  v37 = active;
  if ( active >= 0 )
    goto LABEL_31;
  if ( v18 )
  {
    v10 += MiDecrementSubsections((ULONG_PTR)v11, v18, 8);
    goto LABEL_41;
  }
LABEL_36:
  v21 = active;
LABEL_44:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v9 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v16);
  if ( v10 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v33, v10);
  if ( !*(_QWORD *)(v4 + 64) )
  {
    v27 = v36 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v27);
    v28 = KeGetCurrentThread();
    if ( v27 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v28->ApcState.Process);
    _disable();
    p_Process = (__int64)&v28[1].Process;
    v31 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v27 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v31;
      p_Process += 96LL;
      if ( v31 >= 6 )
        goto LABEL_65;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_65:
      if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, v27, SessionId, 0LL);
      _enable();
      goto LABEL_73;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v32 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v28->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v32 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v28, v27, v32);
LABEL_73:
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v39 )
    MiUnlockNestedVad(a1);
  if ( v21 < 0 )
  {
    if ( v40 )
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  }
  return (unsigned int)v21;
}
