/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x14033D860
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14023C1EC (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x1402535C0 (MmSetAddressRangeModified.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     CcZeroDataInCache @ 0x14029C34C (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetOptimal @ 0x1402D0490 (MiLockWorkingSetOptimal.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiGetSystemCacheReverseMap @ 0x1403295C0 (MiGetSystemCacheReverseMap.c)
 *     MiMakeProtectionMask @ 0x14032BCC0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x14033F3EC (MI_TIGHTER_PERMISSIONS.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v4; // edi
  __int64 *v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 CurrentIrql; // r10
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r11
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  unsigned __int8 v29[4]; // [rsp+20h] [rbp-138h] BYREF
  int v30; // [rsp+24h] [rbp-134h]
  int v31; // [rsp+28h] [rbp-130h] BYREF
  int ProtectionMask; // [rsp+2Ch] [rbp-12Ch]
  int v33; // [rsp+30h] [rbp-128h]
  __int64 v34; // [rsp+38h] [rbp-120h]
  __int64 v35; // [rsp+40h] [rbp-118h]
  unsigned __int64 v36; // [rsp+48h] [rbp-110h]
  __int64 v37; // [rsp+50h] [rbp-108h]
  int v38; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v39; // [rsp+64h] [rbp-F4h]
  __int16 v40; // [rsp+66h] [rbp-F2h]
  __int64 v41; // [rsp+68h] [rbp-F0h]
  __int64 v42; // [rsp+70h] [rbp-E8h]
  __int64 v43; // [rsp+78h] [rbp-E0h]
  _BYTE v44[152]; // [rsp+80h] [rbp-D8h] BYREF

  v2 = a2 - 1;
  v29[0] = 0;
  v40 = 0;
  memset(v44, 0, sizeof(v44));
  LOBYTE(v30) = 0;
  ProtectionMask = MiMakeProtectionMask(4u);
  v41 = 20LL;
  v4 = ProtectionMask;
  v38 = 0;
  v39 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v5 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = (((a1 + v2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = 0LL;
  v36 = MiLockWorkingSetOptimal((__int64)&unk_140C59200, (unsigned __int64)v5, v29);
  v9 = *(_QWORD *)(MiGetSystemCacheReverseMap(v7) + 24);
  v11 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v9 & 1) == 0 )
    v11 = (__int64 *)v9;
  v12 = 2LL;
  v13 = *v11;
  v14 = 0xFFFFFFFFFFLL;
  v37 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v13 + 60) & 0x3FF)) + 17024LL;
  do
  {
    v15 = *v5;
    if ( (*v5 & 1) != 0 )
    {
      v33 = 0;
      v16 = 0LL;
      v17 = (v15 >> 12) & 0xFFFFFFFFFFLL;
      v18 = 48 * v17 - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      v34 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v14 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        v12 = (unsigned int)v14 | SchedulerAssist[5];
        SchedulerAssist[5] = v12;
      }
      v31 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v31, v14, v12, (__int64)SchedulerAssist);
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
        LOBYTE(CurrentIrql) = v34;
      }
      v20 = (*(_BYTE *)(v18 + 34) & 0x10) == 0;
      v21 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FFLL));
      v35 = v21;
      if ( v20 || (*(_DWORD *)(v18 + 16) & 0x400LL) == 0 )
      {
        v22 = MiCaptureDirtyBitToPfn(v18);
        LOBYTE(CurrentIrql) = v34;
        v16 = v22;
        v21 = v35;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v24 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
            v20 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v20 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              LOBYTE(CurrentIrql) = v34;
            }
            v21 = v35;
          }
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v16 )
        MiReleasePageFileInfo(v21, v16, 0);
      v4 = ProtectionMask;
      if ( ProtectionMask != 2 || (v15 & 0x800) == 0 )
      {
        if ( (v15 & 0x42) == 0 )
          goto LABEL_17;
        MiWriteValidPteNewProtection(v5, v15 & 0xFFFFFFFFFFFFFFBDuLL);
        LOBYTE(v30) = 1;
LABEL_15:
        MiInsertTbFlushEntry((__int64)&v38, v7, 1LL, 0);
        goto LABEL_17;
      }
      v8 = (v17 << 12) | v8 & 0xFFF0000000000FFFuLL;
      MiWriteValidPteNewProtection(v5, v8);
      if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !(unsigned int)MI_TIGHTER_PERMISSIONS(v15, v8) )
        v27 = v33;
      else
        v27 = 1;
      v28 = (unsigned __int8)v30;
      if ( (v15 & 0x42) != 0 )
        v28 = 1;
      v30 = v28;
      if ( v27 )
        goto LABEL_15;
    }
    else if ( v4 == 2 && (v15 & 8) == 0 )
    {
      *v5 = v15 | 8;
    }
LABEL_17:
    ++v5;
    v7 += 4096LL;
    v14 = 0xFFFFFFFFFFLL;
    v12 = 2LL;
  }
  while ( (unsigned __int64)v5 <= v6 );
  MiFlushTbList((__int64)&v38);
  MiUnlockPageTableInternal(v37, v36);
  MiUnlockWorkingSetShared(v37, v29[0]);
  return (unsigned __int8)v30;
}
