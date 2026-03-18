/*
 * XREFs of MiDeletePagablePteRange @ 0x140330080
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140216B04 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x140226A00 (MiDeleteSessionPdes.c)
 *     MiDeleteVirtualAddresses @ 0x14030FE40 (MiDeleteVirtualAddresses.c)
 *     MiDeleteVadBitmap @ 0x140693D80 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiCheckProcessShadow @ 0x1402B2E40 (MiCheckProcessShadow.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x14031D9B0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiDeleteVaTail @ 0x14032F0E0 (MiDeleteVaTail.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiPreUnlockWorkingSetShared @ 0x140373E1C (MiPreUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiFreePhysicalPageChain @ 0x1405AA6C4 (MiFreePhysicalPageChain.c)
 *     MiFreeLargePages @ 0x1405C1CE0 (MiFreeLargePages.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14063D8E0 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall MiDeletePagablePteRange(
        __int64 a1,
        KIRQL a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6,
        int a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // rbx
  _QWORD *v9; // r14
  KIRQL v10; // di
  int v12; // esi
  int v13; // r12d
  int v14; // r13d
  int v15; // edx
  __int32 v16; // eax
  char v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // al
  volatile __int32 *v20; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v23; // rcx
  signed __int32 v24; // ett
  unsigned int v25; // eax
  int v26; // eax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r13
  unsigned int v29; // esi
  unsigned __int64 v30; // r12
  unsigned __int64 i; // rdi
  unsigned __int64 j; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // r9
  __int8 v38; // al
  unsigned int v39; // ecx
  unsigned int v40; // edx
  volatile signed __int32 *v41; // rbx
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  _DWORD *v46; // rcx
  __int64 v47; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v49; // r9
  _DWORD *SchedulerAssist; // r9
  int v51; // eax
  int v52; // eax
  volatile LONG *SharedVm; // rbx
  volatile LONG *v54; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v56; // rcx
  volatile LONG *v57; // rax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  bool v62; // zf
  int v63; // eax
  unsigned __int8 v64; // al
  _DWORD *v65; // r9
  int v66; // eax
  __int64 v67; // rcx
  struct _KTHREAD *v68; // rbx
  char v69; // [rsp+30h] [rbp-D0h]
  char v70; // [rsp+31h] [rbp-CFh]
  KIRQL v72; // [rsp+48h] [rbp-B8h]
  __int64 v74; // [rsp+70h] [rbp-90h] BYREF
  __int64 v75; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v76; // [rsp+88h] [rbp-78h]
  unsigned __int64 v77; // [rsp+90h] [rbp-70h]
  unsigned __int64 v78; // [rsp+98h] [rbp-68h]
  __int64 v79; // [rsp+A0h] [rbp-60h]
  __m128i v80; // [rsp+B0h] [rbp-50h] BYREF
  int *v81; // [rsp+C0h] [rbp-40h]
  __int64 v82; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v83; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v84; // [rsp+D8h] [rbp-28h]
  _BYTE v85[104]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall *v86)(_QWORD, _QWORD, _QWORD); // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v87)(_QWORD *); // [rsp+150h] [rbp+50h]
  _QWORD *v88; // [rsp+158h] [rbp+58h]
  _QWORD v89[20]; // [rsp+160h] [rbp+60h] BYREF
  int v90; // [rsp+200h] [rbp+100h] BYREF
  __int16 v91; // [rsp+204h] [rbp+104h]
  __int16 v92; // [rsp+206h] [rbp+106h]
  __int64 v93; // [rsp+208h] [rbp+108h]
  __int64 v94; // [rsp+210h] [rbp+110h]
  __int64 v95; // [rsp+218h] [rbp+118h]
  _BYTE v96[152]; // [rsp+220h] [rbp+120h] BYREF
  void *retaddr; // [rsp+308h] [rbp+208h]
  char v98; // [rsp+338h] [rbp+238h]

  v8 = a4;
  v9 = a8;
  v10 = a2;
  v92 = 0;
  memset(v96, 0, sizeof(v96));
  v12 = a7;
  v13 = a7 & 0x100;
  v69 = 0;
  v98 = 4 * (a6 & 7);
  v14 = a7 & 0x10;
  while ( 1 )
  {
    v72 = v10;
    memset(v89, 0, 0x98uLL);
    v80 = 0LL;
    memset(v85, 0, sizeof(v85));
    LODWORD(v89[18]) |= 2u;
    v89[2] = v9;
    LODWORD(v89[13]) = v12;
    v90 = MiTbFlushType(a1);
    v93 = 20LL;
    v81 = &v90;
    v91 = 0;
    v94 = 0LL;
    v95 = 0LL;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      BYTE4(v89[13]) = 1;
    v15 = a7 & 0x200;
    v80.m128i_i8[4] = v98 | v80.m128i_i8[4] & 0xE3;
    v88 = v89;
    v16 = 39;
    v80.m128i_i32[0] = 39;
    if ( (a7 & 0x200) != 0 )
    {
      v16 = 1059;
      v80.m128i_i32[0] = 1059;
    }
    if ( v13 )
    {
      v16 |= 0x800u;
      v80.m128i_i32[0] = v16;
    }
    if ( (a7 & 0x800) != 0 )
      v80.m128i_i8[6] = 63;
    v83 = v8;
    v86 = MiDeleteVa;
    v17 = 0;
    v82 = a1;
    v87 = MiDeleteVaTail;
    v18 = a5;
    v84 = a5;
    v70 = 0;
    if ( v14 )
    {
      v47 = *(_QWORD *)(a8[5] + 32LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquireAutoExpandPushLockExclusive(v47 + 64, 0LL);
      v16 = v80.m128i_i32[0];
      v18 = a5;
      v15 = a7 & 0x200;
    }
    if ( a2 == 17 )
    {
      if ( (v16 & 4) != 0 )
      {
        v19 = *(_BYTE *)(a1 + 184) & 7;
        if ( v19 <= 4u )
        {
          if ( v19 == 2 )
          {
            v20 = (volatile __int32 *)&unk_140C53D00;
            goto LABEL_17;
          }
LABEL_16:
          v20 = (volatile __int32 *)(a1 + 192);
LABEL_17:
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            v15 = a7 & 0x200;
            SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v20, CurrentIrql);
          }
          else
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = CurrentPrcb->SchedulerAssist;
            if ( v23 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v51 = v23[6];
                v23[6] = v51 + 1;
                if ( v51 == -1 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  v15 = a7 & 0x200;
                }
              }
            }
            _m_prefetchw((const void *)v20);
            v24 = *v20 & 0x7FFFFFFF;
            if ( v24 == _InterlockedCompareExchange(v20, v24 + 1, v24) )
              goto LABEL_21;
            v46 = CurrentPrcb->SchedulerAssist;
            if ( v46 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v52 = v46[6] - 1;
                v46[6] = v52;
                if ( !v52 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            ExpWaitForSpinLockSharedAndAcquire(v20, CurrentIrql);
          }
          v15 = a7 & 0x200;
LABEL_21:
          if ( *((_DWORD *)v20 + 1) )
            _InterlockedExchange(v20 + 1, 0);
          v8 = a4;
          v10 = CurrentIrql;
          v72 = CurrentIrql;
          goto LABEL_24;
        }
        if ( v19 == 5 )
          goto LABEL_16;
        v10 = KeGetCurrentIrql();
        v72 = v10;
        __writecr8(2uLL);
        if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || v10 > 0xFu )
          goto LABEL_25;
        v49 = KeGetCurrentPrcb()->SchedulerAssist;
        v49[5] |= (-1 << (v10 + 1)) & 4;
      }
      else
      {
        SharedVm = (volatile LONG *)MiGetSharedVm(a1);
        v10 = ExAcquireSpinLockExclusive(SharedVm);
        *((_DWORD *)SharedVm + 1) = 0;
        v8 = a4;
        v72 = v10;
      }
      v15 = a7 & 0x200;
LABEL_24:
      v18 = a5;
LABEL_25:
      v25 = v80.m128i_i32[0];
      goto LABEL_26;
    }
    v25 = v16 & 0xFFFFFFFD;
    v17 = 1;
    v80.m128i_i32[0] = v25;
    v70 = 1;
LABEL_26:
    v80.m128i_i8[7] = v10;
    if ( v13 )
    {
      if ( !v15 )
        v25 = v25 & 0xFFFFEFFB | 0x1000;
      v80.m128i_i32[0] = v25 & 0xFFFFFFFD;
      v54 = (volatile LONG *)MiGetSharedVm(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel(v54 + 16);
      v18 = a5;
    }
    if ( (a7 & 0x80) == 0 )
      goto LABEL_61;
    if ( v69 )
      goto LABEL_61;
    if ( ((v8 ^ v18) & 0xFFFFFFE00000LL) != 0 )
      goto LABEL_61;
    v26 = MiFastLockLeafPageTable(a1, v8, 0);
    if ( !v26 )
      goto LABEL_61;
    v27 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v76 = v27;
    v77 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v78 = ((v77 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v79 = ((v78 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v28 = *(&v76 + v26);
    v29 = v26 - 1;
    if ( v26 != 1 )
    {
      MiUnlockPageTableInternal(a1, v28);
      v14 = a7 & 0x10;
LABEL_61:
      MiWalkPageTables(&v80);
      goto LABEL_39;
    }
    v30 = a4;
    for ( i = (a5 >> 9) & 0x7FFFFFFFF8LL; ; i = (j >> 9) & 0x7FFFFFFFF8LL )
    {
      for ( j = i - 0x98000000000LL; v27 <= j; v27 += 8 * v33 )
      {
        MiDeleteVa(&v80, v27, v29);
        v33 = (unsigned int)(v80.m128i_i32[2] + 1);
        v80.m128i_i32[2] = 0;
      }
      MiDeleteVaTail(&v80);
      v34 = ((v30 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v35 = *(_QWORD *)v34;
      if ( v34 >= 0xFFFFF6FB7DBED000uLL
        && v34 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v35 & 1) != 0
        && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v56 = *((_QWORD *)&Flink->Flink + ((v34 >> 3) & 0x1FF));
          if ( (v56 & 0x20) != 0 )
            v35 |= 0x20uLL;
          if ( (v56 & 0x42) != 0 )
            v35 |= 0x42uLL;
        }
      }
      v75 = v35;
      v36 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v75) >> 12) & 0xFFFFFFFFFFLL);
      if ( v29 == 3 || (*(_DWORD *)(8 * v36 - 0x220000000000LL + 16) & 0x3FF0000) != 0 )
        break;
      if ( !(unsigned int)MiLockPageTableInternal(a1, ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, v37) )
      {
        v69 = 1;
        break;
      }
      MiUnlockPageTableInternal(a1, v28);
      v27 = v28;
      v28 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v29;
      v30 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    MiUnlockPageTableInternal(a1, v28);
    v10 = v72;
    v17 = v70;
    v13 = a7 & 0x100;
    v14 = a7 & 0x10;
LABEL_39:
    if ( !v13
      || (v57 = (volatile LONG *)MiGetSharedVm(a1), ExReleaseSpinLockExclusiveFromDpcLevel(v57 + 16), (a7 & 0x200) != 0) )
    {
      v38 = v80.m128i_i8[0];
    }
    else
    {
      v38 = v80.m128i_i8[0] | 4;
      v80.m128i_i32[0] |= 4u;
    }
    if ( !v17 )
    {
      if ( (v38 & 4) != 0 )
      {
        v39 = *(_DWORD *)(a1 + 184);
        v40 = HIBYTE(v39);
        if ( (v39 & 7) <= 4 || (LOBYTE(v40) = HIBYTE(v39), (v39 & 7) == 5) )
        {
          if ( (*(_DWORD *)(a1 + 188) & 3) != 0 || (v40 & 0x10) != 0 )
          {
            MiPreUnlockWorkingSetShared(a1, v10);
            LOBYTE(v39) = *(_BYTE *)(a1 + 184);
          }
          if ( (v39 & 7) == 2 )
            v41 = (volatile signed __int32 *)&unk_140C53D00;
          else
            v41 = (volatile signed __int32 *)(a1 + 192);
          MiCheckProcessShadow(a1, 1u);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v41, retaddr);
          }
          else
          {
            _InterlockedAnd(v41, 0xBFFFFFFF);
            _InterlockedDecrement(v41);
          }
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          if ( v43 )
          {
            if ( v42->NestingLevel <= 1u )
            {
              v63 = v43[6] - 1;
              v43[6] = v63;
              if ( !v63 )
                KiRemoveSystemWorkPriorityKick(v42);
            }
          }
          if ( !KiIrqlFlags )
            goto LABEL_52;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_52;
          v64 = KeGetCurrentIrql();
          if ( v64 > 0xFu )
            goto LABEL_52;
          if ( v10 > 0xFu )
            goto LABEL_52;
          if ( v64 < 2u )
            goto LABEL_52;
          v59 = KeGetCurrentPrcb();
          v65 = v59->SchedulerAssist;
          v66 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v62 = (v66 & v65[5]) == 0;
          v65[5] &= v66;
          if ( !v62 )
            goto LABEL_52;
        }
        else
        {
          if ( !KiIrqlFlags )
            goto LABEL_52;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_52;
          v58 = KeGetCurrentIrql();
          if ( v58 > 0xFu )
            goto LABEL_52;
          if ( v10 > 0xFu )
            goto LABEL_52;
          if ( v58 < 2u )
            goto LABEL_52;
          v59 = KeGetCurrentPrcb();
          v60 = v59->SchedulerAssist;
          v61 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v62 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( !v62 )
            goto LABEL_52;
        }
        KiRemoveSystemWorkPriorityKick(v59);
LABEL_52:
        __writecr8(v10);
        goto LABEL_53;
      }
      MiUnlockWorkingSetExclusive(a1, v10);
    }
LABEL_53:
    v9 = a8;
    v44 = a8[6];
    if ( v44 < 0 )
    {
      v67 = *(unsigned __int16 *)(a1 + 174);
      v74 = 0LL;
      a8[1] = MiFreeLargePages(*(_QWORD *)(qword_140C51F48 + 8 * v67), v44, (unsigned int)&v74, (int)a8 + 24, 0);
      a8[6] = v74;
    }
    v45 = a8[5];
    if ( v45 && v89[14] )
      MiFreePhysicalPageChain(v45, v89[14], 1LL);
    if ( v14 )
    {
      v68 = KeGetCurrentThread();
      ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(a8[5] + 32LL) + 64LL, 0LL);
      v62 = v68->SpecialApcDisable++ == -1;
      if ( v62 && ($CEA84C04E3712D858E5667A507841A2A *)v68->ApcState.ApcListHead[0].Flink != &v68->152 )
        KiCheckForKernelApcDelivery();
    }
    if ( v69 != 1 )
      break;
    v8 = a4;
    v12 = a7;
    v10 = a2;
    v69 = 2;
  }
}
