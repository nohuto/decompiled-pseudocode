/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0091450
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0002CE0 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C002E00C (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppqPR2TR2_EtwWriteTransfer @ 0x1C002E630 (McTemplateK0ppqPR2TR2_EtwWriteTransfer.c)
 *     ?VidMmiAddProbeAndLockReference@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085C2C (-VidMmiAddProbeAndLockReference@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0085D80 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00A6554 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00A67B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C00D50A8 (-AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        union _LARGE_INTEGER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        union _LARGE_INTEGER *a9,
        struct VIDMM_ALLOC **a10,
        struct _VIDMM_PRIMARIES_REFERENCES *a11,
        struct DXGALLOCATION **a12)
{
  unsigned int v12; // r14d
  unsigned __int64 *p_QuadPart; // r13
  __int64 v16; // r8
  unsigned int v17; // eax
  union _LARGE_INTEGER v18; // rax
  struct VIDMM_ALLOC *v19; // rdx
  unsigned int v20; // edi
  int v21; // r11d
  struct VIDMM_ALLOC **v22; // r12
  VIDMM_SEGMENT *v23; // r10
  struct _D3DDDI_ALLOCATIONLIST *v24; // r15
  struct DXGALLOCATION *v25; // rax
  struct VIDMM_ALLOC *v26; // r13
  __int64 v27; // r14
  _DWORD *v28; // rax
  __int64 v29; // rcx
  unsigned int *v30; // rdx
  unsigned int v31; // ecx
  unsigned __int64 *v32; // r15
  union _LARGE_INTEGER v33; // r8
  __int64 *i; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // r14
  int v41; // eax
  int v42; // eax
  struct VIDMM_ALLOC *v43; // r14
  unsigned int v44; // eax
  __int64 v45; // rax
  int v46; // r9d
  struct VIDMM_SEGMENT *v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // ebx
  int v50; // r14d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rcx
  struct _VIDMM_PRIMARIES_REFERENCES *v57; // rcx
  int v58; // eax
  _DWORD *v59; // rdx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // edi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rcx
  struct VIDMM_ALLOC *v68; // rdi
  __int64 v69; // rcx
  int v70; // eax
  LONGLONG v71; // rdx
  union _LARGE_INTEGER v72; // rdi
  signed int v73; // r14d
  unsigned int v74; // edi
  __int64 v76; // rax
  union _LARGE_INTEGER v77; // r12
  union _LARGE_INTEGER v78; // r14
  __int64 v79; // r15
  __int64 j; // rsi
  __int64 v81; // rdx
  __int64 v82; // r8
  int *v83; // r9
  signed __int32 v84[8]; // [rsp+0h] [rbp-398h] BYREF
  unsigned __int64 v85; // [rsp+20h] [rbp-378h]
  struct VIDMM_ALLOC *v86; // [rsp+28h] [rbp-370h]
  struct VIDMM_SEGMENT *v87; // [rsp+30h] [rbp-368h]
  unsigned __int8 v88[8]; // [rsp+38h] [rbp-360h]
  unsigned int v89; // [rsp+50h] [rbp-348h]
  int v90; // [rsp+54h] [rbp-344h]
  VIDMM_SEGMENT *v91; // [rsp+58h] [rbp-340h]
  unsigned __int64 *v92; // [rsp+60h] [rbp-338h]
  struct VIDMM_ALLOC *v93; // [rsp+68h] [rbp-330h]
  VIDMM_SEGMENT *v94; // [rsp+70h] [rbp-328h]
  struct VIDMM_ALLOC **QuadPart; // [rsp+78h] [rbp-320h]
  unsigned int v96; // [rsp+80h] [rbp-318h]
  __int64 v97; // [rsp+88h] [rbp-310h]
  struct VIDMM_ALLOC *v98; // [rsp+90h] [rbp-308h]
  struct _D3DDDI_ALLOCATIONLIST *v99; // [rsp+98h] [rbp-300h]
  unsigned int *v100; // [rsp+A0h] [rbp-2F8h]
  __int64 v101; // [rsp+A8h] [rbp-2F0h]
  struct _VIDMM_PRIMARIES_REFERENCES *v102; // [rsp+B0h] [rbp-2E8h]
  __int64 v103; // [rsp+B8h] [rbp-2E0h]
  union _LARGE_INTEGER *v104; // [rsp+C0h] [rbp-2D8h]
  struct DXGALLOCATION **v105; // [rsp+C8h] [rbp-2D0h]
  struct DXGPROCESS *Current; // [rsp+D0h] [rbp-2C8h]
  VIDMM_SEGMENT *v107; // [rsp+D8h] [rbp-2C0h]
  __int64 v108; // [rsp+E0h] [rbp-2B8h]
  struct VIDMM_ALLOC **v109; // [rsp+E8h] [rbp-2B0h]
  unsigned __int64 *v110; // [rsp+F0h] [rbp-2A8h]
  char *v111; // [rsp+F8h] [rbp-2A0h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-298h]
  PRKPROCESS *v113; // [rsp+108h] [rbp-290h]
  struct _KTHREAD *v114; // [rsp+110h] [rbp-288h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-280h] BYREF
  _BYTE v116[512]; // [rsp+150h] [rbp-248h] BYREF

  v12 = a4;
  v96 = a4;
  v104 = a8;
  v99 = a3;
  v100 = a7;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v92 = (unsigned __int64 *)&a9->QuadPart;
  v110 = (unsigned __int64 *)&a9->QuadPart;
  v109 = a10;
  v102 = a11;
  v105 = a12;
  v89 = 0;
  QuadPart = (struct VIDMM_ALLOC **)a2[13].QuadPart;
  v94 = (VIDMM_SEGMENT *)a2[14].QuadPart;
  Current = DXGPROCESS::GetCurrent();
  v16 = *(_QWORD *)(a2[17].QuadPart + 16);
  v103 = v16;
  if ( a9 )
    *a9 = a2[12];
  *a10 = 0LL;
  ++*((_DWORD *)this + 1798);
  *((_DWORD *)this + 1799) += v12;
  v17 = *((_DWORD *)this + 1800);
  if ( v12 > v17 )
    v17 = v12;
  *((_DWORD *)this + 1800) = v17;
  a2[3].HighPart |= 4u;
  v18 = *(union _LARGE_INTEGER *)(*(_QWORD *)a2[17].QuadPart + 40LL);
  _InterlockedOr(v84, 0);
  a2[19] = v18;
  *(_DWORD *)a11 = 0;
  v101 = 0LL;
  v19 = 0LL;
  v98 = 0LL;
  v20 = 0;
  v89 = 0;
  v21 = a6;
  v22 = QuadPart;
  v23 = v94;
  v24 = v99;
  while ( 1 )
  {
    v91 = v23;
    if ( v20 >= v12 )
      break;
    if ( !v24->hAllocation )
    {
      ++*((_DWORD *)this + 1801);
      *v22 = 0LL;
      *(_OWORD *)v23 = 0LL;
      *((_QWORD *)v23 + 2) = 0LL;
      goto LABEL_60;
    }
    v25 = v105[v20];
    if ( !v25 )
    {
      WdLogSingleEntry2(2LL, v24->hAllocation, v20);
      v49 = -1071775468;
      v90 = -1071775468;
      v50 = a6;
LABEL_151:
      if ( !p_QuadPart && v20 )
      {
        do
        {
          if ( *--v22 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v22, v50);
          --v20;
        }
        while ( v20 );
      }
      return v49;
    }
    v26 = (struct VIDMM_ALLOC *)*((_QWORD *)v25 + 3);
    v93 = v26;
    v27 = **(_QWORD **)v26;
    v28 = *(_DWORD **)(v27 + 528);
    v29 = *v28 >> 14;
    if ( (*v28 & 0x4000) != 0 )
    {
      if ( v19 || (v24->Value & 1) == 0 )
      {
        WdLogSingleEntry3(1LL, v26, v19, v24->Value & 1);
        v47 = (struct VIDMM_SEGMENT *)(v24->Value & 1);
        *(_QWORD *)v88 = 0LL;
        v87 = v47;
        v86 = v98;
        v85 = (unsigned __int64)v26;
        DxgkLogInternalTriageEvent(v48, 0x40000LL);
        v49 = -1071775482;
        v90 = -1071775482;
        v50 = a6;
        p_QuadPart = v92;
        goto LABEL_151;
      }
      v98 = v26;
    }
    if ( *(_BYTE *)(v27 + 81) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v29, v19, v16, v20);
        v55 = WdLogNewEntry5_WdTrace(v52, v51, v53, v54);
        *(_QWORD *)(v55 + 24) = a2;
        *(_QWORD *)(v55 + 32) = v26;
      }
      v49 = -1071775482;
      v90 = -1071775482;
      v50 = a6;
      p_QuadPart = v92;
      goto LABEL_151;
    }
    if ( *((_QWORD *)v26 + 1) != v16 && (*((_DWORD *)Current + 106) & 0x100) == 0 )
    {
      WdLogSingleEntry4(2LL, v103, v26, v20, *((_QWORD *)v26 + 1));
      v49 = -1071775467;
      v90 = -1071775467;
      v50 = a6;
      p_QuadPart = v92;
      goto LABEL_151;
    }
    if ( *(_WORD *)(*((_QWORD *)v26 + 12) + 4LL) && a5 )
    {
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        WdLogSingleEntry2(1LL, a2, v26);
        *(_QWORD *)v88 = 0LL;
        v87 = 0LL;
        v86 = v26;
        v85 = (unsigned __int64)a2;
        DxgkLogInternalTriageEvent(v56, 0x40000LL);
        v49 = -1071775466;
        v90 = -1071775466;
        v50 = a6;
        p_QuadPart = v92;
        goto LABEL_151;
      }
      WdLogSingleEntry2(2LL, a2, v26);
      v23 = v91;
      v21 = a6;
    }
    *v22 = v26;
    *(_QWORD *)v23 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 32LL);
    if ( (v24->Value & 1) != 0 && *((_BYTE *)v26 + 24) && *(int *)(*((_QWORD *)this + 3) + 2424LL) >= 4608 )
    {
      WdLogSingleEntry0(3LL);
      WdLogSingleEntry2(3LL, a2, v26);
      v49 = -1073741790;
      v90 = -1073741790;
      v50 = a6;
      p_QuadPart = v92;
      goto LABEL_151;
    }
    v30 = (unsigned int *)((char *)v23 + 8);
    v31 = v24->Value & 1 | *((_DWORD *)v23 + 2) & 0xFFFFFFFE;
    *((_DWORD *)v23 + 2) = v31;
    if ( (v24->Value & 1) != 0 )
    {
      ++*((_DWORD *)this + 1802);
      v31 = *v30;
    }
    if ( (v31 & 1) != 0 )
    {
      if ( (**(_DWORD **)(v27 + 528) & 0x200000) != 0 )
      {
        *((_DWORD *)v102 + 34) |= 1u;
        v31 = *v30;
      }
      if ( (v31 & 1) != 0
        && ((**(_DWORD **)(v27 + 528) >> 23) | ((unsigned __int16)**(_DWORD **)(v27 + 528) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v27 + 528) | (**(_DWORD **)(v27 + 528) >> 11)) >> 11)) & 0x100u) >= 0x100 )
      {
        v57 = v102;
        if ( *(_DWORD *)v102 >= 0x10u )
        {
          ++*((_DWORD *)this + 1808);
        }
        else
        {
          v111 = (char *)v26 + 104;
          _InterlockedIncrement((volatile signed __int32 *)v26 + 26);
          v26 = v93;
          *((_QWORD *)v57 + *(unsigned int *)v57 + 1) = v93;
          v23 = v94;
        }
        ++*(_DWORD *)v57;
      }
    }
    v91 = *(VIDMM_SEGMENT **)(v27 + 120);
    v32 = v92;
    if ( v92 )
      goto LABEL_23;
    if ( !v91 || (*((_DWORD *)this + 1764) & 0x40) != 0 )
    {
      v26 = v93;
      v23 = v94;
LABEL_23:
      ++*((_DWORD *)this + 1806);
      *v30 &= 0xFFFFFFC1;
      if ( v32 )
      {
        v33 = a2[17];
        if ( (*(_DWORD *)(v33.QuadPart + 32) & 0x20) != 0 )
        {
          v35 = *((_QWORD *)v26 + 18);
        }
        else
        {
          for ( i = (__int64 *)*((_QWORD *)v26 + 16); i != (__int64 *)((char *)v26 + 128); i = (__int64 *)*i )
          {
            if ( ((*((_DWORD *)i + 10) >> 4) & 0x3F) == *(_DWORD *)(v33.QuadPart + 8) )
            {
              v35 = i[9];
              goto LABEL_29;
            }
          }
          v35 = 0LL;
LABEL_29:
          v108 = v35;
        }
        *((_QWORD *)v23 + 2) = v35;
      }
      else
      {
        *((_QWORD *)v23 + 2) = 0LL;
      }
      a2[3].HighPart &= ~4u;
      if ( (VIDMM_GLOBAL::_Config & 1) != 0
        || (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 4) != 0
        || !*(_BYTE *)(v27 + 82) && (*(_DWORD *)(v27 + 68) & 0x400) == 0 )
      {
        goto LABEL_54;
      }
      KeEnterCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v27 + 320) == CurrentThread )
      {
        v60 = *(_DWORD *)(v27 + 328);
        if ( v60 <= 0 )
        {
          WdLogSingleEntry1(1LL, 472LL);
          *(_QWORD *)v88 = 0LL;
          v87 = 0LL;
          v86 = 0LL;
          v85 = 472LL;
          DxgkLogInternalTriageEvent(v61, 262146LL);
          v60 = *(_DWORD *)(v27 + 328);
        }
        *(_DWORD *)(v27 + 328) = v60 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v27 + 304, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v46 = *(_DWORD *)(v27 + 332);
            if ( v46 != -1 && (byte_1C006E941 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventBlockThread, v37, v46);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v27 + 312));
          ExAcquirePushLockExclusiveEx(v27 + 304, 0LL);
        }
        if ( *(_QWORD *)(v27 + 320) )
        {
          WdLogSingleEntry1(1LL, 496LL);
          *(_QWORD *)v88 = 0LL;
          v87 = 0LL;
          v86 = 0LL;
          v85 = 496LL;
          DxgkLogInternalTriageEvent(v62, 262146LL);
        }
        if ( *(_DWORD *)(v27 + 328) )
        {
          WdLogSingleEntry1(1LL, 497LL);
          *(_QWORD *)v88 = 0LL;
          v87 = 0LL;
          v86 = 0LL;
          v85 = 497LL;
          DxgkLogInternalTriageEvent(v63, 262146LL);
        }
        *(_QWORD *)(v27 + 320) = KeGetCurrentThread();
        *(_DWORD *)(v27 + 328) = 1;
      }
      v101 = v27;
      v38 = *(_QWORD *)(v27 + 96);
      if ( v38 )
        goto LABEL_65;
      if ( (*(_DWORD *)(v27 + 72) & 0xA000) != 0 )
      {
        v45 = *(_QWORD *)(v27 + 544);
      }
      else
      {
        v39 = *(_QWORD **)(v27 + 88);
        if ( v39[3] )
        {
          v45 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v39[1] + 24LL) + 88LL))(*(_QWORD *)(v39[1] + 24LL));
        }
        else
        {
          v38 = v39[10];
          if ( !v38 )
            goto LABEL_45;
LABEL_65:
          v45 = *(_QWORD *)(v38 + 8);
        }
      }
      v97 = v45;
      if ( !v45 )
      {
LABEL_45:
        if ( !*(_QWORD *)(v27 + 120)
          && (**(_DWORD **)(v27 + 528) & 0x40000000) == 0
          && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v27 + 8)) >= 0 )
        {
          v64 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          v65 = *(_QWORD *)(v27 + 88);
          if ( v65 )
          {
            v113 = *(PRKPROCESS **)(v65 + 8);
            KeStackAttachProcess(*v113, &ApcState);
            v64 = 1;
            v65 = *(_QWORD *)(v27 + 88);
          }
          if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                      this,
                      (struct _VIDMM_LOCAL_ALLOC *)v65,
                      (struct _VIDMM_GLOBAL_ALLOC *)v27,
                      0LL,
                      *(_QWORD *)(v27 + 8),
                      (enum _LOCK_OPERATION)v86,
                      0LL,
                      0) < 0 )
          {
            WdLogSingleEntry1(2LL, v27);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v27 + 8));
          }
          else
          {
            VidMmiAddProbeAndLockReference((struct _VIDMM_GLOBAL_ALLOC *)v27);
            *(_DWORD *)(v27 + 76) |= 2u;
          }
          if ( v64 )
            KeUnstackDetachProcess(&ApcState);
        }
      }
      v101 = 0LL;
      v40 = v27 + 296;
      v114 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v40 + 24) != v114 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, v40, 0LL, 0LL);
      v41 = *(_DWORD *)(v40 + 32);
      if ( v41 <= 0 )
      {
        WdLogSingleEntry1(1LL, 516LL);
        *(_QWORD *)v88 = 0LL;
        v87 = 0LL;
        v86 = 0LL;
        v85 = 516LL;
        DxgkLogInternalTriageEvent(v66, 262146LL);
        v41 = *(_DWORD *)(v40 + 32);
      }
      v42 = v41 - 1;
      *(_DWORD *)(v40 + 32) = v42;
      if ( !v42 )
      {
        *(_QWORD *)(v40 + 24) = 0LL;
        ExReleasePushLockExclusiveEx(v40 + 8, 0LL);
      }
      KeLeaveCriticalRegion();
      v21 = a6;
      goto LABEL_53;
    }
    ++*((_DWORD *)this + 1805);
    v58 = VIDMM_SEGMENT::DriverId(v91);
    *v59 ^= (*v59 ^ (2 * v58)) & 0x3E;
    v107 = v91;
    *((_QWORD *)v94 + 2) = *(_QWORD *)(v27 + 128) + *((_QWORD *)v91 + 3);
LABEL_53:
    v26 = v93;
LABEL_54:
    if ( !v32 )
    {
      VIDMM_GLOBAL::AddDMAReferences(v26, v21);
      v21 = a6;
    }
    v43 = v93;
    if ( !*((_DWORD *)v26 + 38)
      && (*((_BYTE *)v93 + 25) & 1) == 0
      && ((*((_BYTE *)this + 40936) & 4) == 0 || (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 0x10) == 0) )
    {
      WdLogSingleEntry1(1LL, v93);
      *(_QWORD *)v88 = 0LL;
      v87 = 0LL;
      v86 = 0LL;
      v85 = (unsigned __int64)v43;
      DxgkLogInternalTriageEvent(v67, 0x40000LL);
      v49 = -1073741823;
      v90 = -1073741823;
      VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v43 + 1) + 32LL));
      p_QuadPart = v32;
      if ( !v32 )
        VIDMM_GLOBAL::RemoveDMAReferences(v43, a6);
      v20 = v89;
      v22 = QuadPart;
      v50 = a6;
      goto LABEL_151;
    }
    v24 = v99;
    v44 = (v99->Value >> 2) & 7;
    if ( v44 )
    {
      v68 = (struct VIDMM_ALLOC *)v44;
      WdLogSingleEntry2(1LL, v93, v44);
      *(_QWORD *)v88 = 0LL;
      v87 = 0LL;
      v86 = v68;
      v85 = (unsigned __int64)v43;
      DxgkLogInternalTriageEvent(v69, 0x40000LL);
      v21 = a6;
    }
    v20 = v89;
    v22 = QuadPart;
    v23 = v94;
    p_QuadPart = v92;
    v12 = v96;
    v19 = v98;
    v16 = v103;
LABEL_60:
    QuadPart = ++v22;
    v99 = ++v24;
    v23 = (VIDMM_SEGMENT *)((char *)v23 + 24);
    v94 = v23;
    v89 = ++v20;
  }
  *v109 = v19;
  if ( a2[8].QuadPart )
  {
    v91 = *(VIDMM_SEGMENT **)(a2[7].QuadPart + 120);
    if ( !v91 || (*((_DWORD *)this + 1764) & 0x40) != 0 )
    {
      ++*((_DWORD *)this + 1806);
      a2[3].HighPart &= ~4u;
      *v100 = 0;
      v71 = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1805);
      if ( (*((_DWORD *)v91 + 20) & 0x1000) != 0 )
        v70 = 0;
      else
        v70 = *((_DWORD *)v91 + 4) + 1;
      *v100 = v70;
      v71 = *(_QWORD *)(a2[7].QuadPart + 128) + *((_QWORD *)v91 + 3);
    }
    v104->QuadPart = v71;
    v72 = a2[8];
    v73 = a6;
    if ( a6 + *(_DWORD *)(v72.QuadPart + 156) == 0x7FFFFFFF )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
        0LL,
        270LL,
        41LL,
        (union _LARGE_INTEGER)v72.QuadPart,
        *(int *)(v72.QuadPart + 156),
        0LL);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v72.QuadPart + 156), a6);
  }
  else
  {
    *v100 = 0;
    *v104 = a2[11];
    v73 = a6;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&a2[4], v73);
  if ( v73 > 1 )
    a2[3].HighPart |= 2u;
  v74 = v89;
  if ( !p_QuadPart )
    a2[18].LowPart = v89;
  a2[2].LowPart = v73;
  if ( (a2[3].HighPart & 4) != 0 )
  {
    v76 = *(_QWORD *)(*(_QWORD *)a2[17].QuadPart + 40LL);
    _InterlockedOr(v84, 0);
    v74 = v89;
    if ( a2[19].QuadPart == v76 )
      ++*((_DWORD *)this + 1807);
  }
  if ( (qword_1C006E010 & 4) != 0 )
  {
    v77 = a2[14];
    v78 = a2[13];
    v79 = *(_QWORD *)(a2[17].QuadPart + 24);
    for ( j = 0LL; (unsigned int)j < v74; j = (unsigned int)(j + 128) )
    {
      v81 = 128LL;
      if ( v74 - (unsigned int)j < 0x80 )
        v81 = v74 - (unsigned int)j;
      v82 = 0LL;
      if ( (_DWORD)v81 )
      {
        v83 = (int *)v116;
        do
        {
          *v83 = *(_DWORD *)(v77.QuadPart + 24LL * (unsigned int)(v82 + j) + 8) & 1;
          v82 = (unsigned int)(v82 + 1);
          ++v83;
        }
        while ( (unsigned int)v82 < (unsigned int)v81 );
      }
      if ( (byte_1C006E941 & 0x10) != 0 )
      {
        LODWORD(v86) = v81;
        McTemplateK0ppqPR2TR2_EtwWriteTransfer(v78.QuadPart + 8 * j, v81, v82, v79, a2, v86, v78.QuadPart + 8 * j, v116);
      }
    }
  }
  return 0LL;
}
