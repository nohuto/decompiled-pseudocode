/*
 * XREFs of MiDeleteEmptyPageTables @ 0x14029F6FC
 * Callers:
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     MiVadPureReserve @ 0x140319990 (MiVadPureReserve.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiDeleteEmptyPageTables(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r13
  __int64 Address; // rax
  __int64 v9; // r15
  int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  ULONG_PTR v13; // r12
  int v14; // eax
  unsigned __int8 v15; // dl
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  __int64 result; // rax
  struct _KTHREAD *v20; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  _OWORD v29[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h]
  _QWORD v31[22]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v32[20]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v33[24]; // [rsp+1D0h] [rbp+D0h] BYREF

  memset(v33, 0, 0xB8uLL);
  v30 = 0LL;
  memset(v29, 0, sizeof(v29));
  memset(v32, 0, 0x98uLL);
  memset(v31, 0, sizeof(v31));
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (a3 & 1) != 0 )
  {
    v13 = Process + 1232;
    v9 = 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(Process + 1224, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
      return UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    Address = MiLocateAddress(a1);
    v9 = Address;
    if ( !Address
      || a2 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      return UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    }
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(Address + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    if ( (*(_DWORD *)(v9 + 48) & 0x200000) == 0
      || !(unsigned int)MiVadPureReserve(v9)
      || (v10 & 0x6200000) == 0x4200000
      || (v11 = *(unsigned int *)(v9 + 52),
          LODWORD(v11) = v11 & 0x7FFFFFFF,
          v12 = v11 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31),
          v12 == 0x7FFFFFFFDLL)
      || (v10 & 4) != 0
      || v12 >= 0x7FFFFFFFDLL && v12 != 0x7FFFFFFFELL )
    {
LABEL_32:
      MiUnlockVad((__int64)CurrentThread, v9);
      return UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    }
    --CurrentThread->SpecialApcDisable;
    v13 = Process + 1232;
    ExAcquirePushLockExclusiveEx(Process + 1232, 0LL);
  }
  v32[12] = v9;
  v32[2] = v29;
  LODWORD(v32[13]) = 128;
  v14 = MiTbFlushType(Process + 1664);
  WORD2(v33[0]) = 0;
  LODWORD(v33[0]) = v14;
  v31[2] = v33;
  v17 = BYTE4(v32[13]);
  if ( (v15 & BYTE4(PerfGlobalGroupMask)) != 0 )
    v17 = v15;
  v33[2] = 0LL;
  BYTE4(v32[13]) = v17;
  LODWORD(v33[1]) = 20;
  v33[3] = 0LL;
  BYTE4(v31[0]) = BYTE4(v31[0]) & 0xE3 | 4;
  v31[21] = v32;
  v31[19] = MiDeleteEmptyPageTable;
  v31[20] = MiDeleteEmptyPageTableTail;
  v31[4] = a1;
  v31[5] = a2;
  LODWORD(v31[0]) = 7;
  HIDWORD(v31[1]) = 0;
  v31[3] = Process + 1664;
  HIBYTE(v31[0]) = MiLockWorkingSetShared(v16);
  MiWalkPageTables(v31);
  LOBYTE(v18) = HIBYTE(v31[0]);
  result = MiUnlockWorkingSetShared(Process + 1664, v18);
  if ( v9 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    v20 = KeGetCurrentThread();
    if ( v13 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v20->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (char *)&v20[1].Process;
    v23 = 0LL;
    v24 = v13 & 0x7FFFFFFFFFFFFFFCLL;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v24
         || !p_Process[18]
         || (*(_DWORD *)p_Process & 1) != 0
         || *((_DWORD *)p_Process + 2) != SessionId )
    {
      v23 = (unsigned int)(v23 + 1);
      p_Process += 96;
      if ( (unsigned int)v23 >= 6 )
        goto LABEL_36;
    }
    p_Process[18] = 0;
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, v23, v24);
        _disable();
      }
      v25 = *((_DWORD *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      v20->AbEntrySummary |= 1 << p_Process[16];
      _enable();
      if ( v25 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v20, v13, v25);
      goto LABEL_29;
    }
LABEL_36:
    if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, v13, SessionId, 0LL);
    _enable();
LABEL_29:
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_32;
  }
  return result;
}
