/*
 * XREFs of MiLargeFreePageToMdl @ 0x1403D5CF4
 * Callers:
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x140268620 (MiIsFreeZeroPfnCold.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403872A4 (MiTryUnlinkNodeLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageHeatImmediate @ 0x1405B766C (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  char v7; // al
  __int64 v8; // rsi
  ULONG_PTR v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbp
  int v12; // eax
  unsigned __int64 v13; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int64 v19; // r8
  _QWORD *v20; // r8
  int v21; // [rsp+80h] [rbp+18h] BYREF

  v21 = 0;
  v7 = 0;
  if ( KeGetCurrentIrql() < 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 && (a5 & 8) == 0 )
    v7 = 64;
  v8 = MiLargePageSizes[a3];
  v9 = a2 & ~(v8 - 1);
  result = MiTryUnlinkNodeLargePages(a1, v9, a3, 1LL, v7, &v21);
  v11 = result;
  if ( result )
  {
    LOBYTE(v12) = MiIsFreeZeroPfnCold(result);
    if ( v12 && (a5 & 0x3000000) == 0 )
    {
      MiChangePageHeatImmediate(v9, a3, 1LL);
      v13 = (unsigned __int8)MiLockPageInline(v11);
      *(_QWORD *)(v11 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v11 + 16), 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v18 = (v17 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
    }
    MiConvertEntireLargePageToSmall(v11, a3, 0, 1, 0LL, 0LL, 0LL);
    if ( a4 )
    {
      v19 = ((unsigned __int64)*(unsigned int *)(a4 + 40) >> 12) + 6;
      *(_DWORD *)(a4 + 40) += (_DWORD)v8 << 12;
      v20 = (_QWORD *)(a4 + 8 * v19);
      do
      {
        *v20++ = v9++;
        --v8;
      }
      while ( v8 );
    }
    return 1LL;
  }
  return result;
}
