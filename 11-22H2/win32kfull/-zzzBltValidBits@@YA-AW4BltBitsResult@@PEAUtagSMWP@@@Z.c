/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0122FB0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000BF1C (SpbCheckRect.c)
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 *     SpbCheck @ 0x1C0015968 (SpbCheck.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C0025160 (xxxFlushDeferredWindowEvents.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C003284C (PhysicalToLogicalInPlaceRgn.c)
 *     xxxInternalInvalidate @ 0x1C0032FD0 (xxxInternalInvalidate.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C007AC44 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     GreHintDCWnd @ 0x1C008EF30 (GreHintDCWnd.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C00A4994 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C00A4E60 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     UpdateSpriteArea @ 0x1C00A6444 (UpdateSpriteArea.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C87AC (DeleteOldRedirectionBitmap.c)
 *     UnionRect @ 0x1C00CF9E4 (UnionRect.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F40C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00F89B0 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     GetRedirectionBitmap @ 0x1C011DD30 (GetRedirectionBitmap.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A5FF8 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     GetOldRedirectionBitmap @ 0x1C01BCD18 (GetOldRedirectionBitmap.c)
 *     FindSpb @ 0x1C01F935C (FindSpb.c)
 *     RestoreSpb @ 0x1C01F938C (RestoreSpb.c)
 *     GreUnlockDisplayArea @ 0x1C0283BC8 (GreUnlockDisplayArea.c)
 *     GreClientRgnDone @ 0x1C0287FC4 (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  int v2; // r14d
  int v3; // esi
  int v4; // r13d
  __int64 *v5; // rbx
  int v6; // r15d
  __int64 v7; // rdi
  int v8; // r12d
  __int64 v9; // rsi
  HRGN v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  HRGN v14; // rcx
  struct tagWND *v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  struct tagSMWP *v19; // r13
  _QWORD *v20; // r12
  __int64 *v21; // rbx
  int v22; // edi
  __int64 v23; // r15
  __int64 v24; // rdi
  __int64 v25; // rdx
  HRGN v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  _QWORD *v30; // rax
  struct tagWND *v31; // r15
  int v32; // r12d
  __int64 v33; // rax
  char v34; // dl
  __int128 *v35; // r8
  AtomicExecutionCheck *v36; // rcx
  _QWORD *v37; // rdi
  int v38; // ebx
  struct tagWND *v39; // r13
  int v40; // ebx
  AtomicExecutionCheck **i; // rdi
  __int64 v42; // rdx
  __int64 v43; // rdi
  struct Gre::Base::SESSION_GLOBALS *v44; // rsi
  int v45; // eax
  __int64 v46; // rbx
  HDC v47; // rbx
  unsigned int DLT; // eax
  char *v49; // rbx
  tagDomLock *v50; // rcx
  int v52; // ebx
  _QWORD *v53; // rdi
  __int64 v54; // rcx
  HRGN EmptyRgn; // rax
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // r8
  int v59; // r15d
  __int64 v60; // r12
  HRGN v61; // rdx
  char v62; // cl
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rax
  int v72; // eax
  int v73; // r15d
  unsigned int v74; // ebx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  HRGN v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 RedirectionBitmap; // rax
  __int64 v85; // rcx
  int v86; // r9d
  int v87; // edx
  int v88; // r10d
  int v89; // r8d
  __int64 v90; // rbx
  __int64 v91; // r9
  __int64 v92; // rax
  __int64 v93; // r8
  __int64 v94; // r8
  _QWORD *v95; // r8
  _QWORD *StyleWindow; // rax
  __int64 v97; // r9
  __int64 v98; // r8
  __int64 v99; // rcx
  int v100; // edi
  __int64 v101; // rbx
  int v102; // edx
  __int64 v103; // r9
  __int64 v104; // rcx
  __int64 v105; // r8
  unsigned int v106; // ecx
  int v107; // ebx
  __m128i v108; // xmm0
  int v109; // ecx
  int v110; // edx
  __int64 OldRedirectionBitmap; // r8
  int v112; // r10d
  int v113; // r11d
  HDC v114; // r9
  HDC v115; // rax
  int v116; // eax
  int v117; // eax
  char *Spb; // rax
  unsigned int v119; // r15d
  int v120; // eax
  int v121; // [rsp+68h] [rbp-A0h]
  int v122; // [rsp+68h] [rbp-A0h]
  int v123; // [rsp+6Ch] [rbp-9Ch]
  int v124; // [rsp+6Ch] [rbp-9Ch]
  int v125; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v126; // [rsp+70h] [rbp-98h]
  HRGN v127; // [rsp+78h] [rbp-90h] BYREF
  int v128; // [rsp+80h] [rbp-88h]
  HDC v129; // [rsp+88h] [rbp-80h] BYREF
  struct tagSMWP *v130; // [rsp+90h] [rbp-78h] BYREF
  __int64 v131; // [rsp+98h] [rbp-70h]
  _QWORD *v132; // [rsp+A0h] [rbp-68h] BYREF
  int v133; // [rsp+A8h] [rbp-60h]
  __int128 v134; // [rsp+B8h] [rbp-50h] BYREF
  HRGN v135[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v136; // [rsp+D8h] [rbp-30h] BYREF
  struct tagWND *v137; // [rsp+E0h] [rbp-28h]
  __int128 v138; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v139; // [rsp+F8h] [rbp-10h] BYREF
  tagDomLock *DomainLockRef; // [rsp+108h] [rbp+0h]
  char v141; // [rsp+110h] [rbp+8h] BYREF
  __int64 v142; // [rsp+118h] [rbp+10h]
  char v143; // [rsp+120h] [rbp+18h]
  __int64 v144; // [rsp+128h] [rbp+20h]
  char v145; // [rsp+130h] [rbp+28h]

  v139 = 0LL;
  ++gdwDeferWinEvent;
  v130 = (struct tagSMWP *)a1;
  v2 = 0;
  v129 = 0LL;
  v126 = 0;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 28) - 1;
  v5 = *(__int64 **)(a1 + 40);
  v121 = 0;
  v6 = 0;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      v7 = *v5;
      v8 = *((_DWORD *)v5 + 8);
      v5[12] = 0LL;
      if ( v7 )
        break;
LABEL_17:
      v5 += 21;
      if ( --v4 < 0 )
        goto LABEL_18;
    }
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v7 >= *(_QWORD *)(gpsi + 8LL) )
    {
LABEL_189:
      *v5 = 0LL;
      *((_DWORD *)v5 + 8) = 6159;
      goto LABEL_17;
    }
    v9 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v7;
    v10 = (HRGN)HMPkheFromPhe(v9);
    v13 = 0x7FFFLL;
    LOWORD(v7) = WORD1(v7) & 0x7FFF;
    v135[0] = v10;
    v14 = v10;
    if ( (WORD1(v7) & 0x7FFF) != *(_WORD *)(v9 + 26) && (_WORD)v7 != 0x7FFF )
    {
      if ( (_WORD)v7 || !PsGetCurrentProcessWow64Process(v10, 0x7FFFLL, v11) )
      {
LABEL_188:
        v3 = v121;
        goto LABEL_189;
      }
      v14 = v135[0];
    }
    if ( (*(_BYTE *)(v9 + 25) & 1) == 0 && *(_BYTE *)(v9 + 24) == 1 )
    {
      v15 = *(struct tagWND **)v14;
      if ( *(_QWORD *)v14 )
      {
        v16 = v5[1];
        if ( v16 <= 1 || v16 == -2LL || v16 == -1LL )
        {
          v17 = 1LL;
LABEL_13:
          if ( *(_QWORD *)(gpDispInfo + 32LL) && (v8 & 8) == 0 )
          {
            SpbCheckRect(v15, (struct tagRECT *)(*((_QWORD *)v15 + 5) + 88LL), 1u);
            v17 = 1LL;
          }
          v3 = ++v121;
          if ( (v8 & 0x18E7) != 0x1807 )
            v6 = 1;
          if ( (v5[4] & 8) == 0 )
          {
            v54 = gpsi;
            if ( !*(_DWORD *)(gpsi + 2220LL) )
              PreventInterMonitorBlts((struct tagCVR *)v5);
            *((_DWORD *)v5 + 22) = 0;
            EmptyRgn = (HRGN)CreateEmptyRgn(v54, v13, v17, v12);
            v5[12] = (__int64)EmptyRgn;
            if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn(v15, EmptyRgn, v56) )
              *((_DWORD *)v5 + 22) = 2;
          }
          goto LABEL_17;
        }
        v18 = HMValidateHandleNoSecure(v16, 1);
        v17 = 1LL;
        if ( v18 )
          goto LABEL_13;
      }
    }
    goto LABEL_188;
  }
LABEL_18:
  v19 = v130;
  if ( !v6 )
    v3 = 0;
  if ( !v3 )
    goto LABEL_79;
  v20 = 0LL;
  v21 = (__int64 *)*((_QWORD *)v130 + 5);
  v22 = *((_DWORD *)v130 + 7) - 1;
  v123 = v22;
  if ( v22 < 0 )
    goto LABEL_79;
  do
  {
    v23 = *v21;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v23 >= *(_QWORD *)(gpsi + 8LL) )
      goto LABEL_196;
    v24 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v23;
    v26 = (HRGN)HMPkheFromPhe(v24);
    LOWORD(v23) = WORD1(v23) & 0x7FFF;
    v135[0] = v26;
    if ( (WORD1(v23) & 0x7FFF) != *(_WORD *)(v24 + 26) && (_WORD)v23 != 0x7FFF )
    {
      if ( (_WORD)v23 || !PsGetCurrentProcessWow64Process(v26, v25, v27) )
      {
LABEL_195:
        v22 = v123;
LABEL_196:
        *v21 = 0LL;
        *((_DWORD *)v21 + 8) = 6159;
        goto LABEL_36;
      }
      v26 = v135[0];
    }
    if ( (*(_BYTE *)(v24 + 25) & 1) != 0 )
      goto LABEL_195;
    if ( *(_BYTE *)(v24 + 24) != 1 )
      goto LABEL_195;
    v28 = *(_QWORD *)v26;
    if ( !*(_QWORD *)v26 )
      goto LABEL_195;
    if ( !*(_QWORD *)(v28 + 104) )
      goto LABEL_195;
    v29 = v21[1];
    if ( v29 >= 2 && v29 != -2LL && v29 != -1LL && !HMValidateHandleNoSecure(v29, 1) )
      goto LABEL_195;
    if ( v21[14] == 2
      && ((*(_BYTE *)(*(_QWORD *)(v28 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v28 + 104) != GetDesktopWindow(v28)) )
    {
      v21[14] = 0LL;
    }
    v22 = v123;
    v30 = v21;
    if ( v20 )
      v30 = v20;
    v20 = v30;
LABEL_36:
    v21 += 21;
    v123 = --v22;
  }
  while ( v22 >= 0 );
  v19 = v130;
  if ( !v20 )
  {
LABEL_79:
    v52 = *((_DWORD *)v19 + 7) - 1;
    if ( v52 >= 0 )
    {
      v53 = (_QWORD *)(*((_QWORD *)v19 + 5) + 96LL);
      do
      {
        if ( *v53 )
        {
          GreDeleteObject(*v53);
          *v53 = 0LL;
        }
        v53 += 21;
        --v52;
      }
      while ( v52 >= 0 );
    }
    goto LABEL_70;
  }
  v31 = *(struct tagWND **)(_HMObjectFromHandle(*v20) + 104);
  v137 = v31;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
    SpbCheck();
  zzzChangeStates(v31, v130);
  v32 = 0;
  v133 = 0;
  v33 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v33 || (*(_DWORD *)(**(_QWORD **)(v33 + 8) + 64LL) & 1) == 0 )
  {
    v100 = *((_DWORD *)v130 + 7) - 1;
    v101 = *((_QWORD *)v130 + 5);
    if ( v100 >= 0 )
    {
      do
      {
        if ( *(_QWORD *)v101 )
        {
          if ( (*(_DWORD *)(v101 + 32) & 8) == 0 )
          {
            _HMObjectFromHandle(*(_QWORD *)v101);
            v102 = *(_DWORD *)(v101 + 72);
            if ( v102 || *(_DWORD *)(v101 + 76) )
            {
              v109 = -*(_DWORD *)(v101 + 76);
              v110 = -v102;
              v134 = *(_OWORD *)(v101 + 56);
              v108 = (__m128i)v134;
              DWORD2(v134) += v110;
              HIDWORD(v134) += v109;
              DWORD1(v134) += v109;
              *(__m128i *)v135 = v108;
              LODWORD(v134) = v110 + _mm_cvtsi128_si32(v108);
              UnionRect(&v139, (int *)v135, (int *)&v134);
              v32 = 1;
            }
          }
        }
        v101 += 168LL;
        --v100;
      }
      while ( v100 >= 0 );
      v19 = v130;
      v133 = v32;
    }
  }
  v34 = 28;
  if ( (*(_BYTE *)(*((_QWORD *)v31 + 5) + 31LL) & 2) == 0 )
    v34 = 26;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000) == 0 )
    v126 = 2;
  if ( v32 )
    v35 = &v139;
  else
    v35 = 0LL;
  zzzLockDisplayAreaAndInvalidateDCCache((__int64)v31, v34, (__int64)v35);
  v37 = (_QWORD *)*((_QWORD *)v19 + 5);
  v38 = *((_DWORD *)v19 + 7) - 1;
  v122 = 96;
  v135[0] = (HRGN)ghrgnInvalidSum;
  v128 = 0;
  v124 = v38;
  if ( v38 >= 0 )
  {
    v39 = v31;
    while ( 2 )
    {
      v36 = (AtomicExecutionCheck *)*v37;
      --v3;
      if ( !*v37 || (v37[4] & 8) != 0 )
        goto LABEL_52;
      _HMObjectFromHandle(v36);
      v126 |= 1u;
      v57 = _HMObjectFromHandle(*v37);
      v59 = *((_DWORD *)v37 + 22);
      v60 = v57;
      if ( (*(_BYTE *)(*(_QWORD *)(v57 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v57);
        v85 = *(_QWORD *)(v60 + 40);
        if ( (RedirectionBitmap || (*(_BYTE *)(v85 + 27) & 0x20) != 0)
          && ((*(_DWORD *)(v85 + 232) & 2) != 0 || (*((_DWORD *)v37 + 39) & 7) != 0) )
        {
          *(_DWORD *)(v60 + 320) |= 0x4000u;
          goto LABEL_91;
        }
LABEL_139:
        *(_DWORD *)(v60 + 320) &= ~0x4000u;
        LOBYTE(v59) = v59 | 8;
      }
      else
      {
LABEL_91:
        if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v60, ghrgnVisNew, v58) )
          LOBYTE(v59) = v59 | 1;
        if ( *(_QWORD *)(gpDispInfo + 32LL) )
          SpbCheckRect((struct tagWND *)v60, (struct tagRECT *)(*(_QWORD *)(v60 + 40) + 88LL), 1u);
        if ( (v59 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v60 + 40) + 136LL) != 1LL )
        {
          v86 = *((_DWORD *)v37 + 16);
          v87 = *((_DWORD *)v37 + 14);
          if ( v86 > v87 )
          {
            v88 = *((_DWORD *)v37 + 17);
            v89 = *((_DWORD *)v37 + 15);
            if ( v88 > v89 )
            {
              GreSetRectRgn(
                ghrgnSWP1,
                (unsigned int)(v87 - *((_DWORD *)v37 + 18)),
                (unsigned int)(v89 - *((_DWORD *)v37 + 19)),
                (unsigned int)(v86 - *((_DWORD *)v37 + 18)),
                v88 - *((_DWORD *)v37 + 19));
              if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v37[12], 1LL) >= 2
                && ((v122 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
              {
                if ( v37[9] )
                  GreOffsetRgn(ghrgnValid, *((unsigned int *)v37 + 18), *((unsigned int *)v37 + 19));
                v90 = v60;
                v91 = 0LL;
                v131 = v60;
                do
                {
                  v92 = *(_QWORD *)(v90 + 40);
                  v93 = *(_QWORD *)(v92 + 136);
                  if ( v93 == 1 )
                    goto LABEL_175;
                  if ( v93 )
                  {
                    v132 = *(_QWORD **)(v92 + 136);
                    if ( v91 )
                    {
                      v107 = PhysicalToLogicalInPlaceRgn(v91, (__int64)&v132);
                      LODWORD(v127) = GreCombineRgn(ghrgnValid, ghrgnValid, v132, 4LL);
                      v106 = (unsigned int)v127;
                      if ( v107 )
                      {
                        GreDeleteObject(v132);
                        v106 = (unsigned int)v127;
                      }
                      v90 = v131;
                    }
                    else
                    {
                      v106 = GreCombineRgn(ghrgnValid, ghrgnValid, v93, 4LL);
                    }
                    if ( v106 < 2 )
                      goto LABEL_175;
                    v91 = v90;
                  }
                  v90 = *(_QWORD *)(v90 + 104);
                  v131 = v90;
                }
                while ( v90 && (*(_BYTE *)(*(_QWORD *)(v90 + 40) + 31LL) & 2) == 0 );
                v94 = v37[15];
                if ( v94 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v94, 4LL) < 2 )
                {
LABEL_175:
                  v38 = v124;
                  goto LABEL_97;
                }
                v38 = v124;
                if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  goto LABEL_98;
              }
            }
          }
        }
LABEL_97:
        LOBYTE(v59) = v59 | 4;
LABEL_98:
        if ( (v59 & 4) == 0 && (*((_DWORD *)v37 + 18) || *((_DWORD *)v37 + 19)) )
        {
          StyleWindow = (_QWORD *)GetStyleWindow(v60, 2568LL);
          v132 = StyleWindow;
          if ( StyleWindow && (v131 = GetRedirectionBitmap(StyleWindow)) != 0 )
          {
            if ( (_QWORD *)v60 == v132 )
            {
              if ( (*((_DWORD *)v37 + 39) & 1) != 0
                || *((_DWORD *)v37 + 18) != *((_DWORD *)v37 + 4) - *((_DWORD *)v37 + 20)
                || *((_DWORD *)v37 + 19) != *((_DWORD *)v37 + 5) - *((_DWORD *)v37 + 21) )
              {
                OldRedirectionBitmap = GetOldRedirectionBitmap(v132);
                v112 = -*((_DWORD *)v37 + 19);
                v113 = -*((_DWORD *)v37 + 18);
                LODWORD(v127) = *((_DWORD *)v37 + 21);
                v125 = *((_DWORD *)v37 + 20);
                *(_QWORD *)&v134 = ghrgnValid;
                if ( OldRedirectionBitmap )
                {
                  v114 = (HDC)ghdcMem;
                }
                else
                {
                  v114 = (HDC)ghdcMem2;
                  OldRedirectionBitmap = v131;
                }
                UpdateSpriteArea(
                  v132,
                  v131,
                  OldRedirectionBitmap,
                  v114,
                  ghdcMem2,
                  v134,
                  v37 + 7,
                  v113,
                  v112,
                  v125,
                  (int)v127);
              }
            }
            else
            {
              UpdateSpriteArea(
                v132,
                v131,
                v131,
                ghdcMem,
                ghdcMem,
                ghrgnValid,
                v37 + 7,
                -*((_DWORD *)v37 + 18),
                -*((_DWORD *)v37 + 19),
                *(_DWORD *)(v132[5] + 88LL),
                *(_DWORD *)(v132[5] + 92LL));
            }
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(v60 + 40) + 26LL) & 8) == 0 )
          {
            v115 = v129;
            if ( !v129 )
            {
              v115 = *(HDC *)(gpDispInfo + 56LL);
              v129 = v115;
            }
            GreHintDCWnd((__int64)v115, *(_QWORD *)v60, 0LL, 0, 0);
            GreSelectVisRgn(v129, ghrgnValid, 2LL);
            NtGdiBitBltInternal(
              v129,
              *((_DWORD *)v37 + 14),
              *((_DWORD *)v37 + 15),
              *((_DWORD *)v37 + 16) - *((_DWORD *)v37 + 14),
              *((_DWORD *)v37 + 17) - *((_DWORD *)v37 + 15),
              (__int64)v129,
              *((_DWORD *)v37 + 14) - *((_DWORD *)v37 + 18),
              *((_DWORD *)v37 + 15) - *((_DWORD *)v37 + 19),
              13369376,
              0,
              1);
            GreHintDCWnd((__int64)v129, 0LL, 0LL, 0, 0);
          }
        }
        if ( *(char *)(*(_QWORD *)(v60 + 40) + 16LL) >= 0
          || (v59 & 2) != 0
          || !CombineOldNewVis(ghrgnInvalid, (HRGN)v37[12], ghrgnVisNew, 4LL, v59) )
        {
          v61 = (HRGN)v37[12];
          if ( v61 )
          {
            if ( !CombineOldNewVis(ghrgnInvalid, v61, ghrgnVisNew, 2LL, v59) )
              goto LABEL_139;
          }
          else
          {
            v138 = *(_OWORD *)(*((_QWORD *)v39 + 5) + 88LL);
            TransformRectBetweenCoordinateSpaces(&v138, &v138, v60, v39);
            SetRectRgnIndirect(ghrgnInvalid, &v138);
          }
LABEL_102:
          v62 = v122;
        }
        else
        {
          v116 = RestoreSpb(v60, ghrgnInvalid, &v129);
          if ( v116 )
          {
            v62 = v122;
            if ( v116 == 2 && (v122 & 0x20) == 0 )
            {
              GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
              v62 = v122;
            }
            if ( (v59 & 1) == 0 )
              goto LABEL_220;
          }
          else
          {
            if ( (v59 & 1) != 0 )
              goto LABEL_139;
LABEL_220:
            GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
            v62 = v122;
          }
          if ( (v59 & 0x20) == 0 )
          {
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
              LOBYTE(v59) = v59 | 0x20;
            goto LABEL_102;
          }
        }
        v63 = v59 & 4;
        LODWORD(v127) = v63;
        if ( (v59 & 4) == 0 )
        {
          if ( (v62 & 0x20) != 0 )
          {
            v97 = 5LL;
            v98 = 0LL;
            v99 = ghrgnValidSum;
          }
          else
          {
            v97 = 2LL;
            v99 = ghrgnValidSum;
            v98 = ghrgnValidSum;
          }
          GreCombineRgn(v99, ghrgnValid, v98, v97);
          v63 = (int)v127;
          v62 = v122 & 0xDF;
          v122 &= ~0x20u;
        }
        if ( (v62 & 0x20) != 0 )
        {
          if ( v63 )
            goto LABEL_106;
          v95 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v95 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v95, 4LL) <= 1 )
          goto LABEL_139;
      }
LABEL_106:
      if ( *(char *)(*(_QWORD *)(v60 + 40) + 16LL) < 0 )
      {
        v117 = *((_DWORD *)v37 + 8);
        if ( (v117 & 0x40) == 0 && (v117 & 0x87) != 7 )
        {
          Spb = (char *)FindSpb(v60);
          FreeSpb(Spb);
        }
      }
      v36 = (AtomicExecutionCheck *)v37[12];
      if ( v36 )
      {
        GreDeleteObject(v36);
        v37[12] = 0LL;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v60 + 40) + 21LL) & 1) == 0 && (v37[4] & 0x40) != 0 )
        ++v128;
      if ( (v59 & 8) != 0 )
        goto LABEL_52;
      if ( (v59 & 5) == 4 )
      {
        AtomicExecutionCheck::EnforceConsistency(v36);
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v65, v64, v66);
        ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
        xxxInternalInvalidate((struct tagWND *)v60, (HRGN)1, 0x485u);
        v71 = PsGetCurrentThreadWin32Thread(v69, v68, v70);
        --*(_DWORD *)(v71 + 48);
      }
      v127 = (HRGN)ghrgnInvalid;
      v72 = LogicalToPhysicalInPlaceRgnWorker((const struct tagWND *)v60, &v127, 0);
      v73 = v72;
      if ( (v122 & 0x40) != 0 )
      {
        if ( !v3 && !v72 )
        {
          v135[0] = (HRGN)ghrgnInvalid;
          goto LABEL_117;
        }
        v103 = 5LL;
        v105 = 0LL;
        v104 = ghrgnInvalidSum;
      }
      else
      {
        v103 = 2LL;
        v104 = ghrgnInvalidSum;
        v105 = ghrgnInvalidSum;
      }
      GreCombineRgn(v104, v127, v105, v103);
      if ( v73 )
        GreDeleteObject(v127);
LABEL_117:
      v122 &= ~0x40u;
LABEL_52:
      v37 += 21;
      v124 = --v38;
      if ( v38 < 0 )
      {
        v19 = v130;
        v31 = v137;
        v32 = v133;
        break;
      }
      continue;
    }
  }
  if ( v32 )
    GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), &v139);
  v40 = *((_DWORD *)v19 + 7) - 1;
  for ( i = (AtomicExecutionCheck **)*((_QWORD *)v19 + 5); v40 >= 0; --v40 )
  {
    v36 = *i;
    if ( *i )
    {
      v42 = _HMObjectFromHandle(v36);
      if ( (*(_BYTE *)(*(_QWORD *)(v42 + 40) + 26LL) & 8) != 0 )
        DeleteOldRedirectionBitmap(v42);
    }
    i += 21;
  }
  if ( (v122 & 0x40) == 0 )
  {
    if ( v128 != *((_DWORD *)v19 + 7) || (v74 = 69, v31 == (struct tagWND *)GetDesktopWindow((__int64)v31)) )
      v74 = 133;
    AtomicExecutionCheck::EnforceConsistency(v36);
    v78 = PsGetCurrentThreadWin32Thread(v76, v75, v77);
    v79 = v135[0];
    ++*(_DWORD *)(v78 + 48);
    xxxInternalInvalidate(v31, v79, v74);
    v83 = PsGetCurrentThreadWin32Thread(v81, v80, v82);
    --*(_DWORD *)(v83 + 48);
  }
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    GreClientRgnDone();
  v43 = *(_QWORD *)(gpDispInfo + 40LL);
  v44 = Gre::Base::Globals(gpDispInfo);
  GreIncNonRBLockCount(*((_QWORD *)v44 + 14));
  if ( *(_DWORD *)(v43 + 140) )
  {
    v119 = 0;
    do
    {
      v130 = *(struct tagSMWP **)(8LL * v119 + *(_QWORD *)(v43 + 144));
      v120 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v130);
      SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v136, *((HSEMAPHORE *)v44 + 14), v120);
      vSpRedrawSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(v43 + 144) + 8LL * v119));
      EtwTraceGreLockReleaseSemaphore(L"hsem");
      GreReleaseSemaphoreInternal(v136);
      ++v119;
    }
    while ( v119 < *(_DWORD *)(v43 + 140) );
  }
  else
  {
    v136 = *(_QWORD *)(v43 + 80);
    v45 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v136);
    v46 = *((_QWORD *)v44 + 14);
    if ( v45 == 1 )
    {
      GreAcquireSemaphoreSharedInternal(v46);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v46);
    }
    else
    {
      GreAcquireSemaphore(v46);
    }
    vSpRedrawSpriteOverlapPresent(*(HDEV *)(v43 + 80));
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v46);
  }
  GreDecNonRBLockCount(*((_QWORD *)v44 + 14));
  v47 = v129;
  if ( v129 )
  {
    GreSelectVisRgn(v129, 0LL, 1LL);
    GreGetBounds(v47, 0LL, 0LL);
  }
LABEL_70:
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  DLT = DLT_WINEVENT::getDLT();
  v49 = &v141;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v142 = gDomainDummyLock;
  v144 = 0LL;
  v145 = 0;
  v141 = 1;
  v143 = 0;
  do
  {
    v50 = (tagDomLock *)*((_QWORD *)v49 - 1);
    if ( v50 )
    {
      if ( *v49 )
        tagDomLock::LockExclusive(v50);
      else
        tagDomLock::LockShared(v50);
    }
    ++v2;
    v49 += 16;
  }
  while ( !v2 );
  v145 = 1;
  --gdwDeferWinEvent;
  if ( DomainLockRef )
  {
    if ( v141 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
  return v126;
}
