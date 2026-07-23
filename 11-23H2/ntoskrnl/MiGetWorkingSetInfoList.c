/*
 * XREFs of MiGetWorkingSetInfoList @ 0x1402F1BE4
 * Callers:
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiGetPfnProtection @ 0x1402160B4 (MiGetPfnProtection.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiIsPageOnBadList @ 0x1402186C0 (MiIsPageOnBadList.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140275700 (MiUnlockAndDereferenceVadShared.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiInvalidPteConforms @ 0x1402DC6D0 (MiInvalidPteConforms.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiIsPfnEnclave @ 0x1402EC220 (MiIsPfnEnclave.c)
 *     MiLockProtoPage @ 0x1402F254C (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x1402F2654 (MiQueryPfn.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     MiRotatedToFrameBuffer @ 0x1406333A4 (MiRotatedToFrameBuffer.c)
 *     MiGetProtectionFromPte @ 0x14064940C (MiGetProtectionFromPte.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140649880 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetValidAweProtection @ 0x14064AFD4 (MiGetValidAweProtection.c)
 *     MiGetAweVadPageSize @ 0x140A4200C (MiGetAweVadPageSize.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(
        _KPROCESS *BugCheckParameter1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _KPROCESS *v6; // r13
  unsigned int v7; // edi
  unsigned __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *MappedSystemVa; // r12
  __int64 v11; // r9
  __int64 *v12; // rbx
  __int64 v13; // r8
  unsigned __int8 v14; // r13
  unsigned __int64 v15; // r15
  __int64 v16; // r10
  int v17; // ecx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r10
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned __int64 v25; // r13
  char v26; // dl
  __int64 v27; // rbx
  ULONG_PTR v28; // r12
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  ULONG_PTR v31; // r15
  int v32; // eax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // r12
  __int64 v38; // r9
  unsigned int v39; // ebx
  unsigned int v40; // eax
  __int64 v41; // r13
  __int64 v42; // rcx
  unsigned __int64 v43; // rbx
  char v44; // r12
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  unsigned __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r10
  int PfnProtection; // eax
  char v53; // r11
  __int64 ProtoPteAddress; // rax
  bool v55; // zf
  unsigned __int64 v56; // rax
  unsigned int v57; // ebx
  PVOID v58; // r15
  __int64 v60; // r8
  __int64 v61; // r15
  __int64 v62; // r10
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // r10
  struct _MDL *Pool; // rax
  struct _MDL *v67; // r15
  __int64 PreviousMode; // rdx
  unsigned int v69; // eax
  __int64 v70; // rcx
  unsigned __int64 v71; // rdx
  __int64 v72; // r10
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r13
  __int64 v77; // rcx
  int v78; // ebx
  unsigned __int64 v79; // rsi
  int v80; // r8d
  bool v81; // cl
  unsigned __int64 v82; // r15
  char PfnPriority; // bl
  __int64 v84; // rsi
  __int64 v85; // rax
  unsigned __int64 v86; // r12
  int ValidAweProtection; // eax
  unsigned __int64 v88; // rsi
  unsigned __int64 v89; // rsi
  __int64 v90; // rcx
  char v91; // si
  char v92; // [rsp+30h] [rbp-1C8h]
  __int64 v93; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 valid; // [rsp+40h] [rbp-1B8h]
  __int64 v95; // [rsp+48h] [rbp-1B0h]
  unsigned __int64 v96; // [rsp+50h] [rbp-1A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 *v98; // [rsp+60h] [rbp-198h]
  __int64 v99; // [rsp+70h] [rbp-188h]
  unsigned int v100; // [rsp+78h] [rbp-180h] BYREF
  unsigned __int64 v101; // [rsp+80h] [rbp-178h]
  __int64 v102; // [rsp+88h] [rbp-170h]
  __int64 v103; // [rsp+90h] [rbp-168h] BYREF
  __int64 v104; // [rsp+98h] [rbp-160h]
  unsigned __int64 *v105; // [rsp+A0h] [rbp-158h]
  ULONG_PTR v106; // [rsp+A8h] [rbp-150h]
  unsigned __int64 v107; // [rsp+B0h] [rbp-148h] BYREF
  unsigned __int64 v108; // [rsp+B8h] [rbp-140h] BYREF
  unsigned __int64 v109; // [rsp+C0h] [rbp-138h]
  PVOID P; // [rsp+C8h] [rbp-130h]
  unsigned __int64 v111; // [rsp+D0h] [rbp-128h]
  void *v112; // [rsp+D8h] [rbp-120h]
  ULONG_PTR v113; // [rsp+E0h] [rbp-118h]
  unsigned __int64 v114; // [rsp+E8h] [rbp-110h]
  unsigned __int64 v115; // [rsp+F0h] [rbp-108h]
  __int64 v116; // [rsp+F8h] [rbp-100h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v117; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE Src[128]; // [rsp+130h] [rbp-C8h] BYREF

  v112 = (void *)a3;
  v6 = BugCheckParameter1;
  v106 = (ULONG_PTR)BugCheckParameter1;
  v113 = (ULONG_PTR)BugCheckParameter1;
  v114 = a3;
  v103 = 0LL;
  v107 = 0LL;
  memset(&v117, 0, sizeof(v117));
  v7 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v8 = a4 >> 4;
  v96 = a4 >> 4;
  if ( !(a4 >> 4) )
    return 3221225476LL;
  if ( (a2 & 0x3FFFFFFC) != 0 || (a2 & 3) == 3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( v8 > 8 )
  {
    Pool = (struct _MDL *)MiAllocatePool(
                            64,
                            8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)),
                            0x20206D4Du);
    v67 = Pool;
    P = Pool;
    if ( Pool )
    {
      Pool->Next = 0LL;
      Pool->Size = 8 * ((((a3 & 0xFFF) + a4 + 4095) >> 12) + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = a3 & 0xFFF;
      Pool->ByteCount = a4;
      PreviousMode = (unsigned __int8)CurrentThread->PreviousMode;
      if ( CurrentThread->PreviousMode )
        PreviousMode = 1LL;
      MiProbeAndLockPages(Pool, PreviousMode, 1LL);
      if ( (v67->MdlFlags & 5) != 0 )
        MappedSystemVa = (unsigned __int64 *)v67->MappedSystemVa;
      else
        MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v67, 0, MmCached, 0LL, 0, 0x40000010u);
      v105 = MappedSystemVa;
      v98 = MappedSystemVa;
      if ( MappedSystemVa )
      {
        v11 = 1LL;
        v6 = (_KPROCESS *)v106;
        goto LABEL_7;
      }
      MmUnlockPages(v67);
      ExFreePoolWithTag(v67, 0);
    }
    return 3221225626LL;
  }
  memmove(Src, (const void *)a3, 16 * v8);
  P = 0LL;
  MappedSystemVa = (unsigned __int64 *)Src;
  v98 = (unsigned __int64 *)Src;
  v105 = (unsigned __int64 *)Src;
  v11 = 1LL;
LABEL_7:
  if ( CurrentThread->ApcState.Process != v6 )
  {
    KiStackAttachProcess(v6, 0, (__int64)&v117);
    v11 = 1LL;
    v7 = 1;
  }
  v12 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = (__int64)&v6[1].ActiveProcessors.StaticBitmap[26];
  v93 = (__int64)&v6[1].ActiveProcessors.StaticBitmap[26];
  v14 = 17;
  v92 = 17;
  v15 = 0LL;
  valid = 0LL;
  v16 = 0LL;
  v95 = 0LL;
  v100 = 0;
  v17 = a2;
  while ( 1 )
  {
    v18 = 0LL;
    v104 = 0LL;
    v7 &= ~4u;
    v19 = *MappedSystemVa;
    v101 = v19;
    if ( v19 > 0x7FFFFFFEFFFFLL )
      goto LABEL_101;
    v20 = v19 >> 12;
    v109 = v19 >> 12;
    if ( !v12 )
      goto LABEL_240;
    if ( v20 < (*((unsigned int *)v12 + 6) | ((unsigned __int64)*((unsigned __int8 *)v12 + 32) << 32))
      || v20 > (*((unsigned int *)v12 + 7) | ((unsigned __int64)*((unsigned __int8 *)v12 + 33) << 32)) )
    {
      if ( v16 )
      {
        MiLockProtoPage(0LL);
        v95 = 0LL;
        v13 = v93;
      }
      if ( v14 != 17 )
      {
        if ( v15 )
        {
          MiUnlockPageTableInternal(v13, v15);
          v15 = 0LL;
          valid = 0LL;
        }
        MiUnlockWorkingSetShared(v93, v14);
        v92 = 17;
      }
      MiUnlockAndDereferenceVadShared((char *)v12);
      v12 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    v19 = v101;
    if ( !v12 )
    {
LABEL_240:
      v12 = MiObtainReferencedVadEx(v19, 2, (int *)&v100);
      BugCheckParameter2 = (ULONG_PTR)v12;
      if ( !v12 )
        break;
    }
    v21 = v101;
    v111 = v101 & 0xFFFFFFFFFFFFF000uLL;
    if ( ((v101 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
       || (v101 & 0xFFFFFFFFFFFFF000uLL) == qword_140C65A38 && qword_140C65A38)
      && (*(_DWORD *)(v106 + 2172) & 1) == 0 )
    {
      v7 |= 4u;
    }
    v22 = v7 & 0xFFFFFFEF;
    v7 = v7 & 0xFFFFFFEF | 0x10;
    if ( (v12[6] & 0x70) != 0x10 )
      v7 = v22;
    while ( 2 )
    {
      v7 &= ~2u;
      if ( (v7 & 0x10) == 0 )
      {
        if ( (v23 = *((_DWORD *)v12 + 12), v24 = v23 & 0x200000, (v23 & 0x200000) != 0)
          && ((v69 = (v23 >> 19) & 3, (v23 & 0x800000) != 0) || v69 >= 2)
          && v69 >= 2
          || !(_DWORD)v24 && (v12[8] & 0x1000000) != 0
          || (v12[6] & 0x70) == 0x30 && (unsigned __int64)MiGetAweVadPageSize(v12, v24, v13, v11) >= 0x200 )
        {
          v7 |= 2u;
        }
      }
      if ( (v7 & 2) != 0 && v92 != 17 )
      {
        if ( v15 )
        {
          MiUnlockPageTableInternal(v93, v15);
          v15 = 0LL;
          valid = 0LL;
        }
        MiUnlockWorkingSetShared(v93, v92);
        v92 = 17;
        v21 = v101;
      }
      v25 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v115 = v25;
      v26 = v92;
      if ( v92 != 17 )
      {
        if ( (((_BYTE)v25 + 8) & 0x78) == 0 && MiWorkingSetIsContended(v93) || KeShouldYieldProcessor() )
        {
          if ( v15 )
          {
            MiUnlockPageTableInternal(v93, v15);
            v15 = 0LL;
            valid = 0LL;
          }
          MiUnlockWorkingSetShared(v93, v92);
          v26 = 17;
          v92 = 17;
        }
        else
        {
          v26 = v92;
        }
      }
      v27 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v99 = v27;
      while ( 1 )
      {
        if ( v26 == 17 )
          v92 = MiLockWorkingSetShared(v93);
        v28 = -1LL;
        v102 = -1LL;
        v18 = 0LL;
        v104 = 0LL;
        if ( v15 == v27 )
        {
          v29 = v25;
          v107 = v25;
        }
        else
        {
          if ( v15 )
            MiUnlockPageTableInternal(v93, v15);
          valid = MiLockLowestValidPageTable(v93, v25, &v107, v11);
          v29 = v107;
        }
        v30 = MI_READ_PTE_LOCK_FREE(v29);
        v31 = v30;
        if ( !v30 )
        {
          if ( (v7 & 0x10) != 0 )
            goto LABEL_96;
          v32 = v7 & 2;
          if ( (v7 & 2) != 0 )
          {
            v11 = 1LL;
            goto LABEL_41;
          }
          goto LABEL_115;
        }
        v11 = 1LL;
        if ( (v30 & 1) != 0 && (v30 & 0x80u) != 0LL )
          break;
        if ( valid == v99 )
          goto LABEL_40;
        if ( !(unsigned int)MiWorkingSetInfoCheckPageTable(v93, v29, (unsigned int)&v103, a2, v92) )
        {
          v18 = v104;
          v11 = 1LL;
          goto LABEL_40;
        }
        v15 = 0LL;
        valid = 0LL;
LABEL_112:
        v27 = v99;
        v26 = v92;
      }
      v28 = (v30 >> 12) & 0xFFFFFFFFFFLL;
      v102 = v28;
      v13 = 0xFFFFFFFFLL;
      while ( v29 >= 0xFFFFF68000000000uLL && v29 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v29 = (__int64)(v29 << 25) >> 16;
        v13 = (unsigned int)(v13 + 1);
      }
      v70 = 1LL;
      v71 = v109;
      while ( (_DWORD)v13 )
      {
        v28 += v70 * (v71 & 0x1FF);
        v71 >>= 9;
        v70 <<= 9;
        v13 = (unsigned int)(v13 - 1);
      }
      v18 = 8388609LL;
      v104 = 8388609LL;
LABEL_40:
      v32 = v7 & 2;
LABEL_41:
      v33 = v102;
      if ( v102 != -1 )
        goto LABEL_49;
      if ( v32 )
      {
        v12 = (__int64 *)BugCheckParameter2;
        v15 = valid;
        v21 = v101;
        continue;
      }
      break;
    }
    v15 = valid;
    if ( valid != ((v101 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      MappedSystemVa = v98;
      v12 = (__int64 *)BugCheckParameter2;
LABEL_99:
      v16 = v95;
      v13 = v93;
      goto LABEL_100;
    }
    v34 = MI_READ_PTE_LOCK_FREE(v25);
    v37 = v34;
    v31 = v34;
    v108 = v34;
    v38 = 1LL;
    if ( (v34 & 1) != 0 )
    {
      v18 |= 1uLL;
      v39 = *(_DWORD *)(BugCheckParameter2 + 48);
      v40 = v7 & 0xFFFFFFF7;
      v7 |= 8u;
      if ( (v39 & 0x70) != 0x40 )
        v7 = v40;
      v28 = (v37 >> 12) & 0xFFFFFFFFFFLL;
      if ( (v7 & 0x18) != 0 )
      {
        v76 = 48 * v28;
        v77 = 48 * v28 - 0x220000000000LL;
        v111 = v77;
        if ( v28 <= qword_140C65BA0
          && ((*(_QWORD *)(v76 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
          && ((*(_BYTE *)(v77 + 35) & 0x40) != 0 || MiIsPageOnBadList(v77)) )
        {
          v18 |= 0x80000000uLL;
        }
        if ( (v7 & 0x10) != 0 )
        {
          v78 = (v39 >> 7) & 0x1F;
          if ( (v38 & (v31 >> 4)) != 0 || (v31 & 8) == 0 )
          {
            if ( (v38 & (v31 >> 4)) != 0 )
              v78 |= 8u;
          }
          else
          {
            v78 |= 0x18u;
          }
          v79 = v18 & 0xFFFFFFFFFFC0FFFFuLL | ((MiSearchNumaNodeTable(v28)[1] & 0x3F) << 16) | 0x400001;
        }
        else if ( (unsigned int)MiRotatedToFrameBuffer(v115) )
        {
          v80 = v39 & 0xC00;
          v81 = (v39 & 0x380) != 0;
          v78 = (v31 & 0x800) != 0 ? 4 : 1;
          if ( v81 && v80 == 3072 )
          {
            v78 |= 0x18u;
          }
          else if ( v80 == 1024 )
          {
            v78 |= 8u;
          }
          v79 = ((unsigned int)v18 ^ (*((_DWORD *)MiSearchNumaNodeTable(v28) + 2) << 16)) & 0x3F0000 ^ (unsigned __int64)v18;
        }
        else
        {
          v82 = v111;
          PfnPriority = MiGetPfnPriority(v111);
          v79 = v18 & 0xFFFFFFFFF8C0FFFFuLL | ((MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v76 >> 4))[1] & 0x3F | ((unsigned __int64)(PfnPriority & 7) << 8)) << 16);
          v78 = (*(_DWORD *)(v82 + 16) >> 5) & 0x1F;
          if ( !_bittest64((const signed __int64 *)(v82 + 40), 0x28u) && *(__int64 *)(v82 + 8) > 0 )
          {
            v84 = v79 | 0x8000;
            LOBYTE(v85) = 7;
            if ( (*(_QWORD *)(v82 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v85 = *(_QWORD *)(v82 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v79 = v84 ^ ((unsigned __int8)v84 ^ (unsigned __int8)(2 * v85)) & 0xE;
            v78 = MmMakeProtectNotWriteCopy[v78];
          }
        }
        v18 = ((unsigned __int16)v79 ^ (unsigned __int16)(16 * MmProtectToValue[v78])) & 0x7FF0 ^ v79;
LABEL_96:
        v12 = (__int64 *)BugCheckParameter2;
LABEL_97:
        MappedSystemVa = v98;
        v15 = valid;
        goto LABEL_98;
      }
      v33 = v102;
LABEL_49:
      v41 = 48 * v28 - 0x220000000000LL;
      v42 = v41;
      v102 = v41;
      if ( _bittest64((const signed __int64 *)(v41 + 40), 0x28u) )
      {
        v86 = v28 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v33 != -1LL )
          v86 = v33;
        v42 = 48 * v86 - 0x220000000000LL;
        v102 = v42;
      }
      v43 = *(_QWORD *)(v42 + 40);
      v44 = MiGetPfnPriority(v42);
      v48 = v18 & 0xFFFFFFFFF8C07FFFuLL | HIWORD(v43) & 0x8000 | ((MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v45 - v46) >> 4))[1] & 0x3F | ((unsigned __int64)(v44 & 7) << 8)) << 16);
      if ( (*(_BYTE *)(v41 + 35) & 0x40) != 0 || MiIsPageOnBadList(v41) )
        v48 |= 0x80000000uLL;
      v49 = *(_QWORD *)(v41 + 40);
      LOBYTE(v47) = (v49 & 0x10000000000LL) == 0;
      if ( ((unsigned __int8)v47 & ((v48 & 0x800000) == 0)) != 0 )
      {
        if ( (((unsigned __int64)v49 >> 60) & 7) != 1 )
        {
          if ( (MiGetWsleContents(v47, v101) & 0xF) == 8 )
            v48 |= 0x400000uLL;
          if ( *(__int64 *)(v41 + 40) < 0 )
          {
            PfnProtection = MiGetPfnProtection(v50, v51, v41);
            v18 = v48 & 0xFFFFFFFFFFFF8001uLL | (2 * (v53 & 7 | (8LL * (MmProtectToValue[PfnProtection] & 0x7FF))));
            v12 = (__int64 *)BugCheckParameter2;
            if ( (v7 & 4) != 0 )
            {
              v18 |= 0x40000000uLL;
            }
            else if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x200000) == 0 )
            {
              ProtoPteAddress = MiGetProtoPteAddress(BugCheckParameter2, v109, 0, &v116);
              MappedSystemVa = v98;
              v15 = valid;
              v11 = 1LL;
              v13 = v93;
              v16 = v95;
              v55 = ProtoPteAddress == (*(_QWORD *)(v41 + 8) | 0x8000000000000000uLL);
              v56 = v96;
              v17 = a2;
              if ( v55 )
                v18 |= 0x40000000uLL;
              goto LABEL_61;
            }
            goto LABEL_97;
          }
          v18 = v48 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v41 + 16) >> 5) & 0x1F] & 0x7FF));
          v12 = (__int64 *)BugCheckParameter2;
          MappedSystemVa = v98;
          v15 = valid;
          v13 = v93;
          v16 = v95;
          v17 = a2;
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x2200000) == 0x2200000 )
            v18 &= 0xFFFFFFF0FFFFFFFFuLL;
LABEL_101:
          v56 = v96;
          goto LABEL_61;
        }
        if ( v49 >= 0 )
        {
          v12 = (__int64 *)BugCheckParameter2;
          if ( (unsigned int)MiIsPfnEnclave(v41) )
            ValidAweProtection = (*(_DWORD *)(v41 + 16) >> 5) & 0x1F;
          else
            ValidAweProtection = MiGetValidAweProtection(BugCheckParameter2, v31);
          v88 = v48 ^ ((unsigned __int16)v48 ^ (unsigned __int16)(16 * MmProtectToValue[ValidAweProtection])) & 0x7FF0;
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x2200000) == 0x2200000 )
            v88 &= 0xFFFFFFF0FFFFFFFFuLL;
          v18 = v88 | 0x400000;
          goto LABEL_97;
        }
      }
      v12 = (__int64 *)BugCheckParameter2;
      v89 = v48 ^ ((unsigned __int16)v48 ^ (unsigned __int16)(16
                                                            * MmProtectToValue[(unsigned int)MiGetProtectionFromPte(
                                                                                               BugCheckParameter2,
                                                                                               v31)])) & 0x7FF0;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x2200000) == 0x2200000 )
        v89 &= 0xFFFFFFF0FFFFFFFFuLL;
      v18 = v89 | 0x400000;
      v90 = v18;
      MappedSystemVa = v98;
      v15 = valid;
      v11 = 1LL;
      v13 = v93;
      v16 = v95;
      if ( *(__int64 *)(v102 + 40) < 0 )
      {
        v91 = 7;
        if ( (*(_QWORD *)(v102 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v91 = *(_BYTE *)(v102 + 24);
        v18 = v90 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v91 & 7 | 0x20000000LL));
      }
LABEL_100:
      v17 = a2;
      goto LABEL_101;
    }
    if ( (v34 & 0x400) != 0 )
    {
      v12 = (__int64 *)BugCheckParameter2;
      goto LABEL_85;
    }
    if ( (v34 & 0x800) != 0 )
    {
      v72 = MiLockTransitionLeafPageEx(v25);
      if ( v72 )
      {
        v64 = v72 + 0x220000000000LL;
        goto LABEL_107;
      }
      goto LABEL_111;
    }
    if ( (unsigned int)MiGetPagingFileOffset(&v108, v35, v36, 1LL) )
      goto LABEL_184;
    if ( v37 )
      goto LABEL_96;
LABEL_115:
    v12 = (__int64 *)BugCheckParameter2;
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x200000) != 0 && (v7 & 4) == 0 )
      goto LABEL_97;
LABEL_85:
    v60 = 0LL;
    if ( (v7 & 4) != 0 )
    {
      v60 = qword_140C65A30;
      if ( v111 == 2147352576 )
        v60 = qword_140C65A28;
LABEL_89:
      v61 = v60;
      goto LABEL_90;
    }
    if ( (v12[6] & 0x200000) != 0 )
    {
      if ( qword_140C65B40 )
      {
        if ( (v31 & 0x10) != 0 )
        {
LABEL_182:
          v31 &= ~0x10uLL;
          goto LABEL_183;
        }
        v31 &= ~qword_140C65B40;
      }
    }
    else
    {
      v60 = MiGetProtoPteAddress((__int64)v12, v109, 0, &v116);
      if ( !v31 || MiIsPrototypePteVadLookup(v31) )
        goto LABEL_89;
      if ( qword_140C65B40 )
      {
        if ( (v31 & 0x10) != 0 )
          goto LABEL_182;
        v31 &= ~qword_140C65B40;
      }
    }
LABEL_183:
    v61 = (__int64)v31 >> 16;
LABEL_90:
    if ( !v61 )
      goto LABEL_97;
    v18 |= 0x8000uLL;
    v104 = v18;
    if ( v61 == v60 )
    {
      v18 |= 0x40000000uLL;
      v104 = v18;
    }
    if ( ((v61 ^ v95) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( valid )
      {
        MiUnlockPageTableInternal(v93, valid);
        valid = 0LL;
      }
      v95 = MiLockProtoPage(v61);
LABEL_111:
      v15 = valid;
      goto LABEL_112;
    }
    v62 = MiLockLeafPage((unsigned __int64 *)v61, 0LL);
    v63 = *(_QWORD *)v61;
    v108 = *(_QWORD *)v61;
    if ( v62 )
    {
      v64 = v62 + 0x220000000000LL;
LABEL_107:
      MiQueryPfn(0xAAAAAAAAAAAAAAABuLL * (v64 >> 4), &v103);
      _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v18 = v104;
      goto LABEL_96;
    }
    if ( (v63 & 0x400) != 0 || (v63 & 0x800) != 0 || !MiInvalidPteConforms(v63) )
      goto LABEL_96;
    if ( (unsigned int)MiGetPagingFileOffset(&v108, v73, v74, v75) )
    {
LABEL_184:
      v18 = v18 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      goto LABEL_96;
    }
    MappedSystemVa = v98;
    v15 = valid;
    v11 = 1LL;
    v56 = v96;
    v13 = v93;
    v16 = v95;
    v17 = a2;
    v55 = v63 == 0;
    v12 = (__int64 *)BugCheckParameter2;
    if ( v55 )
      v18 = 0LL;
LABEL_61:
    if ( (v17 & 0x40000000) != 0 )
    {
      if ( ((unsigned __int8)v18 & (unsigned __int8)v11) != 0 )
      {
        if ( (v18 & 0x40000000) != 0 )
          v18 = v18 & 0xFFFFFFFFF8C0FFF1uLL | 0xE;
      }
      else if ( (v18 & 0x40000000) != 0 )
      {
        v18 &= 0xFFFFFFFFF03FFFFFuLL;
      }
    }
    MappedSystemVa[1] = v18;
    MappedSystemVa += 2;
    v98 = MappedSystemVa;
    v105 = MappedSystemVa;
    v96 = v56 - v11;
    if ( v56 == v11 )
    {
      v57 = 0;
      goto LABEL_64;
    }
    v14 = v92;
  }
  v57 = v100;
  if ( v100 != -1073741558 )
  {
    v12 = 0LL;
LABEL_98:
    v11 = 1LL;
    goto LABEL_99;
  }
LABEL_64:
  if ( v92 != 17 )
  {
    if ( v15 )
      MiUnlockPageTableInternal(v93, v15);
    MiUnlockWorkingSetShared(v93, v92);
  }
  if ( v95 )
    MiLockProtoPage(0LL);
  if ( BugCheckParameter2 )
    MiUnlockAndDereferenceVadShared((char *)BugCheckParameter2);
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess(&v117);
  v58 = P;
  if ( P )
  {
    MmUnlockPages((PMDL)P);
    ExFreePoolWithTag(v58, 0);
  }
  else
  {
    memmove(v112, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v57;
}
