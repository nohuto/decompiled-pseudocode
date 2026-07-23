/*
 * XREFs of NtLockVirtualMemory @ 0x1402A33B0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MiLockPageAndSetDirty @ 0x140217514 (MiLockPageAndSetDirty.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiLockPageTablePage @ 0x140237BD0 (MiLockPageTablePage.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x140277E00 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E1780 (MiGetEffectivePagePriorityThread.c)
 *     MiUpdatePfnPriority @ 0x1402E2640 (MiUpdatePfnPriority.c)
 *     MiUnlockPageTableCharges @ 0x1402E2DD0 (MiUnlockPageTableCharges.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiUnlockVa @ 0x140350EE4 (MiUnlockVa.c)
 *     MiVadPagesTradable @ 0x1403520DC (MiVadPagesTradable.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1406AFF94 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0064 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1407B8560 (MiLockUnlockCommon.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  ULONG_PTR v10; // rsi
  unsigned __int64 v11; // r11
  __int64 Address; // r12
  _QWORD *v13; // r9
  unsigned __int64 i; // r10
  unsigned __int64 v15; // r14
  char *v16; // r15
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int EffectivePagePriorityThread; // eax
  char v29; // cl
  BOOL v30; // esi
  bool v31; // zf
  __int64 v32; // r10
  _QWORD *v33; // rcx
  _QWORD **v34; // rax
  _QWORD *j; // rcx
  unsigned __int64 v36; // rsi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r12
  int v40; // r13d
  NTSTATUS v41; // esi
  __int64 v42; // rcx
  _QWORD **v43; // rax
  _QWORD *k; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // [rsp+40h] [rbp-118h]
  BOOL v48; // [rsp+44h] [rbp-114h]
  int v49; // [rsp+44h] [rbp-114h]
  char v50; // [rsp+48h] [rbp-110h]
  unsigned __int64 v51; // [rsp+50h] [rbp-108h]
  unsigned __int64 v52; // [rsp+50h] [rbp-108h]
  unsigned int v53; // [rsp+50h] [rbp-108h]
  unsigned __int64 v54; // [rsp+58h] [rbp-100h]
  PVOID Object; // [rsp+60h] [rbp-F8h] BYREF
  int v56; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v57; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v58; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-D8h]
  ULONG_PTR v60; // [rsp+88h] [rbp-D0h]
  PVOID P; // [rsp+90h] [rbp-C8h]
  int v62; // [rsp+98h] [rbp-C0h] BYREF
  int v63; // [rsp+9Ch] [rbp-BCh] BYREF
  unsigned __int64 v64; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v67; // [rsp+B8h] [rbp-A0h]
  __int64 v68; // [rsp+C0h] [rbp-98h]
  char *v69; // [rsp+C8h] [rbp-90h]
  __int64 v70; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  PSIZE_T v73; // [rsp+E8h] [rbp-70h]
  PVOID *v74; // [rsp+F0h] [rbp-68h]
  $115DCDF994C6370D29323EAB0E0C9502 v75; // [rsp+F8h] [rbp-60h] BYREF

  v73 = RegionSize;
  v74 = BaseAddress;
  memset(&v75, 0, sizeof(v75));
  v66 = 0LL;
  v65 = 0LL;
  Object = 0LL;
  v62 = 0;
  v5 = 0;
  v50 = 0;
  v56 = 0;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v65, (__int64)&v66, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = v65;
  v8 = (v65 + v66 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v57 = v8;
  v9 = v65 & 0xFFFFFFFFFFFFF000uLL;
  v54 = v65 & 0xFFFFFFFFFFFFF000uLL;
  v58 = 0LL;
  BugCheckParameter2 = 0LL;
  P = (PVOID)MiAllocatePool(
               64LL,
               8
             * (((((v8 - (v65 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
              + ((((unsigned __int8)((v8 - (v65 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
               1802267981LL);
  if ( !P )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v75);
    v5 = 2;
    v50 = 2;
    v56 = 2;
  }
  v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v60 = v10;
  v64 = v9;
  v68 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = MiLockVadRange(Object, v9, v8, 0LL);
  v67 = v11;
  if ( !v11 )
  {
    v41 = -1073741819;
    goto LABEL_84;
  }
  Address = (__int64)MiLocateAddress(v9);
  v13 = (_QWORD *)Address;
  for ( i = 0LL; i < v11; i = v32 + 1 )
  {
    if ( !(unsigned int)MiVadPagesTradable(v13) )
    {
      v41 = -1073741747;
      goto LABEL_84;
    }
    v33 = v13;
    v34 = (_QWORD **)v13[1];
    if ( v34 )
    {
      v13 = (_QWORD *)v13[1];
      for ( j = *v34; j; j = (_QWORD *)*j )
        v13 = j;
    }
    else
    {
      while ( 1 )
      {
        v13 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v13 || (_QWORD *)*v13 == v33 )
          break;
        v33 = v13;
      }
    }
  }
  v48 = MiVadPureReserve(Address);
  v15 = 0LL;
  v16 = (char *)Object + 1664;
  v69 = (char *)Object + 1664;
  v71 = *((_QWORD *)Object + 210);
LABEL_9:
  LOBYTE(v17) = MiLockWorkingSetShared((__int64)v16);
  v47 = v17;
LABEL_10:
  v18 = v54;
  v19 = v57;
  v20 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v18 > v19 )
    {
      if ( v15 )
      {
        MiUnlockPageTableInternal(v16, v15);
        LOBYTE(v17) = v47;
      }
      MiUnlockWorkingSetShared((__int64)v16, v17);
      MiUnlockVadRange(Object, v64, v67, 0LL);
      if ( (v5 & 2) != 0 )
        KiUnstackDetachProcess(&v75);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v36 = v65 & 0xFFFFFFFFFFFFF000uLL;
      *v73 = v57 - (v65 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      *v74 = (PVOID)v36;
      return (v5 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v18 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v42 = Address;
      v43 = *(_QWORD ***)(Address + 8);
      if ( v43 )
      {
        Address = *(_QWORD *)(Address + 8);
        for ( k = *v43; k; k = (_QWORD *)*k )
          Address = (__int64)k;
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v42 )
            break;
          v42 = Address;
        }
      }
      v48 = MiVadPureReserve(Address);
    }
    v51 = ((v18 >> 18) & 0x3FFFFFF8) + v20;
    if ( v15 != v51 )
    {
      if ( v15 )
      {
        MiUnlockPageTableInternal(v16, v15);
        v15 = 0LL;
        LOBYTE(v17) = v47;
      }
      if ( v48 )
      {
        NextPageTable = MiGetNextPageTable(v10, v68, 0, v17, 0, (__int64)&v62);
        if ( NextPageTable )
          v15 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v10 )
        {
          v49 = -1073741819;
          goto LABEL_60;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v10, 0LL, (*(_DWORD *)(Address + 48) >> 12) & 0x7F, v17, 0);
        v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_DWORD *)v10 & 1) == 0 )
    {
      MiUnlockPageTableInternal(v16, v15);
      v15 = 0LL;
      MiUnlockWorkingSetShared((__int64)v16, v47);
      goto LABEL_9;
    }
    v70 = MI_READ_PTE_LOCK_FREE(v10);
    v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v70) >> 12) & 0xFFFFFFFFFFLL)
        - 0x220000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v54) & 0xF) == 8 )
    {
      v5 |= 1u;
      v50 = v5;
      v56 = v5;
      goto LABEL_31;
    }
    if ( *((_QWORD *)v16 + 14) <= (unsigned __int64)(*(_QWORD *)(v71 + 32) + 6LL) )
    {
      v49 = -1073741663;
      goto LABEL_60;
    }
    if ( *(__int64 *)(v21 + 40) < 0 && !(unsigned int)MiLockPageTablePage(v21, 1) )
      goto LABEL_104;
    BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v51) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      break;
    v52 = 0LL;
    if ( (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 )
    {
      v24 = *(_QWORD *)(v21 + 40);
      if ( v24 < 0 )
      {
        v52 = *(_QWORD *)(qword_140C673C8 + 8 * (((unsigned __int64)v24 >> 43) & 0x3FF));
        if ( !(unsigned int)MiChargeCommit(v52, 1uLL, 0LL) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
          v49 = -1073741523;
          goto LABEL_60;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v52 + 17840), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset(v21 + 16, v22, v23, v17) )
    {
      MiLockPageAndSetDirty(v21, 1);
    }
    LOBYTE(v17) = 8;
    if ( !(unsigned int)MiSetVaAgeList((__int64)v16, v54, 1u, v17) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2);
      v46 = *(_QWORD *)(v21 + 40);
      if ( v46 < 0 )
      {
        MiUnlockPageTableCharges(48 * (v46 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        if ( (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v52, 1LL);
      }
      goto LABEL_104;
    }
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v25, v26, v27);
    v53 = EffectivePagePriorityThread;
    v63 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v63);
        while ( *(__int64 *)(v21 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
      EffectivePagePriorityThread = v53;
    }
    MiUpdatePfnPriority(v21, EffectivePagePriorityThread, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _bittestandset64((signed __int64 *)P, v58);
LABEL_31:
    BugCheckParameter2 = ++v58;
    v29 = v60 + 8;
    v60 += 8LL;
    v18 = v54 + 4096;
    v54 = v18;
    v30 = 0;
    v19 = v57;
    if ( v18 <= v57 && (v29 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(v16) || (unsigned int)MiPageTableLockIsContended(v16, v15) )
      {
LABEL_34:
        MiUnlockPageTableInternal(v16, v15);
        MiUnlockWorkingSetShared((__int64)v16, v47);
        v15 = 0LL;
        MiLockWorkingSetShared((__int64)v16);
        v10 = v60;
        LOBYTE(v17) = v47;
        goto LABEL_10;
      }
      v30 = KeShouldYieldProcessor() != 0;
      v19 = v57;
      v18 = v54;
    }
    v31 = !v30;
    v10 = v60;
    LOBYTE(v17) = v47;
    v20 = 0xFFFFF6FB40000000uLL;
    if ( !v31 )
      goto LABEL_34;
  }
  v45 = *(_QWORD *)(v21 + 40);
  if ( v45 < 0 )
    MiUnlockPageTableCharges(48 * (v45 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
LABEL_104:
  v49 = -1073741670;
LABEL_60:
  if ( v15 )
  {
    MiUnlockPageTableInternal(v16, v15);
    v15 = 0LL;
  }
  v38 = v58;
  v39 = v64 + (v58 << 12);
  while ( 2 )
  {
    if ( v38 )
    {
      --v38;
      v39 -= 4096LL;
      if ( _bittest64((const signed __int64 *)P, v38) == 1 )
      {
        if ( v15 != ((v39 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v15 )
            MiUnlockPageTableInternal(v16, v15);
          v15 = ((v39 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockPageTableInternal((__int64)v16, v15, 0, v17);
        }
        MiUnlockVa(v16, v39);
      }
      v40 = 0;
      if ( (v38 & 0xF) != 0 )
        goto LABEL_68;
      if ( !(unsigned int)MiWorkingSetIsContended(v16) && (!v15 || !(unsigned int)MiPageTableLockIsContended(v16, v15)) )
      {
        if ( KeShouldYieldProcessor() )
          v40 = 1;
LABEL_68:
        if ( !v40 )
          continue;
      }
      if ( v15 )
      {
        MiUnlockPageTableInternal(v16, v15);
        v15 = 0LL;
      }
      MiUnlockWorkingSetShared((__int64)v16, v47);
      MiLockWorkingSetShared((__int64)v16);
      continue;
    }
    break;
  }
  LOBYTE(v5) = v50;
  v41 = v49;
  if ( v15 )
    MiUnlockPageTableInternal(v16, v15);
  MiUnlockWorkingSetShared((__int64)v16, v47);
  v11 = v67;
LABEL_84:
  MiUnlockVadRange(Object, v64, v11, 0LL);
  if ( (v5 & 2) != 0 )
    KiUnstackDetachProcess(&v75);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  return v41;
}
