/*
 * XREFs of HalpDmaDereferenceDomainObject @ 0x140512CF8
 * Callers:
 *     HalJoinDmaDomain @ 0x1403907F0 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateDomain @ 0x140390880 (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x140390FA0 (HalpDmaIsAutomaticDomain.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403910A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalFreeCommonBufferVector @ 0x14050F550 (HalFreeCommonBufferVector.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050F9C0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalCreateCommonBufferFromMdl @ 0x1405123E0 (HalCreateCommonBufferFromMdl.c)
 *     HalFreeCommonBufferV3 @ 0x1405127D0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140512920 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpLeaveDmaDomain @ 0x1405132A4 (HalpLeaveDmaDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x140513530 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x140513820 (HalFreeCommonBufferDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x140513D40 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     HalFreeCommonBufferDmarThin @ 0x140513F40 (HalFreeCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405140A8 (HalpAllocateCommonBufferDmarThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1403A58A0 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpDmaDereferenceDomainObject(__int64 *BugCheckParameter3)
{
  char v2; // bp
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 **v15; // rax

  v2 = 0;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v5 = (__int64 *)HalpDmaDomainList;
  v6 = v4;
  while ( v5 != &HalpDmaDomainList )
  {
    if ( BugCheckParameter3 == v5 )
    {
      v11 = (*((_DWORD *)BugCheckParameter3 + 28))-- == 1;
      v3 = 1;
      if ( v11 )
      {
        v14 = *BugCheckParameter3;
        v15 = (__int64 **)BugCheckParameter3[1];
        if ( *(__int64 **)(*BugCheckParameter3 + 8) != BugCheckParameter3 || *v15 != BugCheckParameter3 )
          __fastfail(3u);
        *v15 = (__int64 *)v14;
        v2 = 1;
        *(_QWORD *)(v14 + 8) = v15;
      }
      break;
    }
    v5 = (__int64 *)*v5;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaDomainListLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  if ( v2 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(HalpDmaIommuInterfaceFcnTable + 8))(BugCheckParameter3[5]);
    if ( v12 < 0 )
      KeBugCheckEx(0x1D9u, 0LL, v12, (ULONG_PTR)BugCheckParameter3, 0LL);
    HalpMmAllocCtxFree(v13, (__int64)BugCheckParameter3);
  }
  return v3 == 0 ? 0xC000000D : 0;
}
