/*
 * XREFs of MiLockDriverPageRange @ 0x14061A380
 * Callers:
 *     MiLockPatchIatForDV @ 0x1406409F0 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x1406438BC (MmWriteSystemImageTracepoint.c)
 *     MiCompleteSecureDriverLoad @ 0x140885AC8 (MiCompleteSecureDriverLoad.c)
 *     MiLockAndMapEntireDriver @ 0x140A34578 (MiLockAndMapEntireDriver.c)
 *     MiLockHotPatchPages @ 0x140A38848 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x140A388E8 (MiLockHotPatchUndoPages.c)
 *     MmReapplyBootPatchImports @ 0x140B743BC (MmReapplyBootPatchImports.c)
 * Callees:
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiAddLockedPageCharge @ 0x1402EF5F8 (MiAddLockedPageCharge.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiReferenceDriverPage @ 0x140325E2C (MiReferenceDriverPage.c)
 *     KeSetPagePrivilege @ 0x1403D4EF4 (KeSetPagePrivilege.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x140667370 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockDriverPageRange(__int64 *a1, unsigned int a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 *v6; // r15
  __int64 v7; // r10
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 *v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rsi
  unsigned __int64 v14; // r13
  __int64 v15; // r9
  unsigned __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // edi
  unsigned __int64 v20; // r12
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rcx
  char v24; // cl
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned __int8 v29; // [rsp+28h] [rbp-B1h]
  unsigned __int64 v30; // [rsp+30h] [rbp-A9h]
  unsigned __int64 BugCheckParameter1; // [rsp+38h] [rbp-A1h]
  __int64 v32; // [rsp+40h] [rbp-99h] BYREF
  __int64 v33; // [rsp+48h] [rbp-91h]
  unsigned __int64 *v34; // [rsp+50h] [rbp-89h]
  __int64 v35; // [rsp+58h] [rbp-81h] BYREF
  __int64 v36; // [rsp+60h] [rbp-79h]
  __int128 v37[12]; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v39; // [rsp+140h] [rbp+67h]

  v39 = a2;
  v6 = a1;
  memset(&v37[1], 0, 0x68uLL);
  v7 = *v6;
  v8 = 0;
  *(_QWORD *)&v37[0] = 0LL;
  v33 = 0LL;
  BugCheckParameter1 = *(_QWORD *)(v7 + 48) + ((unsigned __int64)a2 << 12);
  v9 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v30 = v9;
  v10 = v9;
  if ( (v6[12] & 2) != 0 )
    v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v37[0] + 1) = 0LL;
  v34 = 0LL;
  v11 = &qword_140C65918;
  v36 = (a5 + 48) & -(__int64)(a5 != 0);
  v12 = 0;
  while ( *v11 != v7 )
  {
    ++v12;
    ++v11;
    if ( v12 )
      goto LABEL_8;
  }
  v34 = (unsigned __int64 *)((char *)&unk_140C65920 + 16 * v12);
LABEL_8:
  v13 = v6[2];
LABEL_9:
  v14 = 0LL;
  v29 = MiLockWorkingSetShared(v13);
LABEL_30:
  v20 = v39;
  while ( (unsigned int)v20 <= a3 )
  {
    if ( !v14 )
      goto LABEL_15;
    if ( (v9 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v13, v14);
LABEL_15:
      v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v13, v14, 0, v15);
    }
    if ( v34 && v20 < *v34 && _bittest64((const signed __int64 *)(v34[1] + 8 * (v20 >> 6)), v20 & 0x3F) )
      goto LABEL_56;
    if ( v6[7] && v20 < v6[6] && _bittest64((const signed __int64 *)(v6[7] + 8 * (v20 >> 6)), v20 & 0x3F) )
      goto LABEL_63;
    v35 = MI_READ_PTE_LOCK_FREE(v10);
    if ( (v35 & 1) != 0 )
    {
      v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v35) >> 12) & 0xFFFFFFFFFFLL;
      if ( (a1[12] & 2) != 0 )
        v16 += (v9 >> 3) & 0x1FF;
      v17 = 48 * v16 - 0x220000000000LL;
      v18 = *(_QWORD *)(v17 + 40);
      if ( v18 >= 0 )
        goto LABEL_33;
      if ( (v18 & 0x10000000000LL) != 0 || *(__int64 *)(v17 + 8) <= 0 )
      {
        if ( (*(_BYTE *)(v13 + 184) & 7) != 1 )
        {
          MiUnlockPageTableInternal(v13, v14);
          MiUnlockWorkingSetShared(v13, v29);
          v20 = v39;
          v6 = a1;
          MiMakeDriverPagesPrivate(*a1, v10, v10 + 8LL * (a3 - v39), 8);
          MiLockWorkingSetShared(v13);
          MiLockPageTableInternal(v13, v14, 0, v22);
          goto LABEL_10;
        }
LABEL_33:
        if ( _bittest64((const signed __int64 *)a1[5], v20) )
        {
          v6 = a1;
        }
        else
        {
          LODWORD(v32) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v32);
            while ( *(__int64 *)(v17 + 24) < 0 );
          }
          v23 = 48 * v16 - 0x220000000000LL;
          if ( (*(_BYTE *)(v13 + 184) & 7) == 1 )
          {
            if ( !(unsigned int)MiAddLockedPageCharge(v23, 0) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v8 = -1073741670;
              goto LABEL_67;
            }
          }
          else
          {
            MiReferenceDriverPage(v23);
          }
          v24 = a4;
          if ( (a4 & 1) != 0 && ((*(_QWORD *)(v17 + 40) >> 60) & 7) != 3 )
          {
            *(_QWORD *)&v37[0] = BugCheckParameter1;
            KeSetPagePrivilege(v16, v37, 256);
            v24 = a4;
            *((_DWORD *)a1 + 24) |= 1u;
          }
          if ( v36 )
            *(_QWORD *)(v36 + 8 * v20) = v16;
          if ( (v24 & 4) != 0 )
          {
            v25 = 0LL;
          }
          else
          {
            v25 = MiCaptureDirtyBitToPfn(48 * v16 - 0x220000000000LL);
            if ( v25 )
            {
              v26 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
              v33 = v26;
              goto LABEL_51;
            }
          }
          v26 = v33;
LABEL_51:
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v25 )
            MiReleasePageFileInfo(v26, v25, 1);
          v6 = a1;
          _bittestandset64((signed __int64 *)a1[5], v20);
        }
        v9 = v30;
        goto LABEL_63;
      }
      v6 = a1;
      v19 = MiCopyOnWrite(BugCheckParameter1, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
      v20 = v39;
      if ( v19 < 0 )
      {
        MiUnlockPageTableInternal(v13, v14);
        MiUnlockWorkingSetShared(v13, v29);
        MiCopyOnWriteCheckConditions(v13, (unsigned int)v19);
        MiLockWorkingSetShared(v13);
        MiLockPageTableInternal(v13, v14, 0, v21);
        v9 = v30;
        goto LABEL_30;
      }
LABEL_10:
      v9 = v30;
    }
    else
    {
      MiUnlockPageTableInternal(v13, v14);
      MiUnlockWorkingSetShared(v13, v29);
      LOWORD(v37[1]) = 6;
      *((_QWORD *)&v37[1] + 1) = 0LL;
      memset(&v37[2], 0, 24);
      if ( (int)MmAccessFault(0LL, BugCheckParameter1, 0, (ULONG_PTR)&v37[1] + 1) >= 0 )
        goto LABEL_9;
      MiLockWorkingSetShared(v13);
      MiLockPageTableInternal(v13, v14, 0, v27);
LABEL_56:
      if ( (a4 & 2) == 0
        && (!v6[11] || v20 >= v6[10] || !_bittest64((const signed __int64 *)(v6[11] + 8 * (v20 >> 6)), v20 & 0x3F)) )
      {
        v8 = -1073741701;
        goto LABEL_67;
      }
LABEL_63:
      BugCheckParameter1 += 4096LL;
      v9 += 8LL;
      v20 = v39 + 1;
      v30 = v9;
      ++v39;
      if ( (v9 & 0xFFF) == 0 || (v6[12] & 2) == 0 )
        v10 += 8LL;
    }
  }
  if ( a5 )
    *(_WORD *)(a5 + 10) |= 2u;
LABEL_67:
  MiUnlockPageTableInternal(v13, v14);
  MiUnlockWorkingSetShared(v13, v29);
  return v8;
}
