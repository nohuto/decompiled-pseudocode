/*
 * XREFs of MiFreePageFileHashPfns @ 0x14021D980
 * Callers:
 *     MiScanPagefiles @ 0x14021D91C (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x140A32870 (MiDeletePagefile.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     RtlpInterlockedFlushSList @ 0x140428870 (RtlpInterlockedFlushSList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreePageFileHashPfn @ 0x140665F38 (MiFreePageFileHashPfn.c)
 */

unsigned __int64 __fastcall MiFreePageFileHashPfns(_SLIST_HEADER *a1)
{
  unsigned __int64 Region; // rbp
  unsigned __int64 v2; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  unsigned __int64 v11; // r8
  struct _KPRCB *v12; // r9
  __int64 CachedResidentAvailable; // rdx

  Region = a1[15].Region;
  v2 = 0LL;
  result = (unsigned __int64)RtlpInterlockedFlushSList(a1 + 5);
  v4 = result;
  if ( result )
  {
    do
    {
      v5 = *(_QWORD *)v4;
      v6 = (unsigned __int8)MiLockPageInline(v4);
      MiFreePageFileHashPfn(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x220000000000LL) >> 4));
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
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
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v10 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v6);
      ++v2;
      v4 = v5;
    }
    while ( v5 );
    if ( v2 )
    {
      MiReturnCommit(Region, v2);
      result = (unsigned __int64)&MiSystemPartition;
      v11 = v2;
      if ( (_UNKNOWN *)Region != &MiSystemPartition )
        goto LABEL_23;
      v12 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v12->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_23;
      for ( ; v2 + CachedResidentAvailable <= 0x100; result = v2 + (int)result )
      {
        if ( v2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&v12->CachedResidentAvailable,
                                 CachedResidentAvailable + v2,
                                 CachedResidentAvailable);
        v10 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = (int)result;
        if ( v10 )
          goto LABEL_24;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&v12->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          v11 = v2 + (int)result;
        }
      }
      if ( v11 )
LABEL_23:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(Region + 17280), v11);
LABEL_24:
      _InterlockedExchangeAdd64(&qword_140C6A328, -(__int64)v2);
    }
  }
  return result;
}
