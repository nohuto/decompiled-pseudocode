/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x1402E41F0
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1402E4838 (MiInitializeSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeOutswappedPageResident @ 0x140618ABC (MiMakeOutswappedPageResident.c)
 *     MiDuplicateCloneLeaf @ 0x1406645D8 (MiDuplicateCloneLeaf.c)
 *     MiMapPageFileHash @ 0x14066683C (MiMapPageFileHash.c)
 *     MiAllocateTopLevelPage @ 0x1407063A4 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14081E1D0 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiLockAndIncrementShareCount @ 0x1402E4038 (MiLockAndIncrementShareCount.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v4; // si
  __int64 v8; // rbx
  unsigned __int8 v9; // di
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // al
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  int v20; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  v8 = 48 * a1 - 0x220000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    v20 = 0;
    v9 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  else
  {
    v9 = MiLockPageInline(48 * a1 - 0x220000000000LL);
  }
  v10 = *(_QWORD *)(v8 + 24) & 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v8 + 8) = a2;
  *(_QWORD *)(v8 + 24) = v10;
  *(_QWORD *)(v8 + 16) = MiSwizzleInvalidPte(128LL);
  *(_WORD *)(v8 + 32) = 1;
  if ( (v4 & 0x80u) != 0 )
    v12 = v11 ^ ((v11 + 1) ^ v11) & 0x3FFFFFFFFFFFFFFFLL;
  else
    v12 = v11 & 0xC000000000000000uLL | 1;
  *(_QWORD *)(v8 + 24) = v12;
  v13 = *(_BYTE *)(v8 + 34) | 0x10;
  *(_BYTE *)(v8 + 34) = v13;
  if ( (v4 & 0x200) != 0 )
    *(_BYTE *)(v8 + 34) = v13 & 0xF8 | 6;
  MiSetPfnPteFrame(v8, a3);
  if ( a3 == a1 && (v4 & 0x800) == 0 )
  {
    v4 = 2048;
    *(_QWORD *)(v8 + 24) ^= ((*(_QWORD *)(v8 + 24) + 1LL) ^ *(_QWORD *)(v8 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 != 17 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = v9;
    __writecr8(v9);
  }
  if ( (v4 & 0x800) == 0 )
    return MiLockAndIncrementShareCount(a3);
  return result;
}
