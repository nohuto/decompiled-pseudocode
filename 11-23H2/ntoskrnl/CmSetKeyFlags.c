/*
 * XREFs of CmSetKeyFlags @ 0x140A15C64
 * Callers:
 *     NtSetInformationKey @ 0x1407ACBE0 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140303028 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1403030C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpCleanupRollbackPacket @ 0x140693528 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x140699E30 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x140699F88 (CmpAbortRollbackPacket.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmAddLogForAction @ 0x140707B58 (CmAddLogForAction.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FD58 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x140710874 (CmpGetKeyNodeForKcb.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1407689EC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x140768FC8 (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x14076AE20 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14076B0FC (CmpLockIXLockExclusive.c)
 *     CmpAllocateUnitOfWork @ 0x1407D3770 (CmpAllocateUnitOfWork.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1407E9FC8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpRetryBackOff @ 0x140A1E978 (CmpRetryBackOff.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AF5080 (CmpIsShutdownRundownActive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  ULONG_PTR v12; // rsi
  __int64 v13; // r12
  int v14; // edx
  char v15; // al
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  signed __int64 *v28; // rdi
  unsigned __int64 v29; // r13
  __int64 KeyNodeForKcb; // rax
  __int64 v31; // rdx
  int v32; // r15d
  int v33; // r15d
  int v34; // r15d
  __int16 v35; // cx
  __int16 v36; // ax
  unsigned int v37; // r14d
  __int64 v38; // rcx
  __int64 v39; // rbx
  _QWORD *UnitOfWork; // rax
  __int64 v41; // rbx
  __int64 v42; // r8
  __int64 v44; // [rsp+38h] [rbp-59h] BYREF
  __int64 v45; // [rsp+40h] [rbp-51h] BYREF
  int v46; // [rsp+48h] [rbp-49h] BYREF
  __int128 v47; // [rsp+50h] [rbp-41h] BYREF
  __int128 v48; // [rsp+60h] [rbp-31h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+70h] [rbp-21h]
  _OWORD v50[3]; // [rsp+88h] [rbp-9h] BYREF

  v45 = 0LL;
  v48 = 0LL;
  WORD1(v48) = -1;
  v44 = 0LL;
  memset(v50, 0, sizeof(v50));
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextReinitialize(&v45);
  v46 = 0;
  v47 = 0LL;
  CmpAttachToRegistryProcess(v50);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v6 = -1073741811;
    goto LABEL_71;
  }
  while ( !(unsigned __int8)CmpIsShutdownRundownActive() )
  {
    v11 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v8, v7, v9, v10);
    v12 = *(_QWORD *)(a1 + 8);
    CmpStartKcbStackForTopLayerKcb((__int64)&v48, v12);
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v48);
    v6 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( v6 < 0 )
      goto LABEL_68;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      v6 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v44);
      if ( v6 < 0 )
        goto LABEL_68;
      if ( (*(_DWORD *)(*(_QWORD *)(v12 + 32) + 160LL) & 2) != 0 )
      {
        v6 = -1072103423;
        goto LABEL_68;
      }
      v13 = v44;
      v6 = CmpPerformKeyBodyDeletionCheck(a1, v44);
      if ( v6 < 0 )
        goto LABEL_68;
    }
    else
    {
      v13 = v44;
    }
    v14 = *(__int16 *)(v12 + 66);
    if ( v14 == *(unsigned __int16 *)(a1 + 4) )
    {
      v15 = *(_BYTE *)(v12 + 65);
      if ( !v15 )
        goto LABEL_18;
    }
    else
    {
      if ( !(_WORD)v14 )
        goto LABEL_18;
      v15 = *(_BYTE *)(v12 + 65);
    }
    if ( v15 == 1 )
    {
      v6 = -1073741790;
      goto LABEL_68;
    }
LABEL_18:
    if ( (unsigned int)(a2 - 2) <= 2 )
      v13 = 0LL;
    v44 = v13;
    if ( v13 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
      v41 = (__int64)UnitOfWork;
      if ( UnitOfWork )
      {
        CmpTransEnlistUowInKcb(UnitOfWork, v12);
        v6 = CmpTransEnlistUowInCmTrans((_QWORD *)v41, v13);
        if ( v6 >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v12 + 248), v41)
            && CmpLockIXLockExclusive(v12 + 264, (_QWORD *)v41, 1) )
          {
            *(_DWORD *)(v41 + 68) = 7;
            *(_DWORD *)(v41 + 88) = a3;
            v6 = CmAddLogForAction(v41, 1u, v42);
            if ( v6 >= 0 )
            {
              v6 = 0;
              goto LABEL_68;
            }
          }
          else
          {
            v6 = -1072103423;
          }
        }
        CmpRundownUnitOfWork((_QWORD *)v41);
        ExFreePoolWithTag((PVOID)v41, 0x77554D43u);
      }
      else
      {
        v6 = -1073741670;
      }
LABEL_68:
      CmpUnlockKcbStack((__int64)&v48);
LABEL_69:
      CmpUnlockRegistry(v25, v24, v26, v27);
      goto LABEL_71;
    }
    v16 = CmpTryAcquireKcbIXLocks(v12, 0LL, 0LL, (__int64)&v47);
    v6 = v16;
    if ( v16 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v12, 0LL, 3u, v17, v47);
      CmpUnlockKcbStack((__int64)&v48);
      CmpUnlockRegistry(v19, v18, v20, v21);
      v6 = CmpAbortRollbackPacket((__int64)&v47, 0LL);
      if ( v6 < 0 )
        goto LABEL_71;
      CmpRetryBackOff(&v46, v22, v23);
      CmpCleanupRollbackPacket((__int64)&v47);
      v47 = 0LL;
    }
    else
    {
      if ( v16 < 0 )
        goto LABEL_68;
      if ( *(_DWORD *)(v12 + 40) != -1 )
      {
        v28 = (signed __int64 *)(*(_QWORD *)(v12 + 32) + 72LL);
        v29 = KeAbPreAcquire((__int64)v28, 0LL);
        if ( _InterlockedCompareExchange64(v28, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v28, 0LL, v29, (__int64)v28);
        if ( v29 )
          *(_BYTE *)(v29 + 18) = 1;
        v6 = HvpMarkCellDirty(*(_QWORD *)(v12 + 32), *(unsigned int *)(v12 + 40), 0);
        if ( v6 >= 0 )
        {
          KeyNodeForKcb = CmpGetKeyNodeForKcb(v12, (unsigned int *)&v45, 1);
          v31 = KeyNodeForKcb;
          v32 = a2 - 1;
          if ( !v32 )
          {
            v37 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 16)) & 0xF0000;
            *(_DWORD *)(KeyNodeForKcb + 52) = v37;
            *(_DWORD *)(v12 + 184) ^= (*(_DWORD *)(v12 + 184) ^ HIWORD(v37)) & 0xF;
            goto LABEL_52;
          }
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( !v34 )
            {
              v35 = *(_WORD *)(KeyNodeForKcb + 2);
              if ( (a3 & 4) != 0 )
              {
                v36 = 128;
                *(_WORD *)(v31 + 2) = v35 | 0x80;
              }
              else
              {
                if ( (a3 & 1) != 0 )
                {
                  *(_WORD *)(KeyNodeForKcb + 2) = v35 | 0x300;
                  *(_WORD *)(v12 + 186) |= 0x300u;
                }
                else
                {
                  *(_WORD *)(KeyNodeForKcb + 2) = v35 & 0xFEFF;
                  *(_WORD *)(v12 + 186) &= ~0x100u;
                }
                if ( (a3 & 2) == 0 )
                  goto LABEL_52;
                v36 = 512;
                *(_WORD *)(v31 + 2) |= 0x200u;
              }
              *(_WORD *)(v12 + 186) |= v36;
              goto LABEL_52;
            }
            if ( v34 == 1 )
            {
              *(_BYTE *)(KeyNodeForKcb + 55) = a3;
              *(_BYTE *)(v12 + 185) = a3;
            }
          }
          else
          {
            *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 20)) & 0xF00000;
            *(_DWORD *)(v12 + 184) ^= (*(_DWORD *)(v12 + 184) ^ *(unsigned __int16 *)(KeyNodeForKcb + 54)) & 0xF0;
            if ( (a3 & 2) != 0 )
            {
              *(_WORD *)(KeyNodeForKcb + 2) &= ~0x80u;
              *(_WORD *)(v12 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
            }
          }
LABEL_52:
          *(_QWORD *)(v31 + 4) = v11;
          v6 = 0;
          ++*(_QWORD *)(v12 + 304);
          *(_QWORD *)(v12 + 168) = v11;
          v38 = *(_QWORD *)(v12 + 32);
          if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v38, &v45);
          else
            HvpReleaseCellPaged(v38, (unsigned int *)&v45);
        }
        v39 = *(_QWORD *)(v12 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v39 + 72));
        KeAbPostRelease(v39 + 72);
        goto LABEL_68;
      }
      CmpUnlockKcbStack((__int64)&v48);
      v6 = CmpPromoteKey(&v48, 0LL, 0LL);
      if ( v6 < 0 )
        goto LABEL_69;
      CmpUnlockRegistry(v25, v24, v26, v27);
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v48 = 0LL;
      WORD1(v48) = -1;
      *(_OWORD *)Privileges = 0LL;
    }
  }
  v6 = -1073741431;
LABEL_71:
  CmpDetachFromRegistryProcess(v50);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket((__int64)&v47);
  return (unsigned int)v6;
}
