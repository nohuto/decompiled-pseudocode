/*
 * XREFs of MiAllocateDummyPage @ 0x140B44E78
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     MiInitializeDummyPages @ 0x140B44C50 (MiInitializeDummyPages.c)
 * Callees:
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E18C0 (MiSetPfnTbFlushStamp.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 MiAllocateDummyPage()
{
  __int64 Page; // rax
  __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  char v4; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v8; // edx
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, 1uLL, 0LL, 1u);
  Page = MiGetPage((__int64)MiSystemPartition, 0, 0x208u);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_140C6F6D0, qword_140C6F6C0, qword_140C6F6C8, 0x102uLL);
  v1 = 48 * Page - 0x220000000000LL;
  MiSetPfnTbFlushStamp(v1, 0, 0);
  *(_QWORD *)(v1 + 8) = 0xFFFFF68000000000uLL;
  v2 = (unsigned __int8)MiLockPageInline(v1);
  v3 = MiSwizzleInvalidPte(128LL);
  v4 = *(_BYTE *)(v1 + 34);
  *(_QWORD *)(v1 + 16) = v3;
  *(_WORD *)(v1 + 32) = 2;
  *(_BYTE *)(v1 + 34) = v4 | 7;
  *(_BYTE *)(v1 + 34) = v4 | 0x27;
  *(_BYTE *)(v1 + 34) |= 8u;
  *(_QWORD *)(v1 + 40) &= ~0x8000000000000000uLL;
  MiSetPfnPteFrame(v1, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return v1;
}
