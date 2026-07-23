/*
 * XREFs of MiAddWorkingSetEntries @ 0x14026BC00
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140267740 (MiMakeSystemCacheRangeValid.c)
 *     MiAllocateWsle @ 0x14026B6B0 (MiAllocateWsle.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140339B30 (MiEmptyDeferredWorkingSetEntries.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x14022051C (MiGetStandbyRepurposed.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402A7C6C (MmUnlockLoadedModuleListShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316B90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiCountWslesInPageTable @ 0x140317B20 (MiCountWslesInPageTable.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     MmLockLoadedModuleListShared @ 0x140339800 (MmLockLoadedModuleListShared.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046AE92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B15C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  char v4; // r13
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // rdx
  int v9; // r15d
  unsigned __int64 v10; // r14
  volatile signed __int32 *v11; // r12
  LONG *v12; // r8
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  char v16; // r8
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  _QWORD *v20; // r11
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r14
  int v23; // r13d
  unsigned __int8 v24; // r14
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int64 *v27; // r8
  unsigned __int8 v28; // al
  unsigned __int64 v29; // rdx
  unsigned __int8 v30; // cl
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r13
  __int64 *v35; // r14
  __int64 *v36; // r15
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 *v42; // rbx
  unsigned __int64 v43; // rtt
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r14
  _QWORD *v50; // rdx
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rtt
  signed __int64 *v55; // rdx
  __int64 v56; // rax
  unsigned __int8 v57; // cl
  unsigned __int64 v58; // rtt
  char v59; // dl
  int v60; // ecx
  __int64 v61; // r15
  __int64 v62; // rax
  __int64 **v63; // rcx
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // r13
  __int64 v67; // r11
  __int64 v68; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v70; // rcx
  struct _LIST_ENTRY *v71; // rcx
  __int64 v72; // rcx
  signed __int32 v74[8]; // [rsp+0h] [rbp-69h] BYREF
  char v75[4]; // [rsp+20h] [rbp-49h] BYREF
  signed __int32 v76; // [rsp+24h] [rbp-45h]
  signed __int32 v77; // [rsp+28h] [rbp-41h]
  int v78; // [rsp+2Ch] [rbp-3Dh]
  __int128 v79; // [rsp+30h] [rbp-39h] BYREF
  __int64 v80; // [rsp+40h] [rbp-29h]
  __int64 v81; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v82; // [rsp+50h] [rbp-19h]
  __int64 v83; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v84[8]; // [rsp+60h] [rbp-9h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a4;
  v78 = a4;
  v5 = a3;
  v82 = a2;
  v6 = a2;
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), a3);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    _InterlockedExchangeAdd(&dword_140C6A300, a3);
  __addgsdword(0x2E90u, a3);
  v8 = 0xFFFFF68000000000uLL;
  v9 = 0;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    v10 = a3;
  else
    v10 = 0LL;
  v11 = &dword_140C6A2C0;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v12 = &dword_140C6A2C0;
  else
    v12 = (LONG *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v8) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12, v8);
  }
  else
  {
    _m_prefetchw(v12);
    v77 = *v12 & 0x7FFFFFFF;
    v76 = _InterlockedCompareExchange(v12, v77 + 1, v77);
    if ( v76 != v77 )
    {
      while ( v76 >= 0 )
      {
        v77 = v76;
        v76 = _InterlockedCompareExchange(v12, v76 + 1, v76);
        if ( v76 == v77 )
          goto LABEL_9;
      }
      LOBYTE(v8) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v12, v8);
    }
  }
LABEL_9:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), v5);
  if ( v10 )
  {
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 128), v10);
    v14 = *(_QWORD *)(a1 + 160);
    v15 = v10 + v13;
    if ( v15 > v14 )
    {
      do
      {
        v43 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 160), v15, v14);
      }
      while ( v43 != v14 && v15 > v14 );
    }
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    _InterlockedExchangeAdd64(&qword_140C6A308, v5);
    if ( v10 )
    {
      v52 = qword_140C6A318;
      v53 = v10 + _InterlockedExchangeAdd64(&qword_140C6A310, v10);
      if ( v53 > qword_140C6A318 )
      {
        do
        {
          v54 = v52;
          v52 = _InterlockedCompareExchange64(&qword_140C6A318, v53, v52);
        }
        while ( v54 != v52 && v53 > v52 );
      }
    }
  }
  if ( (v4 & 2) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), v5);
    if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), v5);
  }
  v16 = *(_BYTE *)(a1 + 184);
  if ( (v16 & 7u) >= 2 )
  {
    v44 = *(_QWORD *)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(a1 + 174));
    v45 = (v16 & 7u) - 2;
    v46 = *(_QWORD *)(v44 + 6976) + *(_QWORD *)(a1 + 144);
    v47 = v44 + 8 * v45;
    v48 = *(_QWORD *)(v47 + 6984);
    if ( v46 > v48 )
    {
      do
      {
        *(_QWORD *)(v47 + 6984) = v46;
        v58 = v48;
        v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 6984), v46, v48);
      }
      while ( v58 != v48 && v46 > v48 );
    }
    if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
    {
      if ( PsNtosImageBase
        && (v6 < PsNtosImageEnd && v6 >= (unsigned __int64)PsNtosImageBase
         || v6 < PsHalImageEnd && v6 >= (unsigned __int64)PsHalImageBase) )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C65A50, v5);
      }
      else if ( (unsigned int)MiGetSystemRegionType(v6) == 12 )
      {
        v75[0] = 0;
        v49 = (__int64)((v6 & 0xFFFFFFFFFFFFF000uLL) << 16) >> 16;
        MmLockLoadedModuleListShared(v75);
        v50 = (_QWORD *)BugCheckParameter3;
        if ( BugCheckParameter3 )
        {
          do
          {
            v51 = *(v50 - 23);
            if ( v49 > v51 + (unsigned int)(*((_DWORD *)v50 - 42) - 1) )
            {
              v50 = (_QWORD *)v50[1];
            }
            else
            {
              if ( v49 >= v51 )
                break;
              v50 = (_QWORD *)*v50;
            }
          }
          while ( v50 );
        }
        v61 = (__int64)(v50 - 29);
        if ( !v50 )
          v61 = 0LL;
        if ( v61
          || (v61 = qword_140C65A70) == 0
          || (v65 = *(_QWORD *)(qword_140C65A70 + 48), v49 >= v65)
          && v49 <= v65 + (unsigned int)(*(_DWORD *)(qword_140C65A70 + 64) - 1) )
        {
          MmUnlockLoadedModuleListShared((unsigned __int8)v75[0]);
          if ( v61 )
            _InterlockedExchangeAdd((_DWORD *)&xmmword_140C65A50 + 1, v5);
          v9 = 0;
        }
        else
        {
          MmUnlockLoadedModuleListShared((unsigned __int8)v75[0]);
          v9 = 0;
        }
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 128);
    if ( v17 > *(_QWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 188) & 2) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 144);
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v18 > v19 )
      {
        v20 = *(_QWORD **)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(a1 + 174));
        v21 = v20[2130];
        if ( !v5 || ((v18 ^ (v5 + v18)) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        {
          v22 = v20[2152];
          v9 = 1;
          if ( v22 < v21 >> 4 && v18 >= v21 >> 4 )
            goto LABEL_130;
        }
        else
        {
          v22 = -1LL;
        }
        if ( v18 - v19 >= 3 * (v21 >> 2) )
        {
          v66 = v20[2115];
          if ( (unsigned int)MiGetStandbyRepurposed(
                               *(_QWORD *)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(a1 + 174)),
                               1u) == *(_DWORD *)(v66 + 44) )
          {
            v4 = v78;
          }
          else
          {
            if ( !v9 )
              v22 = *(_QWORD *)(v67 + 17216);
            v68 = *(_QWORD *)(v66 + 2384);
            v4 = v78;
            if ( v22 < 8 * v68 )
              goto LABEL_130;
          }
        }
      }
      if ( (*(_BYTE *)(a1 + 184) & 0x40) != 0 && v17 > *(_QWORD *)(a1 + 120) )
LABEL_130:
        _InterlockedOr((volatile signed __int32 *)(a1 + 188), 2u);
    }
  }
  v23 = v4 & 4;
  v78 = v23;
  if ( v23 && v5 )
  {
    while ( 1 )
    {
      if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v24 = HIBYTE(*(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF;
        v25 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v26 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL
          && v25 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v70 = *((_QWORD *)&Flink->Flink + ((v25 >> 3) & 0x1FF));
            if ( (v70 & 0x20) != 0 )
              v26 |= 0x20uLL;
            if ( (v70 & 0x42) != 0 )
              v26 |= 0x42uLL;
          }
        }
        v81 = v26;
        v27 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v81) >> 12) & 0xFFFFFFFFFFLL)
                                 - 0x220000000000LL);
        v28 = v24;
        v29 = *v27;
        v30 = (*v27 >> 14) & 7;
        if ( ((*v27 >> 4) & 0x3FF) != 0 )
        {
          if ( v24 == v30 )
          {
            *v27 = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)(16 * (((*v27 >> 4) & 0x3FF) + 1))) & 0x3FF0;
          }
          else if ( v24 > v30 )
          {
            *v27 = v29 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v24 & 7) << 14) | 0x10;
            v28 = v24;
          }
        }
      }
      else
      {
        v28 = (*(_BYTE *)(48
                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL) >> 1) & 7;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8LL * v28 + 40), 1uLL);
      if ( v28 != 7 )
        goto LABEL_36;
      v31 = *(_QWORD *)(a1 + 96);
      v32 = *(unsigned __int16 *)(a1 + 174);
      v80 = 0LL;
      v79 = 0LL;
      v33 = *(_QWORD *)(qword_140C674C8 + 8 * v32);
      v34 = *(_QWORD *)(v33 + 16920);
      if ( v31 < *(_QWORD *)(v34 + 56) )
        goto LABEL_36;
      v35 = (__int64 *)(a1 + 24);
      if ( !*(_QWORD *)(a1 + 24) )
        goto LABEL_36;
      v36 = (__int64 *)(v33 + 16928);
      if ( *(__int64 **)(v33 + 16928) == v35 )
        goto LABEL_36;
      *((_QWORD *)&v79 + 1) = &qword_140C698C0;
      *(_QWORD *)&v79 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v79, &qword_140C698C0);
      }
      else
      {
        v55 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)&qword_140C698C0, (__int64)&v79);
        if ( v55 )
          KxWaitForLockOwnerShip((signed __int64)&v79, v55);
      }
      if ( *(_BYTE *)(v34 + 53) || (v62 = *v35) == 0 )
      {
        *(_BYTE *)(v34 + 54) = 1;
      }
      else
      {
        v63 = *(__int64 ***)(a1 + 32);
        if ( *(__int64 **)(v62 + 8) != v35
          || *v63 != v35
          || (*v63 = (__int64 *)v62, *(_QWORD *)(v62 + 8) = v63, v64 = *v36, *(__int64 **)(*v36 + 8) != v36) )
        {
          __fastfail(3u);
        }
        *v35 = v64;
        *(_QWORD *)(a1 + 32) = v36;
        *(_QWORD *)(v64 + 8) = v35;
        *v36 = (__int64)v35;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v79, retaddr);
      }
      else
      {
        _m_prefetchw(&v79);
        v56 = v79;
        if ( (_QWORD)v79 )
          goto LABEL_79;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v79 + 1),
                           0LL,
                           (signed __int64)&v79) != &v79 )
        {
          v56 = KxWaitForLockChainValid(&v79);
LABEL_79:
          *(_QWORD *)&v79 = 0LL;
          v57 = BYTE8(v79);
          if ( ((v57 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v56 + 8), *((__int64 *)&v79 + 1))) & 4) != 0 )
          {
            _InterlockedOr(v74, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v56 + 8) >> 5) & 0x7F], 0LL));
          }
        }
      }
LABEL_36:
      v6 += 4096LL;
      if ( !--v5 )
      {
        v23 = v78;
        break;
      }
    }
  }
  LOBYTE(v37) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)v37 != 2 )
    v11 = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    LOBYTE(v37) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
  }
  else
  {
    _InterlockedAnd(v11, 0xBFFFFFFF);
    _InterlockedDecrement(v11);
  }
  if ( v23 )
  {
    v38 = v82;
    if ( v82 < 0xFFFFF68000000000uLL || (LOBYTE(v37) = -1, v82 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v39 = ((v82 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v40 = *(_QWORD *)v39;
      if ( v39 >= 0xFFFFF6FB7DBED000uLL
        && v39 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v40 & 1) != 0
        && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        v71 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v71 )
        {
          v72 = *((_QWORD *)&v71->Flink + ((v39 >> 3) & 0x1FF));
          if ( (v72 & 0x20) != 0 )
            v40 |= 0x20uLL;
          if ( (v72 & 0x42) != 0 )
            v40 |= 0x42uLL;
        }
      }
      v83 = v40;
      v42 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v83) >> 12) & 0xFFFFFFFFFFLL)
                               - 0x220000000000LL);
      v37 = (unsigned __int64)*(unsigned int *)v42 >> 4;
      if ( (v37 & 0x3FF) == 0 )
      {
        MiCountWslesInPageTable(v41, v38, v84);
        LOBYTE(v37) = 8;
        while ( 1 )
        {
          LOBYTE(v37) = v37 - 1;
          v59 = v37;
          v60 = v84[(unsigned __int8)v37];
          if ( v60 )
            break;
          if ( !(_BYTE)v37 )
            return v37;
        }
        v37 = *v42 & 0xFFFFFFFFFFFE000FuLL;
        *v42 = v37 | (16 * (((unsigned __int64)(v59 & 7) << 10) | v60 & 0x3FF));
      }
    }
  }
  return v37;
}
