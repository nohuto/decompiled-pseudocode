/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x1406232A0
 * Callers:
 *     MiFreeSecureKernelPage @ 0x1406569F4 (MiFreeSecureKernelPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiIsPfnEnclave @ 0x1402EBF90 (MiIsPfnEnclave.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(ULONG_PTR a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int8 v10; // bp
  __int64 v11; // r14
  int v12; // esi
  __int64 *v13; // rcx
  volatile signed __int64 *v14; // rsi
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  unsigned __int64 v20; // r8
  struct _KPRCB *v21; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v23; // eax

  v7 = 1LL;
  v8 = 0LL;
  v9 = 48 * a1 - 0x220000000000LL;
  v10 = 17;
  if ( (a3 & 2) == 0 )
    v10 = MiLockPageInline(48 * a1 - 0x220000000000LL);
  v11 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  if ( (unsigned int)MiIsPfnEnclave(v9) )
  {
    v7 = 0LL;
    LOWORD(v8) = 256;
    goto LABEL_14;
  }
  v12 = a2 & 1;
  if ( (!v12 || !a4) && ((a3 & 4) == 0 || !(unsigned int)MiCheckSlabPfnBitmap(v9, 1LL, 0)) )
  {
    LOWORD(v8) = 2 - (v12 != 0);
LABEL_14:
    v14 = (volatile signed __int64 *)(v9 + 24);
    *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
    v15 = *(_WORD *)(v9 + 32) == 2;
    *(_WORD *)(v9 + 32) -= 2;
    if ( v15 )
    {
      MiInsertPageInFreeOrZeroedList(a1, v8);
      v8 = 0LL;
      if ( (a3 & 1) == 0 )
        v8 = v7;
    }
    else
    {
      *(_BYTE *)(v9 + 34) |= 7u;
      *v14 |= 0x4000000000000000uLL;
      v8 = 0LL;
    }
    goto LABEL_19;
  }
  if ( *(_WORD *)(v9 + 32) != 2 )
    goto LABEL_14;
  *(_BYTE *)(v9 + 34) = *(_BYTE *)(v9 + 34) & 0xF8 | 5;
  v13 = *(__int64 **)(a4 + 80);
  if ( *v13 != a4 + 72 )
    __fastfail(3u);
  *(_QWORD *)v9 = a4 + 72;
  v14 = (volatile signed __int64 *)(v9 + 24);
  *(_QWORD *)(v9 + 8) = v13;
  *v13 = v9;
  *(_QWORD *)(a4 + 80) = v9;
  ++*(_QWORD *)(a4 + 88);
LABEL_19:
  if ( v10 != 17 )
  {
    _InterlockedAnd64(v14, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v15 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v10);
  }
  if ( !v8 )
    return v8;
  MiReturnCommit(v11, v8);
  v20 = v8;
  if ( (unsigned __int16 *)v11 != MiSystemPartition
    || (v21 = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)v21->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_39:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 17280), v20);
    return v8;
  }
  if ( (unsigned __int64)(v8 + CachedResidentAvailable) > 0x100 )
  {
LABEL_35:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v21->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v20 = v8 + (int)CachedResidentAvailable - 192;
    }
    if ( !v20 )
      return v8;
    goto LABEL_39;
  }
  while ( 1 )
  {
    v23 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v21->CachedResidentAvailable,
            CachedResidentAvailable + v8,
            CachedResidentAvailable);
    v15 = (_DWORD)CachedResidentAvailable == v23;
    LODWORD(CachedResidentAvailable) = v23;
    if ( v15 )
      return v8;
    if ( v23 == -1 || (unsigned __int64)(v8 + v23) > 0x100 )
      goto LABEL_35;
  }
}
