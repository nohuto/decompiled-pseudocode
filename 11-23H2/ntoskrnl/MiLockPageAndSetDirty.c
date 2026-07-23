/*
 * XREFs of MiLockPageAndSetDirty @ 0x140217514
 * Callers:
 *     MiMakeCombineCandidateClean @ 0x14021743C (MiMakeCombineCandidateClean.c)
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiIssueHardFault @ 0x1402A1340 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MiValidFault @ 0x140333770 (MiValidFault.c)
 *     MmSetPageProtection @ 0x1403C2E50 (MmSetPageProtection.c)
 *     MiInitializeBootShadowStackPage @ 0x140644EB4 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockPageAndSetDirty(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned __int8 v4; // di
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    v11 = 0;
    v4 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v4 = MiLockPageInline(a1);
  }
  result = MiCaptureDirtyBitToPfn(a1);
  if ( result )
    v2 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( result )
    result = MiReleasePageFileInfo(v2, result, 1LL);
  if ( v4 != 17 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
