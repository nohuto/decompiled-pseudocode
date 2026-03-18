/*
 * XREFs of NtLockVirtualMemory @ 0x1402A3120
 * Callers:
 *     <none>
 * Callees:
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MiLockPageAndSetDirty @ 0x140217514 (MiLockPageAndSetDirty.c)
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     MiLockPageTableInternal @ 0x140237700 (MiLockPageTableInternal.c)
 *     MiLockPageTablePage @ 0x140237B00 (MiLockPageTablePage.c)
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 *     MiSetVaAgeList @ 0x1402709E0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x1402764C0 (MiChargeCommit.c)
 *     MiMakeSystemAddressValid @ 0x140277430 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x140277B70 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x140283C90 (MiLockWorkingSetShared.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E14F0 (MiGetEffectivePagePriorityThread.c)
 *     MiUpdatePfnPriority @ 0x1402E23B0 (MiUpdatePfnPriority.c)
 *     MiUnlockPageTableCharges @ 0x1402E2B40 (MiUnlockPageTableCharges.c)
 *     MiGetNextPageTable @ 0x1402E56B0 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402E69F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6A30 (MiPageTableLockIsContended.c)
 *     MiGetPagingFileOffset @ 0x1402F2864 (MiGetPagingFileOffset.c)
 *     MiUnlockPageTableInternal @ 0x1403195C0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333C70 (KeShouldYieldProcessor.c)
 *     MiUnlockVa @ 0x140350D44 (MiUnlockVa.c)
 *     MiVadPagesTradable @ 0x140351F3C (MiVadPagesTradable.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1407B8280 (MiLockUnlockCommon.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtLockVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r12
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // r11
  __int64 Address; // r12
  _QWORD *v12; // r9
  unsigned __int64 i; // r10
  unsigned __int64 v14; // r14
  char *v15; // r15
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int EffectivePagePriorityThread; // eax
  char v28; // cl
  BOOL v29; // esi
  bool v30; // zf
  __int64 v31; // r10
  _QWORD *v32; // rcx
  _QWORD **v33; // rax
  _QWORD *j; // rcx
  unsigned __int64 v35; // rsi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r12
  int v39; // r13d
  unsigned int v40; // esi
  __int64 v41; // rcx
  _QWORD **v42; // rax
  _QWORD *k; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int8 v46; // [rsp+40h] [rbp-118h]
  BOOL v47; // [rsp+44h] [rbp-114h]
  int v48; // [rsp+44h] [rbp-114h]
  char v49; // [rsp+48h] [rbp-110h]
  unsigned __int64 v50; // [rsp+50h] [rbp-108h]
  unsigned __int64 v51; // [rsp+50h] [rbp-108h]
  unsigned int v52; // [rsp+50h] [rbp-108h]
  unsigned __int64 v53; // [rsp+58h] [rbp-100h]
  PVOID Object; // [rsp+60h] [rbp-F8h] BYREF
  int v55; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v56; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v57; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-D8h]
  ULONG_PTR v59; // [rsp+88h] [rbp-D0h]
  PVOID P; // [rsp+90h] [rbp-C8h]
  int v61; // [rsp+98h] [rbp-C0h] BYREF
  int v62; // [rsp+9Ch] [rbp-BCh] BYREF
  unsigned __int64 v63; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v64; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v66; // [rsp+B8h] [rbp-A0h]
  __int64 v67; // [rsp+C0h] [rbp-98h]
  char *v68; // [rsp+C8h] [rbp-90h]
  __int64 v69; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  _QWORD *v72; // [rsp+E8h] [rbp-70h]
  unsigned __int64 *v73; // [rsp+F0h] [rbp-68h]
  $115DCDF994C6370D29323EAB0E0C9502 v74; // [rsp+F8h] [rbp-60h] BYREF

  v72 = a3;
  v73 = a2;
  memset(&v74, 0, sizeof(v74));
  v65 = 0LL;
  v64 = 0LL;
  Object = 0LL;
  v61 = 0;
  v4 = 0;
  v49 = 0;
  v55 = 0;
  result = MiLockUnlockCommon(BugCheckParameter1, (__int64)&v64, (__int64)&v65, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = v64;
  v7 = (v64 + v65 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v56 = v7;
  v8 = v64 & 0xFFFFFFFFFFFFF000uLL;
  v53 = v64 & 0xFFFFFFFFFFFFF000uLL;
  v57 = 0LL;
  BugCheckParameter2 = 0LL;
  P = (PVOID)MiAllocatePool(
               64LL,
               8
             * (((((v7 - (v64 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
              + ((((unsigned __int8)((v7 - (v64 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
               1802267981LL);
  if ( !P )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return 3221225626LL;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v74);
    v4 = 2;
    v49 = 2;
    v55 = 2;
  }
  v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v59 = v9;
  v63 = v8;
  v67 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MiLockVadRange(Object, v8, v7, 0LL);
  v66 = v10;
  if ( !v10 )
  {
    v40 = -1073741819;
    goto LABEL_84;
  }
  Address = (__int64)MiLocateAddress(v8);
  v12 = (_QWORD *)Address;
  for ( i = 0LL; i < v10; i = v31 + 1 )
  {
    if ( !(unsigned int)MiVadPagesTradable(v12) )
    {
      v40 = -1073741747;
      goto LABEL_84;
    }
    v32 = v12;
    v33 = (_QWORD **)v12[1];
    if ( v33 )
    {
      v12 = (_QWORD *)v12[1];
      for ( j = *v33; j; j = (_QWORD *)*j )
        v12 = j;
    }
    else
    {
      while ( 1 )
      {
        v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v12 || (_QWORD *)*v12 == v32 )
          break;
        v32 = v12;
      }
    }
  }
  v47 = MiVadPureReserve(Address);
  v14 = 0LL;
  v15 = (char *)Object + 1664;
  v68 = (char *)Object + 1664;
  v70 = *((_QWORD *)Object + 210);
LABEL_9:
  LOBYTE(v16) = MiLockWorkingSetShared((__int64)v15);
  v46 = v16;
LABEL_10:
  v17 = v53;
  v18 = v56;
  v19 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v17 > v18 )
    {
      if ( v14 )
      {
        MiUnlockPageTableInternal(v15, v14);
        LOBYTE(v16) = v46;
      }
      MiUnlockWorkingSetShared((__int64)v15, v16);
      MiUnlockVadRange(Object, v63, v66, 0LL);
      if ( (v4 & 2) != 0 )
        KiUnstackDetachProcess(&v74);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v35 = v64 & 0xFFFFFFFFFFFFF000uLL;
      *v72 = v56 - (v64 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      *v73 = v35;
      return (v4 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v17 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v41 = Address;
      v42 = *(_QWORD ***)(Address + 8);
      if ( v42 )
      {
        Address = *(_QWORD *)(Address + 8);
        for ( k = *v42; k; k = (_QWORD *)*k )
          Address = (__int64)k;
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v41 )
            break;
          v41 = Address;
        }
      }
      v47 = MiVadPureReserve(Address);
    }
    v50 = ((v17 >> 18) & 0x3FFFFFF8) + v19;
    if ( v14 != v50 )
    {
      if ( v14 )
      {
        MiUnlockPageTableInternal(v15, v14);
        v14 = 0LL;
        LOBYTE(v16) = v46;
      }
      if ( v47 )
      {
        NextPageTable = MiGetNextPageTable(v9, v67, 0, v16, 0, (__int64)&v61);
        if ( NextPageTable )
          v14 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v9 )
        {
          v48 = -1073741819;
          goto LABEL_60;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v9, 0LL, (*(_DWORD *)(Address + 48) >> 12) & 0x7F, v16, 0);
        v14 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_DWORD *)v9 & 1) == 0 )
    {
      MiUnlockPageTableInternal(v15, v14);
      v14 = 0LL;
      MiUnlockWorkingSetShared((__int64)v15, v46);
      goto LABEL_9;
    }
    v69 = MI_READ_PTE_LOCK_FREE(v9);
    v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v69) >> 12) & 0xFFFFFFFFFFLL)
        - 0x220000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v53) & 0xF) == 8 )
    {
      v4 |= 1u;
      v49 = v4;
      v55 = v4;
      goto LABEL_31;
    }
    if ( *((_QWORD *)v15 + 14) <= (unsigned __int64)(*(_QWORD *)(v70 + 32) + 6LL) )
    {
      v48 = -1073741663;
      goto LABEL_60;
    }
    if ( *(__int64 *)(v20 + 40) < 0 && !(unsigned int)MiLockPageTablePage(v20, 1) )
      goto LABEL_104;
    BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v50) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      break;
    v51 = 0LL;
    if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
    {
      v23 = *(_QWORD *)(v20 + 40);
      if ( v23 < 0 )
      {
        v51 = *(_QWORD *)(qword_140C673C8 + 8 * (((unsigned __int64)v23 >> 43) & 0x3FF));
        if ( !(unsigned int)MiChargeCommit(v51, 1uLL, 0LL) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
          v48 = -1073741523;
          goto LABEL_60;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v51 + 17840), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset(v20 + 16, v21, v22, v16) )
    {
      MiLockPageAndSetDirty(v20, 1);
    }
    LOBYTE(v16) = 8;
    if ( !(unsigned int)MiSetVaAgeList((__int64)v15, v53, 1u, v16) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2);
      v45 = *(_QWORD *)(v20 + 40);
      if ( v45 < 0 )
      {
        MiUnlockPageTableCharges(48 * (v45 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v51, 1LL);
      }
      goto LABEL_104;
    }
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v24, v25, v26);
    v52 = EffectivePagePriorityThread;
    v62 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v62);
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
      EffectivePagePriorityThread = v52;
    }
    MiUpdatePfnPriority(v20, EffectivePagePriorityThread, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _bittestandset64((signed __int64 *)P, v57);
LABEL_31:
    BugCheckParameter2 = ++v57;
    v28 = v59 + 8;
    v59 += 8LL;
    v17 = v53 + 4096;
    v53 = v17;
    v29 = 0;
    v18 = v56;
    if ( v17 <= v56 && (v28 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(v15) || (unsigned int)MiPageTableLockIsContended(v15, v14) )
      {
LABEL_34:
        MiUnlockPageTableInternal(v15, v14);
        MiUnlockWorkingSetShared((__int64)v15, v46);
        v14 = 0LL;
        MiLockWorkingSetShared((__int64)v15);
        v9 = v59;
        LOBYTE(v16) = v46;
        goto LABEL_10;
      }
      v29 = KeShouldYieldProcessor() != 0;
      v18 = v56;
      v17 = v53;
    }
    v30 = !v29;
    v9 = v59;
    LOBYTE(v16) = v46;
    v19 = 0xFFFFF6FB40000000uLL;
    if ( !v30 )
      goto LABEL_34;
  }
  v44 = *(_QWORD *)(v20 + 40);
  if ( v44 < 0 )
    MiUnlockPageTableCharges(48 * (v44 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
LABEL_104:
  v48 = -1073741670;
LABEL_60:
  if ( v14 )
  {
    MiUnlockPageTableInternal(v15, v14);
    v14 = 0LL;
  }
  v37 = v57;
  v38 = v63 + (v57 << 12);
  while ( 2 )
  {
    if ( v37 )
    {
      --v37;
      v38 -= 4096LL;
      if ( _bittest64((const signed __int64 *)P, v37) == 1 )
      {
        if ( v14 != ((v38 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v14 )
            MiUnlockPageTableInternal(v15, v14);
          v14 = ((v38 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockPageTableInternal((__int64)v15, v14, 0, v16);
        }
        MiUnlockVa(v15, v38);
      }
      v39 = 0;
      if ( (v37 & 0xF) != 0 )
        goto LABEL_68;
      if ( !(unsigned int)MiWorkingSetIsContended(v15) && (!v14 || !(unsigned int)MiPageTableLockIsContended(v15, v14)) )
      {
        if ( KeShouldYieldProcessor() )
          v39 = 1;
LABEL_68:
        if ( !v39 )
          continue;
      }
      if ( v14 )
      {
        MiUnlockPageTableInternal(v15, v14);
        v14 = 0LL;
      }
      MiUnlockWorkingSetShared((__int64)v15, v46);
      MiLockWorkingSetShared((__int64)v15);
      continue;
    }
    break;
  }
  LOBYTE(v4) = v49;
  v40 = v48;
  if ( v14 )
    MiUnlockPageTableInternal(v15, v14);
  MiUnlockWorkingSetShared((__int64)v15, v46);
  v10 = v66;
LABEL_84:
  MiUnlockVadRange(Object, v63, v10, 0LL);
  if ( (v4 & 2) != 0 )
    KiUnstackDetachProcess(&v74);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  return v40;
}
