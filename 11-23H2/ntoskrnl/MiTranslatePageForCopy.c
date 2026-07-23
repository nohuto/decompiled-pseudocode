/*
 * XREFs of MiTranslatePageForCopy @ 0x1402EE0D4
 * Callers:
 *     MmCopyMemory @ 0x1402EDDE0 (MmCopyMemory.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiStandbyPageContentsIntact @ 0x1402186F0 (MiStandbyPageContentsIntact.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiCheckVirtualAddress @ 0x14025AD90 (MiCheckVirtualAddress.c)
 *     MiSynchronizeSystemVa @ 0x140261C40 (MiSynchronizeSystemVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiVaIsUltra @ 0x1402EEB1C (MiVaIsUltra.c)
 *     MiUnlockSystemVa @ 0x1402EEFF0 (MiUnlockSystemVa.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x1402EF5A8 (MiObtainProtoReference.c)
 *     MiInitializePageFaultPacket @ 0x1402EF9CC (MiInitializePageFaultPacket.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r15
  _KPROCESS *Process; // rbx
  int SystemRegionType; // eax
  int v13; // ecx
  __int64 SessionVm; // rax
  __int64 v15; // r8
  __int128 v16; // xmm0
  __int64 v17; // rbx
  int v18; // ebx
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // xmm1_8
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // r9
  unsigned __int64 valid; // rax
  __int16 v31; // r10
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // r14
  char v40; // al
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v42; // bl
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rax
  unsigned __int64 v46; // r14
  __int64 v47; // rsi
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdi
  unsigned __int8 v54; // dl
  __int64 v55; // rcx
  int PagingFileOffset; // eax
  unsigned __int8 v57[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v58; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v59; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v60; // [rsp+40h] [rbp-C0h] BYREF
  int v61; // [rsp+48h] [rbp-B8h] BYREF
  int v62; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 *v65; // [rsp+60h] [rbp-A0h]
  _QWORD v66[18]; // [rsp+70h] [rbp-90h] BYREF

  v58 = 0;
  v63 = 0LL;
  v65 = a3;
  v60 = a4;
  memset(v66, 0, 0x88uLL);
  memset((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *a3 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0, a1, 0, 0, (__int64)v66);
  if ( (__int64)a1 >> 47 != -1 && (__int64)a1 >> 47 != 0
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFDE0000000000uLL && a1 < 48 * qword_140C65BA0 - 0x21FFFFFFFFD0LL
    || a1 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  v10 = v66[3];
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a1 < qword_140C6A558 || a1 > qword_140C67070 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    switch ( SystemRegionType )
    {
      case 8:
        v13 = 0;
        break;
      case 1:
        if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
          return 3221225477LL;
        SessionVm = MiGetSessionVm();
LABEL_13:
        *(_DWORD *)(a2 + 4) |= 4u;
        if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, a1, v15, 0LL, a2) )
          return 3221225632LL;
        v16 = *(_OWORD *)(a2 + 24);
        v17 = *(int *)(a2 + 16);
        v66[9] = *(_QWORD *)(a2 + 40);
        *(_OWORD *)&v66[7] = v16;
        if ( (_DWORD)v17 )
        {
          v59 = MI_READ_PTE_LOCK_FREE(v66[v17 + 3]);
          v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v59) >> 12) & 0xFFFFFFFFFFLL;
          v23 = 1LL;
          v24 = v66[0] >> 12;
          do
          {
            v25 = v24;
            v24 >>= 9;
            v26 = v23 * (v25 & 0x1FF);
            v23 <<= 9;
            v9 += v26;
            LODWORD(v17) = v17 - 1;
          }
          while ( (_DWORD)v17 );
          if ( v9 <= qword_140C65BA0 )
          {
            v27 = 48 * v9;
            if ( _bittest64((const signed __int64 *)(48 * v9 - 0x21FFFFFFFFD8LL), 0x36u) )
            {
              v18 = 0;
              v61 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v61);
                while ( *(__int64 *)(v27 - 0x21FFFFFFFFE8LL) < 0 );
              }
              goto LABEL_20;
            }
          }
LABEL_38:
          v18 = -1073741503;
          goto LABEL_20;
        }
        goto LABEL_15;
      case 6:
        v13 = 2;
        break;
      case 9:
        v13 = 3;
        break;
      default:
        v13 = 1;
        if ( SystemRegionType != 3 && SystemRegionType != 12 )
          v13 = 5;
        break;
    }
    SessionVm = (__int64)MiGetAnyMultiplexedVm(v13);
    goto LABEL_13;
  }
  v28 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v66[7] = v28;
  BYTE4(v66[8]) = MiLockWorkingSetShared(v28);
  valid = MiLockLowestValidPageTable(v28, v10, &v63, v29);
  v66[9] = valid;
  if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    v18 = MI_READ_PTE_LOCK_FREE(v63) != 0 ? -1073741608 : -1073741819;
    goto LABEL_20;
  }
LABEL_15:
  v57[0] = 17;
  v18 = 0;
  v19 = MI_READ_PTE_LOCK_FREE(v10);
  v59 = v19;
  if ( (v19 & 1) != 0 )
  {
LABEL_16:
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v59) >> 12) & 0xFFFFFFFFFFLL;
    if ( v9 <= qword_140C65BA0 )
    {
      v20 = 48 * v9;
      if ( _bittest64((const signed __int64 *)(48 * v9 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        LODWORD(v60) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v60);
          while ( *(__int64 *)(v20 - 0x21FFFFFFFFE8LL) < 0 );
        }
        goto LABEL_20;
      }
    }
    goto LABEL_38;
  }
  v31 = v19;
  v32 = v19;
  v33 = v19;
  v34 = v19;
  v35 = v19;
  v36 = v19;
  while ( 1 )
  {
    if ( (v31 & 0x400) != 0 )
    {
      if ( (v34 & 2) != 0 )
      {
        v45 = v35;
        if ( qword_140C65B40 && (v35 & 0x10) == 0 )
          v45 = v35 & ~qword_140C65B40;
        if ( (v45 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          v35 &= ~0x400uLL;
        *a5 = v35 & 0xFFFFFFFFFFFFFFFDuLL;
        goto LABEL_77;
      }
      if ( qword_140C65B40 && (v36 & 0x10) == 0 )
        v36 &= ~qword_140C65B40;
      v46 = v36 >> 16;
      if ( !MiIsPrototypePteVadLookup(v19) )
        goto LABEL_85;
      v64 = 0LL;
      v62 = 0;
      v46 = MiCheckVirtualAddress(a1, &v62, &v64);
      if ( v64 )
        MiUnlockVadTree(1, 0x11u);
      if ( v46 )
      {
LABEL_85:
        v47 = MiLockProtoPoolPage(v46, v57);
        if ( !v47 )
          goto LABEL_92;
        v48 = MiLockLeafPage((unsigned __int64 *)v46, 0LL);
        v49 = MI_READ_PTE_LOCK_FREE(v46);
        v59 = v49;
        if ( (v49 & 1) != 0 )
        {
          v53 = v48 + 0x220000000000LL;
LABEL_94:
          v9 = 0xAAAAAAAAAAAAAAABuLL * (v53 >> 4);
          *v60 = v47;
          goto LABEL_20;
        }
        if ( v49 )
        {
          if ( (v49 & 0x400) == 0 )
          {
            if ( (v49 & 0x800) == 0 )
            {
              PagingFileOffset = MiGetPagingFileOffset(&v59, v50, v51, v52);
              v54 = v57[0];
              v55 = v47;
              if ( !PagingFileOffset )
              {
                MiUnlockProtoPoolPage(v47, v57[0]);
                goto LABEL_77;
              }
LABEL_102:
              MiUnlockProtoPoolPage(v55, v54);
              goto LABEL_92;
            }
            if ( (*(_BYTE *)(v48 + 34) & 0x20) != 0 )
            {
              MiObtainProtoReference(v47, 1LL);
              v43 = v47;
              v44 = v48;
LABEL_91:
              LOBYTE(v38) = v57[0];
              v58 = 1;
              MiWaitForCollidedFaultComplete((unsigned int)v66, v44, v43, v38, (__int64)&v58);
              goto LABEL_92;
            }
            if ( (unsigned int)MiStandbyPageContentsIntact(v48) )
            {
              v53 = v48 + 0x220000000000LL;
              goto LABEL_94;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v54 = v57[0];
          v55 = v47;
          goto LABEL_102;
        }
        MiUnlockProtoPoolPage(v47, v57[0]);
      }
LABEL_89:
      v18 = -1073741819;
      goto LABEL_20;
    }
    if ( (v32 & 0x3E0) == 0x300 || (v32 & 0x3E0) == 0 )
      goto LABEL_89;
    if ( (v33 & 0x800) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(&v59, v32, v34, v33) )
        goto LABEL_92;
LABEL_77:
      v18 = 273;
      goto LABEL_20;
    }
    v37 = MiLockTransitionLeafPageEx(v10);
    v39 = v37;
    if ( v37 )
      break;
    v19 = MI_READ_PTE_LOCK_FREE(v10);
    v59 = v19;
    v31 = v19;
    v32 = v19;
    v33 = v19;
    v34 = v19;
    v35 = v19;
    v36 = v19;
    if ( (v19 & 1) != 0 )
      goto LABEL_16;
  }
  v40 = *(_BYTE *)(v37 + 34);
  if ( (v40 & 0x20) != 0 )
  {
    if ( (v40 & 8) != 0 )
      goto LABEL_92;
    v43 = 0;
    v44 = v39;
    goto LABEL_91;
  }
  if ( (unsigned int)MiStandbyPageContentsIntact(v39) )
  {
    v9 = 0xAAAAAAAAAAAAAAABuLL * ((v39 + 0x220000000000LL) >> 4);
    goto LABEL_20;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags
    && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
    && CurrentIrql <= 0xFu )
  {
    v42 = v57[0];
  }
  else
  {
    v42 = v57[0];
  }
  __writecr8(v42);
LABEL_92:
  v18 = -1073741608;
LABEL_20:
  v21 = v66[9];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v66[7];
  *(_QWORD *)(a2 + 40) = v21;
  if ( v18 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v65 = v9;
  return (unsigned int)v18;
}
