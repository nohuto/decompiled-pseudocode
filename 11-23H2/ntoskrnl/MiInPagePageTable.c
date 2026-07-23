/*
 * XREFs of MiInPagePageTable @ 0x1402E5000
 * Callers:
 *     MiResolvePageTablePage @ 0x1402360F0 (MiResolvePageTablePage.c)
 * Callees:
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiDispatchFault @ 0x140238000 (MiDispatchFault.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiCheckVirtualAddress @ 0x14025AD90 (MiCheckVirtualAddress.c)
 *     MiNodeFromFaultPacket @ 0x1402613F0 (MiNodeFromFaultPacket.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVadPureReserve @ 0x140277E00 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiIsVadLarge @ 0x14028A6C4 (MiIsVadLarge.c)
 *     MiFillPteHierarchy @ 0x14028B180 (MiFillPteHierarchy.c)
 *     MiIssueHardFault @ 0x1402A1340 (MiIssueHardFault.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiGetClosestImplicitNode @ 0x1402E602C (MiGetClosestImplicitNode.c)
 *     MmIsAddressValidEx @ 0x1402E6240 (MmIsAddressValidEx.c)
 *     MiAdvanceFaultList @ 0x1402EEA84 (MiAdvanceFaultList.c)
 *     MiReleaseFaultState @ 0x1402EF530 (MiReleaseFaultState.c)
 *     MiIncreaseUsedPtesCount @ 0x1402F1B64 (MiIncreaseUsedPtesCount.c)
 *     MiCheckFatalAccessViolation @ 0x1403688FC (MiCheckFatalAccessViolation.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiLeapPrefetch @ 0x140631E44 (MiLeapPrefetch.c)
 *     MiGetLargeVadMappingIndex @ 0x1406465E8 (MiGetLargeVadMappingIndex.c)
 *     MiInsertLargeVadMapping @ 0x1406466AC (MiInsertLargeVadMapping.c)
 *     MiLargePageFault @ 0x1406469BC (MiLargePageFault.c)
 */

__int64 __fastcall MiInPagePageTable(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r14
  _KPROCESS *Process; // r13
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  ULONG_PTR v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rsi
  struct _KTHREAD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned int v23; // eax
  int ClosestImplicitNode; // eax
  __int64 result; // rax
  char v26; // cl
  __int64 v27; // rax
  _BYTE *v28; // rdx
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  int LargeVadMappingIndex; // r14d
  ULONG_PTR v35; // rbx
  __int64 v36; // rdx
  _QWORD *v37; // rsi
  _QWORD *v38; // rcx
  __int64 UsedPtesHandle; // rax
  __int64 v40; // rdx
  __int64 v41; // xmm1_8
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+3Ch] [rbp-C4h]
  int v46; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 LeafVa; // [rsp+48h] [rbp-B8h]
  __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  _QWORD *v51; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  _OWORD v53[8]; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v54[9]; // [rsp+100h] [rbp+0h] BYREF

  v2 = a2;
  v45 = a2;
  v43 = 0LL;
  v44 = 0;
  v48 = 0LL;
  memset(v54, 0, 0x88uLL);
  memset((char *)&v53[1] + 8, 0, 0x68uLL);
  v53[0] = 0LL;
  v4 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v4 & 1) == 0 || (v6 = v4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v6 != 1) )
    v6 = 0LL;
  v7 = a1[v2 + 3];
  v51 = a1 + 7;
  v52 = v2;
  v8 = MI_READ_PTE_LOCK_FREE(v7);
  LeafVa = MiGetLeafVa(*a1);
  BugCheckParameter1 = MiCheckVirtualAddress(v9, &v44, &v43);
  if ( v8 )
  {
    v12 = v43;
    if ( v43 )
      MiUnlockVadTree(1, 0x11u);
  }
  else
  {
    v10 = *a1;
    if ( *a1 >= 0xFFFF800000000000uLL )
    {
      if ( v6 )
        return 3221226548LL;
      if ( v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v27 = a1[2];
        if ( v27 )
        {
          v28 = (_BYTE *)(v27 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( (v27 & 1) == 0 || *v28 != 7 && *v28 != 8 )
            KeBugCheckEx(0x50u, *a1, a1[1], v7, 6uLL);
        }
      }
    }
    v11 = v44;
    if ( v44 == 24 )
    {
      v29 = v43;
      MiCheckFatalAccessViolation(v10);
      if ( v29 )
        MiUnlockVadTree(1, 0x11u);
      if ( *a1 <= 0x7FFFFFFEFFFFuLL && v29 && v6 )
      {
        v30 = MiGetLeafVa(v7 + 8);
        if ( v30 >= v31 )
        {
          MiLeapPrefetch(v6, v30);
        }
        else
        {
          ++*(_QWORD *)(v6 + 24);
          *(_QWORD *)(v6 + 32) = 0LL;
        }
        *(_BYTE *)(v6 + 1) = 1;
      }
      return 3221225477LL;
    }
    v12 = v43;
    if ( v43 && (*(_DWORD *)(v43 + 48) & 0x200000) != 0 && v6 )
    {
      if ( ((v32 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL, v49 = v32, v44 >> 3 != 3) || (v44 & 7) == 0) && v44 >> 3 != 1
        || (*(_DWORD *)(v32 + 80) & 0x4000) == 0 )
      {
        MiUnlockVadTree(1, 0x11u);
        MiAdvanceFaultList(v49);
        return 3221226548LL;
      }
    }
    v13 = (struct _KTHREAD *)Process[1].Affinity.StaticBitmap[10];
    if ( v13 )
    {
      if ( v6 && *(_QWORD *)(v6 + 56) != v6 + 56 )
      {
        if ( v43 )
          MiUnlockVadTree(1, 0x11u);
        return 3221226548LL;
      }
      if ( v13 != KeGetCurrentThread() )
      {
        if ( v43 )
          MiUnlockVadTree(1, 0x11u);
        *((_DWORD *)a1 + 20) |= 4u;
        return 3221226548LL;
      }
      v12 = v43;
      v11 = v44;
    }
    if ( v12 )
    {
      if ( v6 && MiIsVadLarge(v12) )
      {
        v33 = ((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF;
        MiUnlockVadTree(1, 0x11u);
        MiLeapPrefetch(v6, v33 + 4096);
        result = 3221226548LL;
        *(_BYTE *)(v6 + 1) = 1;
        return result;
      }
      if ( (*(_BYTE *)(v12 + 48) & 0x70) == 0x50 && !MiVadPureReserve(v12) )
      {
        LargeVadMappingIndex = MiGetLargeVadMappingIndex(v12, *a1);
        if ( v45 == LargeVadMappingIndex )
        {
          *(_QWORD *)v7 = MiSwizzleInvalidPte(128LL);
          MiUnlockVadTree(1, 0x11u);
          BugCheckParameter4 = v11;
          v35 = BugCheckParameter1;
          if ( (unsigned int)MiInsertLargeVadMapping(
                               *a1,
                               BugCheckParameter1,
                               LargeVadMappingIndex,
                               v7,
                               BugCheckParameter4) )
          {
            if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && LeafVa <= 0x7FFFFFFEFFFFLL )
            {
              UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
              MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
            }
            result = MiLargePageFault(a1, v7);
            if ( (int)result >= 0 )
              return 3221226548LL;
          }
          else
          {
            v37 = v51;
            LOBYTE(v36) = 17;
            v38 = v51;
            *(_QWORD *)v7 = ZeroPte;
            MiReleaseFaultState(v38, v36, 0LL);
            MmAccessFault(0LL, v35, 0, 0LL);
            *((_BYTE *)v37 + 13) &= ~1u;
            *((_BYTE *)v37 + 12) = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
            return 3221226548LL;
          }
          return result;
        }
      }
    }
    *(_QWORD *)v7 = MiSwizzleInvalidPte(128LL);
    if ( v12 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                        + 284));
      v12 = v43;
    }
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && LeafVa <= 0x7FFFFFFEFFFFLL )
    {
      v14 = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
      v46 = 0;
      v15 = v14;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v46);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      *(_QWORD *)(v15 + 16) ^= ((unsigned int)*(_QWORD *)(v15 + 16) ^ ((unsigned int)*(_QWORD *)(v15 + 16) + 0x10000)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MmIsAddressValidEx(*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL);
      v12 = v43;
    }
  }
  v16 = *((_OWORD *)a1 + 1);
  v54[0] = *(_OWORD *)a1;
  v17 = *((_OWORD *)a1 + 2);
  v54[1] = v16;
  v18 = *((_OWORD *)a1 + 3);
  v54[2] = v17;
  v19 = *((_OWORD *)a1 + 4);
  v54[3] = v18;
  v20 = *((_OWORD *)a1 + 5);
  v54[4] = v19;
  v21 = *((_OWORD *)a1 + 6);
  v54[5] = v20;
  v22 = *((_OWORD *)a1 + 7);
  LODWORD(v54[5]) = 0;
  v54[6] = v21;
  *(_QWORD *)&v54[8] = a1[16];
  v54[7] = v22;
  v23 = MiNodeFromFaultPacket((__int64)a1);
  ClosestImplicitNode = MiGetClosestImplicitNode(v23);
  if ( (a1[2] & 1) != 0 )
  {
    v26 = *(_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v26 == 2 )
    {
      LODWORD(v53[4]) = ClosestImplicitNode;
      *(_QWORD *)&v53[0] = (__int64)(v7 << 25) >> 16;
      *((_QWORD *)&v53[0] + 1) = 4096LL;
      *(_QWORD *)&v54[1] = (char *)&v53[1] + 9;
      BYTE8(v53[1]) = 2;
      *(_QWORD *)&v53[2] = v53;
      *((_QWORD *)&v53[2] + 1) = 1LL;
    }
    else if ( v26 == 1 || v26 == 3 || v26 == 5 )
    {
      *(_QWORD *)&v54[1] = 0LL;
    }
  }
  *((_QWORD *)&v54[0] + 1) = 2LL;
  *(_QWORD *)&v54[0] = (__int64)(v7 << 25) >> 16;
  *((_QWORD *)&v54[5] + 1) = v12;
  MiFillPteHierarchy(*(unsigned __int64 *)&v54[0], (unsigned __int64 *)&v54[1] + 1);
  result = MiDispatchFault((__int64)v54, &v48);
  if ( (_DWORD)result == -1073532109 )
  {
    v40 = v48;
    if ( (v54[5] & 0x20) != 0 )
      *(_DWORD *)(v48 + 192) |= 0x40000u;
    result = MiIssueHardFault((ULONG_PTR *)v54, v40);
  }
  if ( (BYTE5(v54[4]) & 1) != 0 )
  {
    v41 = *((_QWORD *)&v54[4] + 1);
    *(_OWORD *)(a1 + 7) = *(_OWORD *)((char *)&v54[3] + 8);
    a1[9] = v41;
  }
  if ( (int)result >= 0 )
  {
    if ( (*((_BYTE *)a1 + 69) & 1) != 0 && (*(_BYTE *)a1[v52 + 3] & 1) == 0 )
      return 3221226548LL;
    return 0LL;
  }
  return result;
}
