/*
 * XREFs of MiEnableNewPfns @ 0x14061AEB0
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A2B978 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiDetermineNewPfnHeatState @ 0x140347B78 (MiDetermineNewPfnHeatState.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiEnableNewPfns(volatile signed __int64 *a1, ULONG_PTR a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // r14d
  volatile signed __int64 *v5; // r15
  BOOL v7; // ecx
  __int64 v9; // rbp
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  char v12; // bp
  unsigned __int64 v13; // r15
  char v14; // r9
  int v15; // eax
  __int16 v16; // r9
  ULONG_PTR v17; // r10
  __int16 v18; // r13
  __int64 v19; // rbp
  ULONG_PTR v20; // r15
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  volatile signed __int64 *v28; // rcx
  struct _KPRCB *v29; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v31; // eax
  unsigned int v33; // [rsp+24h] [rbp-84h]
  int v34; // [rsp+28h] [rbp-80h]
  __int128 v36; // [rsp+40h] [rbp-68h] BYREF
  __int128 v37; // [rsp+50h] [rbp-58h]

  v4 = a4;
  v5 = a1;
  v7 = (a4 & 0x200) == 0;
  v33 = v7;
  v36 = 0LL;
  v37 = 0LL;
  if ( (a4 & 0x3000) != 0 )
  {
    v9 = (a4 >> 12) & 1;
    v34 = MiDetermineNewPfnHeatState(v7, (a4 >> 12) & 1);
    v10 = MiLargePageSizes[v9];
    v11 = 48 * a2 - 0x220000000000LL;
    if ( !(a3 / v10) )
      goto LABEL_23;
    v12 = ~(_BYTE)v9 & 3;
    v13 = a3 / v10;
    do
    {
      MiLockPageInline(v11);
      *(_BYTE *)(v11 + 36) = v12 | *(_BYTE *)(v11 + 36) & 0xFC;
      *(_QWORD *)(v11 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v11 + 16), -(__int64)(v34 != 0) & 0xFFFFFFFDLL);
      *(_BYTE *)(v11 + 34) = *(_BYTE *)(v11 + 34) & 0xF8 | 6;
      v37 = 0LL;
      *(_QWORD *)&v36 = a2;
      *((_QWORD *)&v36 + 1) = v33;
      LOBYTE(v37) = v14;
      MiInsertLargePageInNodeList((__int64)&v36);
      if ( *((_QWORD *)&v37 + 1) )
        a3 -= *((_QWORD *)&v37 + 1);
      v11 += 48 * v10;
      a2 += v10;
      --v13;
    }
    while ( v13 );
    v4 = a4;
    goto LABEL_22;
  }
  v15 = MiDetermineNewPfnHeatState(v7, 3u);
  v18 = v16 | 0x400;
  if ( !v15 )
    v18 = v16;
  a3 = 0LL;
  v19 = 48 * a2 - 0x220000000000LL;
  if ( a2 < v17 )
  {
    v20 = v17;
    do
    {
      v21 = a3++;
      v22 = (unsigned __int8)MiLockPageInline(v19);
      if ( (*(_BYTE *)(v19 + 35) & 0x40) != 0 )
        a3 = v21;
      MiInsertPageInFreeOrZeroedList(a2, v18);
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v22 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v22);
      ++a2;
      v19 += 48LL;
    }
    while ( a2 < v20 );
LABEL_22:
    v5 = a1;
  }
LABEL_23:
  if ( (v4 & 8) == 0 )
  {
    v28 = (volatile signed __int64 *)&MiSystemPartition;
LABEL_28:
    MiReturnCommit((__int64)v28, a3);
    goto LABEL_29;
  }
  if ( (v4 & 0x40000) != 0 || (v4 & 0x10000) != 0 )
  {
    v28 = v5;
    goto LABEL_28;
  }
LABEL_29:
  if ( v5 != (volatile signed __int64 *)&MiSystemPartition
    || (v29 = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)v29->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_39:
    if ( a3 )
      _InterlockedExchangeAdd64(v5 + 2160, a3);
    return;
  }
  if ( a3 + CachedResidentAvailable > 0x100 || a3 >= 0x80000 )
  {
LABEL_36:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v29->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      a3 += (int)CachedResidentAvailable - 192;
    }
    goto LABEL_39;
  }
  while ( 1 )
  {
    v31 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v29->CachedResidentAvailable,
            a3 + CachedResidentAvailable,
            CachedResidentAvailable);
    v27 = (_DWORD)CachedResidentAvailable == v31;
    LODWORD(CachedResidentAvailable) = v31;
    if ( v27 )
      break;
    if ( v31 == -1 || a3 + v31 > 0x100 )
      goto LABEL_36;
  }
}
