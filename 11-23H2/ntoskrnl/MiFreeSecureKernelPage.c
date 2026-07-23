/*
 * XREFs of MiFreeSecureKernelPage @ 0x140656ED4
 * Callers:
 *     MmFreeNonChargedSecurePages @ 0x140658208 (MmFreeNonChargedSecurePages.c)
 *     MmFreeSecureKernelPages @ 0x1406583FC (MmFreeSecureKernelPages.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeSmallPageFromMdl @ 0x140623780 (MiFreeSmallPageFromMdl.c)
 */

__int64 __fastcall MiFreeSecureKernelPage(ULONG_PTR a1, __int64 a2, int a3, ULONG_PTR a4, _DWORD *a5)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v15; // zf
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbx
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  struct _KPRCB *v20; // r8
  __int64 CachedResidentAvailable; // rdx

  v8 = 48 * a1 - 0x220000000000LL;
  v9 = *(_QWORD *)(v8 + 16);
  if ( qword_140C65B40 && (v9 & 0x10) == 0 )
    v9 &= ~qword_140C65B40;
  v10 = HIDWORD(v9);
  if ( (v10 & 8) != 0 )
  {
    v11 = (unsigned __int8)MiLockPageInline(48 * a1 - 0x220000000000LL);
    MiSetPfnIdentity(v8, 0);
    MiFreeSmallPageFromMdl(a1, 0, 3, 0LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v11 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v11);
    return result;
  }
  if ( (v10 & 2) != 0 )
  {
    v16 = (unsigned __int8)MiLockPageInline(48 * a1 - 0x220000000000LL);
    if ( !a3 )
      MiSetPfnIdentity(v8, 0);
    MiFreeSmallPageFromMdl(a1, 0, 3, 0LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v17 = 1LL;
    if ( (_DWORD)KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v16 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v15 = ((unsigned int)result & v19[5]) == 0;
        v19[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
    }
    __writecr8(v16);
    _InterlockedAdd64(&qword_140C65BA8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 4) == 0 )
    {
      MiReturnCommit(a2, 1LL);
      result = (__int64)MiSystemPartition;
      if ( (unsigned __int16 *)a2 != MiSystemPartition )
        goto LABEL_34;
      v20 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v20->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_34;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        while ( 1 )
        {
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)&v20->CachedResidentAvailable,
                                   CachedResidentAvailable + 1,
                                   CachedResidentAvailable);
          v15 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
          CachedResidentAvailable = (int)result;
          if ( v15 )
            goto LABEL_35;
          if ( (_DWORD)result != -1 )
          {
            result = (int)result + 1LL;
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              continue;
          }
          break;
        }
      }
      if ( (int)CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&v20->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          v17 = (int)result + 1LL;
        }
      }
      if ( v17 )
LABEL_34:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 17280), v17);
LABEL_35:
      _InterlockedAdd64((volatile signed __int64 *)(a2 + 17880), 0xFFFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    result = (unsigned int)*a5;
    *(_QWORD *)(a4 + 8 * result + 48) = a1;
    *a5 = result + 1;
    if ( (_DWORD)result == 15 )
    {
      *(_QWORD *)a4 = 0LL;
      *(_QWORD *)(a4 + 32) = 0LL;
      *(_DWORD *)(a4 + 44) = 0;
      *(_DWORD *)(a4 + 40) = 0x10000;
      *(_WORD *)(a4 + 10) = 2;
      *(_WORD *)(a4 + 8) = 176;
      result = (__int64)MiFreePagesFromMdl(a4, 0);
      *a5 = 0;
    }
  }
  return result;
}
