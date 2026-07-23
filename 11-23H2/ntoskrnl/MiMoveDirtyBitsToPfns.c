/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x140285CA0
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x140642144 (MiBeginHoldingDirtyFaults.c)
 *     NtResetWriteWatch @ 0x140747A20 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A51F4 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiMakePteClean @ 0x140285B00 (MiMakePteClean.c)
 *     MiLockVadCore @ 0x140287A60 (MiLockVadCore.c)
 *     RtlClearBitsEx @ 0x14028BDB0 (RtlClearBitsEx.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiUnlockVadCore @ 0x1402EAD74 (MiUnlockVadCore.c)
 *     MiGetVadMandatoryPageSize @ 0x1402EB080 (MiGetVadMandatoryPageSize.c)
 *     MiLocateLockedVadEvent @ 0x14030B6B4 (MiLocateLockedVadEvent.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbp
  __int64 v8; // r8
  __int64 v9; // r15
  int v10; // r14d
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  _KPROCESS *Process; // rcx
  __int64 v14; // rbx
  int v15; // r13d
  unsigned __int8 v16; // al
  int v17; // esi
  unsigned __int64 NextPageTable; // rax
  _KPROCESS *v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rsi
  unsigned __int64 LeafVa; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // r10
  __int64 v31; // r11
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  bool v35; // zf
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v39; // r14
  __int64 v40; // rcx
  unsigned __int64 i; // rsi
  struct _LIST_ENTRY *Flink; // r8
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int8 v47; // [rsp+30h] [rbp-148h]
  int v48; // [rsp+34h] [rbp-144h]
  int v49; // [rsp+38h] [rbp-140h]
  unsigned int v50; // [rsp+3Ch] [rbp-13Ch] BYREF
  unsigned __int64 *v51; // [rsp+40h] [rbp-138h]
  __int64 v52; // [rsp+48h] [rbp-130h]
  unsigned __int64 *v53; // [rsp+50h] [rbp-128h]
  unsigned __int64 v54; // [rsp+58h] [rbp-120h]
  unsigned __int64 v55; // [rsp+60h] [rbp-118h]
  int v56; // [rsp+70h] [rbp-108h] BYREF
  __int16 v57; // [rsp+74h] [rbp-104h]
  __int16 v58; // [rsp+76h] [rbp-102h]
  __int64 v59; // [rsp+78h] [rbp-100h]
  __int64 v60; // [rsp+80h] [rbp-F8h]
  __int64 v61; // [rsp+88h] [rbp-F0h]
  _BYTE v62[152]; // [rsp+90h] [rbp-E8h] BYREF

  v4 = a3;
  v52 = a3;
  v50 = 0;
  v58 = 0;
  memset(v62, 0, sizeof(v62));
  v8 = 0LL;
  v48 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = v12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v14 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v54 = Process[1].ActiveProcessors.StaticBitmap[28];
  v53 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v15 = a4 & 1;
  if ( (a4 & 1) != 0 )
    v51 = (unsigned __int64 *)(MiLocateLockedVadEvent(v4, 4LL) + 8);
  else
    v51 = 0LL;
  v59 = 20LL;
  v56 = 1;
  v57 = v8;
  v60 = v8;
  v61 = v8;
  v16 = MiLockWorkingSetShared(v14);
  v47 = v16;
  if ( v11 <= v12 )
  {
    v17 = a4 & 2;
    v49 = v17;
    while ( 1 )
    {
      if ( v9 )
      {
        MiFlushTbList(&v56);
        MiUnlockPageTableInternal(v14, v9);
        v9 = 0LL;
        if ( (unsigned int)MiWorkingSetIsContended(v14) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v14, v47);
          MiLockWorkingSetShared(v14);
        }
        v16 = v47;
      }
      if ( v17 )
        _InterlockedIncrement64((volatile signed __int64 *)(v54 + 632));
      NextPageTable = MiGetNextPageTable(v11, v12, 0, v16, 1, (__int64)&v50);
      v21 = NextPageTable;
      v22 = NextPageTable;
      if ( NextPageTable )
      {
        v19 = (_KPROCESS *)0xFFFFF68000000000LL;
        v20 = 0x7FFFFFFFF8LL;
        v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v50 )
        {
          v22 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v39 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v50 > 1 )
          {
            v40 = v50 - 1;
            do
            {
              v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v39 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v40;
            }
            while ( v40 );
          }
          v9 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          for ( i = v22 + 8; (i & 0xFFF) != 0; i += 8LL )
          {
            if ( i > v39 )
              break;
            if ( (MI_READ_PTE_LOCK_FREE(i) & 0x81) != 0x81 )
              break;
          }
          v10 = v48;
          v23 = i - 8;
        }
        else
        {
          v23 = (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v23 > v12 )
            v23 = v12;
        }
      }
      else
      {
        v23 = v12;
      }
      if ( v15 )
      {
        v48 = 1;
        MiGetVadMandatoryPageSize(
          v52,
          v19,
          v20,
          *(unsigned int *)(v52 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v52 + 32) << 32));
        LeafVa = MiGetLeafVa(v11);
        v27 = ((LeafVa >> 12) - v25) / v26;
        v28 = MiGetLeafVa(v23 + 8);
        v32 = ((*(unsigned int *)(v31 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v31 + 33) << 32)) << 12) | 0xFFF;
        if ( v28 > v32 )
        {
          v33 = *v51;
        }
        else
        {
          v32 = ((v28 >> 12) - v29) % v30;
          v33 = ((v28 >> 12) - v29) / v30;
        }
        MiLockVadCore(v31, v32);
        RtlClearBitsEx(v51, v27, v33 - v27);
        v10 = 1;
      }
      if ( !v21 )
        goto LABEL_28;
      if ( v22 > v23 )
        goto LABEL_25;
      do
      {
        v34 = *(_QWORD *)v22;
        if ( v22 >= 0xFFFFF6FB7DBED000uLL && v22 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
        {
          v19 = KeGetCurrentThread()->ApcState.Process;
          if ( v19->AddressPolicy != 1 && (v34 & 1) != 0 )
          {
            if ( (v34 & 0x20) != 0 )
            {
              v35 = (v34 & 0x42) == 0;
              if ( (v34 & 0x42) != 0 )
                goto LABEL_20;
            }
            v19 = KeGetCurrentThread()->ApcState.Process;
            Flink = v19[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v43 = *((_QWORD *)&Flink->Flink + ((v22 >> 3) & 0x1FF));
              v44 = v34 | 0x20;
              if ( (v43 & 0x20) == 0 )
                v44 = *(_QWORD *)v22;
              v34 = v44;
              if ( (v43 & 0x42) != 0 )
                v34 = v44 | 0x42;
            }
          }
        }
        v35 = (v34 & 0x42) == 0;
LABEL_20:
        if ( !v35 && (v34 & 1) != 0 )
        {
          if ( v15 || (!v49 || v34 >= 0) && (v45 = MiGetLeafVa(v22), (MiGetWsleContents(v46, v45) & 0xF) != 9) )
            MiMakePteClean(v22, (__int64)&v56);
        }
        v22 += 8LL;
      }
      while ( v22 <= v23 );
      v12 = v55;
      v10 = v48;
LABEL_25:
      if ( v10 )
      {
        LOBYTE(v19) = 2;
        MiUnlockVadCore(v52, v19);
        v10 = 0;
        v48 = 0;
      }
      v36 = MiGetLeafVa(v22);
      v14 = (__int64)v53;
      v11 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = v49;
      v16 = v47;
      if ( v11 > v12 )
      {
LABEL_28:
        v14 = (__int64)v53;
        v4 = v52;
        break;
      }
    }
  }
  MiFlushTbList(&v56);
  if ( v10 )
  {
    LOBYTE(v37) = 2;
    MiUnlockVadCore(v4, v37);
  }
  if ( v9 )
    MiUnlockPageTableInternal(v14, v9);
  return MiUnlockWorkingSetShared(v14, v47);
}
