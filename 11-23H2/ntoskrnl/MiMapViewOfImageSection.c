/*
 * XREFs of MiMapViewOfImageSection @ 0x1406AEAF0
 * Callers:
 *     MiMapViewOfSection @ 0x140721860 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x140A30E64 (MiMapImageInSystemProcess.c)
 * Callees:
 *     MiDereferenceControlArea @ 0x14020B890 (MiDereferenceControlArea.c)
 *     MiControlAreaRequiresCharge @ 0x140214CC4 (MiControlAreaRequiresCharge.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214D94 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MiReferenceVad @ 0x1402756E4 (MiReferenceVad.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140287480 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     MiReferenceActiveSubsection @ 0x140289030 (MiReferenceActiveSubsection.c)
 *     MiUnlockVad @ 0x140289F30 (MiUnlockVad.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     MiUpdateVadStartVpn @ 0x14029CB98 (MiUpdateVadStartVpn.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029CBDC (LOCK_ADDRESS_SPACE.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MiReferenceControlAreaFile @ 0x1402A2664 (MiReferenceControlAreaFile.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402E34FC (MiInsertVadEvent.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14062624C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406318CC (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x140634358 (MiRemoveVadEvent.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 *     MiCommitVadMetadataBits @ 0x1406AE7C0 (MiCommitVadMetadataBits.c)
 *     MiAllowImageMap @ 0x1406AF6D4 (MiAllowImageMap.c)
 *     MiIsVaRangeAvailable @ 0x1406AF82C (MiIsVaRangeAvailable.c)
 *     PsCallImageNotifyRoutines @ 0x1406AFC40 (PsCallImageNotifyRoutines.c)
 *     MmUnsecureVirtualMemory @ 0x1406B0290 (MmUnsecureVirtualMemory.c)
 *     MiInsertVadCharges @ 0x1406FAAC0 (MiInsertVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1406FB7EC (MiReleaseVadEventBlocks.c)
 *     MiInitializeFixupVad @ 0x1407056B8 (MiInitializeFixupVad.c)
 *     MiUnmapVad @ 0x14071F4A4 (MiUnmapVad.c)
 *     MiAdvanceVadHint @ 0x14071FB60 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x14071FEC0 (MiSelectUserAddress.c)
 *     MiReferenceFileObjectForMap @ 0x140721018 (MiReferenceFileObjectForMap.c)
 *     MiInsertSharedCommitNode @ 0x140722220 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1407225A0 (MiRemoveSharedCommitNode.c)
 *     MiAddSecureEntry @ 0x140745F74 (MiAddSecureEntry.c)
 *     MiArbitraryCodeBlocked @ 0x14076BF64 (MiArbitraryCodeBlocked.c)
 *     MiDereferencePerSessionProtos @ 0x1407B5E98 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1407B5FE0 (MiCreatePerSessionProtos.c)
 *     MiSecureVad @ 0x1407BACEC (MiSecureVad.c)
 *     MiLogMapFileEvent @ 0x1408AC292 (MiLogMapFileEvent.c)
 *     MiLoadUserSymbols @ 0x140A30DA4 (MiLoadUserSymbols.c)
 *     MiCreateLargePageVad @ 0x140A49898 (MiCreateLargePageVad.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  _DWORD *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r15
  int v12; // edx
  int v13; // edx
  __int64 v14; // r11
  bool v15; // zf
  _DWORD *v16; // rcx
  void *v17; // r9
  unsigned __int64 v18; // r12
  unsigned int v19; // ebx
  __int16 v20; // si
  __int16 v21; // r8
  int v22; // edx
  __int64 result; // rax
  int v24; // ecx
  int v25; // edi
  _DWORD *v26; // rax
  SIZE_T v27; // rdx
  ULONG v28; // r8d
  _OWORD *Pool; // rax
  _OWORD *v30; // rdi
  int v31; // ecx
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rax
  int v36; // ecx
  unsigned int v37; // eax
  int v38; // eax
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v40; // rsi
  int v41; // ecx
  __int64 v42; // rsi
  unsigned __int64 v43; // r12
  unsigned int v44; // r9d
  ULONG_PTR v45; // rdx
  _QWORD *v46; // r8
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  int PerSessionProtos; // r13d
  __int64 v50; // rdi
  int v51; // eax
  int v52; // r11d
  void *v53; // rdi
  char *v54; // r13
  int v55; // ecx
  unsigned int v56; // ebx
  __int64 v57; // r13
  __int64 v58; // r8
  unsigned int v59; // ecx
  unsigned int v60; // edx
  int v61; // r8d
  __int64 v62; // rdi
  __int64 v63; // r12
  PVOID v64; // rsi
  unsigned __int64 v65; // rsi
  __int64 v66; // r12
  unsigned __int64 v67; // r12
  _OWORD *v68; // rax
  __int64 v69; // r12
  __int16 v70; // dx
  __int16 v71; // cx
  int v72; // r10d
  __int16 v73; // ax
  unsigned int SessionId; // eax
  int v75; // eax
  int LargePageVad; // r12d
  void *v77; // rcx
  __int16 v78; // ax
  void *v79; // rcx
  __int64 v80; // r8
  __int64 VadEvent; // rax
  unsigned __int64 v82; // r8
  char v83; // r9
  __int64 v84; // rax
  unsigned __int64 v85; // rdi
  unsigned __int64 v86; // rdi
  __int64 v87; // r9
  void *v88; // rcx
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  __int16 v91; // cx
  char *v92; // rdx
  int v93; // r9d
  _QWORD *v94; // rax
  __int64 v95; // [rsp+28h] [rbp-D8h]
  int v96; // [rsp+50h] [rbp-B0h]
  unsigned int v97; // [rsp+54h] [rbp-ACh]
  __int64 v98; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v99; // [rsp+60h] [rbp-A0h]
  __int64 v100; // [rsp+68h] [rbp-98h]
  unsigned __int64 v101; // [rsp+70h] [rbp-90h] BYREF
  __int64 v102; // [rsp+78h] [rbp-88h]
  __int16 v103; // [rsp+80h] [rbp-80h]
  PVOID Object; // [rsp+88h] [rbp-78h]
  _DWORD *v105; // [rsp+90h] [rbp-70h]
  __int64 v106; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v107; // [rsp+A0h] [rbp-60h]
  __int64 v108; // [rsp+A8h] [rbp-58h]
  __int64 v109; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h]
  __int128 v111; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v112; // [rsp+D0h] [rbp-30h]
  __int128 v113; // [rsp+E0h] [rbp-20h]
  __int64 v114; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v115[11]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v117; // [rsp+1A8h] [rbp+A8h]

  v9 = (_DWORD *)a1;
  memset(v115, 0, 0x48uLL);
  v10 = *(_QWORD *)v9;
  v11 = *(_QWORD *)(a2 + 88);
  v12 = *(_DWORD *)(a2 + 40) >> 22;
  v114 = 0LL;
  v13 = v12 & 2;
  v96 = 0;
  v100 = v10;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v14 = *(_QWORD *)(v10 + 56);
  v108 = v14;
  if ( dword_140C65888
    && dword_140C6588C == *(_DWORD *)(v14 + 60)
    && dword_140C65890 == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 68LL) )
  {
    __debugbreak();
  }
  v15 = (v9[14] & 0x20000000) == 0;
  v16 = (_DWORD *)(v11 + 2172);
  v17 = *(void **)(v10 + 32);
  v18 = *(_QWORD *)(v10 + 48);
  Object = v17;
  if ( !v15 || (v15 = (*v16 & 0x2000) == 0, v19 = v13, v105 = (_DWORD *)(v11 + 2172), !v15) )
  {
    v15 = (*(_BYTE *)(v10 + 15) & 1) == 0;
    v19 = v13;
    v105 = (_DWORD *)(v11 + 2172);
    if ( v15 )
    {
      v105 = (_DWORD *)(v11 + 2172);
      v96 = 1;
      v19 = v13 | 5;
    }
  }
  v20 = *(_WORD *)(v11 + 2412);
  v21 = *(_WORD *)(a2 + 58);
  v103 = v20;
  v117 = v21;
  if ( !v21 )
  {
    if ( (*v16 & 0x1000) != 0 || (*v16 & 1) != 0 )
    {
      v117 = *(_WORD *)(v14 + 48);
      goto LABEL_9;
    }
    v21 = v20;
    v117 = v20;
  }
  if ( v21 != *(_WORD *)(v14 + 48) )
  {
    if ( (unsigned int)PdcCreateWatchdogAroundClientCall() )
    {
      v19 |= 4u;
      v96 = v72 | 2;
    }
    else
    {
      if ( v70 )
        return 3221225659LL;
      v117 = v71;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)(v11 + 992) & 1) != 0 && (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 )
    return 3221225506LL;
  v22 = *(_DWORD *)(a2 + 40);
  v102 = *(_QWORD *)(a2 + 16);
  if ( (v22 & 0x20000000) != 0 )
  {
    if ( (unsigned __int64)v17 < 0x100000000LL || v19 >= 4 )
      return 3221225496LL;
    v19 = v19 & 0xFFFFFFFC | 1;
    v96 = 0;
    if ( (*(_BYTE *)(v14 + 44) & 1) != 0 )
      return 3221226089LL;
    v102 = 0x200000LL;
  }
  if ( !a5 || (*(_DWORD *)(a5 + 56) & 0x80000) != 0 || (v22 & 0x40000) != 0 )
  {
    if ( a7 != 1 )
      return 3221225541LL;
    v19 |= 0x400u;
  }
  if ( v19 >= 0x400 )
    goto LABEL_132;
  result = MiAllowImageMap(v11, a5, v9, v14);
  if ( (int)result < 0 )
    return result;
  v24 = *(_DWORD *)(v11 + 2512);
  if ( (v24 & 0x10) == 0 || (*(_BYTE *)(v108 + 51) & 4) != 0 )
    goto LABEL_21;
  if ( (*(_BYTE *)(v108 + 44) & 1) != 0 )
  {
    if ( (v24 & 8) == 0 )
      goto LABEL_21;
    return 3221226089LL;
  }
  v19 |= 1u;
  if ( v19 >= 0x400 )
  {
LABEL_132:
    v19 = v19 & 0xFFFFFFFC | 1;
    goto LABEL_22;
  }
LABEL_21:
  if ( (*(_BYTE *)(v10 + 15) & 1) != 0 && (*(_DWORD *)(v11 + 2512) & 0x40) == 0 )
    goto LABEL_132;
LABEL_22:
  if ( (a8 & 4) != 0 || v11 == PsSecureSystemProcess )
  {
    v25 = 0;
    v96 = 0;
    v19 &= 0xFFFFFFF9;
  }
  else
  {
    v25 = v96;
  }
  if ( *(_QWORD *)(*((_QWORD *)v9 + 12) + 32LL) && (v9[14] & 0x800) == 0 )
    goto LABEL_27;
  if ( (v19 & 4) != 0 )
    return 3221225496LL;
  v25 = 0;
  v96 = 0;
  v19 &= ~2u;
LABEL_27:
  v107 = 0LL;
  if ( v19 >= 0x400 )
    goto LABEL_31;
  v26 = v9 + 32;
  if ( v9 == (_DWORD *)-128LL )
    goto LABEL_31;
  while ( (v26[8] & 0xEu) < 0xC )
  {
    v26 = (_DWORD *)*((_QWORD *)v26 + 2);
    if ( !v26 )
      goto LABEL_31;
  }
  result = MiArbitraryCodeBlocked(*(_QWORD *)(a2 + 96));
  if ( (int)result >= 0 )
  {
LABEL_31:
    BugCheckParameter2 = (ULONG_PTR)(v9 + 32);
    MiCheckPurgeAndUpMapCount((__int64)v9);
    v99 = *(_QWORD *)(a2 + 24);
    if ( v25 )
    {
      v28 = 1231315286;
      v27 = 8
          * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)v9 + 8LL) >> 6)
           + ((*(_DWORD *)(*(_QWORD *)v9 + 8LL) & 0x3F) != 0)
           + 21LL);
    }
    else
    {
      v27 = 136LL;
      v28 = 543449430;
    }
    Pool = MiAllocatePool(64, v27, v28);
    v30 = Pool;
    if ( !Pool )
    {
      MiDereferenceControlArea((__int64)v9);
      return 3221225626LL;
    }
    if ( v96 )
      v19 |= 8u;
    v31 = *((_DWORD *)Pool + 16);
    *(_QWORD *)Pool = -2LL;
    v32 = v31 & 0xFBFFFFFF;
    *((_QWORD *)Pool + 1) = -2LL;
    *((_QWORD *)Pool + 2) = -2LL;
    v33 = 0;
    if ( a6 == 1 )
      v33 = 0x4000000;
    *((_DWORD *)v30 + 16) = v33 | v32;
    v34 = v30[3] & 0xFFFFFF8F | 0x20;
    *((_DWORD *)v30 + 12) = v34;
    *((_DWORD *)v30 + 12) = v34 ^ (v34 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
    if ( a5 )
    {
      v35 = MiReferenceFileObjectForMap(a5);
      v36 = *((_DWORD *)v30 + 16);
      *((_QWORD *)v30 + 16) = v35;
      *((_DWORD *)v30 + 16) = v36 & 0xF7FFFFFF | (*(_DWORD *)(a5 + 60) >> 4) & 0x8000000;
    }
    v37 = v30[3] & 0xFFFFF0FF;
    *((_QWORD *)v30 + 5) = 0LL;
    v38 = v37 | 0x80;
    *((_DWORD *)v30 + 12) = v38;
    if ( v19 < 0x400 )
    {
      *((_DWORD *)v30 + 12) = v38 | 0x380;
      if ( (*(_BYTE *)(v11 + 992) & 1) != 0 )
        *((_DWORD *)v30 + 16) |= 0x10000000u;
      *((_DWORD *)v30 + 13) ^= (*((_DWORD *)v30 + 13) ^ v18) & 0x7FFFFFFF;
      *((_BYTE *)v30 + 34) = v18 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v15 = (*(_DWORD *)(a2 + 60) & 1) == 0;
    v106 = 0LL;
    v97 = 0;
    v98 = (__int64)CurrentThread;
    if ( !v15 && v102 != 0x200000 )
    {
      v40 = *a3;
      v101 = *a3;
      goto LABEL_46;
    }
    LODWORD(v40) = (_DWORD)Object + *a4;
    v101 = (unsigned __int64)Object + (unsigned int)*a4;
    if ( v102 != 0x200000 )
      goto LABEL_46;
    v99 = (*(_QWORD *)(a2 + 24) + 0x1FFFFFLL) & 0xFFFFFFFFFFE00000uLL;
    v75 = (*((_DWORD *)v30 + 13) ^ (v99 >> 12)) & 0x7FFFFFFF;
    *((_BYTE *)v30 + 34) = v99 >> 43;
    *((_DWORD *)v30 + 13) ^= v75;
    *((_DWORD *)v30 + 16) |= 0x1000000u;
    LargePageVad = MiCreateLargePageVad(v11, v30, 0LL, 0LL);
    if ( LargePageVad >= 0 )
    {
      CurrentThread = (struct _KTHREAD *)v98;
LABEL_46:
      v109 = 0LL;
      if ( dword_140C6987C )
      {
        v78 = *(_WORD *)(v108 + 48);
        if ( (v78 == -31132 || v78 == 332 || v78 == -21916)
          && v19 < 0x400
          && (v30[4] & 0x1000000) == 0
          && v99 < 0x7FFFFFFF
          && (*(_BYTE *)(v11 + 992) & 1) == 0
          && (v99 >> 12) + ((v99 & 0xFFF) != 0) == *(_DWORD *)(v100 + 8)
          && (*(_DWORD *)(a2 + 64) & 4) == 0 )
        {
          if ( v99 + (unsigned int)dword_140C6987C < v99 )
          {
            v79 = (void *)*((_QWORD *)v30 + 16);
            if ( v79 )
              ObfDereferenceObject(v79);
            MiDereferenceControlArea((__int64)v9);
            ExFreePoolWithTag(v30, 0);
            return 3221225503LL;
          }
          v99 += (unsigned int)dword_140C6987C;
        }
      }
      if ( (v30[3] & 0xF80) == 0x380
        && *(_QWORD *)(v11 + 1088)
        && (*v105 & 0x1000) == 0
        && v11 != PsSecureSystemProcess
        && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0) )
      {
        v19 |= 0x800u;
      }
      LODWORD(v115[8]) = 32;
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, v11);
      if ( (*(_DWORD *)(v11 + 1124) & 0x20) != 0 )
      {
        v42 = (__int64)v30;
        PerSessionProtos = -1073741558;
        v50 = a1;
LABEL_226:
        if ( (v19 & 0x100) != 0 )
        {
          MmGetSessionIdEx(v11);
          MiDereferencePerSessionProtos(v50);
        }
        if ( (v19 & 0x200) != 0 )
          MiReturnCrossPartitionControlAreaCharges(v50);
        if ( (v19 & 0x80u) != 0 )
          MiRemoveSharedCommitNode(v50, v11, 0LL);
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v11);
        if ( (v19 & 0x40) != 0 )
          MiRemoveVadEvent(v42, v115);
        if ( v42 )
        {
          if ( v102 == 0x200000 )
            MiReleaseVadEventBlocks(v42, 0LL);
          v88 = *(void **)(v42 + 128);
          if ( v88 )
            ObfDereferenceObjectWithTag(v88, 0x63536D4Du);
          ExFreePoolWithTag((PVOID)v42, 0);
        }
        MiDereferenceControlArea(v50);
        return (unsigned int)PerSessionProtos;
      }
      if ( (*(_DWORD *)(a2 + 60) & 1) != 0 && v102 != 0x200000 )
      {
        if ( !(unsigned int)MiIsVaRangeAvailable(v11, v40, v99, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
        {
          v42 = (__int64)v30;
          PerSessionProtos = -1073741800;
          v50 = a1;
          goto LABEL_226;
        }
LABEL_58:
        v42 = (__int64)v30;
        if ( (PVOID)(v101 - (unsigned int)*a4) != Object )
        {
          v97 = 1073741827;
          if ( (v19 & 2) != 0 )
          {
            if ( (v19 & 8) != 0 )
              goto LABEL_130;
            v68 = MiAllocatePool(
                    64,
                    8
                  * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)v9 + 8LL) >> 6)
                   + ((*(_DWORD *)(*(_QWORD *)v9 + 8LL) & 0x3F) != 0)
                   + 21LL),
                    0x49646156u);
            v69 = (__int64)v68;
            if ( v68 )
            {
              *v68 = *v30;
              v68[1] = v30[1];
              v68[2] = v30[2];
              v68[3] = v30[3];
              v68[4] = v30[4];
              v68[5] = v30[5];
              v68[6] = v30[6];
              v68[7] = v30[7];
              *((_QWORD *)v68 + 16) = *((_QWORD *)v30 + 16);
              ExFreePoolWithTag(v30, 0);
              v19 |= 8u;
              v42 = v69;
            }
            if ( (v19 & 8) != 0 )
LABEL_130:
              v97 = 1073741878;
          }
        }
        v105 = (_DWORD *)(v101 >> 12);
        v43 = (v99 + v101 - 1) >> 12;
        MiUpdateVadStartVpn(v42, v101 >> 12);
        *(_DWORD *)(v42 + 28) = v43;
        v45 = (ULONG_PTR)(v9 + 32);
        *(_BYTE *)(v42 + 33) = BYTE4(v43);
        v47 = (unsigned int)v9[43];
        v48 = *v46 >> 12;
        if ( v48 >= v47 )
        {
          do
          {
            v45 = *(_QWORD *)(v45 + 16);
            v48 -= v47;
            v47 = *(unsigned int *)(v45 + 44);
          }
          while ( v48 >= v47 );
          BugCheckParameter2 = v45;
        }
        *(_QWORD *)(v42 + 72) = v45;
        *(_QWORD *)(v42 + 80) = *(_QWORD *)(v45 + 8) + 8 * v48;
        *(_QWORD *)(v42 + 88) = *(_QWORD *)(v100 + 64) + 8 * (*(unsigned int *)(v100 + 8) - 1LL);
        if ( (v19 & 8) != 0 )
          MiInitializeFixupVad(v42, v44);
        if ( *(_DWORD *)(a2 + 52) )
          *(_BYTE *)(*(_QWORD *)(v11 + 1680) + 340LL) = 1;
        if ( (v9[14] & 0x8000000) != 0 )
        {
          SessionId = MmGetSessionIdEx(v11);
          PerSessionProtos = MiCreatePerSessionProtos(v9, SessionId);
          if ( PerSessionProtos < 0 )
            goto LABEL_163;
          v9 = (_DWORD *)a1;
          v19 |= 0x100u;
        }
        if ( (*(_DWORD *)(v42 + 64) & 0x10000000) != 0 )
        {
          v84 = *(unsigned int *)(v42 + 52);
          LODWORD(v84) = v84 & 0x7FFFFFFF;
          v85 = v84 | ((unsigned __int64)*(unsigned __int8 *)(v42 + 34) << 31);
          v86 = MiUpdatePrivateDemandZeroView(v11, v42, 0) + v85;
          *(_DWORD *)(v42 + 52) ^= (*(_DWORD *)(v42 + 52) ^ v86) & 0x7FFFFFFF;
          *(_BYTE *)(v42 + 34) = v86 >> 31;
          v115[1] = v98;
          MiInsertVadEvent(v42, v115, 0LL, v87);
          v19 |= 0x40u;
        }
        PerSessionProtos = MiInsertSharedCommitNode(v9, v11, 0LL);
        if ( PerSessionProtos >= 0 )
        {
          v19 |= 0x80u;
          v50 = a1;
          v51 = MiControlAreaRequiresCharge(a1, (a8 & 8) != 0);
          if ( v51 )
          {
            if ( v51 == 2 )
            {
              PerSessionProtos = MiReferenceActiveSubsection((__int64 *)BugCheckParameter2, v52, 0x11u);
              if ( PerSessionProtos < 0 )
                goto LABEL_225;
              v19 |= 0x200u;
            }
            PerSessionProtos = MiInsertVadCharges(v42, v11);
            if ( PerSessionProtos >= 0 )
            {
              if ( (v19 & 8) != 0 )
                ++*(_QWORD *)(*(_QWORD *)(v11 + 1680) + 368LL);
              MiInsertVad(v42, v11, 0);
              v53 = 0LL;
              Object = 0LL;
              if ( v102 == 0x200000 )
              {
                MiLockVad(v98, v42);
                PerSessionProtos = MiMapUserLargePages(v42, 0, 0, 0LL);
                if ( PerSessionProtos < 0 )
                {
                  UNLOCK_ADDRESS_SPACE_UNORDERED(v98, v11);
                  MiReferenceVad(v42);
LABEL_263:
                  MiUnmapVad((PVOID)v42);
                  v94 = *(_QWORD **)(a2 + 72);
                  if ( v94 )
                    *v94 = 0LL;
                  return (unsigned int)PerSessionProtos;
                }
                MiUnlockVad(v98, v42);
              }
              if ( v106 )
                MiAdvanceVadHint(v105, v43);
              v54 = (char *)((v107 << 16) + v101);
              v101 = (unsigned __int64)v54;
              *a3 = (unsigned __int64)v54;
              if ( *(_BYTE *)(v108 + 50) && v117 != v103 )
              {
                v19 |= 0x1000u;
                if ( *(_QWORD *)(v11 + 1408) && *(_WORD *)(v108 + 48) == 0x8664 )
                  v19 &= ~0x1000u;
                v55 = v97;
                if ( v19 >= 0x1000 )
                  v55 = 1073741838;
                v97 = v55;
              }
              else
              {
                v55 = v97;
              }
              if ( (PerfGlobalGroupMask & 0x8000) != 0 )
              {
                MiLogMapFileEvent(v42, 1061LL);
                v55 = v97;
              }
              v56 = v19 | 0x10;
              if ( (v56 & 0x400) != 0 )
              {
LABEL_93:
                if ( (v56 & 0x20) == 0 )
                {
                  v63 = v98;
LABEL_109:
                  if ( (v56 & 0x10) != 0 )
                    UNLOCK_ADDRESS_SPACE_UNORDERED(v63, v11);
                  if ( (v56 & 0x400) == 0 && a5 && (*(_BYTE *)(v11 + 992) & 1) == 0 )
                    *(_DWORD *)(a2 + 60) |= 4u;
                  return v97;
                }
                MiLockVad(v98, v42);
                UNLOCK_ADDRESS_SPACE_UNORDERED(v98, v11);
                LOWORD(v56) = v56 & 0xFFEF;
                if ( (*(_DWORD *)(v42 + 64) & 0x10000000) != 0 )
                {
                  MiUpdatePrivateDemandZeroView(v11, v42, 1);
                  MiRemoveVadEvent(v42, v115);
                  LOWORD(v56) = v56 & 0xFFBF;
                }
                if ( (v56 & 0x400) == 0 )
                {
                  v61 = *(_DWORD *)(a2 + 120);
                  if ( v61 )
                  {
                    PerSessionProtos = MiCommitVadMetadataBits(v42, 0LL, v61);
                    if ( PerSessionProtos < 0 )
                      goto LABEL_261;
                  }
                }
                if ( !*(_QWORD *)(a2 + 72) )
                {
                  v62 = v109;
                  goto LABEL_101;
                }
                v93 = *(_DWORD *)(a2 + 68);
                if ( v93 == 4 || (unsigned int)(v93 - 1) <= 1 || v93 == -2147483647 )
                {
                  PerSessionProtos = MiSecureVad(v42, v101, *(_QWORD *)(a2 + 24), v93, 0, (__int64)&v109);
                  if ( PerSessionProtos >= 0 )
                  {
                    v62 = 0LL;
                    **(_QWORD **)(a2 + 72) = v109 ^ qword_140C65A40 ^ v11;
LABEL_101:
                    if ( (v56 & 0x800) == 0
                      || (v62 = MiAddSecureEntry(v42, (_DWORD)v105 << 12, ((_DWORD)v43 << 12) | 0xFFFu, -2147483647, 0)) != 0 )
                    {
                      if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
                        MiSoftFaultMappedView(v42);
                      v63 = v98;
                      MiUnlockVad(v98, v42);
                      if ( (v56 & 0x800) != 0 )
                      {
                        v64 = Object;
                        PsCallImageNotifyRoutines((char *)Object + 88, v11, &v111, Object);
                        ObfDereferenceObjectWithTag(v64, 0x63536D4Du);
                      }
                      if ( v62 )
                        MmUnsecureVirtualMemory((HANDLE)(v62 ^ qword_140C65A40 ^ v11));
                      goto LABEL_109;
                    }
                    v53 = Object;
                    PerSessionProtos = -1073741670;
                  }
                }
                else
                {
                  PerSessionProtos = -1073741755;
                }
LABEL_261:
                MiReferenceVad(v42);
                if ( v53 )
                  ObfDereferenceObjectWithTag(v53, 0x63536D4Du);
                goto LABEL_263;
              }
              if ( (NtGlobalFlag & 0x40000) == 0
                || (v89 = (unsigned int)(v55 - 1073741827), (unsigned int)v89 <= 0x33)
                && (v90 = 0x8000000000801LL, _bittest64(&v90, v89)) )
              {
                v57 = a1;
              }
              else
              {
                v58 = v100;
                if ( (*(_BYTE *)(v98 + 1384) & 0x20) != 0
                  || (v91 = *(_WORD *)(v100 + 12), (v91 & 0x2000) != 0)
                  || *(char *)(v100 + 14) >= 0 )
                {
                  v57 = a1;
                  goto LABEL_85;
                }
                v92 = v54;
                v57 = a1;
                *(_WORD *)(v100 + 12) = v91 | 0x2000;
                MiLoadUserSymbols(a1, v92, v11);
              }
              v58 = v100;
LABEL_85:
              if ( (v56 & 0x800) != 0 )
              {
                BYTE8(v111) = 3;
                if ( (*(_DWORD *)(v42 + 64) & 0x8000000) != 0 )
                {
                  v60 = DWORD2(v111) & 0xFFF80FFF;
                }
                else
                {
                  v59 = DWORD2(v111) & 0xFFFF0FFF | ((*(_BYTE *)(v58 + 15) & 0xF0) << 8);
                  v60 = v59 ^ (v59 ^ (*(unsigned __int8 *)(v58 + 15) << 15)) & 0x70000;
                }
                DWORD2(v111) = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)(v56 >> 1)) & 0x800;
                *(_QWORD *)&v112 = v101;
                *(_QWORD *)&v113 = *(_QWORD *)(a2 + 24);
                if ( *(_QWORD *)(a2 + 24) != _InterlockedCompareExchange64(
                                               (volatile signed __int64 *)(v58 + 24),
                                               -1LL,
                                               -1LL) )
                  DWORD2(v111) |= 0x80000u;
                DWORD2(v112) = 0;
                DWORD2(v113) = 0;
                v53 = (void *)MiReferenceControlAreaFile(v57);
                Object = v53;
                LOWORD(v56) = v56 | 0x20;
              }
              if ( *(_DWORD *)(a2 + 120)
                || (*(_DWORD *)(v42 + 64) & 0x10000000) != 0
                || *(_QWORD *)(a2 + 72)
                || (*(_DWORD *)(a2 + 64) & 2) != 0 )
              {
                LOWORD(v56) = v56 | 0x20;
              }
              goto LABEL_93;
            }
          }
          else
          {
            PerSessionProtos = -1073740277;
          }
LABEL_225:
          CurrentThread = (struct _KTHREAD *)v98;
          goto LABEL_226;
        }
LABEL_163:
        v50 = a1;
        goto LABEL_225;
      }
      v41 = v99;
      if ( v99 > 0x7FFFFFFF0000LL )
      {
        v42 = (__int64)v30;
        PerSessionProtos = -1073741801;
        v50 = a1;
        goto LABEL_226;
      }
      if ( (v19 & 1) == 0 )
      {
        if ( (unsigned int)MiIsVaRangeAvailable(v11, v40, v99, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
          goto LABEL_58;
        v41 = v99;
      }
      v65 = *(_QWORD *)(a2 + 8);
      v66 = 0LL;
      if ( (unsigned __int64)Object < 0x100000000LL && v65 >= 0x100000000LL && (*(_BYTE *)(v100 + 15) & 1) == 0 )
        v65 = 0xFFFFFFFFLL;
      if ( (*(_BYTE *)(v100 + 14) & 0x40) != 0 )
      {
        if ( !*(_QWORD *)(v11 + 1408) || (v73 = *(_WORD *)(v11 + 2412), v73 != 332) && v73 != 452 )
          v66 = 0x100000000LL;
      }
      if ( *(_QWORD *)a2 >= v65 )
      {
        PerSessionProtos = -1073741801;
      }
      else
      {
        PerSessionProtos = MiSelectUserAddress(
                             *(_DWORD *)(a2 + 40),
                             *(_QWORD *)a2,
                             v65,
                             v41,
                             v102,
                             v66,
                             (*((_DWORD *)v30 + 12) >> 7) & 0x1F,
                             0,
                             (__int64)&v106,
                             (__int64)&v101);
        if ( PerSessionProtos >= 0 )
        {
          v67 = v99;
LABEL_123:
          if ( v102 == 0x200000 )
          {
            if ( v67 - *(_QWORD *)(a2 + 24) >= 0x10000 )
              v107 = (unsigned int)ExGenRandom(1) % ((v67 - *(_QWORD *)(a2 + 24)) >> 16);
            VadEvent = MiLocateVadEvent((__int64)v30, 16LL);
            *(_QWORD *)(VadEvent + 16) = v82 >> 12;
            *(_BYTE *)(VadEvent + 8) = v83;
          }
          v9 = (_DWORD *)a1;
          goto LABEL_58;
        }
      }
      v80 = *(_QWORD *)(a2 + 8);
      if ( v65 == v80 )
      {
        v67 = v99;
      }
      else
      {
        v95 = v66;
        v67 = v99;
        PerSessionProtos = MiSelectUserAddress(
                             *(_DWORD *)(a2 + 40),
                             *(_QWORD *)a2,
                             v80,
                             v99,
                             v102,
                             v95,
                             (*((_DWORD *)v30 + 12) >> 7) & 0x1F,
                             0,
                             (__int64)&v106,
                             (__int64)&v101);
      }
      v42 = (__int64)v30;
      if ( PerSessionProtos < 0 )
        goto LABEL_163;
      goto LABEL_123;
    }
    v77 = (void *)*((_QWORD *)v30 + 16);
    if ( v77 )
      ObfDereferenceObject(v77);
    MiDereferenceControlArea((__int64)v9);
    ExFreePoolWithTag(v30, 0);
    return (unsigned int)LargePageVad;
  }
  return result;
}
