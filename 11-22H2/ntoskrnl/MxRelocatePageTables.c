/*
 * XREFs of MxRelocatePageTables @ 0x140B5B0A0
 * Callers:
 *     MiInitNucleus @ 0x140B44F88 (MiInitNucleus.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializePageColorBase @ 0x1402E1690 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MxMovePageTables @ 0x140B5B258 (MxMovePageTables.c)
 *     MxSwapPages @ 0x140B5BAA8 (MxSwapPages.c)
 */

void __fastcall MxRelocatePageTables(int a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  _OWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v16[0] = 0LL;
  MiInitializePageColorBase(0LL, 0, (__int64)v16);
  v2 = 0xFFFFF6C000000000uLL;
  v3 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 3LL;
  do
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  if ( v2 < v3 )
    MxMovePageTables(v2, v3 - 8, 3, a1, (__int64)v16);
  v5 = (((unsigned __int64)(MmPfnDatabase + (MxPfnAllocation << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FFFFFFFFF8uLL;
  v7 = 3LL;
  do
  {
    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  if ( v5 < v6 )
    MxMovePageTables(v5 + 8, v6, 3, a1, (__int64)v16);
  MxSwapPages(v16, 0xFFFFF6FBC0000000uLL);
  v17 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  v9 = MiLockPageInline(v8);
  ++*(_WORD *)(v8 + 32);
  v10 = v9;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (v9 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
}
