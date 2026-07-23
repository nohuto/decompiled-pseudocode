/*
 * XREFs of MiFreeSecureKernelPage @ 0x1406569F4
 * Callers:
 *     MmFreeNonChargedSecurePages @ 0x140657D28 (MmFreeNonChargedSecurePages.c)
 *     MmFreeSecureKernelPages @ 0x140657F1C (MmFreeSecureKernelPages.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402194A8 (MiSetPfnIdentity.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeSmallPageFromMdl @ 0x1406232A0 (MiFreeSmallPageFromMdl.c)
 */

void __fastcall MiFreeSecureKernelPage(ULONG_PTR a1, __int64 a2, int a3, ULONG_PTR a4, _DWORD *a5)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v15; // eax
  bool v16; // zf
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rbx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  struct _KPRCB *v23; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v25; // eax
  __int64 v26; // rax

  v8 = 48 * a1 - 0x220000000000LL;
  v9 = *(_QWORD *)(v8 + 16);
  if ( qword_140C65C40 && (v9 & 0x10) == 0 )
    v9 &= ~qword_140C65C40;
  v10 = HIDWORD(v9);
  if ( (v10 & 8) != 0 )
  {
    v11 = (unsigned __int8)MiLockPageInline(48 * a1 - 0x220000000000LL);
    MiSetPfnIdentity(v8, 0);
    MiFreeSmallPageFromMdl(a1, 0, 3, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v11 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v11);
    return;
  }
  if ( (v10 & 2) != 0 )
  {
    v17 = (unsigned __int8)MiLockPageInline(48 * a1 - 0x220000000000LL);
    if ( !a3 )
      MiSetPfnIdentity(v8, 0);
    MiFreeSmallPageFromMdl(a1, 0, 3, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v18 = 1LL;
    if ( (_DWORD)KiIrqlFlags )
    {
      v19 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v16 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v20);
      }
    }
    __writecr8(v17);
    _InterlockedAdd64(&qword_140C65CA8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 4) == 0 )
    {
      MiReturnCommit(a2, 1LL);
      if ( (unsigned __int16 *)a2 != MiSystemPartition )
        goto LABEL_34;
      v23 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v23->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_34;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v25 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v23->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v16 = (_DWORD)CachedResidentAvailable == v25;
          LODWORD(CachedResidentAvailable) = v25;
          if ( v16 )
            goto LABEL_35;
        }
        while ( v25 != -1 && (unsigned __int64)(v25 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v23->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v18 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v18 )
LABEL_34:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 17280), v18);
LABEL_35:
      _InterlockedAdd64((volatile signed __int64 *)(a2 + 17880), 0xFFFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    v26 = (unsigned int)*a5;
    *(_QWORD *)(a4 + 8 * v26 + 48) = a1;
    *a5 = v26 + 1;
    if ( (_DWORD)v26 == 15 )
    {
      *(_QWORD *)a4 = 0LL;
      *(_QWORD *)(a4 + 32) = 0LL;
      *(_DWORD *)(a4 + 44) = 0;
      *(_DWORD *)(a4 + 40) = 0x10000;
      *(_WORD *)(a4 + 10) = 2;
      *(_WORD *)(a4 + 8) = 176;
      MiFreePagesFromMdl(a4, 0);
      *a5 = 0;
    }
  }
}
