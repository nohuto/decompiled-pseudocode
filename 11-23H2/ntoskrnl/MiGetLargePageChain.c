/*
 * XREFs of MiGetLargePageChain @ 0x1402EBCD0
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140286B90 (MiInitializePoolCommitPacket.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiIsFreeZeroPfnCold @ 0x1402E8860 (MiIsFreeZeroPfnCold.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1402E90A8 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiFreeLargePageChain @ 0x14064F66C (MiFreeLargePageChain.c)
 *     MiAddPageToHeatRanges @ 0x140654244 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x140654B4C (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  BOOL v6; // ebx
  unsigned __int64 v7; // r12
  __int64 LargePagesDemoteAsNeeded; // rax
  __int64 v9; // r14
  unsigned __int64 v11; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h]
  int v19; // [rsp+48h] [rbp-C0h]
  _DWORD v20[32]; // [rsp+4Ch] [rbp-BCh] BYREF

  v3 = a1;
  memset(v20, 0, sizeof(v20));
  if ( !*(_QWORD *)(qword_140C6B450 + 25408 * v3 + 22832) && (MiFlags & 0x30) != 0 )
    return 0LL;
  v4 = 0LL;
  v5 = a2 >> 9;
  v19 = 16;
  v6 = qword_140C6F6C8 > 0x110000;
  v17 = 1;
  v18 = 0;
  v7 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      LargePagesDemoteAsNeeded = MiGetLargePagesDemoteAsNeeded(
                                   (__int64)&MiSystemPartition,
                                   v3,
                                   0x200uLL,
                                   0x200uLL,
                                   0LL,
                                   0,
                                   v6,
                                   1u);
      v9 = LargePagesDemoteAsNeeded;
      if ( !LargePagesDemoteAsNeeded )
        break;
      if ( MiIsFreeZeroPfnCold(LargePagesDemoteAsNeeded) && (HvlEnlightenments & 0x200000) != 0 )
      {
        if ( (unsigned int)MiAddPageToHeatRanges(&v17, 0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4), 1LL) )
          MiNotifyPageHeat(&v17);
        v11 = (unsigned __int8)MiLockPageInline(v9);
        *(_QWORD *)(v9 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v9 + 16), 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v11);
      }
      ++v7;
      *(_QWORD *)v9 = v4;
      v4 = v9;
      if ( v7 >= v5 )
        goto LABEL_6;
    }
    MiFreeLargePageChain(v4);
    v4 = 0LL;
LABEL_6:
    if ( v18 )
      MiNotifyPageHeat(&v17);
  }
  return v4;
}
