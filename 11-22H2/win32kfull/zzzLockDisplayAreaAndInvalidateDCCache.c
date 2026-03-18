/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     zzzLockWindowUpdate2 @ 0x1C005DC44 (zzzLockWindowUpdate2.c)
 *     zzzResetSharedDesktops @ 0x1C008DF60 (zzzResetSharedDesktops.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C008E138 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00C5F30 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     UnsetLayeredWindow @ 0x1C00C8C24 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C0224BB0 (xxxMinimizeHungWindow.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000BF1C (SpbCheckRect.c)
 *     GreSelectRedirectionBitmap @ 0x1C002F2A0 (GreSelectRedirectionBitmap.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0033750 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GreClientRgnUpdated @ 0x1C00346B4 (GreClientRgnUpdated.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0034764 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     DwmAsyncShowSprite @ 0x1C00C9540 (DwmAsyncShowSprite.c)
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     IsDesktopWindow @ 0x1C00D3DF0 (IsDesktopWindow.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     InvalidateGDIWindows @ 0x1C01BDC84 (InvalidateGDIWindows.c)
 *     GreLockDisplayArea @ 0x1C02839D0 (GreLockDisplayArea.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, __int64 a3)
{
  char v3; // si
  unsigned int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 *i; // rbx
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  LONG bottom; // r14d
  int v20; // ecx
  LONG left; // edi
  LONG right; // esi
  LONG top; // r15d
  unsigned int v24; // r12d
  __int64 StyleWindow; // rax
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  struct tagWND *v29; // rdi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r10
  __int64 v33; // r8
  unsigned __int8 v34; // cl
  bool v35; // zf
  int v36; // r8d
  unsigned int v37; // ebx
  unsigned int v38; // edi
  __int64 v39; // rsi
  struct Gre::Base::SESSION_GLOBALS *v40; // r14
  __int64 v41; // rbx
  Gre::Base *v42; // rcx
  Gre::Base *v43; // rcx
  int v44; // edi
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v46; // rcx
  __int64 v47; // rax
  struct Gre::Base::SESSION_GLOBALS *v48; // rdi
  Gre::Base *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct Gre::Base::SESSION_GLOBALS *v52; // rbx
  __int64 v53; // r13
  __int64 v54; // rsi
  __int64 v55; // r14
  __int64 v56; // r8
  __int64 v57; // r9
  const struct tagWND **v58; // r15
  const struct tagWND *v59; // r15
  const struct tagWND *v60; // rsi
  __int64 v61; // rdx
  _WORD *v62; // rcx
  __int128 *v63; // r14
  __int64 v64; // r13
  __int64 v65; // xmm1_8
  PERESOURCE *v66; // rax
  int v67; // r15d
  tagObjLock **v68; // r14
  __int64 Prop; // r14
  __int128 *v70; // r14
  __int64 v71; // r13
  __int64 v72; // xmm1_8
  PERESOURCE *v73; // rax
  int v74; // r15d
  tagObjLock **v75; // r14
  bool v76; // zf
  __int64 v77; // rax
  __int128 *v78; // r14
  __int64 v79; // xmm1_8
  PERESOURCE *v80; // rax
  int v81; // r15d
  tagObjLock **v82; // r14
  char v83; // r14
  __int64 v84; // rdx
  int v85; // esi
  char v86; // cl
  const struct tagWND *v87; // rdx
  __int64 v88; // rcx
  char v89; // al
  const struct tagWND *v90; // r15
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int128 *v93; // r14
  __int64 v94; // r13
  __int64 v95; // xmm1_8
  PERESOURCE *v96; // rax
  const struct tagWND *v97; // r12
  int v98; // r15d
  tagObjLock **v99; // r14
  _QWORD *v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  const struct tagWND *v104; // rsi
  __int64 v105; // rcx
  __int128 *v106; // r14
  __int64 v107; // r12
  __int64 v108; // r13
  __int64 v109; // xmm1_8
  PERESOURCE *v110; // rax
  const struct tagWND *v111; // r12
  int v112; // r15d
  tagObjLock **v113; // r14
  _QWORD *v114; // r14
  unsigned int v115; // r8d
  int v116; // eax
  __int64 v117; // rcx
  BOOL v118; // r14d
  __int64 v119; // rcx
  void *v120; // rax
  struct Gre::Base::SESSION_GLOBALS *v121; // rdi
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  char v126; // [rsp+28h] [rbp-E0h]
  int v127; // [rsp+28h] [rbp-E0h]
  const struct tagWND *v128; // [rsp+30h] [rbp-D8h]
  int v129; // [rsp+38h] [rbp-D0h]
  unsigned int v130; // [rsp+3Ch] [rbp-CCh]
  __int64 v131; // [rsp+40h] [rbp-C8h]
  __int64 v132; // [rsp+40h] [rbp-C8h]
  HRGN *v133; // [rsp+48h] [rbp-C0h]
  __int64 v134; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v135; // [rsp+58h] [rbp-B0h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v136; // [rsp+60h] [rbp-A8h]
  __int64 v137; // [rsp+68h] [rbp-A0h]
  _QWORD v138[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v139; // [rsp+88h] [rbp-80h] BYREF
  char v140[40]; // [rsp+90h] [rbp-78h] BYREF
  int v141; // [rsp+B8h] [rbp-50h]
  __int128 v142; // [rsp+C0h] [rbp-48h]
  __int64 v143; // [rsp+D0h] [rbp-38h]
  __int128 v144; // [rsp+D8h] [rbp-30h]
  __int64 v145; // [rsp+E8h] [rbp-20h]
  __int128 v146; // [rsp+F0h] [rbp-18h]
  __int64 v147; // [rsp+100h] [rbp-8h]
  __int128 v148; // [rsp+108h] [rbp+0h]
  __int64 v149; // [rsp+118h] [rbp+10h]
  __int128 v150; // [rsp+120h] [rbp+18h]
  __int64 v151; // [rsp+130h] [rbp+28h]
  struct tagRECT v152; // [rsp+138h] [rbp+30h] BYREF
  __int64 v153; // [rsp+148h] [rbp+40h]
  char v154; // [rsp+150h] [rbp+48h]
  __int128 v155; // [rsp+158h] [rbp+50h] BYREF
  char v156; // [rsp+168h] [rbp+60h]
  char v157; // [rsp+170h] [rbp+68h]
  __int64 v158; // [rsp+178h] [rbp+70h]
  char v159; // [rsp+180h] [rbp+78h]
  __int128 v160; // [rsp+188h] [rbp+80h] BYREF
  char v161; // [rsp+198h] [rbp+90h]
  char v162; // [rsp+1A0h] [rbp+98h]
  __int64 v163; // [rsp+1A8h] [rbp+A0h]
  char v164; // [rsp+1B0h] [rbp+A8h]
  __int128 v165; // [rsp+1B8h] [rbp+B0h] BYREF
  char v166; // [rsp+1C8h] [rbp+C0h]
  char v167; // [rsp+1D0h] [rbp+C8h]
  __int64 v168; // [rsp+1D8h] [rbp+D0h]
  char v169; // [rsp+1E0h] [rbp+D8h]
  __int128 v170; // [rsp+1E8h] [rbp+E0h] BYREF
  char v171; // [rsp+1F8h] [rbp+F0h]
  char v172; // [rsp+200h] [rbp+F8h]
  __int64 v173; // [rsp+208h] [rbp+100h]
  char v174; // [rsp+210h] [rbp+108h]
  __int128 v175; // [rsp+218h] [rbp+110h] BYREF
  char v176; // [rsp+228h] [rbp+120h]
  char v177; // [rsp+230h] [rbp+128h]

  v3 = a2;
  v5 = 0;
  v138[2] = 0LL;
  v6 = a1;
  v138[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v138;
  v138[1] = a1;
  v126 = a2;
  HMLockObject(a1);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000) == 0 && (v3 & 0x10) == 0 )
    GenerateMouseMove(0LL);
  if ( (v3 & 1) != 0 )
  {
    v7 = *(_QWORD *)(v6 + 104);
    v3 = 0;
    v126 = 0;
    if ( v7 )
    {
      if ( v6 != GetDesktopWindow(v6, v7) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 31LL) & 2) != 0 )
        {
          v3 = 4;
        }
        else
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 4) == 0 )
            goto LABEL_12;
          v3 = 2;
        }
        v6 = v8;
        v126 = v3;
      }
    }
  }
LABEL_12:
  if ( a3 )
    GreLockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), a3);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; v3 = v126 )
  {
    v10 = *((_DWORD *)i + 16);
    if ( (v10 & 0x400800) == 0 )
    {
      if ( (v10 & 3) == 0 )
      {
        v11 = i[2];
        if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 2) != 0 )
        {
          v10 |= 8u;
          *((_DWORD *)i + 16) = v10;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x20) != 0 )
          *((_DWORD *)i + 16) = v10 & 0xFFFFFFF7;
      }
      v12 = i[2];
      v13 = v12;
      if ( v12 )
      {
        while ( v13 != v6 )
        {
          v13 = *(_QWORD *)(v13 + 104);
          if ( !v13 )
            goto LABEL_56;
        }
        if ( v6 != v12 || (v3 & 2) == 0 && ((v3 & 4) == 0 || (i[8] & 1) == 0) )
        {
          v14 = *((_DWORD *)i + 16);
          if ( (v14 & 0x1000) != 0 )
          {
            v32 = i[3];
            if ( v14 >= 0 )
            {
              v14 &= 0xFFFFFFE7;
              *((_DWORD *)i + 16) = v14;
              if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL) + 8LL) >= 0
                || (v33 = *(_QWORD *)(v12 + 40), (*(_BYTE *)(v33 + 21) & 1) == 0)
                && (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 31LL) & 2) != 0
                || (v34 = *(_BYTE *)(*(_QWORD *)(v32 + 40) + 31LL), ((*(_BYTE *)(v33 + 31) ^ v34) & 0x10) != 0) )
              {
                v36 = v14;
                if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x22) == 2 )
                {
                  v36 = v14 | 8;
                  *((_DWORD *)i + 16) = v14 | 8;
                }
                v14 = v36;
                v35 = (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 4) == 0;
              }
              else
              {
                v35 = (v34 & 4) == 0;
              }
              if ( !v35 )
                v14 |= 0x10u;
            }
            *((_DWORD *)i + 16) = v14 | 0x2000;
            UserSetDCVisRgn(i);
          }
          else
          {
            v15 = i[1];
            v152 = 0LL;
            if ( (unsigned int)GreGetBounds(v15, &v152, 0LL) )
            {
              v16 = i[11];
              if ( !v16 || (i[8] & 0x80004000) != 0 )
              {
                bottom = v152.bottom;
                right = v152.right;
                top = v152.top;
                left = v152.left;
              }
              else
              {
                v17 = *(_QWORD *)(v16 + 40);
                v18 = *(_DWORD *)(v17 + 32);
                bottom = v18 + v152.bottom;
                v20 = *(_DWORD *)(v17 + 28);
                left = v20 + v152.left;
                right = v20 + v152.right;
                top = v18 + v152.top;
                v152.left += v20;
                v152.top += v18;
                v152.right += v20;
                v152.bottom += v18;
              }
              v24 = *((_DWORD *)i + 16);
              if ( (v24 & 0x4000) != 0 )
              {
                StyleWindow = GetStyleWindow(i[2], 2848LL);
                if ( StyleWindow )
                {
                  v26 = *(_QWORD *)(StyleWindow + 40);
                  v27 = *(_DWORD *)(v26 + 92);
                  v28 = *(_DWORD *)(v26 + 88);
                  v152.left = v28 + left;
                  v152.right = v28 + right;
                  v152.top = v27 + top;
                  v152.bottom = v27 + bottom;
                }
              }
              v29 = (struct tagWND *)i[2];
              if ( (unsigned int)IntersectRect(&v152, &v152, *((_QWORD *)v29 + 5) + 88LL) )
                SpbCheckRect(v29, &v152, v24);
              v5 = 0;
            }
            v30 = i[8] & 0x4002 | 0x800;
            *((_DWORD *)i + 16) = v30;
            if ( (v30 & 0x4000) != 0 )
            {
              GreSelectRedirectionBitmap(i[1], 0LL);
              *((_DWORD *)i + 16) &= ~0x4000u;
              i[4] = 0LL;
            }
            v31 = i[1];
            i[2] = 0LL;
            i[3] = 0LL;
            i[5] = 0LL;
            i[6] = 0LL;
            GreSelectVisRgn(v31, 0LL, 1LL);
          }
        }
      }
    }
LABEL_56:
    i = (__int64 *)*i;
  }
  GreUnlockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  v37 = (v126 & 8) != 0 ? 2 : 0;
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
  {
    InvalidateGDIWindows(v6);
    v37 |= 1u;
  }
  GreClientRgnUpdated(v37);
  v38 = (v126 & 8) != 0 ? 4 : 0;
  v130 = v38;
  v39 = *(_QWORD *)(gpDispInfo + 40LL);
  v135 = v39;
  v40 = Gre::Base::Globals(gpDispInfo);
  v136 = v40;
  v41 = *((_QWORD *)v40 + 15);
  v134 = v41;
  GreAcquireSemaphore(v41);
  if ( *((_QWORD *)Gre::Base::Globals(v42) + 38) )
  {
    v44 = 0;
    v129 = 0;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v47 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v47 + 104) && !*(_DWORD *)(v47 + 108) )
    {
      v48 = Gre::Base::Globals(v46);
      GreAcquireSemaphore(*((_QWORD *)v48 + 14));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v48 + 14), 5LL);
      v44 = 1;
      v129 = 1;
    }
    GreAcquireSemaphore(*((_QWORD *)v40 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v40 + 9), 7LL);
    if ( *((_QWORD *)Gre::Base::Globals(v49) + 38) )
    {
      v50 = *((_QWORD *)v40 + 38);
      v51 = *(_QWORD *)(v50 + 80);
      if ( v51 != v50 + 80 )
      {
        v52 = v40;
        while ( 1 )
        {
          v53 = v51 - 24;
          if ( !v51 )
            v53 = 0LL;
          v137 = v53;
          if ( !v53 )
          {
LABEL_214:
            v41 = v134;
            v44 = v129;
            v39 = v135;
            v40 = v136;
            goto LABEL_215;
          }
          v54 = *(_QWORD *)(v53 + 40);
          if ( v54 )
            break;
LABEL_213:
          v50 = *((_QWORD *)v52 + 38);
          v51 = *(_QWORD *)(v53 + 24);
          if ( v51 == v50 + 80 )
            goto LABEL_214;
        }
        v133 = (HRGN *)(v50 + 184);
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v54 >= *(_QWORD *)(gpsi + 8LL)
          || (v55 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v54,
              v58 = (const struct tagWND **)HMPkheFromPhe(v55),
              LOWORD(v54) = WORD1(v54) & 0x7FFF,
              (WORD1(v54) & 0x7FFF) != *(_WORD *)(v55 + 26))
          && (_WORD)v54 != 0x7FFF
          && ((_WORD)v54 || !PsGetCurrentProcessWow64Process())
          || (*(_BYTE *)(v55 + 25) & 1) != 0
          || *(_BYTE *)(v55 + 24) != 1
          || (v59 = *v58, (v128 = v59) == 0LL) )
        {
          v85 = 0;
          goto LABEL_203;
        }
        v60 = v59;
        if ( (*(_DWORD *)(*((_QWORD *)v59 + 5) + 232LL) & 2) == 0 )
          goto LABEL_136;
        v61 = *(unsigned __int16 *)(gpsi + 900LL);
        v62 = *(_WORD **)(*((_QWORD *)v59 + 17) + 8LL);
        if ( *v62 != (_WORD)v61 )
        {
          v63 = (__int128 *)*((_QWORD *)v59 + 18);
          v64 = *(unsigned __int16 *)(gpsi + 900LL);
          v153 = gDomainDummyLock;
          v154 = 0;
          v155 = 0LL;
          v156 = 0;
          v65 = *((_QWORD *)v63 + 2);
          v142 = *v63;
          v157 = 0;
          v143 = v65;
          v66 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v62, v61, v56, v57);
          if ( ExIsResourceAcquiredExclusiveLite(*v66) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
          {
            v157 = 1;
            if ( v63 == (__int128 *)gObjDummyLock )
              v63 = 0LL;
            *(_QWORD *)&v155 = v63;
            if ( !v156 )
            {
              v67 = 0;
              v68 = (tagObjLock **)&v155;
              do
              {
                if ( *v68 )
                  tagObjLock::LockExclusive(*v68);
                ++v67;
                ++v68;
              }
              while ( !v67 );
              v156 = 1;
              v59 = v60;
            }
          }
          Prop = RealGetProp(*((_QWORD *)v59 + 18), v64, 1LL);
          if ( v157 && v156 )
          {
            v62 = (_WORD *)v155;
            if ( (_QWORD)v155 )
              tagObjLock::UnLockExclusive((tagObjLock *)v155);
            v156 = 0;
          }
          if ( Prop )
          {
            v76 = Prop == -1;
          }
          else
          {
            v70 = (__int128 *)*((_QWORD *)v59 + 18);
            v159 = 0;
            v160 = 0LL;
            v158 = gDomainDummyLock;
            v161 = 0;
            v71 = *(unsigned __int16 *)(gpsi + 1378LL);
            v72 = *((_QWORD *)v70 + 2);
            v144 = *v70;
            v162 = 0;
            v145 = v72;
            v73 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(gpsi, v61, v56, v57);
            if ( ExIsResourceAcquiredExclusiveLite(*v73) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
            {
              v162 = 1;
              if ( v70 == (__int128 *)gObjDummyLock )
                v70 = 0LL;
              *(_QWORD *)&v160 = v70;
              if ( !v161 )
              {
                v74 = 0;
                v75 = (tagObjLock **)&v160;
                do
                {
                  if ( *v75 )
                    tagObjLock::LockExclusive(*v75);
                  ++v74;
                  ++v75;
                }
                while ( !v74 );
                v59 = v128;
                v161 = 1;
              }
            }
            Prop = RealGetProp(*((_QWORD *)v59 + 18), v71, 1LL);
            if ( v162 && v161 )
            {
              v62 = (_WORD *)v160;
              if ( (_QWORD)v160 )
                tagObjLock::UnLockExclusive((tagObjLock *)v160);
              v161 = 0;
            }
            v76 = Prop == 0;
          }
          if ( !v76 )
          {
            LOBYTE(v61) = 1;
            v77 = HMValidateHandleNoSecure(Prop, v61);
            if ( v77 )
            {
              if ( !(unsigned int)IsWindowBeingDestroyed(v77) )
                goto LABEL_136;
            }
          }
        }
        v78 = (__int128 *)*((_QWORD *)v60 + 18);
        v164 = 0;
        v165 = 0LL;
        v166 = 0;
        v131 = (unsigned __int16)atomDispAffinity;
        v163 = gDomainDummyLock;
        v79 = *((_QWORD *)v78 + 2);
        v146 = *v78;
        v167 = 0;
        v147 = v79;
        v80 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v62, v61, v56, v57);
        if ( ExIsResourceAcquiredExclusiveLite(*v80) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
        {
          v167 = 1;
          if ( v78 == (__int128 *)gObjDummyLock )
            v78 = 0LL;
          *(_QWORD *)&v165 = v78;
          if ( !v166 )
          {
            v81 = 0;
            v82 = (tagObjLock **)&v165;
            do
            {
              if ( *v82 )
                tagObjLock::LockExclusive(*v82);
              ++v81;
              ++v82;
            }
            while ( !v81 );
            v59 = v128;
            v166 = 1;
          }
        }
        v83 = RealGetProp(*((_QWORD *)v60 + 18), v131, 1LL);
        if ( v167 && v166 )
        {
          if ( (_QWORD)v165 )
            tagObjLock::UnLockExclusive((tagObjLock *)v165);
          v166 = 0;
        }
        if ( (v83 & 1) == 0 )
        {
          v84 = *((_QWORD *)v59 + 5);
        }
        else
        {
LABEL_136:
          v84 = *((_QWORD *)v59 + 5);
          v86 = *(_BYTE *)(v84 + 31);
          if ( (*(_BYTE *)(v84 + 26) & 0x20) == 0 )
          {
            v87 = v60;
            v127 = (4 * (v86 & 4)) | 0x4401;
            do
            {
              v88 = *((_QWORD *)v87 + 5);
              v89 = *(_BYTE *)(v88 + 31);
              if ( (v89 & 0x10) == 0 || (v89 & 0x20) != 0 && v87 != v60 )
              {
LABEL_201:
                SetOrCreateRectRgnIndirectPublic(v133, gZero);
                v53 = v137;
                v85 = 0;
                v5 = 0;
                goto LABEL_203;
              }
              if ( (*(_WORD *)(v88 + 42) & 0x2FFF) == 0x29D )
                break;
              v87 = (const struct tagWND *)*((_QWORD *)v87 + 13);
            }
            while ( v87 );
            v90 = v60;
            while ( 1 )
            {
              v91 = *((_QWORD *)v60 + 5);
              if ( (*(_BYTE *)(v91 + 27) & 0x20) != 0 )
                break;
              v60 = (const struct tagWND *)*((_QWORD *)v60 + 13);
              if ( !v60 )
                goto LABEL_168;
            }
            v92 = *(_WORD *)(v91 + 42) & 0x2FFF;
            if ( (_DWORD)v92 != 669 || v60 == v90 )
            {
              v93 = (__int128 *)*((_QWORD *)v60 + 18);
              v94 = (unsigned __int16)atomLayer;
              v168 = gDomainDummyLock;
              v169 = 0;
              v170 = 0LL;
              v171 = 0;
              v95 = *((_QWORD *)v93 + 2);
              v148 = *v93;
              v172 = 0;
              v149 = v95;
              v96 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v92, v87, v56, v57);
              if ( ExIsResourceAcquiredExclusiveLite(*v96) != 1 )
              {
                v97 = v90;
                if ( IS_USERCRIT_OWNED_AT_ALL() )
                {
                  v172 = 1;
                  if ( v93 == (__int128 *)gObjDummyLock )
                    v93 = 0LL;
                  *(_QWORD *)&v170 = v93;
                  if ( !v171 )
                  {
                    v98 = 0;
                    v99 = (tagObjLock **)&v170;
                    do
                    {
                      if ( *v99 )
                        tagObjLock::LockExclusive(*v99);
                      ++v98;
                      ++v99;
                    }
                    while ( !v98 );
                    v171 = 1;
                    v90 = v97;
                  }
                }
              }
              v100 = (_QWORD *)RealGetProp(*((_QWORD *)v60 + 18), v94, 1LL);
              if ( v172 && v171 )
              {
                if ( (_QWORD)v170 )
                  tagObjLock::UnLockExclusive((tagObjLock *)v170);
                v171 = 0;
              }
              if ( !v100 || !*v100 )
                goto LABEL_201;
            }
LABEL_168:
            UpdatesLockedForDwm();
            v104 = v90;
            while ( 1 )
            {
              v105 = *(unsigned int *)(*((_QWORD *)v104 + 5) + 24LL);
              if ( (v105 & 0x80000) != 0 || (v105 & 0x20000000) != 0 )
                break;
              v104 = (const struct tagWND *)*((_QWORD *)v104 + 13);
              if ( !v104 )
                goto LABEL_176;
            }
            if ( v104 != v90 && (unsigned int)IsDesktopWindow(v104) )
              v104 = 0LL;
LABEL_176:
            v106 = (__int128 *)*((_QWORD *)v104 + 18);
            v107 = *((_QWORD *)v104 + 5);
            v108 = (unsigned __int16)atomLayer;
            v173 = gDomainDummyLock;
            v174 = 0;
            v175 = 0LL;
            v176 = 0;
            v132 = v107;
            v109 = *((_QWORD *)v106 + 2);
            v150 = *v106;
            v177 = 0;
            v151 = v109;
            v110 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v105, v101, v102, v103);
            if ( ExIsResourceAcquiredExclusiveLite(*v110) != 1 )
            {
              v111 = v90;
              if ( IS_USERCRIT_OWNED_AT_ALL() )
              {
                v177 = 1;
                if ( v106 == (__int128 *)gObjDummyLock )
                  v106 = 0LL;
                *(_QWORD *)&v175 = v106;
                if ( !v176 )
                {
                  v112 = 0;
                  v113 = (tagObjLock **)&v175;
                  do
                  {
                    if ( *v113 )
                      tagObjLock::LockExclusive(*v113);
                    ++v112;
                    ++v113;
                  }
                  while ( !v112 );
                  v176 = 1;
                  v90 = v111;
                }
              }
              v107 = v132;
            }
            v114 = (_QWORD *)RealGetProp(*((_QWORD *)v104 + 18), v108, 1LL);
            if ( v177 && v176 )
            {
              if ( (_QWORD)v175 )
                tagObjLock::UnLockExclusive((tagObjLock *)v175);
              v176 = 0;
            }
            if ( v114 && *v114 )
            {
              v115 = v127;
              if ( (*(_DWORD *)(v107 + 24) & 0x20000000) != 0 )
              {
                v116 = *(_DWORD *)(v107 + 232);
                if ( (v116 & 2) != 0 && (v116 & 1) == 0 && (*((_DWORD *)v104 + 80) & 0x20000000) == 0 )
                {
                  v53 = v137;
                  v85 = CalcVisRgnWorker(v90, v133, v127 & 0xFFFFBFFF);
                  v5 = 0;
                  goto LABEL_203;
                }
              }
            }
            else
            {
              v115 = v127;
            }
            v53 = v137;
            v85 = CalcVisRgnWorker(v90, v133, v115);
            v5 = 0;
            goto LABEL_203;
          }
          if ( (v86 & 0x10) == 0 )
          {
            v53 = v137;
            v85 = 0;
            v5 = 0;
            goto LABEL_203;
          }
        }
        SetRectRgnIndirect(*v133, v84 + 88);
        v53 = v137;
        v5 = 0;
        v85 = 1;
LABEL_203:
        if ( v85 )
        {
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v139, *(HRGN *)(*((_QWORD *)v52 + 38) + 184LL), 0, 0);
          v117 = v139;
          if ( v139 )
            v85 = *(_DWORD *)(v139 + 52) != 1;
          if ( !v141 )
          {
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v139);
            v117 = v139;
          }
          if ( v117 )
            _InterlockedDecrement((volatile signed __int32 *)(v117 + 12));
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v140);
        }
        v118 = v85 != 0;
        if ( v118 != (*(_DWORD *)(v53 + 140) & 1) )
        {
          v119 = v118 | *(_DWORD *)(v53 + 140) & 0xFFFFFFFE;
          *(_DWORD *)(v53 + 140) = v119;
          v120 = (void *)UserReferenceDwmApiPort(v119);
          DwmAsyncShowSprite(v120);
        }
        goto LABEL_213;
      }
    }
LABEL_215:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v40 + 9));
    if ( v44 )
    {
      v121 = Gre::Base::Globals(v43);
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
      GreReleaseSemaphoreInternal(*((_QWORD *)v121 + 14));
    }
    v38 = v130;
  }
  v135 = v39;
  Gre::Base::Globals(v43);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v134, (struct PDEVOBJ *)&v135);
  if ( *(_DWORD *)(v39 + 140) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v39 + 144) + 8LL * v5++), v38);
    while ( v5 < *(_DWORD *)(v39 + 140) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v39 + 80), v38);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v134);
  if ( v41 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v41);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  ThreadUnlock1(v123, v122, v124);
  return 1LL;
}
