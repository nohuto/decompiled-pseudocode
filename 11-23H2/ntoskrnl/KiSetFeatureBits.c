/*
 * XREFs of KiSetFeatureBits @ 0x140A8D4C4
 * Callers:
 *     KiInitializeBootStructures @ 0x140A8B590 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlSetHardwareMbecAvailable @ 0x14036F2F4 (HvlSetHardwareMbecAvailable.c)
 *     KiComputeTopologyConstants @ 0x14038171C (KiComputeTopologyConstants.c)
 *     HalIsHyperThreadingEnabled @ 0x140382A40 (HalIsHyperThreadingEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiApplyProcessorErrata @ 0x140410F5C (KiApplyProcessorErrata.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     HvlSetApicVirtualizationAvailable @ 0x14054044C (HvlSetApicVirtualizationAvailable.c)
 *     KiGetProcessorSignature @ 0x140A8B9F8 (KiGetProcessorSignature.c)
 *     KiInitializeHgsPlusWorkloadClasses @ 0x140A8DD5C (KiInitializeHgsPlusWorkloadClasses.c)
 *     KiInitializeHresetSupport @ 0x140A8DDD4 (KiInitializeHresetSupport.c)
 *     KiDetectKvaLeakage @ 0x140A8DE50 (KiDetectKvaLeakage.c)
 *     KiSetProcessorSignature @ 0x140A8E3CC (KiSetProcessorSignature.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 */

__int64 __fastcall KiSetFeatureBits(__int64 a1)
{
  char v1; // bl
  unsigned int v3; // ecx
  char v4; // dl
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  bool v10; // zf
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int ProcessorSignature; // eax
  char v23; // r8
  __int16 v39; // r13
  unsigned int v40; // esi
  ULONG_PTR v41; // r12
  unsigned int v52; // r14d
  ULONG_PTR v53; // r15
  char v54; // dl
  unsigned __int8 v55; // al
  unsigned __int8 v56; // cl
  char v57; // al
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rsi
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  int v64; // ecx
  char v65; // cl
  char v66; // bl
  int v67; // edx
  int v68; // ecx
  unsigned int v69; // eax
  char v70; // r14
  int v71; // r15d
  int v72; // ebx
  unsigned __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  char v83; // r9
  __int64 v94; // r8
  __int64 v95; // r10
  __int64 v96; // rsi
  __int64 v102; // rbx
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  unsigned __int64 v115; // rax
  unsigned __int64 v121; // rax
  __int64 v127; // rdx
  int v128; // ecx
  __int64 v129; // rcx
  __int64 result; // rax
  unsigned int v131; // [rsp+38h] [rbp-59h]
  unsigned int v132; // [rsp+3Ch] [rbp-55h]
  __int128 v133; // [rsp+40h] [rbp-51h] BYREF
  __int64 v134; // [rsp+50h] [rbp-41h]
  int v135; // [rsp+58h] [rbp-39h]
  BOOL v136; // [rsp+60h] [rbp-31h]
  __int128 v137; // [rsp+68h] [rbp-29h] BYREF
  __int128 v138; // [rsp+78h] [rbp-19h] BYREF
  __int128 v139; // [rsp+88h] [rbp-9h]
  __int128 v140; // [rsp+98h] [rbp+7h]
  __int128 v141; // [rsp+A8h] [rbp+17h]

  v1 = *(_BYTE *)(a1 + 64);
  v134 = 0LL;
  v135 = 0;
  v3 = *(unsigned __int8 *)(a1 + 67);
  v4 = *(_BYTE *)(a1 + 141);
  v139 = 0LL;
  v136 = (unsigned __int8)(v4 - 1) <= 1u;
  v140 = 0LL;
  v141 = 0LL;
  v133 = 0LL;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature(0LL, 0LL, 0LL, 0LL);
    KiSetProcessorSignature(a1, ProcessorSignature);
  }
  else
  {
    if ( v4 == 2 )
    {
      if ( v1 != 6 )
        goto LABEL_39;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
      if ( v3 <= 0x2D )
      {
        if ( v3 != 45 )
        {
          if ( v3 > 0x1F )
          {
            v11 = v3 - 37;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( !v12 )
                goto LABEL_35;
              v13 = v12 - 1;
              if ( !v13 )
                goto LABEL_35;
              v14 = v13 - 3;
              if ( v14 )
              {
                v10 = v14 == 2;
LABEL_19:
                if ( !v10 )
                  goto LABEL_21;
              }
            }
          }
          else if ( v3 != 31 )
          {
            v5 = v3 - 15;
            if ( !v5 )
              goto LABEL_35;
            v6 = v5 - 8;
            if ( !v6 )
              goto LABEL_35;
            v7 = v6 - 3;
            if ( v7 )
            {
              v8 = v7 - 2;
              if ( v8 )
              {
                v9 = v8 - 1;
                if ( v9 )
                {
                  v10 = v9 == 1;
                  goto LABEL_19;
                }
              }
LABEL_35:
              KiLastBranchFromBaseMSR = 64;
              KiLastBranchToBaseMSR = 96;
LABEL_22:
              KiLastBranchTOSMSR = 457;
              goto LABEL_39;
            }
          }
        }
LABEL_20:
        KiLastBranchFromBaseMSR = 1664;
        KiLastBranchToBaseMSR = 1728;
        goto LABEL_21;
      }
      if ( v3 > 0x3A )
      {
        v18 = v3 - 60;
        if ( !v18 )
          goto LABEL_20;
        v19 = v18 - 3;
        if ( !v19 )
          goto LABEL_20;
        v20 = v19 - 6;
        if ( !v20 )
          goto LABEL_20;
        v21 = v20 - 1;
        if ( !v21 )
          goto LABEL_20;
        if ( v21 == 7 )
          goto LABEL_35;
      }
      else
      {
        if ( v3 == 58 )
          goto LABEL_20;
        v15 = v3 - 46;
        if ( !v15 )
          goto LABEL_20;
        v16 = v15 - 1;
        if ( !v16 )
          goto LABEL_20;
        v17 = v16 - 6;
        if ( !v17 || v17 - 1 < 2 )
          goto LABEL_35;
      }
LABEL_21:
      if ( !KiLastBranchFromBaseMSR )
        goto LABEL_39;
      goto LABEL_22;
    }
    if ( v4 == 1 )
    {
      KiLastBranchFromBaseMSR = 475;
      KiLastBranchToBaseMSR = 476;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
    }
  }
LABEL_39:
  v23 = *(_BYTE *)(a1 + 141);
  _RAX = 0LL;
  __asm { cpuid }
  v132 = _RAX;
  *(_QWORD *)&v139 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v139 + 1) = __PAIR64__(_RDX, _RCX);
  if ( v23 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
    *(_QWORD *)&v139 = __PAIR64__(_RBX, _RAX);
    *((_QWORD *)&v139 + 1) = __PAIR64__(_RDX, _RCX);
  }
  else if ( v23 != 1 )
  {
    goto LABEL_43;
  }
  *(_QWORD *)(a1 + 35240) = __readmsr(0x8Bu);
LABEL_43:
  _RAX = 1LL;
  __asm { cpuid }
  v39 = _RCX;
  LODWORD(v141) = _RAX;
  v40 = _RBX;
  v41 = (unsigned int)_RDX;
  *(_QWORD *)((char *)&v141 + 4) = __PAIR64__(_RCX, _RBX);
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v131 = _RAX;
  _RAX = 2147483649LL;
  HIDWORD(v141) = v41;
  __asm { cpuid }
  v52 = _RDX;
  v53 = (unsigned int)_RCX;
  LODWORD(v140) = _RAX;
  *(_QWORD *)((char *)&v140 + 4) = __PAIR64__(_RCX, _RBX);
  HIDWORD(v140) = _RDX;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v23 == 1 )
    {
      v54 = *(_BYTE *)(a1 + 64);
      v55 = *(_BYTE *)(a1 + 67);
      v56 = *(_BYTE *)(a1 + 66);
      if ( v54 == 15 )
      {
        if ( (v55 == 107 || v55 == 104) && v56 == 1 )
          KiCacheErrataMonitor |= 1uLL;
      }
      else if ( v54 == 16 && (__PAIR16__(v55, v56) <= 2u || v55 == 2 && (v56 <= 2u || v56 == 10) || v55 == 4 && !v56) )
      {
        KiCacheErrataMonitor |= 2uLL;
      }
    }
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v57 = *(_BYTE *)(a1 + 141);
      if ( v57 == 1 )
      {
        if ( *(_BYTE *)(a1 + 64) == 23 )
          KiAccessBitErrata = 1;
      }
      else if ( v57 == 2 && *(_BYTE *)(a1 + 64) == 6 )
      {
        if ( (v58 = *(unsigned __int8 *)(a1 + 67), (unsigned __int8)v58 <= 0x36u)
          && (v59 = 0x6000C010000000LL, _bittest64(&v59, v58))
          || (LOBYTE(v58) = v58 - 55, (unsigned __int8)v58 <= 0x16u)
          && (v60 = 4718593, _bittest(&v60, v58))
          && *(_BYTE *)(a1 + 66) <= 7u )
        {
          KiAccessBitErrata = 2;
        }
      }
    }
  }
  KiDetectKvaLeakage(a1);
  _m_prefetchw((const void *)a1);
  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    v52 |= 0x100000u;
    HIDWORD(v140) = v52;
  }
  *(_DWORD *)(a1 + 212) = HIBYTE(v40);
  *(_DWORD *)(a1 + 232) = (v40 >> 5) & 0x7F8;
  if ( (v41 & 0x789F3FD) != 0x789F3FD
    || (v52 & 0x800) == 0
    || (v52 & 0x100000) == 0
    || (v39 & 0x2000) == 0
    || (v53 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v41, v52, v53, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v61 = *(_QWORD *)(a1 + 35232) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 35232) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( (v52 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  v62 = v141;
  v63 = v140;
  v64 = *(unsigned __int8 *)(a1 + 141);
  *(_DWORD *)(a1 + 160) = 1;
  *(_DWORD *)(a1 + 164) = 1;
  *(_DWORD *)(a1 + 38344) = 1;
  *(_DWORD *)(a1 + 38348) = 1;
  v137 = v62;
  v138 = v63;
  KiComputeTopologyConstants(v64, v132, v131, (__int64)&v138, (unsigned int *)&v137, (int *)&v133);
  v65 = v133;
  if ( (v133 & 0x10) != 0 )
    *(_DWORD *)(a1 + 212) = v135;
  if ( (v65 & 1) != 0 )
    *(_DWORD *)(a1 + 164) = DWORD2(v133);
  if ( (v65 & 8) != 0 )
    *(_DWORD *)(a1 + 38348) = HIDWORD(v134);
  if ( (v65 & 2) != 0 )
    *(_DWORD *)(a1 + 160) = HIDWORD(v133);
  if ( (v65 & 4) != 0 )
    *(_DWORD *)(a1 + 38344) = v134;
  v66 = BYTE4(v133);
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 164);
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 160);
  v67 = (2 * (v66 & 1) + 1) | 4;
  if ( (v66 & 8) == 0 )
    v67 = 2 * (v66 & 1) + 1;
  v68 = v67 | 8;
  if ( (v66 & 4) == 0 )
    v68 = v67;
  v69 = v68 | 0x10;
  if ( (v66 & 2) == 0 )
    v69 = v68;
  _InterlockedOr(&KiExplicitTopologyLevels, v69);
  v70 = *(_BYTE *)(a1 + 141);
  if ( v70 == 1 )
  {
    v61 |= 0x200000uLL;
  }
  else if ( v70 == 2 )
  {
    v61 |= 0x1000000uLL;
  }
  v71 = *(_DWORD *)(a1 + 36);
  v72 = *(_DWORD *)(a1 + 164);
  if ( v71 && !HalIsHyperThreadingEnabled() )
    v72 *= *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 220) = -v72;
  if ( (unsigned __int8)(v70 - 1) <= 2u )
  {
    if ( v131 < 0x80000008 )
    {
      if ( v70 == 1 )
        KiMtrrMaxRangeShift = 40;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      LODWORD(v139) = _RAX;
      KiMtrrMaxRangeShift = _RAX;
    }
  }
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  v78 = __readcr4();
  if ( (v61 & 1) != 0 )
    v78 |= 0x100000uLL;
  v79 = v78 | 0x10000;
  if ( (v61 & 0x10000000) == 0 )
    v79 = v78;
  if ( KeSmapEnabled )
    v79 |= 0x200000uLL;
  v80 = v79 | 0x800;
  if ( (KeFeatureBits2 & 4) == 0 )
    v80 = v79;
  v81 = v80;
  if ( v71 && (v61 & 0x40000000000LL) != 0 && KiFlushPcid )
    v81 = v80 | 0x20000;
  __writecr4(v81);
  if ( KeSmapEnabled )
    __asm { stac }
  if ( (v81 & 0x20000) != 0 )
  {
    v82 = __readcr3();
    __writecr3(v82 | 2);
  }
  v83 = *(_BYTE *)(a1 + 141);
  if ( v83 == 2 && v132 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
        v61 |= 0x100000000000uLL;
    }
  }
  v94 = v61 | 0x20000;
  v95 = 0x10000000000LL;
  if ( !v136 )
    v94 = v61;
  v96 = v94;
  if ( v83 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) != 0 )
    {
      v102 = v94;
      if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL )
      {
        v103 = __readmsr(0x48Bu);
        if ( (v103 & 0x200000000LL) != 0 )
          v102 = v94 | 0x4000000;
        if ( (v102 & 1) != 0 && (v103 & 0x40000000000000LL) != 0 )
          HvlSetHardwareMbecAvailable();
        if ( (v103 & v95) != 0 )
          HvlSetApicVirtualizationAvailable();
      }
      v104 = __readmsr(0x3Au);
      v96 = v102 | 0x8000000;
      if ( (v104 & 5) != 5 )
        v96 = v102;
      if ( (v104 & 4) != 0 )
        KiVirtFlags |= 1u;
      if ( (v104 & 1) != 0 )
        KiVirtFlags |= 2u;
    }
  }
  else if ( v83 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) != 0 )
        v96 = v94 | 0x4000000;
      if ( (_RDX & 0x20000) != 0 )
        HvlSetHardwareMbecAvailable();
      if ( (_RDX & 0x2000) != 0 )
        HvlSetApicVirtualizationAvailable();
    }
    v115 = __readmsr(0xC0010114);
    if ( (v115 & 0x10) == 0 )
    {
      v96 |= 0x8000000uLL;
      KiVirtFlags |= 1u;
    }
  }
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v121 = __readmsr(0x3Au);
      if ( (v121 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        if ( (_RAX & 1) != 0 )
        {
          v127 = MmWriteableSharedUserData;
          v96 |= v95;
          v128 = *(_DWORD *)(MmWriteableSharedUserData + 876) | 2;
          *(_DWORD *)(MmWriteableSharedUserData + 876) = v128;
          if ( (_RAX & 2) != 0 )
          {
            v96 |= 0x80000000000uLL;
            *(_DWORD *)(v127 + 876) = v128 | 4;
          }
        }
      }
    }
  }
  KiApplyProcessorErrata((_BYTE *)a1);
  KiInitializeHgsPlusWorkloadClasses(v129, *(unsigned int *)(a1 + 36));
  result = KiInitializeHresetSupport(*(unsigned int *)(a1 + 36));
  *(_QWORD *)(a1 + 35232) = v96;
  return result;
}
