/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00D8400
 * Callers:
 *     GreUpdateSprite @ 0x1C00D5F08 (GreUpdateSprite.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0107D28 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C0265920 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C001D4CC (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0058538 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C005AD50 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C0078024 (DwmAsyncDirtySprite.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0079E0C (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C007AD98 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C007B470 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00AD880 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00BB50C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00BE0AC (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00D5BA0 (DwmAsyncUpdateSprite.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00D92B0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C013411C (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0134444 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0135688 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C02665B0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C02D54F0 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreUpdateSpriteInternal(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15,
        unsigned int a16)
{
  HDEV v16; // rbx
  unsigned int v17; // edi
  unsigned int v18; // r13d
  unsigned int v19; // r15d
  Gre::Base *v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v22; // rcx
  __int64 v23; // rax
  int v24; // edi
  int v25; // r14d
  __int64 v26; // rsi
  struct Gre::Base::SESSION_GLOBALS *v27; // rbx
  Gre::Base *v28; // rcx
  Gre::Base *v29; // rcx
  int v30; // ebx
  void *v31; // r15
  __int64 v32; // r13
  struct Gre::Base::SESSION_GLOBALS *v33; // r13
  __int64 v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r15
  __int64 v40; // r13
  SFMLOGICALSURFACE *v41; // rsi
  void *v42; // rax
  SFMLOGICALSURFACE *v43; // rbx
  __int64 v44; // rdx
  char *v45; // r12
  struct tagRECT v46; // xmm0
  unsigned int v47; // r15d
  unsigned int v48; // r8d
  struct _BLENDFUNCTION *v49; // r14
  unsigned __int64 v50; // rcx
  int v51; // r10d
  int v52; // eax
  struct _BLENDFUNCTION v53; // ecx
  __int64 v54; // rbx
  int v55; // eax
  HSURF v56; // rcx
  SFMLOGICALSURFACE *FirstLSurf; // r10
  __int64 v58; // rdx
  int v59; // r9d
  struct tagPOINT *v60; // r11
  LONG x; // eax
  int v62; // edx
  int v63; // ebx
  SURFACE *v64; // rax
  __int64 v65; // r8
  struct tagRECT *v66; // r10
  __int64 v67; // r8
  LONG y; // edx
  struct _RECTL *v69; // rax
  LONG v70; // ecx
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  _OWORD *v75; // rax
  SFMLOGICALSURFACE *v76; // rbx
  Gre::Base *v77; // rcx
  struct Gre::Base::SESSION_GLOBALS *v78; // rax
  _DWORD *v79; // rdx
  __int64 v80; // rax
  int v81; // edx
  __int64 v82; // rcx
  int v83; // ebx
  void *v84; // rax
  SFMLOGICALSURFACE *v85; // rbx
  int v86; // eax
  struct Gre::Base::SESSION_GLOBALS *v87; // rax
  HLSURF v88; // r12
  __int64 v89; // rcx
  SFMLOGICALSURFACE *v90; // r12
  unsigned int v91; // ebx
  __int64 v92; // rax
  __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // rax
  void *v96; // rax
  __int64 v97; // r8
  unsigned int v98; // ebx
  struct Gre::Base::SESSION_GLOBALS *v99; // rbx
  Gre::Base *v100; // rcx
  struct Gre::Base::SESSION_GLOBALS *v101; // rbx
  unsigned int v103; // eax
  int v104; // [rsp+20h] [rbp-E0h]
  int v105; // [rsp+60h] [rbp-A0h]
  int v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+60h] [rbp-A0h]
  int updated; // [rsp+64h] [rbp-9Ch]
  unsigned int v109; // [rsp+68h] [rbp-98h]
  struct tagPOINT *v110; // [rsp+68h] [rbp-98h]
  unsigned int v111; // [rsp+6Ch] [rbp-94h]
  char v112; // [rsp+70h] [rbp-90h]
  SFMLOGICALSURFACE *v113; // [rsp+78h] [rbp-88h] BYREF
  int v114; // [rsp+80h] [rbp-80h]
  unsigned int v115; // [rsp+84h] [rbp-7Ch]
  __int64 v116; // [rsp+88h] [rbp-78h]
  int v117; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v118; // [rsp+94h] [rbp-6Ch] BYREF
  struct _BLENDFUNCTION *v119; // [rsp+98h] [rbp-68h]
  int v120; // [rsp+A0h] [rbp-60h]
  struct tagRECT *v121; // [rsp+A8h] [rbp-58h]
  void *v122; // [rsp+B0h] [rbp-50h]
  __int64 v123; // [rsp+B8h] [rbp-48h]
  __int64 v124; // [rsp+C0h] [rbp-40h]
  unsigned int v125; // [rsp+C8h] [rbp-38h]
  HDEV v126; // [rsp+D0h] [rbp-30h]
  struct tagSIZE *v127; // [rsp+D8h] [rbp-28h]
  __int64 v128; // [rsp+E0h] [rbp-20h]
  struct tagPOINT *v129; // [rsp+E8h] [rbp-18h]
  HDC v130; // [rsp+F0h] [rbp-10h]
  struct tagPOINT *v131; // [rsp+F8h] [rbp-8h]
  HWND v132; // [rsp+100h] [rbp+0h]
  HDEV v133; // [rsp+108h] [rbp+8h] BYREF
  struct _BLENDFUNCTION *v134; // [rsp+110h] [rbp+10h]
  __int64 v135; // [rsp+118h] [rbp+18h]
  struct Gre::Base::SESSION_GLOBALS *v136; // [rsp+128h] [rbp+28h]
  HDC v137; // [rsp+130h] [rbp+30h]
  _BYTE v138[32]; // [rsp+138h] [rbp+38h] BYREF
  SFMLOGICALSURFACE *v139; // [rsp+158h] [rbp+58h]
  int v140; // [rsp+160h] [rbp+60h]
  _QWORD Buffer[2]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v142[2]; // [rsp+178h] [rbp+78h] BYREF
  char v143[32]; // [rsp+188h] [rbp+88h] BYREF
  struct _RECTL v144; // [rsp+1A8h] [rbp+A8h] BYREF
  struct tagRECT v145; // [rsp+1B8h] [rbp+B8h] BYREF
  _OWORD v146[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v147; // [rsp+250h] [rbp+150h]
  unsigned int v148; // [rsp+310h] [rbp+210h]

  v131 = a5;
  v16 = a1;
  v127 = a6;
  v17 = a11 & 0x200000;
  v18 = 0;
  v130 = a7;
  v129 = a8;
  v119 = a10;
  v134 = a10;
  v121 = a12;
  v126 = a1;
  v147 = 0LL;
  v112 = 0;
  v137 = a4;
  v122 = a3;
  v132 = a2;
  v123 = (__int64)a13;
  v128 = 0LL;
  updated = 0;
  v114 = 1;
  v125 = a11 & 0x200000;
  memset(v146, 0, sizeof(v146));
  v117 = 0;
  v118 = 0;
  v120 = 0;
  v19 = a11 & 0xFFDFFFFF;
  v136 = Gre::Base::Globals(a13);
  v148 = v19;
  v115 = v19;
  if ( !a14 || !*((_QWORD *)Gre::Base::Globals(v20) + 38) )
    goto LABEL_164;
  if ( !v17 )
  {
    GreAcquireSemaphore(*((_QWORD *)v136 + 15));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v136 + 15), 2LL);
    v133 = v16;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread
      && (v23 = *ThreadWin32Thread) != 0
      && ((v24 = 1, v25 = 0, v105 = 1, *(_DWORD *)(v23 + 104)) || (v105 = 1, *(_DWORD *)(v23 + 108))) )
    {
      v26 = *((_QWORD *)v136 + 9);
      if ( v125 )
        goto LABEL_13;
    }
    else
    {
      v27 = Gre::Base::Globals(v22);
      GreAcquireSemaphore(*((_QWORD *)v27 + 14));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v27 + 14), 5LL);
      v26 = *((_QWORD *)v136 + 9);
      v25 = 1;
      v24 = 1;
      v105 = 1;
    }
    GreAcquireSemaphore(v26);
    goto LABEL_14;
  }
  v26 = *((_QWORD *)v136 + 9);
  v25 = 0;
  v133 = v16;
  v24 = 0;
  v105 = 0;
LABEL_13:
  GreAcquireSemaphoreSharedInternal(v26);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v26);
LABEL_14:
  if ( *((_QWORD *)Gre::Base::Globals(v28) + 38) )
  {
    v30 = v24;
    v31 = v122;
    v32 = v26;
    v111 = v24;
    v116 = v26;
    v109 = v25;
    if ( v132 )
    {
      Buffer[1] = 0LL;
      v31 = 0LL;
      v33 = Gre::Base::Globals(v29);
      Buffer[0] = v132;
      v34 = *((_QWORD *)v33 + 38) + 72LL;
      if ( *((_QWORD *)v33 + 38) != -72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v34, 0LL);
      }
      v35 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v33 + 38), Buffer);
      if ( v35 )
        v31 = (void *)v35[1];
      if ( v34 )
      {
        ExReleasePushLockExclusiveEx(v34, 0LL);
        KeLeaveCriticalRegion();
      }
      v30 = v24;
      v32 = v26;
    }
    if ( v31 )
    {
      Gre::Base::Globals(v29);
      LOBYTE(v36) = 15;
      v37 = HmgShareLockCheck(v31, v36);
      v38 = v37;
      if ( v37 )
      {
        v106 = v30;
        v39 = v37;
        v135 = v37 + 140;
        v26 = v32;
        if ( (*(_DWORD *)(v37 + 140) & 0x10) != 0 )
        {
          v98 = a9;
          v24 = v106;
LABEL_153:
          v18 = updated;
          DEC_SHARE_REF_CNT(v39);
          a9 = v98;
LABEL_156:
          v19 = v148;
          goto LABEL_157;
        }
        v40 = v37 + 88;
        v114 = 0;
        updated = 1;
        if ( v37 != -88 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v39 + 88, 0LL);
        }
        v42 = *(void **)v38;
        v43 = *(SFMLOGICALSURFACE **)(v38 + 144);
        v113 = v43;
        v41 = v43;
        v122 = v42;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v138);
        v139 = 0LL;
        v140 = 1;
        if ( v43 && *(_QWORD *)v113 )
        {
          LOBYTE(v44) = 18;
          v139 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v113, v44);
        }
        v45 = (char *)v113 + 256;
        if ( v113 != (SFMLOGICALSURFACE *)-256LL )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)v113 + 256, 0LL);
        }
        if ( v121 )
        {
          v46 = *v121;
          v121 = &v145;
          v145 = v46;
        }
        if ( v148 == 0x2000000 )
        {
          v119 = (struct _BLENDFUNCTION *)&v117;
          v117 = 33488896;
          if ( v127 || v131 )
          {
            vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v38, 1u);
            v47 = a9;
            v48 = 33554434;
            v49 = v119;
          }
          else
          {
            vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v38, 0);
            v47 = a9;
            v48 = 33554434;
            v49 = v119;
          }
        }
        else
        {
          v48 = v115;
          v119 = v134;
          if ( (v115 & 0x20000000) != 0 )
          {
            v47 = a9;
            v48 = v115 & 0xDFFFFFFF;
            v49 = v134;
          }
          else
          {
            if ( (v115 & 0x40000000) == 0 )
            {
              v119 = v134;
              v49 = v134;
              v148 = v115;
              if ( v115 )
              {
                v47 = a9;
LABEL_47:
                v115 = v47;
                v50 = v48 & 2;
                if ( (v48 & 2) != 0 && (!v49 || (v49->AlphaFormat & 1) != 0 && (*((_DWORD *)v113 + 63) & 1) != 0) )
                {
                  v51 = 0;
                  v25 = v109;
                  v39 = v38;
                  v26 = v116;
                  updated = 0;
                  v107 = v111;
LABEL_107:
                  if ( *(_QWORD *)(v39 + 40) )
                  {
                    v75 = (_OWORD *)v123;
                  }
                  else
                  {
                    vSpDwmGetMiniWinInfoForNonWindowSprite(v146, v39 + 56);
                    v75 = v146;
                    v123 = (__int64)v146;
                  }
                  if ( v51 )
                  {
                    if ( !v112 )
                    {
                      v76 = v113;
                      if ( v75 || (*((_DWORD *)v113 + 63) & 8) != 0 )
                      {
                        v77 = (Gre::Base *)*((unsigned int *)v113 + 63);
                        if ( ((unsigned __int8)v77 & 8) != 0 )
                        {
                          v78 = Gre::Base::Globals(v77);
                          SFMLOGICALSURFACE::StartSfmStateTracking(v76, v126, *((struct SfmState **)v78 + 809));
                          LODWORD(v77) = *((_DWORD *)v76 + 63);
                        }
                        v79 = (_DWORD *)*((_QWORD *)v76 + 23);
                        if ( v79 )
                        {
                          HIDWORD(v110) = v79[8];
                          LODWORD(v110) = v79[9];
                          if ( (v79[23] & 1) != 0 )
                          {
                            v120 = 2;
                          }
                          else if ( (v79[22] & 0x800) != 0 )
                          {
                            v120 = 1;
                          }
                        }
                        else
                        {
                          v120 = 0;
                          v110 = 0LL;
                        }
                        v80 = v135;
                        v135 = *(_QWORD *)(v39 + 104);
                        LODWORD(v116) = *(_DWORD *)(v39 + 116);
                        LODWORD(v80) = *(_DWORD *)v80;
                        *(_QWORD *)(v39 + 104) = 0LL;
                        v81 = (unsigned __int8)v77 & 1;
                        v82 = (unsigned __int8)v77 & 0xC;
                        v83 = v80 & 1 | v82 | (2 * (v81 | v80 & 0x40 | (4 * (v80 & 0xE))));
                        v134 = *(struct _BLENDFUNCTION **)v113;
                        v124 = *(_QWORD *)v39;
                        v84 = (void *)UserReferenceDwmApiPort(v82);
                        DwmAsyncUpdateSprite(
                          v84,
                          v124,
                          (__int64)v134,
                          v83,
                          v39 + 72,
                          (__int128 *)v123,
                          v120,
                          SHIDWORD(v110),
                          (int)v110,
                          (int)v116 >= 1,
                          v135);
                      }
                    }
                  }
                  if ( v45 )
                  {
                    ExReleasePushLockExclusiveEx(v45, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  if ( v139 )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)v139 + 3);
                    if ( v140 == 1 )
                    {
                      v85 = v139;
                      v86 = *((_DWORD *)v139 + 61);
                      if ( (v86 & 0x80u) != 0 && (v86 & 8) != 0 && (v86 & 0x10) != 0 )
                      {
                        *((_DWORD *)v139 + 61) = v86 & 0xFFFFFFEF;
                        v87 = Gre::Base::Globals((Gre::Base *)v50);
                        SFMLOGICALSURFACE::StopSfmStateTracking(v139, 0LL, *((struct SfmState **)v87 + 809));
                        v85 = v139;
                      }
                      v88 = *(HLSURF *)v85;
                      if ( *(_QWORD *)v85 )
                      {
                        LOBYTE(v104) = 18;
                        v85 = (SFMLOGICALSURFACE *)HmgRemoveObject(v88, 0LL, 0LL, 1LL, v104, 0LL);
                      }
                      if ( v85 )
                      {
                        SFMLOGICALSURFACE::DeInitialize(v85, v88);
                        FreeObject(v85, 18LL);
                        EtwLogicalSurfDestroyEvent(v88, 0LL);
                      }
                    }
                  }
                  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v138);
                  v90 = v113;
                  v91 = v118;
                  v92 = *((_QWORD *)v113 + 23);
                  if ( v92 )
                  {
                    v89 = *(_QWORD *)(v92 + 8);
                    v93 = *(_QWORD *)v38;
                    v94 = *(_DWORD *)(v92 + 92);
                    v24 = v107;
                    v128 = v89;
                    v123 = v93;
                    if ( (v94 & 1) != 0 )
                    {
                      v91 = v118 & 0xFFFFFFFE;
                      v128 = v89;
                      v123 = v93;
                    }
                  }
                  else
                  {
                    v95 = *(_QWORD *)v38;
                    v24 = v107;
                    v123 = v95;
                  }
                  if ( (v91 & 1) != 0 && bShouldUseSfmTokenArray(*((_DWORD *)v113 + 63)) )
                  {
                    GreAddLogicalSurfaceToDirtyQueue(*(Gre::Base **)v90, 1u, v128);
                    v91 &= ~1u;
                  }
                  if ( v91 )
                  {
                    v96 = (void *)UserReferenceDwmApiPort(v89);
                    DwmAsyncDirtySprite(v96, v123, v97, v91, v128);
                  }
                  if ( v90 == (SFMLOGICALSURFACE *)-256LL )
                  {
                    MEMORY[0xFFFFFFFFFFFFFFFC] &= ~8u;
                  }
                  else
                  {
                    KeEnterCriticalRegion();
                    ExAcquirePushLockExclusiveEx((char *)v90 + 256, 0LL);
                    *((_DWORD *)v90 + 63) &= ~8u;
                    ExReleasePushLockExclusiveEx((char *)v90 + 256, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  if ( v40 )
                  {
                    ExReleasePushLockExclusiveEx(v40, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  v98 = v115;
                  goto LABEL_153;
                }
                *(_DWORD *)(v38 + 72) = v48;
                if ( (v48 & 2) != 0 )
                {
                  if ( *(_BYTE *)(v38 + 79) != v49->AlphaFormat )
                  {
                    v52 = bSpDwmCreateLogicalSurface(v126, (struct DWMSPRITE *)v38, v43, 0LL, &v113);
                    v48 = v148;
                    v43 = v113;
                    updated = v52;
                  }
                  *(struct _BLENDFUNCTION *)(v38 + 76) = *v49;
                  v53 = *v49;
                  *((_DWORD *)v43 + 61) |= 0x40u;
                  *((struct _BLENDFUNCTION *)v43 + 60) = v53;
                }
                if ( (v48 & 1) != 0 )
                {
                  *(_DWORD *)(v38 + 80) = v47;
                  if ( *((_QWORD *)v41 + 23) )
                  {
                    if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v41) )
                    {
                      if ( !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v133) )
                      {
                        v54 = *((_QWORD *)v41 + 23);
                        if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v133) )
                        {
                          v55 = *(_DWORD *)(v54 + 92);
                          if ( (v55 & 0x20) == 0 )
                          {
                            v56 = *(HSURF *)(v54 + 8);
                            *(_DWORD *)(v54 + 92) = v55 | 0x20;
                            pConvertDfbSurfaceToDibPostNKAPC(v56);
                            v112 = 1;
                          }
                        }
                        else
                        {
                          v64 = (SURFACE *)pProcessDfbSurfaces(v54 - 24, 1LL);
                          if ( v64 )
                          {
                            FirstLSurf = SURFACE::GetFirstLSurf(v64);
                            v113 = FirstLSurf;
                            goto LABEL_64;
                          }
                        }
                        FirstLSurf = v113;
LABEL_64:
                        v48 = v148;
                        goto LABEL_65;
                      }
                      v48 = v148;
                    }
                  }
                }
                FirstLSurf = v113;
LABEL_65:
                v39 = v38;
                v58 = v116;
                v59 = v109;
                v26 = v116;
                v50 = v111;
                v25 = v109;
                v107 = v111;
                if ( !updated )
                {
LABEL_109:
                  v51 = updated;
                  goto LABEL_107;
                }
                v60 = v131;
                if ( v131 )
                {
                  x = v131->x;
                  v62 = v131->y - *(_DWORD *)(v38 + 60);
                  *(_DWORD *)(v38 + 64) += v131->x - *(_DWORD *)(v38 + 56);
                  *(_DWORD *)(v38 + 68) += v62;
                  *(_DWORD *)(v38 + 60) += v62;
                  v58 = v26;
                  v50 = v111;
                  *(_DWORD *)(v38 + 56) = x;
                }
                if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
                {
                  v26 = v58;
                  v107 = v50;
                  v63 = v50;
                  if ( !v121 || (v107 = v50, !*((_QWORD *)FirstLSurf + 23)) )
                  {
LABEL_94:
                    if ( a16 )
                    {
                      v72 = *((_QWORD *)FirstLSurf + 23);
                      v73 = v72 - 24;
                      if ( !v72 )
                        v73 = 0LL;
                      if ( v73 && *(_DWORD *)(v73 + 656) != a16 )
                        *(_DWORD *)(v73 + 656) = a16;
                    }
                    v50 = *((unsigned int *)FirstLSurf + 63);
                    if ( (*((_DWORD *)FirstLSurf + 63) & 0x41) == 1 )
                    {
                      v50 = (unsigned int)v50 | 0x40;
                      *((_DWORD *)FirstLSurf + 63) = v50;
                    }
                    v74 = *((_QWORD *)FirstLSurf + 23);
                    if ( v74 && (*(_DWORD *)(v74 + 92) & 1) == 0 )
                    {
                      v107 = v63;
                      if ( !*(_QWORD *)(v74 + 224) )
                      {
                        v50 = (unsigned int)v50 | 8;
                        *((_DWORD *)FirstLSurf + 63) = v50;
                        v107 = v63;
                      }
                      v51 = updated;
                      goto LABEL_107;
                    }
                    goto LABEL_109;
                  }
                  vSpUpdateDirtyRgn((struct DWMSPRITE *)v38, FirstLSurf, v130, v121, &v118, a15);
                  v63 = v111;
                  v26 = v116;
                  v107 = v111;
                }
                else
                {
                  if ( (v48 & 0x2000000) != 0 )
                  {
                    if ( v60 && v127 )
                    {
                      updated = bSpDwmUpdateDragRectShape(
                                  v126,
                                  (struct DWMSPRITE *)v38,
                                  FirstLSurf,
                                  (struct tagPOINT *)v109,
                                  v127,
                                  &v118,
                                  &v113);
                      v59 = v109;
                    }
                    v63 = v111;
                    v25 = v59;
                    v107 = v111;
                  }
                  else
                  {
                    v26 = v58;
                    v63 = v50;
                    v107 = v50;
                    if ( v129 )
                    {
                      v107 = v50;
                      if ( v127 )
                      {
                        DCOBJ::DCOBJ((DCOBJ *)v142, v130);
                        v63 = v111;
                        v26 = v116;
                        updated = 0;
                        v107 = v111;
                        if ( v142[0] )
                        {
                          if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v142) )
                          {
                            v67 = *(_QWORD *)(v65 + 496);
                            y = v129->y;
                            v69 = (struct _RECTL *)&v145;
                            v144.left = v129->x;
                            v144.right = v127->cx + v144.left;
                            v70 = y + v127->cy;
                            v144.top = y;
                            if ( v121 == v66 )
                              v69 = (struct _RECTL *)v66;
                            v144.bottom = v70;
                            v71 = bSpDwmUpdateSpriteShape(
                                    v126,
                                    (struct DWMSPRITE *)v38,
                                    v113,
                                    (struct _SURFOBJ *)(v67 + 24),
                                    &v144,
                                    *(struct PALETTE **)(v67 + 128),
                                    &v118,
                                    v69,
                                    &v113);
                            v65 = v142[0];
                            v39 = v38;
                            updated = v71;
                            v107 = v111;
                          }
                          if ( v65 )
                            XDCOBJ::vUnlockFast((XDCOBJ *)v142);
                        }
                        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v143);
                      }
                    }
                  }
                  v51 = updated;
                  if ( !updated )
                    goto LABEL_107;
                }
                FirstLSurf = v113;
                goto LABEL_94;
              }
            }
            v48 = *(_DWORD *)(v38 + 72);
            v49 = (struct _BLENDFUNCTION *)(v38 + 76);
            v47 = *(_DWORD *)(v38 + 80);
            v119 = (struct _BLENDFUNCTION *)(v38 + 76);
          }
        }
        v148 = v48;
        goto LABEL_47;
      }
      v24 = v105;
    }
    v18 = 0;
    goto LABEL_156;
  }
LABEL_157:
  if ( v24 )
  {
    v99 = v136;
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*((_QWORD *)v99 + 15));
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(v26);
  if ( v25 )
  {
    v101 = Gre::Base::Globals(v100);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v101 + 14));
  }
  if ( !v114 )
    return v18;
  v16 = v126;
  v17 = v125;
LABEL_164:
  v103 = v19 | 0x200000;
  if ( !v17 )
    v103 = v19;
  return GdiUpdateSprite(
           (Gre::Base *)v16,
           v132,
           v122,
           v137,
           (struct _POINTL *)v131,
           v127,
           v130,
           (struct _POINTL *)v129,
           a9,
           v119,
           v103,
           v121);
}
