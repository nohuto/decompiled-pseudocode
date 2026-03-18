/*
 * XREFs of KiSetFeatureBits @ 0x140A8D4C4
 * Callers:
 *     KiInitializeBootStructures @ 0x140A8B590 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlSetHardwareMbecAvailable @ 0x14036F154 (HvlSetHardwareMbecAvailable.c)
 *     KiComputeTopologyConstants @ 0x14038157C (KiComputeTopologyConstants.c)
 *     HviIsAnyHypervisorPresent @ 0x140382850 (HviIsAnyHypervisorPresent.c)
 *     HalIsHyperThreadingEnabled @ 0x1403828A0 (HalIsHyperThreadingEnabled.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     Feature_2064863544__private_IsEnabledDeviceUsage @ 0x140410CFC (Feature_2064863544__private_IsEnabledDeviceUsage.c)
 *     KiApplyProcessorErrata @ 0x140410D50 (KiApplyProcessorErrata.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     HvlSetApicVirtualizationAvailable @ 0x14053FD8C (HvlSetApicVirtualizationAvailable.c)
 *     KiGetProcessorSignature @ 0x140A8B9F8 (KiGetProcessorSignature.c)
 *     KiInitializeHgsPlusWorkloadClasses @ 0x140A8DEE4 (KiInitializeHgsPlusWorkloadClasses.c)
 *     KiInitializeHresetSupport @ 0x140A8DF5C (KiInitializeHresetSupport.c)
 *     KiDetectKvaLeakage @ 0x140A8DFD8 (KiDetectKvaLeakage.c)
 *     KiSetProcessorSignature @ 0x140A8E554 (KiSetProcessorSignature.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 */

__int64 __fastcall KiSetFeatureBits(__int64 a1)
{
  char v2; // di
  unsigned int v3; // ebx
  __int64 v4; // r8
  char v5; // al
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  bool v19; // zf
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int ProcessorSignature; // eax
  ULONG_PTR v40; // r13
  unsigned int v41; // edi
  unsigned int v52; // r15d
  ULONG_PTR v53; // r12
  _DWORD *v54; // rbx
  char v55; // al
  unsigned __int8 v56; // cl
  char v57; // al
  unsigned __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rdi
  char v61; // cl
  char v62; // r11
  int v63; // edx
  int v64; // ecx
  unsigned int v65; // eax
  char v66; // r15
  int v67; // r12d
  int v68; // ebx
  char IsHyperThreadingEnabled; // al
  unsigned __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  unsigned __int64 v79; // rax
  char v80; // r10
  __int64 v89; // r8
  __int64 v90; // rdi
  unsigned __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // r9
  unsigned __int64 v98; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v114; // rax
  char v119; // r8
  int v120; // eax
  char v121; // al
  unsigned int *v122; // rax
  __int64 result; // rax
  bool v124; // [rsp+30h] [rbp-D8h]
  unsigned int v125; // [rsp+40h] [rbp-C8h]
  unsigned int v126; // [rsp+44h] [rbp-C4h]
  __int16 v127; // [rsp+48h] [rbp-C0h]
  __int128 v128; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v129; // [rsp+60h] [rbp-A8h]
  int v130; // [rsp+68h] [rbp-A0h]
  __int64 v131; // [rsp+70h] [rbp-98h]
  __int128 v132; // [rsp+80h] [rbp-88h] BYREF
  __int128 v133; // [rsp+90h] [rbp-78h] BYREF
  __int128 v134; // [rsp+A0h] [rbp-68h]
  __int128 v135; // [rsp+B0h] [rbp-58h]
  __int128 v136; // [rsp+C0h] [rbp-48h]

  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  v130 = 0;
  v2 = *(_BYTE *)(a1 + 64);
  v3 = *(unsigned __int8 *)(a1 + 67);
  v124 = (unsigned __int8)(*(_BYTE *)(a1 + 141) - 1) <= 1u;
  v131 = a1 + 36;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature(0LL, 0LL, 0LL, 0LL);
    KiSetProcessorSignature(a1, ProcessorSignature);
    goto LABEL_40;
  }
  Feature_MSRC101641_Enabled = Feature_2064863544__private_IsEnabledDeviceUsage() != 0;
  v5 = *(_BYTE *)(a1 + 141);
  if ( v5 == 2 )
  {
    if ( v2 != 6 )
      goto LABEL_40;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
    if ( v3 <= 0x2D )
    {
      if ( v3 == 45 )
        goto LABEL_14;
      if ( v3 > 0x1F )
      {
        v11 = v3 - 37;
        if ( !v11 )
          goto LABEL_14;
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 3;
            if ( v14 && v14 != 2 )
            {
LABEL_15:
              if ( KiLastBranchFromBaseMSR )
                KiLastBranchTOSMSR = 457;
              goto LABEL_40;
            }
            goto LABEL_14;
          }
        }
      }
      else
      {
        if ( v3 == 31 )
          goto LABEL_14;
        v6 = v3 - 15;
        if ( v6 )
        {
          v7 = v6 - 8;
          if ( v7 )
          {
            v8 = v7 - 3;
            if ( v8 )
            {
              v9 = v8 - 2;
              if ( v9 )
              {
                v10 = v9 - 1;
                if ( v10 )
                {
                  if ( v10 != 1 )
                    goto LABEL_15;
                  goto LABEL_14;
                }
              }
              goto LABEL_36;
            }
LABEL_14:
            KiLastBranchFromBaseMSR = 1664;
            KiLastBranchToBaseMSR = 1728;
            goto LABEL_15;
          }
        }
      }
LABEL_36:
      KiLastBranchFromBaseMSR = 64;
      KiLastBranchToBaseMSR = 96;
      goto LABEL_15;
    }
    if ( v3 > 0x3A )
    {
      v20 = v3 - 60;
      if ( !v20 )
        goto LABEL_14;
      v21 = v20 - 3;
      if ( !v21 )
        goto LABEL_14;
      v22 = v21 - 6;
      if ( !v22 )
        goto LABEL_14;
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_14;
      v19 = v23 == 7;
    }
    else
    {
      if ( v3 == 58 )
        goto LABEL_14;
      v15 = v3 - 46;
      if ( !v15 )
        goto LABEL_14;
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_14;
      v17 = v16 - 6;
      if ( !v17 )
        goto LABEL_36;
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_36;
      v19 = v18 == 1;
    }
    if ( !v19 )
      goto LABEL_15;
    goto LABEL_36;
  }
  if ( v5 == 1 )
  {
    KiLastBranchFromBaseMSR = 475;
    KiLastBranchToBaseMSR = 476;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
  }
LABEL_40:
  _RAX = 0LL;
  __asm { cpuid }
  v126 = _RAX;
  *(_QWORD *)&v134 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v134 + 1) = __PAIR64__(_RDX, _RCX);
  LOBYTE(v4) = *(_BYTE *)(a1 + 141);
  if ( (_BYTE)v4 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
    *(_QWORD *)&v134 = __PAIR64__(_RBX, _RAX);
    *((_QWORD *)&v134 + 1) = __PAIR64__(_RDX, _RCX);
  }
  else if ( (_BYTE)v4 != 1 )
  {
    goto LABEL_44;
  }
  *(_QWORD *)(a1 + 35240) = __readmsr(0x8Bu);
LABEL_44:
  _RAX = 1LL;
  __asm { cpuid }
  v40 = (unsigned int)_RDX;
  v127 = _RCX;
  v41 = _RBX;
  *(_QWORD *)&v136 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v136 + 1) = __PAIR64__(_RDX, _RCX);
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v125 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v52 = _RDX;
  v53 = (unsigned int)_RCX;
  *(_QWORD *)&v135 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v135 + 1) = __PAIR64__(_RDX, _RCX);
  v54 = (_DWORD *)(a1 + 36);
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( (_BYTE)v4 == 1 )
    {
      LOBYTE(_RDX) = *(_BYTE *)(a1 + 64);
      v55 = *(_BYTE *)(a1 + 67);
      v56 = *(_BYTE *)(a1 + 66);
      if ( (_BYTE)_RDX == 15 && (v55 == 107 || v55 == 104) && v56 == 1 )
      {
        KiCacheErrataMonitor |= 1uLL;
      }
      else if ( (_BYTE)_RDX == 16 && (!v55 && v56 <= 2u || v55 == 2 && (v56 <= 2u || v56 == 10) || v55 == 4 && !v56) )
      {
        KiCacheErrataMonitor |= 2uLL;
      }
    }
    if ( !*v54 )
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
          && (_RDX = 0x6000C010000000LL, _bittest64(&_RDX, v58))
          || (LOBYTE(v58) = v58 - 55, (unsigned __int8)v58 <= 0x16u)
          && (v59 = 4718593, _bittest(&v59, v58))
          && *(_BYTE *)(a1 + 66) <= 7u )
        {
          KiAccessBitErrata = 2;
        }
      }
    }
  }
  KiDetectKvaLeakage(a1, _RDX, v4, 1LL);
  _m_prefetchw((const void *)a1);
  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    v52 |= 0x100000u;
    HIDWORD(v135) = v52;
  }
  *(_DWORD *)(a1 + 212) = HIBYTE(v41);
  *(_DWORD *)(a1 + 232) = (v41 >> 5) & 0x7F8;
  if ( (v40 & 0x789F3FD) != 0x789F3FD
    || (v52 & 0x800) == 0
    || (v52 & 0x100000) == 0
    || (v127 & 0x2000) == 0
    || (v53 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*v54 )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v40, v52, v53, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v60 = *(_QWORD *)(a1 + 35232) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 35232) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( (v52 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  *(_DWORD *)(a1 + 160) = 1;
  *(_DWORD *)(a1 + 164) = 1;
  *(_DWORD *)(a1 + 38344) = 1;
  *(_DWORD *)(a1 + 38348) = 1;
  v132 = v136;
  v133 = v135;
  KiComputeTopologyConstants(
    *(unsigned __int8 *)(a1 + 141),
    v126,
    v125,
    (__int64)&v133,
    (unsigned int *)&v132,
    (int *)&v128);
  v61 = v128;
  if ( (v128 & 0x10) != 0 )
    *(_DWORD *)(a1 + 212) = v130;
  v62 = 1;
  if ( (v61 & 1) != 0 )
    *(_DWORD *)(a1 + 164) = DWORD2(v128);
  if ( (v61 & 8) != 0 )
    *(_DWORD *)(a1 + 38348) = HIDWORD(v129);
  if ( (v61 & 2) != 0 )
    *(_DWORD *)(a1 + 160) = HIDWORD(v128);
  if ( (v61 & 4) != 0 )
    *(_DWORD *)(a1 + 38344) = v129;
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 164);
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 160);
  v63 = (2 * (BYTE4(v128) & 1) + 1) | 4;
  if ( (BYTE4(v128) & 8) == 0 )
    v63 = 2 * (BYTE4(v128) & 1) + 1;
  v64 = v63 | 8;
  if ( (BYTE4(v128) & 4) == 0 )
    v64 = v63;
  v65 = v64 | 0x10;
  if ( (BYTE4(v128) & 2) == 0 )
    v65 = v64;
  _InterlockedOr(&KiExplicitTopologyLevels, v65);
  v66 = *(_BYTE *)(a1 + 141);
  if ( v66 == 1 )
  {
    v60 |= 0x200000uLL;
  }
  else if ( v66 == 2 )
  {
    v60 |= 0x1000000uLL;
  }
  v67 = *(_DWORD *)(a1 + 36);
  v68 = *(_DWORD *)(a1 + 164);
  if ( v67 )
  {
    IsHyperThreadingEnabled = HalIsHyperThreadingEnabled();
    v62 = 1;
    if ( !IsHyperThreadingEnabled )
      v68 *= *(_DWORD *)(a1 + 160);
  }
  *(_DWORD *)(a1 + 220) = -v68;
  if ( (unsigned __int8)(v66 - 1) > 2u || v125 < 0x80000008 )
  {
    if ( v66 == 1 )
      KiMtrrMaxRangeShift = 40;
  }
  else
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    LODWORD(v134) = _RAX;
    KiMtrrMaxRangeShift = _RAX;
  }
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  v75 = __readcr4();
  if ( (v60 & 1) != 0 )
    v75 |= 0x100000uLL;
  v76 = v75 | 0x10000;
  if ( (v60 & 0x10000000) == 0 )
    v76 = v75;
  if ( KeSmapEnabled )
    v76 |= 0x200000uLL;
  v77 = v76 | 0x800;
  if ( (KeFeatureBits2 & 4) == 0 )
    v77 = v76;
  _RCX = v77;
  if ( v67 && (v60 & 0x40000000000LL) != 0 && KiFlushPcid )
    _RCX = v77 | 0x20000;
  __writecr4(_RCX);
  if ( KeSmapEnabled )
    __asm { stac }
  if ( (_RCX & 0x20000) != 0 )
  {
    v79 = __readcr3();
    __writecr3(v79 | 2);
  }
  v80 = *(_BYTE *)(a1 + 141);
  if ( v80 == 2 && v126 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
        v60 |= 0x100000000000uLL;
    }
  }
  v89 = v60 | 0x20000;
  if ( !v124 )
    v89 = v60;
  v90 = v89;
  if ( v80 != 2 )
  {
    if ( v80 == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x8000000A )
      {
        _RAX = 2147483658LL;
        __asm { cpuid }
        v90 = v89 | 0x4000000;
        if ( (_RDX & 1) == 0 )
          v90 = v89;
        if ( (_RDX & 0x20000) != 0 )
          HvlSetHardwareMbecAvailable();
        if ( (_RDX & 0x2000) != 0 )
          HvlSetApicVirtualizationAvailable();
      }
      _RCX = 3221291284LL;
      v109 = __readmsr(0xC0010114);
      if ( (v109 & 0x10) == 0 )
      {
        v90 |= 0x8000000uLL;
        KiVirtFlags |= v62;
      }
    }
    goto LABEL_162;
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x20) == 0 )
  {
LABEL_162:
    v97 = 0x10000000000LL;
    goto LABEL_163;
  }
  if ( (__readmsr(0x482u) & 0x8000000000000000uLL) == 0LL )
  {
    v97 = 0x10000000000LL;
  }
  else
  {
    v95 = __readmsr(0x48Bu);
    v96 = v89 | 0x4000000;
    if ( (v95 & 0x200000000LL) == 0 )
      v96 = v89;
    v89 = v96;
    if ( (v96 & 1) != 0 && (v95 & 0x40000000000000LL) != 0 )
      HvlSetHardwareMbecAvailable();
    v97 = 0x10000000000LL;
    if ( (v95 & 0x10000000000LL) != 0 )
      HvlSetApicVirtualizationAvailable();
  }
  _RCX = 58LL;
  v98 = __readmsr(0x3Au);
  LOBYTE(_RCX) = v98 & 5;
  v90 = v89 | 0x8000000;
  if ( (v98 & 5) != 5 )
    v90 = v89;
  if ( (v98 & 4) != 0 )
    KiVirtFlags |= v62;
  if ( ((unsigned __int8)v98 & (unsigned __int8)v62) != 0 )
    KiVirtFlags |= 2u;
LABEL_163:
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v114 = __readmsr(0x3Au);
      _RCX = 262145LL;
      if ( (v114 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        v119 = _RAX;
        if ( ((unsigned __int8)_RAX & (unsigned __int8)v62) != 0 )
        {
          v90 |= v97;
          _RCX = MmWriteableSharedUserData;
          v120 = *(_DWORD *)(MmWriteableSharedUserData + 876) | 2;
          *(_DWORD *)(MmWriteableSharedUserData + 876) = v120;
          if ( (v119 & 2) != 0 )
          {
            v90 |= 0x80000000000uLL;
            *(_DWORD *)(_RCX + 876) = v120 | 4;
          }
        }
      }
    }
  }
  if ( Feature_MSRC101641_Enabled )
  {
    KiApplyProcessorErrata((_BYTE *)a1);
LABEL_176:
    v122 = (unsigned int *)(a1 + 36);
    goto LABEL_177;
  }
  if ( *(_BYTE *)(a1 + 141) != v62 )
    goto LABEL_176;
  v121 = *(_BYTE *)(a1 + 64);
  if ( v121 <= 15 || v121 == 17 || HviIsAnyHypervisorPresent() )
    goto LABEL_176;
  _RCX = 3221295145LL;
  __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
  v122 = (unsigned int *)(a1 + 36);
LABEL_177:
  KiInitializeHgsPlusWorkloadClasses(_RCX, *v122);
  result = KiInitializeHresetSupport(*(unsigned int *)(a1 + 36));
  *(_QWORD *)(a1 + 35232) = v90;
  return result;
}
