/*
 * XREFs of MiGetPage @ 0x14026D240
 * Callers:
 *     MiGetSystemPage @ 0x14021A618 (MiGetSystemPage.c)
 *     MiAllocateMdlPagesByLists @ 0x14023B8F0 (MiAllocateMdlPagesByLists.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiGetPoolPages @ 0x1402E3304 (MiGetPoolPages.c)
 *     MiGetPageTablePages @ 0x1402E40B8 (MiGetPageTablePages.c)
 *     MiGetUltraPage @ 0x1402EC570 (MiGetUltraPage.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403BD5C0 (MiTradeTransitionPage.c)
 *     MiPruneStandbyPages @ 0x14046C950 (MiPruneStandbyPages.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x140636D04 (MiReplaceLockedPage.c)
 *     MiSplitDirectMapPage @ 0x14063F2D4 (MiSplitDirectMapPage.c)
 *     MiGetExtendedStandbyPage @ 0x140650720 (MiGetExtendedStandbyPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065750C (MmAllocateNonChargedSecurePages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660478 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140663FF4 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1406649B8 (MiHandleForkTransitionPte.c)
 *     MiGetFileHashPage @ 0x140665F7C (MiGetFileHashPage.c)
 *     MiPfPrepareReadList @ 0x1406F6350 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140706244 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1407063D4 (MiAllocateDriverPage.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140825F04 (MiComputeCacheAttributeSpeeds.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C70C (MmAllocateIndependentPagesEx.c)
 *     MiFillPerSessionProtos @ 0x140A4A01C (MiFillPerSessionProtos.c)
 *     MiInitializeGapFrames @ 0x140B455F8 (MiInitializeGapFrames.c)
 *     MiAllocateDummyPage @ 0x140B48578 (MiAllocateDummyPage.c)
 *     MxSwapPages @ 0x140B5BAA8 (MxSwapPages.c)
 *     MiInitializeCacheFlushing @ 0x140B6B46C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x14021AF14 (MiPfnZeroingNeeded.c)
 *     MiGetPerfectColorHeadPage @ 0x14026DAF0 (MiGetPerfectColorHeadPage.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x1402870B0 (MiGetPfnChannel.c)
 *     MiCheckZeroFreeRebalance @ 0x1402D9100 (MiCheckZeroFreeRebalance.c)
 *     MiReleaseFreshPage @ 0x1402E7F20 (MiReleaseFreshPage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1402E80D4 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiPageAvailableEx @ 0x1402E8604 (MiPageAvailableEx.c)
 *     MiRemovePageAnyColor @ 0x1402EB774 (MiRemovePageAnyColor.c)
 *     MiZeroPhysicalPage @ 0x14033905C (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 *     MiPageToChannel @ 0x140375EC0 (MiPageToChannel.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     MiArePageContentsZero @ 0x14064D490 (MiArePageContentsZero.c)
 *     MiNodeHasFreeOrZeroPages @ 0x14064DADC (MiNodeHasFreeOrZeroPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1406518C4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v4; // r8d
  int v5; // r12d
  BOOL v6; // r11d
  unsigned int v7; // r10d
  __int64 v8; // rdi
  int v9; // edx
  int v10; // r13d
  unsigned int v11; // r9d
  int v12; // esi
  unsigned int v13; // ebx
  PSLIST_ENTRY PerfectColorHeadPage; // r14
  unsigned int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  int v21; // eax
  unsigned __int8 *v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // r9
  int v25; // r8d
  int v26; // r11d
  int v27; // eax
  __int64 v28; // rdx
  _SLIST_HEADER *v29; // rcx
  unsigned int v30; // r15d
  ULONG_PTR v31; // rdi
  int v32; // edx
  ULONG_PTR v33; // r8
  char *v34; // rax
  __int64 v35; // rdx
  int v37; // eax
  unsigned __int64 *v38; // rdx
  unsigned int v39; // r14d
  __int64 *v40; // r8
  int v41; // ecx
  __int64 v42; // rdx
  _SLIST_HEADER *v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r8
  const void *v49; // rdx
  unsigned int v50; // r10d
  _QWORD *v51; // r9
  unsigned int v52; // r8d
  unsigned __int64 v53; // rcx
  int v54; // eax
  _QWORD *v55; // rax
  unsigned int v56; // ecx
  __int64 v57; // rcx
  int v58; // r9d
  int v59; // ecx
  int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // eax
  signed int v64; // r10d
  __int64 v65; // r11
  int v66; // r8d
  unsigned __int8 *v67; // r9
  int v68; // ecx
  char *v69; // rax
  int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  unsigned int v74; // edx
  __int64 v75; // r8
  int v76; // r10d
  unsigned int v77; // r11d
  _QWORD *v78; // r9
  __int64 v79; // rax
  int v80; // eax
  unsigned int v81; // [rsp+30h] [rbp-F8h]
  unsigned int v82; // [rsp+34h] [rbp-F4h]
  int v83; // [rsp+38h] [rbp-F0h]
  signed int v84; // [rsp+3Ch] [rbp-ECh]
  unsigned int v85; // [rsp+40h] [rbp-E8h]
  int v86; // [rsp+44h] [rbp-E4h]
  unsigned int v87; // [rsp+48h] [rbp-E0h]
  int v88; // [rsp+4Ch] [rbp-DCh]
  unsigned int v89; // [rsp+4Ch] [rbp-DCh]
  unsigned int v91; // [rsp+58h] [rbp-D0h]
  unsigned __int8 *v92; // [rsp+60h] [rbp-C8h]
  __int64 v93; // [rsp+68h] [rbp-C0h]
  int v94; // [rsp+68h] [rbp-C0h]
  char v95; // [rsp+70h] [rbp-B8h] BYREF
  char v96; // [rsp+71h] [rbp-B7h] BYREF
  int v97; // [rsp+74h] [rbp-B4h]
  int v98; // [rsp+78h] [rbp-B0h]
  __int64 v99; // [rsp+80h] [rbp-A8h]
  int v100; // [rsp+88h] [rbp-A0h]
  __int64 v101; // [rsp+90h] [rbp-98h]
  __int64 *v102; // [rsp+98h] [rbp-90h]
  _QWORD *v103; // [rsp+A0h] [rbp-88h]
  __int64 v104; // [rsp+A8h] [rbp-80h]
  __int64 *v105; // [rsp+B0h] [rbp-78h]
  unsigned __int8 *v106; // [rsp+B8h] [rbp-70h]
  _OWORD v107[2]; // [rsp+C0h] [rbp-68h] BYREF

  v3 = a3;
  v81 = a2;
  v4 = a3 & 0xE00;
  v5 = 0;
  v100 = v4;
  v6 = 1;
  v7 = a2;
  v83 = 1;
  v8 = a1;
  if ( (v3 & 0x200) != 0 )
  {
    v9 = 1;
    v85 = 1;
    v10 = 1;
    if ( (v3 & 0x400) == 0 )
    {
      v85 = 1;
      if ( (v3 & 0x800) == 0 )
      {
LABEL_4:
        v11 = 1;
        goto LABEL_5;
      }
LABEL_103:
      v11 = 2;
      goto LABEL_5;
    }
  }
  else
  {
    if ( (v3 & 0x400) == 0 )
    {
      if ( (v3 & 0x800) == 0 )
      {
        v10 = 3;
        v9 = 3;
        v85 = 3;
        goto LABEL_4;
      }
      v9 = 2;
      v85 = 2;
      v10 = 2;
      goto LABEL_103;
    }
    v9 = 0;
    v10 = 0;
    v85 = 0;
  }
  v11 = 0;
LABEL_5:
  v12 = 0;
  v13 = v7 >> byte_140C65B8D;
  PerfectColorHeadPage = 0LL;
  v84 = v11;
  v86 = 0;
  v91 = (unsigned __int16)KeNumberNodes;
  v87 = 0;
  if ( (v3 & 0x4010) != 0 )
  {
    LODWORD(v16) = MmNumberOfChannels;
    v82 = MmNumberOfChannels;
    v91 = 1;
  }
  else
  {
    v15 = 0;
    v82 = MmNumberOfChannels;
    if ( !KeNumberNodes )
    {
      v30 = v4 | v3 & 0xFFFFF1FF;
      v73 = (_QWORD *)(a1 + 16);
      goto LABEL_181;
    }
    v7 = v81;
    LODWORD(v16) = MmNumberOfChannels;
  }
  v101 = v11;
  v103 = (_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v17 = *(unsigned int *)(qword_140C65B98 + 4LL * (v12 + v13 * (unsigned __int16)KeNumberNodes));
    v18 = 25408 * v17 + *v103;
    v99 = v18;
    if ( *(_QWORD *)(v18 + 22832) || !(_DWORD)InitializationPhase )
      break;
    v61 = *(_QWORD *)(a1 + 17216);
    v62 = v61 - 1;
    if ( !v61 )
      v62 = 0LL;
    if ( !(unsigned int)MiPageAvailableEx(a1, v62, v3) )
      return -1LL;
    v11 = v84;
    LODWORD(v16) = v82;
LABEL_122:
    if ( ++v12 >= v91 )
      goto LABEL_32;
    v9 = v85;
  }
  v85 = v9;
  v82 = v16;
  if ( !*(_QWORD *)(v18 + 8 * v101 + 22768) )
  {
    v55 = (_QWORD *)v99;
    v56 = 0;
    v82 = v16;
    v85 = v9;
    while ( !*v55 && !v55[1] )
    {
      ++v56;
      v55 += 134;
      if ( v56 >= 3 )
      {
        v19 = v86;
        v20 = 1 << v11;
        goto LABEL_135;
      }
    }
  }
  v19 = v86;
  v20 = 1 << v11;
  if ( ((1 << v11) & v86) == 0 )
    goto LABEL_12;
LABEL_135:
  v63 = v20 | v19;
  v64 = 0;
  v86 = v63;
  v65 = 0LL;
  while ( _bittest(&v63, v64) )
  {
LABEL_139:
    ++v64;
    ++v65;
    if ( v64 > 3 )
      goto LABEL_140;
  }
  if ( !(unsigned int)MiNodeHasFreeOrZeroPages(v99, (unsigned int)v64) )
  {
    v63 = v66 | v86;
    v86 |= v66;
    goto LABEL_139;
  }
  if ( v64 > 3 )
  {
LABEL_140:
    v7 = v81;
    v6 = v83;
    LODWORD(v16) = v82;
    goto LABEL_124;
  }
  v3 &= 0xFFFFF1FF;
  if ( v64 == 3 )
  {
    v64 = 1;
    v65 = 1LL;
    goto LABEL_144;
  }
  if ( v64 == 1 )
  {
LABEL_144:
    v3 |= 0x200u;
  }
  else if ( v64 )
  {
    if ( v64 == 2 )
      v3 |= 0x800u;
  }
  else
  {
    v3 |= 0x400u;
  }
  v11 = v64;
  v84 = v64;
  v7 = v81;
  v101 = v65;
  v6 = v83;
LABEL_12:
  v16 = v82;
  if ( v82 > 1 )
  {
    v22 = (unsigned __int8 *)(v99 + 23033);
    v92 = (unsigned __int8 *)(v99 + 23033);
    if ( (_DWORD)v17 == v13 )
    {
      v6 = (*(_DWORD *)(v99 + 23000) & 1) == 0;
      v83 = v6;
      if ( (v3 & 8) != 0 )
      {
        v22 = (unsigned __int8 *)(v99 + 23037);
        v92 = (unsigned __int8 *)(v99 + 23037);
      }
      if ( (v3 & 0x20) != 0 && (*(_DWORD *)(v99 + 23000) & 1) != 0 )
      {
        v67 = v92;
        v68 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v7 >> byte_140C65B8E));
        v69 = &v96;
        v95 = MiChannelMaximumPowerOf2Mask & (v7 >> byte_140C65B8E);
        do
        {
          v70 = *v67;
          if ( v70 != v68 )
            *v69++ = v70;
          ++v67;
          --v16;
        }
        while ( v16 );
        v22 = (unsigned __int8 *)&v95;
        LODWORD(v16) = v82;
        v11 = v84;
        v92 = (unsigned __int8 *)&v95;
      }
      v87 = *v22;
    }
  }
  else
  {
    v21 = dword_140C65BF8 & v7;
    v92 = 0LL;
    v7 = dword_140C65BF8 & v7 | ((_DWORD)v17 << byte_140C65B8D);
    v22 = 0LL;
    v81 = v21 | ((_DWORD)v17 << byte_140C65B8D);
  }
  v106 = &v22[(unsigned int)v16];
  if ( v22 != v106 )
  {
    v23 = a1;
    v24 = &MiZeroThenZero;
    v25 = v3 & 2;
    v97 = v25;
    if ( (v3 & 2) == 0 )
      v24 = &MiFreeThenFree;
    v26 = v3 & 0x400;
    v98 = v26;
    v102 = v24;
    while ( 1 )
    {
      if ( v22 )
      {
        v23 = a1;
        v7 = dword_140C65BF8 & v7 | ((_DWORD)v17 << byte_140C65B8D) | (*v22 << byte_140C65B8E);
        v81 = v7;
      }
      v27 = v25 == 0;
      v88 = v27;
      if ( v26 )
      {
        v37 = 0;
        goto LABEL_50;
      }
      if ( (v3 & 0x800) != 0 )
      {
        v37 = 2;
        goto LABEL_50;
      }
      v28 = 16LL * v7;
      v93 = v28;
      while ( 1 )
      {
        v29 = (_SLIST_HEADER *)(v28 + *(_QWORD *)(v23 + 8LL * v27 + 6808));
        if ( LOWORD(v29->Alignment) )
        {
          PerfectColorHeadPage = RtlpInterlockedPopEntrySList(v29);
          if ( PerfectColorHeadPage )
          {
            PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)ZeroPte;
            if ( !v88 )
            {
              if ( (MiFlags & 0x80u) != 0LL && (++dword_140C68060 & MmPageValidationFrequency) == 0 )
                MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4));
              goto LABEL_27;
            }
            if ( ZeroPte )
            {
              v47 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
LABEL_82:
              v46 = v47 | 0x80;
            }
            else
            {
              v46 = 128LL;
              if ( qword_140C65C40 )
              {
                if ( (qword_140C65C40 & 0x80u) == 0LL )
                {
                  v47 = qword_140C65C40;
                  goto LABEL_82;
                }
                v46 = 144LL;
              }
            }
            PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)v46;
LABEL_27:
            PerfectColorHeadPage->Next = 0LL;
            goto LABEL_28;
          }
          v28 = v93;
          v24 = v102;
        }
        v27 = *((_DWORD *)v24 + 1);
        if ( v88 == v27 )
          break;
        v23 = a1;
        v88 = *((_DWORD *)v24 + 1);
      }
      v7 = v81;
      v37 = 1;
LABEL_50:
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPerfectColorHeadPage(
                                             a1,
                                             *(_DWORD *)(a1 + 8LL * *(int *)v24 + 2496)
                                           + 88 * (v7 + dword_140C65BFC * v37),
                                             v7,
                                             *(_DWORD *)v24,
                                             v3);
LABEL_28:
      if ( PerfectColorHeadPage )
      {
LABEL_29:
        v7 = v81;
        goto LABEL_30;
      }
      if ( v97 )
      {
        if ( (v3 & 0x100) != 0 )
          v38 = (unsigned __int64 *)(v99 + 32 * (v84 + 702LL));
        else
          v38 = 0LL;
        v39 = v3 & 0xFFFFFFFD;
      }
      else
      {
        v38 = (unsigned __int64 *)(32LL * v84 + v99 + 22480);
        v39 = v3 | 2;
      }
      v89 = v39;
      if ( v38 )
      {
        v48 = *v38;
        v49 = (const void *)v38[1];
        memset(v107, 0, sizeof(v107));
        memmove(v107, v49, v48 >> 3);
        v50 = 0;
        v51 = v107;
        v52 = 0;
        while ( 1 )
        {
          v53 = *v51 - ((*v51 >> 1) & 0x5555555555555555LL);
          v50 += (unsigned int)((0x101010101010101LL
                               * (((v53 & 0x3333333333333333LL)
                                 + ((v53 >> 2) & 0x3333333333333333LL)
                                 + (((v53 & 0x3333333333333333LL) + ((v53 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          if ( v50 >= 8 )
            break;
          ++v52;
          ++v51;
          if ( v52 >= 4 )
            goto LABEL_56;
        }
        PerfectColorHeadPage = (PSLIST_ENTRY)MiRemovePageAnyColor(a1, v81, v3);
        if ( PerfectColorHeadPage )
          goto LABEL_29;
        v39 = v89;
      }
LABEL_56:
      v40 = &MiZeroThenZero;
      v41 = (v39 & 2) == 0;
      v94 = v41;
      if ( (v39 & 2) == 0 )
        v40 = &MiFreeThenFree;
      v105 = v40;
      if ( (v39 & 0x400) != 0 )
      {
        v54 = 0;
        goto LABEL_93;
      }
      if ( (v39 & 0x800) != 0 )
      {
        v54 = 2;
        goto LABEL_93;
      }
      v42 = 16LL * v81;
      v104 = v42;
      while ( 2 )
      {
        v43 = (_SLIST_HEADER *)(v42 + *(_QWORD *)(a1 + 8LL * v41 + 6808));
        if ( LOWORD(v43->Alignment) )
        {
          PerfectColorHeadPage = RtlpInterlockedPopEntrySList(v43);
          if ( PerfectColorHeadPage )
          {
            PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)ZeroPte;
            if ( v94 )
            {
              if ( ZeroPte )
              {
                v45 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
LABEL_68:
                v44 = v45 | 0x80;
              }
              else
              {
                v44 = 128LL;
                if ( qword_140C65C40 )
                {
                  if ( (qword_140C65C40 & 0x80u) == 0LL )
                  {
                    v45 = qword_140C65C40;
                    goto LABEL_68;
                  }
                  v44 = 144LL;
                }
              }
              PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)v44;
            }
            else if ( (MiFlags & 0x80u) != 0LL && (++dword_140C68060 & MmPageValidationFrequency) == 0 )
            {
              MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4));
            }
            PerfectColorHeadPage->Next = 0LL;
            goto LABEL_71;
          }
          v42 = v104;
          v40 = v105;
        }
        v41 = *((_DWORD *)v40 + 1);
        if ( v94 != v41 )
        {
          v94 = *((_DWORD *)v40 + 1);
          continue;
        }
        break;
      }
      v39 = v89;
      v54 = 1;
LABEL_93:
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPerfectColorHeadPage(
                                             a1,
                                             *(_DWORD *)(a1 + 8LL * *(int *)v40 + 2496)
                                           + 88 * (v81 + dword_140C65BFC * v54),
                                             v81,
                                             *(_DWORD *)v40,
                                             v39);
LABEL_71:
      if ( PerfectColorHeadPage )
        goto LABEL_29;
      MiCheckZeroFreeRebalance(a1, v81);
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetFreeOrZeroPageAnyColor(a1, v81, v3);
      if ( PerfectColorHeadPage )
        goto LABEL_29;
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetFreeOrZeroPageAnyColor(a1, v81, v89);
      if ( PerfectColorHeadPage )
        goto LABEL_29;
      v71 = *(_QWORD *)(a1 + 17216);
      v72 = v71 - 1;
      if ( !v71 )
        v72 = 0LL;
      if ( !(unsigned int)MiPageAvailableEx(a1, v72, v3) )
        return -1LL;
      v7 = v81;
      v22 = v92 + 1;
      v25 = v97;
      v24 = v102;
      v26 = v98;
      v92 = v22;
      if ( v22 == v106 )
      {
LABEL_30:
        LODWORD(v16) = v82;
        v6 = v83;
        v11 = v84;
        break;
      }
    }
  }
  if ( !PerfectColorHeadPage )
  {
    v60 = (1 << v11) | v86;
    v86 = v60;
    if ( ((v11 - 1) & 0xFFFFFFFD) == 0 )
    {
      v60 |= 0xAu;
      v86 = v60;
    }
    if ( v60 == 15 )
LABEL_124:
      v86 = 0;
    else
      --v12;
    goto LABEL_122;
  }
LABEL_32:
  v15 = v87;
  v83 = v6;
  if ( PerfectColorHeadPage == (PSLIST_ENTRY)1 )
    return -1LL;
  v30 = v100 | v3 & 0xFFFFF1FF;
  if ( !PerfectColorHeadPage )
  {
    v8 = a1;
    v73 = v103;
LABEL_181:
    if ( (v30 & 1) != 0 )
      return -1LL;
    if ( (v30 & 0x30) != 0 )
    {
      v74 = v15;
      v75 = *v73 + 25408LL * v13;
      if ( (*(_DWORD *)(v75 + 23000) & 1) != 0 )
      {
        v76 = v15 + 1;
      }
      else
      {
        v76 = MmNumberOfChannels;
        v74 = 0;
      }
      if ( v74 == v76 )
        return -1LL;
LABEL_187:
      v77 = 0;
      v78 = (_QWORD *)(704LL * v74 + v75 + 3256);
      while ( !*v78 )
      {
        ++v77;
        v78 += 11;
        if ( v77 >= 8 )
        {
          if ( ++v74 != v76 )
            goto LABEL_187;
          return -1LL;
        }
      }
      if ( v74 == v76 )
        return -1LL;
    }
    v79 = MiRemoveLowestPriorityStandbyPage(v8, 8LL, v30);
    v31 = v79;
    if ( v79 != -1 )
    {
      v15 = v87;
      PerfectColorHeadPage = (PSLIST_ENTRY)(48 * v79 - 0x220000000000LL);
      v6 = v83;
      goto LABEL_35;
    }
    return -1LL;
  }
  v83 = v6;
  v31 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4);
LABEL_35:
  PerfectColorHeadPage->Next = 0LL;
  v32 = dword_140C65B88;
  v33 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4);
  if ( dword_140C65B84 > (unsigned int)dword_140C65B88
    || (v34 = (char *)qword_140C65BC8 + 16 * dword_140C65B84, v33 < *(_QWORD *)v34)
    || dword_140C65B84 != dword_140C65B88 && v33 >= *((_QWORD *)v34 + 2) )
  {
    v58 = 0;
    if ( dword_140C65B88 < 0 )
LABEL_208:
      KeBugCheckEx(0x1Au, 0x6201uLL, v33, 0LL, 0LL);
    while ( 1 )
    {
      v59 = (v58 + v32) >> 1;
      v34 = (char *)qword_140C65BC8 + 16 * v59;
      if ( v33 < *(_QWORD *)v34 )
      {
        if ( !v59 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v33, (ULONG_PTR)qword_140C65BC8, 0LL);
        v32 = v59 - 1;
      }
      else
      {
        if ( v59 == dword_140C65B88 || v33 < *((_QWORD *)v34 + 2) )
        {
          dword_140C65B84 = (v58 + v32) >> 1;
          break;
        }
        v58 = v59 + 1;
      }
      if ( v32 < v58 )
        goto LABEL_208;
    }
  }
  if ( *((_DWORD *)v34 + 2) != v13 )
    goto LABEL_206;
  if ( qword_140C65BD0 )
  {
    v80 = MiPageToChannel(v33);
    v15 = v87;
    v5 = v80;
    v6 = v83;
  }
  if ( v5 != v15 && !v6 )
  {
LABEL_206:
    if ( (v30 & 1) == 0 )
    {
      if ( (v30 & 0x80u) == 0 )
      {
        v31 = MiSwapNumaStandbyPage(v31);
        PerfectColorHeadPage = (PSLIST_ENTRY)(48 * v31 - 0x220000000000LL);
      }
      if ( (v30 & 0x10) != 0
        && *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4))
                     + 8) != v13
        || (v30 & 0x20) != 0 && (unsigned int)MiGetPfnChannel(PerfectColorHeadPage) != v87 && !v83 )
      {
        MiReleaseFreshPage(PerfectColorHeadPage);
        return -1LL;
      }
    }
  }
  v35 = v85;
  if ( (v30 & 0x100) != 0 && MiPfnZeroingNeeded((__int64)PerfectColorHeadPage) )
  {
    MiZeroPhysicalPage(v57, v31, 0LL, (unsigned int)v35);
    PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)((unsigned __int64)PerfectColorHeadPage[1].Next & 0xFFFFFFFFFFFFFC1FuLL);
    v35 = v85;
  }
  if ( v10 != 3 && BYTE2(PerfectColorHeadPage[2].Next) >> 6 != v10 )
    MiChangePageAttribute(PerfectColorHeadPage, v35, 8LL);
  return v31;
}
