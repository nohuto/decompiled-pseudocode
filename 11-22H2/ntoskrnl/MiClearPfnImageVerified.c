/*
 * XREFs of MiClearPfnImageVerified @ 0x140335218
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189D0 (MiDeleteClusterSection.c)
 *     MiProbeLeafPteAccess @ 0x140236C30 (MiProbeLeafPteAccess.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiCopyPage @ 0x140283CF0 (MiCopyPage.c)
 *     MiGatherMappedPages @ 0x140297C04 (MiGatherMappedPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteClusterPage @ 0x1402D6220 (MiDeleteClusterPage.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x14033E9C4 (MiDeletePerSessionProtos.c)
 *     MiReferencePageForModifiedWrite @ 0x1403497E0 (MiReferencePageForModifiedWrite.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiPrepareLargePageSubPageForFree @ 0x1406694E4 (MiPrepareLargePageSubPageForFree.c)
 *     MmChangeImageProtection @ 0x140723EB0 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140B4A55C (MiTradeBootImagePage.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402194A8 (MiSetPfnIdentity.c)
 *     MiGetPagePrivilege @ 0x140282C40 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KeSetPagePrivilege @ 0x1403D46B4 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char result; // al
  unsigned __int8 v5; // di
  int PagePrivilege; // eax
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0LL;
  result = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( (a2 & 4) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(BugCheckParameter2);
    if ( (a2 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(BugCheckParameter2, 1, (unsigned __int64 *)&v14);
      if ( PagePrivilege )
      {
        if ( (PagePrivilege & 0x20) != 0 )
          v7 = 512;
        else
          v7 = (a2 & 0x10) != 0 ? 32 : 16;
        v8 = v7;
        LODWORD(v8) = v7 | 0x80;
        if ( (a2 & 0x40) == 0 )
          v8 = v7;
        if ( (int)KeSetPagePrivilege(
                    0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
                    &v14,
                    v8) < 0 )
          KeBugCheckEx(
            0x1Au,
            0x5150BuLL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
            0LL,
            0LL);
      }
    }
    result = MiSetPfnIdentity(BugCheckParameter2, 0);
    if ( v5 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = v5;
      __writecr8(v5);
    }
  }
  return result;
}
