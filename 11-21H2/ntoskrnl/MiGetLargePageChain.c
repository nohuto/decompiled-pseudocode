/*
 * XREFs of MiGetLargePageChain @ 0x140266158
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x1403523C0 (MiInitializePoolCommitPacket.c)
 * Callees:
 *     MiFreeLargePageChain @ 0x140263068 (MiFreeLargePageChain.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1402662A0 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiIsFreeZeroPfnCold @ 0x140268620 (MiIsFreeZeroPfnCold.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiAddPageToHeatRanges @ 0x1405B7574 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1405B7E7C (MiNotifyPageHeat.c)
 */

__int64 *__fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rsi
  unsigned __int64 v5; // rbp
  BOOL v6; // ebx
  unsigned __int64 v7; // r15
  __int64 LargePagesDemoteAsNeeded; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v23; // eax
  bool v24; // zf
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+44h] [rbp-C4h]
  int v27; // [rsp+48h] [rbp-C0h]
  _DWORD v28[32]; // [rsp+4Ch] [rbp-BCh] BYREF

  v3 = a1;
  memset(v28, 0, sizeof(v28));
  if ( !*(_QWORD *)(qword_140C54F90 + 24512 * v3 + 22608) && (MiFlags & 0x30) != 0 )
    return 0LL;
  v4 = 0LL;
  v5 = a2 >> 9;
  v27 = 16;
  v6 = qword_140C590C8 > 0x110000;
  v25 = 1;
  v26 = 0;
  v7 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      LargePagesDemoteAsNeeded = MiGetLargePagesDemoteAsNeeded(
                                   (unsigned int)&MiSystemPartition,
                                   v3,
                                   512,
                                   512,
                                   0LL,
                                   0,
                                   v6,
                                   1);
      v12 = LargePagesDemoteAsNeeded;
      if ( !LargePagesDemoteAsNeeded )
        break;
      if ( (unsigned int)MiIsFreeZeroPfnCold(LargePagesDemoteAsNeeded, v9, v10, v11)
        && (HvlEnlightenments & 0x200000) != 0 )
      {
        if ( (unsigned int)MiAddPageToHeatRanges(&v25, 0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4), 1LL) )
          MiNotifyPageHeat(&v25, v17, v18, v19);
        v20 = (unsigned __int8)MiLockPageInline(v12);
        *(_QWORD *)(v12 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v12 + 16), 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v13 = -1LL << ((unsigned __int8)v20 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v23 = ~(unsigned __int16)v13;
              v24 = (v23 & SchedulerAssist[5]) == 0;
              v14 = (unsigned int)v23 & SchedulerAssist[5];
              SchedulerAssist[5] = v14;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v20);
      }
      ++v7;
      *(_QWORD *)v12 = v4;
      v4 = (__int64 *)v12;
      if ( v7 >= v5 )
        goto LABEL_6;
    }
    MiFreeLargePageChain(v4);
    v4 = 0LL;
LABEL_6:
    if ( v26 )
      MiNotifyPageHeat(&v25, v13, v14, SchedulerAssist);
  }
  return v4;
}
