/*
 * XREFs of MiGetPageChain @ 0x14026C990
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14026A610 (MiResolvePrivateZeroFault.c)
 *     MiGetHardFaultPages @ 0x1402DF504 (MiGetHardFaultPages.c)
 *     MiCreateSharedZeroPages @ 0x1402E1050 (MiCreateSharedZeroPages.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiGetClusterPage @ 0x14066A544 (MiGetClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x14021C9B4 (MiChangePageAttributeBatch.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14021E394 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2D60 (MiConvertEntireLargePageToSmall.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiSetPfnBlink @ 0x1402DF340 (MiSetPfnBlink.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiZeroPhysicalPage @ 0x14033948C (MiZeroPhysicalPage.c)
 *     MiUserPdeOrAbove @ 0x14033C8C0 (MiUserPdeOrAbove.c)
 *     MiIsAddressGlobal @ 0x140347DB8 (MiIsAddressGlobal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1404249D0 (KeZeroPages.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FDA1C (EtwTraceShouldYieldProcessor.c)
 *     MiPerformFinalZeroing @ 0x14064E1BC (MiPerformFinalZeroing.c)
 *     MiNotifyPageHeat @ 0x140654B4C (MiNotifyPageHeat.c)
 *     MxGetPhase0Mapping @ 0x140B58DFC (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiGetPageChain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        ULONG_PTR a7,
        unsigned __int64 *a8)
{
  __int64 v9; // r11
  __int64 CurrentIrql; // r10
  int v11; // ebx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NodeShiftedColor; // eax
  int v14; // ebp
  int v15; // eax
  unsigned __int64 v16; // rdi
  ULONG_PTR v17; // rsi
  unsigned int v18; // r15d
  __int64 v19; // r13
  unsigned __int64 v20; // r14
  signed __int32 v21; // eax
  unsigned int v22; // ebx
  unsigned __int64 v23; // rcx
  __int64 Page; // r10
  unsigned __int8 *v25; // rsi
  int v26; // edi
  int v27; // eax
  signed __int64 v28; // rdx
  volatile signed __int64 *v29; // rbx
  signed __int64 v30; // r8
  volatile signed __int64 v31; // rdx
  __int64 v32; // r9
  signed __int64 v33; // r8
  _DWORD *v34; // rcx
  struct _KPRCB *v35; // rcx
  int v36; // r8d
  __int64 v37; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // esi
  _KTHREAD *NextThread; // rax
  unsigned int v43; // eax
  ULONG_PTR v44; // rcx
  unsigned __int8 *v45; // rdx
  BOOL v46; // r8d
  char v47; // di
  int v48; // eax
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  __int64 v51; // rcx
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // rsi
  unsigned __int64 *v54; // rdx
  unsigned __int8 v55; // bl
  ULONG_PTR v56; // rax
  signed __int64 v57; // rdx
  unsigned __int64 v58; // r9
  signed __int64 v59; // r8
  _DWORD *v60; // r8
  __int64 v61; // r9
  unsigned int v62; // edi
  __int64 v63; // rbp
  int v64; // r15d
  unsigned __int64 v65; // rdx
  ULONG_PTR v66; // r10
  unsigned __int64 v67; // rdi
  _DWORD *SchedulerAssist; // r10
  __int64 v69; // r8
  struct _KPRCB *v70; // rcx
  signed __int32 *v71; // r8
  signed __int32 v72; // eax
  signed __int32 v73; // ett
  unsigned __int64 Phase0Mapping; // rax
  unsigned __int64 v75; // rsi
  _QWORD *v76; // rdi
  __int64 ValidPte; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  unsigned __int8 v85; // cl
  struct _KPRCB *v86; // r11
  _DWORD *v87; // r9
  int v88; // eax
  bool v89; // zf
  __int64 v90; // rdi
  ULONG_PTR v91; // rsi
  ULONG_PTR v92; // rax
  unsigned int v93; // ecx
  unsigned __int8 v94; // cl
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  __int64 v98; // r8
  __int64 v99; // rax
  signed __int64 v100; // rcx
  signed __int64 v101; // rcx
  signed __int32 v102[8]; // [rsp+0h] [rbp-228h] BYREF
  ULONG_PTR LargePage; // [rsp+40h] [rbp-1E8h]
  unsigned int v104; // [rsp+48h] [rbp-1E0h]
  unsigned int v105; // [rsp+50h] [rbp-1D8h]
  unsigned int v106; // [rsp+54h] [rbp-1D4h]
  __int64 v107; // [rsp+58h] [rbp-1D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-1C8h]
  unsigned int v109; // [rsp+68h] [rbp-1C0h]
  __int64 v110; // [rsp+70h] [rbp-1B8h]
  __int64 v111; // [rsp+78h] [rbp-1B0h]
  __int64 v112; // [rsp+80h] [rbp-1A8h]
  unsigned int v113; // [rsp+88h] [rbp-1A0h]
  unsigned int *p_PageColor; // [rsp+90h] [rbp-198h]
  __int64 v115; // [rsp+98h] [rbp-190h]
  __int64 v116; // [rsp+A0h] [rbp-188h]
  __int64 v117; // [rsp+A8h] [rbp-180h]
  unsigned __int64 v118; // [rsp+B0h] [rbp-178h]
  unsigned __int64 *v119; // [rsp+B8h] [rbp-170h]
  _OWORD v120[8]; // [rsp+C0h] [rbp-168h] BYREF
  __int64 v121; // [rsp+140h] [rbp-E8h]
  int v122; // [rsp+148h] [rbp-E0h]
  _QWORD v123[16]; // [rsp+150h] [rbp-D8h] BYREF

  v112 = a3;
  v119 = a8;
  v9 = a1;
  v117 = a2;
  v107 = a1;
  memset(v120, 0, sizeof(v120));
  v121 = 0LL;
  v122 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v111 = CurrentIrql;
  v11 = a4 - 1;
  if ( a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = v11 << byte_140C65A8D;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v14 = (1 << byte_140C65A8E) - 1;
  v109 = NodeShiftedColor;
  v105 = v14;
  if ( a2 && (*(_BYTE *)(a2 + 184) & 7u) < 2 )
    p_PageColor = (unsigned int *)a2;
  else
    p_PageColor = &CurrentPrcb->PageColor;
  if ( !a4 )
    v11 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
  if ( a5 == 2 )
  {
    v15 = 2048;
  }
  else
  {
    v15 = 512;
    if ( !a5 )
      v15 = 1024;
  }
  v16 = *a8;
  v17 = a7;
  v118 = *a8;
  v18 = (v15 | a6) & 0xFFFFFEFF;
  v110 = 0x3FFFFFFFFFLL;
  v106 = v18;
  v19 = 0LL;
  v115 = 0LL;
  v20 = 0LL;
  v104 = 0;
  if ( a7 != -1LL )
  {
    v18 = (v15 | a6) & 0xFFFFBEFF | 0x4000;
    goto LABEL_13;
  }
  if ( v16 < 0x10 )
    goto LABEL_13;
  v63 = v112;
  LOBYTE(v17) = 17;
  *(_QWORD *)&v120[0] = 1LL;
  BugCheckParameter2 = v17;
  v64 = 1;
  DWORD2(v120[0]) = 16;
  v65 = v16;
  while ( 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)p_PageColor);
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      v17 = KeGetCurrentIrql();
      BugCheckParameter2 = v17;
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v17 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( (_BYTE)v17 == 2 )
            LODWORD(v69) = 4;
          else
            v69 = (-1LL << ((unsigned __int8)v17 + 1)) & 4;
          SchedulerAssist[5] |= v69;
        }
      }
    }
    if ( v65 < 0x200 || v64 != 1 )
      goto LABEL_80;
    LargePage = MiGetLargePage(v9, v63, 1, v11, a5, 4, (__int64)v120);
    LODWORD(v66) = LargePage;
    if ( !LargePage )
    {
      LODWORD(v9) = v107;
LABEL_80:
      v64 = 2;
      LargePage = MiGetLargePage(v9, v63, 2, v11, a5, 4, (__int64)v120);
      v66 = LargePage;
      if ( !LargePage )
        goto LABEL_82;
    }
    MiConvertEntireLargePageToSmall(v66, v64, 2, 1, 0LL, 0LL, 0LL);
    v66 = LargePage;
LABEL_82:
    if ( (unsigned __int8)v111 < 2u )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v85 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v85 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v85 >= 2u )
        {
          v86 = KeGetCurrentPrcb();
          v87 = v86->SchedulerAssist;
          v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v89 = (v88 & v87[5]) == 0;
          v87[5] &= v88;
          if ( v89 )
          {
            KiRemoveSystemWorkPriorityKick(v86);
            v66 = LargePage;
          }
        }
      }
      __writecr8((unsigned __int8)v17);
    }
    if ( !v66 )
      break;
    v63 += MiLargePageSizes[v64] << 12;
    v67 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v66 + 0x220000000000LL) >> 4);
    MiSetPfnBlink(
      48 * (MiLargePageSizes[v64] - 0x5555555555555555LL * ((__int64)(v66 + 0x220000000000LL) >> 4)) - 0x220000000030LL,
      v110,
      0LL);
    v20 += MiLargePageSizes[v64];
    v19 = LargePage;
    LOBYTE(v17) = BugCheckParameter2;
    LODWORD(v9) = v107;
    v110 = v67;
    v16 = v118;
    v65 = v118 - v20;
    if ( v118 - v20 < 0x10 )
      break;
    LOBYTE(CurrentIrql) = v111;
  }
  v14 = v105;
  v18 = v106;
  if ( DWORD1(v120[0]) )
    MiNotifyPageHeat(v120);
  if ( (unsigned __int8)v111 >= 2u && v20 && ((unsigned int)MiWorkingSetIsContended(v117) || KeShouldYieldProcessor()) )
  {
    *v119 = v20;
    return v19;
  }
  v17 = -1LL;
  v9 = v107;
LABEL_13:
  if ( v20 >= v16 )
    goto LABEL_35;
  while ( 2 )
  {
    v21 = v14 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u);
    v22 = v21 | v109;
    if ( v17 == -1LL )
    {
LABEL_15:
      LargePage = MiGetPage(v9, v22, v18);
      Page = LargePage;
      if ( LargePage == -1LL )
        break;
    }
    else
    {
      v90 = 15LL;
      if ( (unsigned int)dword_140C65AF8 < 0xFuLL )
        v90 = (unsigned int)dword_140C65AF8;
      v91 = v90 & v17;
      v22 = v91 | v22 & 0xFFFFFFF0;
      Page = MiGetPage(v9, v22, v18);
      LargePage = Page;
      v92 = v91 + 1;
      if ( Page == -1 )
      {
        v9 = v107;
        v18 &= ~0x4000u;
        v17 = (unsigned int)v92 & (unsigned int)v90;
        a7 = v17;
        goto LABEL_15;
      }
      v17 = v90 & v92;
      a7 = v90 & v92;
    }
    if ( v17 != -1LL )
      v18 |= 0x4000u;
    v19 = 48 * Page - 0x220000000000LL;
    v25 = (unsigned __int8 *)(v19 + 34);
    v26 = *(unsigned __int8 *)(v19 + 34) >> 6;
    v105 = v26;
    if ( v26 != a5 )
    {
      v23 = (unsigned __int8)(1 << v26);
      LODWORD(v23) = v23 | (1 << a5);
      if ( ((unsigned __int8)v23 & (unsigned __int8)byte_140C65B98) != 0 )
      {
        v93 = v104;
        v123[v104] = Page;
        v104 = v93 + 1;
        if ( v93 == 15 )
        {
          MiPerformFinalZeroing(v123, 16LL, a5);
          Page = LargePage;
          v104 = 0;
        }
        v29 = (volatile signed __int64 *)(v19 + 24);
        goto LABEL_23;
      }
    }
    if ( (*(_DWORD *)(v19 + 16) & 0x3E0LL) == 0 || (a6 & 0x100) == 0 )
      goto LABEL_20;
    v43 = *(_DWORD *)(qword_140C65AA0
                    + 376LL * *(unsigned int *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * Page) >> 4)) + 8)
                    + 4 * ((int)a5 + 4 * ((unsigned __int64)*v25 >> 6))
                    + 112);
    v113 = v43;
    if ( v43 != v26 )
      MiChangePageAttribute(v19, v43, 0LL);
    v44 = LargePage;
    v45 = (unsigned __int8 *)(v19 + 34);
    BugCheckParameter2 = LargePage;
    v112 = v19 + 34;
    v46 = KeGetCurrentPrcb()->MmInternal != 0LL;
    v106 = v46;
    while ( 2 )
    {
      if ( !v46 )
      {
        Phase0Mapping = MxGetPhase0Mapping();
        v75 = Phase0Mapping;
        if ( !Phase0Mapping )
          KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
        v76 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        ValidPte = MiMakeValidPte(v76, BugCheckParameter2, 2684354564LL);
        if ( (unsigned int)MiPteInShadowRange(v76) )
        {
          if ( (unsigned int)MiPteHasShadow(v79, v78, v80) )
          {
            if ( !HIBYTE(word_140C66CFC) && (ValidPte & 1) != 0 )
              ValidPte |= 0x8000000000000000uLL;
            *v76 = ValidPte;
            MiWritePteShadow(v76, ValidPte);
LABEL_115:
            KeZeroPages(v75, 4096LL);
            v81 = ZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v76) )
            {
              if ( (unsigned int)MiPteHasShadow(v83, v82, v84) )
              {
                if ( !HIBYTE(word_140C66CFC) && (ZeroPte & 1) != 0 )
                  v81 = ZeroPte | 0x8000000000000000uLL;
                *v76 = v81;
                MiWritePteShadow(v76, v81);
                goto LABEL_117;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v81 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v76 = v81;
LABEL_117:
            KeFlushSingleTb(v75, 0LL, 1LL);
            goto LABEL_53;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            ValidPte |= 0x8000000000000000uLL;
          }
        }
        *v76 = ValidPte;
        goto LABEL_115;
      }
      v47 = 4;
      v48 = *v45 >> 6;
      if ( !v48 || v48 == 3 )
      {
        v47 = 12;
      }
      else if ( v48 == 2 )
      {
        v47 = 28;
      }
      v49 = ((v44 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v47 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
      v50 = ((((unsigned __int16)v49 | 0x42) ^ (unsigned __int16)((unsigned __int8)word_140C66CFC << 8)) & 0x100 ^ (v49 | 0x42)) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
      v51 = KeGetCurrentIrql();
      v116 = v51;
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v51 <= 0xFu )
      {
        v60 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)v51 == 2 )
          LODWORD(v61) = 4;
        else
          v61 = (-1LL << ((unsigned __int8)v51 + 1)) & 4;
        v60[5] |= v61;
      }
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
      v54 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MmInternal[1543] = v54;
      *v54 = v50;
      KeZeroPages(UltraMapping, 4096LL);
      v55 = v116;
      *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
      *(_QWORD *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
      if ( v55 != 17 )
      {
        if ( (_DWORD)KiIrqlFlags )
        {
          v94 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v94 <= 0xFu && v55 <= 0xFu && v94 >= 2u )
          {
            v95 = KeGetCurrentPrcb();
            v96 = v95->SchedulerAssist;
            v97 = ~(unsigned __int16)(-1LL << (v55 + 1));
            v89 = (v97 & v96[5]) == 0;
            v96[5] &= v97;
            if ( v89 )
              KiRemoveSystemWorkPriorityKick(v95);
          }
        }
        __writecr8(v55);
      }
LABEL_53:
      v44 = BugCheckParameter2 + 1;
      Page = LargePage;
      v45 = (unsigned __int8 *)(v112 + 48);
      v46 = v106;
      v56 = ++BugCheckParameter2 - LargePage;
      v112 += 48LL;
      if ( !v56 )
        continue;
      break;
    }
    if ( v113 != v105 && v113 != a5 )
    {
      MiChangePageAttribute(v19, v105, 0LL);
      Page = LargePage;
    }
    *(_QWORD *)(v19 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    _InterlockedOr(v102, 0);
    v57 = *(_QWORD *)(v19 + 24);
    v58 = (unsigned __int64)(KiTbFlushTimeStamp & 7) << 59;
    v23 = v58 | v57 & 0xC7FFFFFFFFFFFFFFuLL;
    v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v23, v57);
    if ( v57 != v59 )
    {
      do
      {
        v23 = v59;
        v59 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v19 + 24),
                v58 | v59 & 0xC7FFFFFFFFFFFFFFuLL,
                v59);
      }
      while ( v23 != v59 );
    }
    v25 = (unsigned __int8 *)(v19 + 34);
LABEL_20:
    v27 = *v25 >> 6;
    if ( v27 == a5 )
    {
LABEL_21:
      v28 = *(_QWORD *)(v19 + 24);
      v29 = (volatile signed __int64 *)(v19 + 24);
      v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v28 & 0xC7FFFFFFFFFFFFFFuLL, v28);
      if ( v28 != v30 )
      {
        do
        {
          v100 = v30;
          v30 = _InterlockedCompareExchange64(v29, v30 & 0xC7FFFFFFFFFFFFFFuLL, v30);
        }
        while ( v100 != v30 );
      }
      goto LABEL_22;
    }
    if ( v27 != 1 )
    {
      if ( v27 == 3 )
      {
        v98 = 0LL;
      }
      else
      {
        v29 = (volatile signed __int64 *)(v19 + 24);
        v99 = (*(_QWORD *)(v19 + 24) >> 59) & 7LL;
        if ( ((*(_QWORD *)(v19 + 24) >> 59) & 7) == 0 )
          goto LABEL_129;
        _InterlockedOr(v102, 0);
        if ( MiTbFlushTimeStampMayNeedFlush(v99, KiTbFlushTimeStamp, 7) )
          goto LABEL_129;
        v98 = 4LL;
      }
      MiChangePageAttribute(v19, a5, v98);
      goto LABEL_21;
    }
    v29 = (volatile signed __int64 *)(v19 + 24);
LABEL_129:
    if ( (*(_DWORD *)(v19 + 16) & 0x3E0LL) != 0 )
      MiZeroPhysicalPage(v23, Page, 0LL, a5);
    *(_QWORD *)(v19 + 16) = v115;
    v115 = v19;
LABEL_22:
    Page = LargePage;
LABEL_23:
    v31 = *v29;
    v32 = v110 & 0xFFFFFFFFFFLL;
    v33 = _InterlockedCompareExchange64(v29, v110 & 0xFFFFFFFFFFLL | *v29 & 0xFFFFFF0000000000uLL, *v29);
    if ( v31 != v33 )
    {
      do
      {
        v101 = v33;
        v33 = _InterlockedCompareExchange64(v29, v32 | v33 & 0xFFFFFF0000000000uLL, v33);
      }
      while ( v101 != v33 );
    }
    ++v20;
    v110 = Page;
    if ( (unsigned __int8)v111 < 2u )
      goto LABEL_34;
    if ( (*(_BYTE *)(v117 + 184) & 7) == 2 )
      v34 = &unk_140C6A180;
    else
      v34 = (_DWORD *)(v117 + 192);
    if ( (*v34 & 0x40000000) != 0 )
      break;
    v35 = KeGetCurrentPrcb();
    v36 = 0;
    v37 = 0LL;
    DpcRequestSummary = v35->DpcRequestSummary;
    DpcWatchdogCount = v35->DpcWatchdogCount;
    DpcTimeCount = v35->DpcTimeCount;
    if ( (DpcRequestSummary & 1) != 0 )
    {
      v36 = 1;
      if ( DpcTimeCount <= 7 )
        goto LABEL_33;
      if ( v35->QuantumEnd )
      {
        v62 = 1;
        goto LABEL_66;
      }
      goto LABEL_186;
    }
    if ( v35->NestingLevel )
    {
      v37 = 1LL;
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_34;
      if ( v35->QuantumEnd )
      {
        v62 = 7;
        goto LABEL_66;
      }
LABEL_186:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v62 = 5;
        goto LABEL_66;
      }
      if ( v35->CurrentThread != v35->IdleThread )
      {
        v62 = 6;
        goto LABEL_66;
      }
LABEL_101:
      _disable();
      v35->DpcWatchdogCount = 0;
      v35->DpcTimeCount = 0;
      v70 = KeGetCurrentPrcb();
      v71 = (signed __int32 *)v70->SchedulerAssist;
      if ( v71 )
      {
        _m_prefetchw(v71);
        v72 = *v71;
        do
        {
          v73 = v72;
          v72 = _InterlockedCompareExchange(v71, v72 & 0xFFDFFFFF, v72);
        }
        while ( v73 != v72 );
        if ( (v72 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v70);
      }
      _enable();
      v62 = 0;
LABEL_66:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v62, DpcWatchdogCount, DpcTimeCount, v37);
      if ( !v62 )
        goto LABEL_34;
      break;
    }
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v62 = 2;
      goto LABEL_66;
    }
    if ( v35->QuantumEnd )
    {
      v62 = 3;
      goto LABEL_66;
    }
    NextThread = v35->NextThread;
    if ( NextThread && NextThread != v35->CurrentThread )
    {
      v62 = 4;
      goto LABEL_66;
    }
LABEL_33:
    if ( DpcWatchdogCount > 7 )
    {
      if ( !v36 )
        goto LABEL_101;
      goto LABEL_186;
    }
LABEL_34:
    if ( v20 < v118 )
    {
      v17 = a7;
      v9 = v107;
      continue;
    }
    break;
  }
LABEL_35:
  *v119 = v20;
  if ( v104 )
    MiPerformFinalZeroing(v123, v104, a5);
  if ( v115 )
    MiChangePageAttributeBatch(v115, a5, ZeroPte);
  return v19;
}
