/*
 * XREFs of MiAllocateDummyPage @ 0x140B09B18
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 *     MiInitializeDummyPages @ 0x140B098F0 (MiInitializeDummyPages.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
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

  MiAcquireNonPagedResources((__int64)&MiSystemPartition, 1LL, 0LL, 1u);
  Page = MiGetPage((__int64)&MiSystemPartition, 0, 0x208u);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_140C590D0, qword_140C590C0, qword_140C590C8, 0x102uLL);
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
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
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
  }
  __writecr8(v2);
  return v1;
}
