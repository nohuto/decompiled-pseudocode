/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C0122FB0
 * Callers:
 *     xxxSetWindowRgn @ 0x1C002656C (xxxSetWindowRgn.c)
 *     xxxSetWindowPosAndBand @ 0x1C0028948 (xxxSetWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0028F90 (NtUserSetWindowPos.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0042728 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00A8E40 (NtUserEndDeferWindowPosEx.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C00AD4D4 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0239A1C (xxxArrangeIconicWindows.c)
 * Callees:
 *     SetWindowGroupBand @ 0x1C002567C (SetWindowGroupBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0025824 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     xxxSetTrayWindow @ 0x1C0096ECC (xxxSetTrayWindow.c)
 *     DestroySMWP @ 0x1C00A1B10 (DestroySMWP.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00A4030 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00A4D04 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxDoSyncPaint @ 0x1C00CDF44 (xxxDoSyncPaint.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessageEx @ 0x1C00D3520 (PostIAMShellHookMessageEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00F3624 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1C011B3C4 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C011B808 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0122B94 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0123FE0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     Feature_3578843448__private_IsEnabledDeviceUsage @ 0x1C0138CE8 (Feature_3578843448__private_IsEnabledDeviceUsage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v2; // rdi
  int v3; // r15d
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  int v11; // r12d
  __int64 v12; // r13
  __int64 *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // r15
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // esi
  int v27; // edx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  char v31; // bl
  struct _HANDLEENTRY *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rcx
  struct tagWND *v36; // r13
  int IsEnabledDeviceUsage; // eax
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // r14d
  struct tagWND *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  struct tagSMWP *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v53; // esi
  struct tagCVR *i; // rbx
  struct tagSMWP *v55; // rsi
  __int64 ThreadWin32Thread; // rax
  void (__fastcall *v57)(__int64); // rax
  __int64 v58; // rbx
  __int64 *v59; // rax
  int v60; // ebx
  struct tagWND *v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct tagWND **v66; // r14
  int v67; // ebx
  char valid; // al
  __int64 v69; // rdx
  PDEVICE_OBJECT v70; // rcx
  __int64 v71; // r8
  int v72; // r14d
  __int64 v73; // r14
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // r8
  int v81; // eax
  __int64 v82; // r8
  unsigned int v83; // edx
  char v84; // bl
  char v85; // si
  int v86; // ebx
  struct tagWND *v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  struct tagWND *v90; // rdx
  Gre::Base *v92; // rcx
  struct Gre::Base::SESSION_GLOBALS *v93; // rdi
  Gre::Base *v94; // rcx
  int v95; // ebx
  Gre::Base *v96; // rcx
  __int64 v97; // rbx
  __int64 *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  BOOL v103; // r15d
  __int64 v104; // rsi
  int v105; // r14d
  _QWORD *v106; // rsi
  __int64 v107; // rsi
  unsigned int ThreadId; // [rsp+40h] [rbp-79h]
  __int128 v109; // [rsp+50h] [rbp-69h] BYREF
  void (__fastcall *v110)(__int64); // [rsp+60h] [rbp-59h]
  HWND v111; // [rsp+68h] [rbp-51h] BYREF
  __int128 v112; // [rsp+70h] [rbp-49h] BYREF
  __int64 v113; // [rsp+80h] [rbp-39h]
  struct tagWND *v114; // [rsp+88h] [rbp-31h]
  __int64 v115; // [rsp+90h] [rbp-29h]
  __int128 v116; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v117; // [rsp+B0h] [rbp-9h]
  _QWORD v118[11]; // [rsp+B8h] [rbp-1h] BYREF
  int v119; // [rsp+120h] [rbp+67h] BYREF
  int v120; // [rsp+128h] [rbp+6Fh]
  int v121; // [rsp+130h] [rbp+77h]
  __int64 v122; // [rsp+138h] [rbp+7Fh]

  v120 = a2;
  v2 = a1;
  v111 = 0LL;
  v121 = 0;
  v3 = a2;
  v122 = gptiCurrent;
  v116 = 0LL;
  v117 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_44;
  v4 = (__int64 *)*((_QWORD *)a1 + 5);
  v119 = 1;
  v5 = *v4;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)v5 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_44;
  v6 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v5;
  v10 = HMPkheFromPhe(v6);
  LOWORD(v5) = WORD1(v5) & 0x7FFF;
  if ( (WORD1(v5) & 0x7FFF) != *(_WORD *)(v6 + 26)
    && (_WORD)v5 != 0x7FFF
    && ((_WORD)v5 || !PsGetCurrentProcessWow64Process(v8, v7, v9)) )
  {
    goto LABEL_44;
  }
  if ( (*(_BYTE *)(v6 + 25) & 1) != 0 || *(_BYTE *)(v6 + 24) != 1 || !*(_QWORD *)v10 )
    goto LABEL_44;
  v11 = *((_DWORD *)v2 + 7) - 1;
  v12 = *(_QWORD *)(*(_QWORD *)v10 + 104LL);
  v13 = (__int64 *)*((_QWORD *)v2 + 5);
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
      v14 = *v13;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v14 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_30;
      v15 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v14;
      v19 = (_QWORD *)HMPkheFromPhe(v15);
      LOWORD(v14) = WORD1(v14) & 0x7FFF;
      if ( (WORD1(v14) & 0x7FFF) != *(_WORD *)(v15 + 26)
        && (_WORD)v14 != 0x7FFF
        && ((_WORD)v14 || !PsGetCurrentProcessWow64Process(v17, v16, v18)) )
      {
        goto LABEL_30;
      }
      if ( (*(_BYTE *)(v15 + 25) & 1) != 0 )
        goto LABEL_30;
      if ( *(_BYTE *)(v15 + 24) != 1 )
        goto LABEL_30;
      v20 = (_QWORD *)*v19;
      if ( !*v19 )
        goto LABEL_30;
      v13[13] = v20[2];
      if ( (v13[4] & 4) == 0 )
      {
        v21 = v20[3];
        v22 = 0LL;
        if ( v21 )
        {
          v23 = *(_QWORD *)(v21 + 8);
          if ( v23 )
            v22 = *(_QWORD *)(v23 + 24);
        }
        if ( *(char *)(v20[5] + 19LL) < 0 )
          goto LABEL_30;
        v24 = v13[1];
        if ( v24 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( v20[13] != v22 )
            goto LABEL_30;
        }
        else if ( v24 >= 2 )
        {
          v25 = HMValidateHandleNoSecure(v24, 1);
          if ( !v25 || *(char *)(*(_QWORD *)(v25 + 40) + 19LL) < 0 )
          {
            UserSetLastError(6);
LABEL_30:
            *v13 = 0LL;
            goto LABEL_31;
          }
          if ( v20 == (_QWORD *)v25 || v20[13] != *(_QWORD *)(v25 + 104) )
            goto LABEL_30;
        }
      }
      if ( *(_QWORD *)(_HMObjectFromHandle(*v13) + 104) != v12 )
      {
        UserSetLastError(1441);
        goto LABEL_44;
      }
      if ( (v13[4] & 0x2000) != 0 )
        v119 = 0;
LABEL_31:
      v13 += 21;
      if ( --v11 < 0 )
      {
        v3 = v120;
        break;
      }
    }
  }
  v26 = 0;
  v27 = 0;
  if ( *((int *)v2 + 7) <= 0 )
    goto LABEL_44;
  v28 = (_QWORD *)*((_QWORD *)v2 + 5);
  v29 = 0LL;
  while ( !*v28 )
  {
    ++v27;
    ++v29;
    v28 += 21;
    if ( v29 >= *((int *)v2 + 7) )
      goto LABEL_44;
  }
  v35 = (_QWORD *)(*((_QWORD *)v2 + 5) + 168LL * v27);
  if ( !v35 )
    goto LABEL_44;
  v36 = *(struct tagWND **)(_HMObjectFromHandle(*v35) + 104);
  v114 = v36;
  if ( !v36 || !*((_QWORD *)v36 + 3) )
    goto LABEL_44;
  IsEnabledDeviceUsage = Feature_3578843448__private_IsEnabledDeviceUsage();
  v38 = v122;
  if ( IsEnabledDeviceUsage )
  {
    *(_QWORD *)&v112 = *(_QWORD *)(v122 + 416);
    *(_QWORD *)(v122 + 416) = &v112;
    *((_QWORD *)&v112 + 1) = v36;
    HMLockObject(v36);
  }
  if ( *((int *)v2 + 7) > 0 )
  {
    v39 = 0LL;
    do
    {
      v40 = *((_QWORD *)v2 + 5);
      v41 = *(_QWORD *)(v40 + v39);
      if ( v41 && *(_DWORD *)(v40 + v39 + 152) )
      {
        v42 = _HMObjectFromHandle(v41);
        v43 = *((_QWORD *)v2 + 5);
        v44 = *(_DWORD *)(v43 + v39 + 152);
        if ( *(_DWORD *)(*(_QWORD *)(v42 + 40) + 236LL) != v44 )
        {
          v45 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v43 + v39));
          SetWindowGroupBand(v45, v44, 0);
        }
        *(_DWORD *)(*((_QWORD *)v2 + 5) + v39 + 152) = 0;
      }
      ++v26;
      v39 += 168LL;
    }
    while ( v26 < *((_DWORD *)v2 + 7) );
  }
  if ( v3 )
    AsyncWindowPos(v2);
  v46 = *((_QWORD *)v36 + 3);
  if ( !v46 || (v47 = *(_QWORD *)(v46 + 8)) == 0 || v36 != *(struct tagWND **)(v47 + 24) )
  {
LABEL_78:
    v55 = v2;
    if ( !(unsigned int)Feature_3578843448__private_IsEnabledDeviceUsage() )
    {
      *(_QWORD *)&v112 = *(_QWORD *)(v38 + 416);
      *(_QWORD *)(v38 + 416) = &v112;
      *((_QWORD *)&v112 + 1) = v36;
      HMLockObject(v36);
    }
    if ( (*((_DWORD *)v2 + 6) & 2) != 0 )
    {
      HMLockObject(v2);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v121 = 1;
      *(_QWORD *)&v109 = *(_QWORD *)(ThreadWin32Thread + 16);
      *(_QWORD *)(ThreadWin32Thread + 16) = &v109;
      v57 = (void (__fastcall *)(__int64))UnrefAndDestroySMWP;
    }
    else
    {
      v58 = 0LL;
      v59 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v59 )
        v58 = *v59;
      *(_QWORD *)&v109 = *(_QWORD *)(v58 + 16);
      *(_QWORD *)(v58 + 16) = &v109;
      v57 = DestroySMWP;
    }
    v110 = v57;
    *((_QWORD *)&v109 + 1) = v2;
    ++*(_DWORD *)(v38 + 1248);
    *((_DWORD *)v2 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v2, &v111) )
    {
      v60 = (int)v111;
      v61 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v60 < *(_QWORD *)(gpsi + 8LL) )
      {
        v62 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v60;
        v66 = (struct tagWND **)HMPkheFromPhe(v62);
        LOWORD(v60) = HIWORD(v60) & 0x7FFF;
        if ( ((HIWORD(v60) & 0x7FFF) == *(_WORD *)(v62 + 26)
           || (_WORD)v60 == 0x7FFF
           || !(_WORD)v60 && PsGetCurrentProcessWow64Process(v64, v63, v65))
          && (*(_BYTE *)(v62 + 25) & 1) == 0
          && *(_BYTE *)(v62 + 24) == 1 )
        {
          v61 = *v66;
        }
      }
      *(_QWORD *)&v116 = *(_QWORD *)(v38 + 416);
      *(_QWORD *)(v38 + 416) = &v116;
      *((_QWORD *)&v116 + 1) = v61;
      if ( v61 )
        HMLockObject(v61);
      v67 = *(_DWORD *)(v38 + 908);
      LODWORD(v122) = v67;
      v115 = gptiForeground;
      valid = zzzBltValidBits((__int64)v2);
      v72 = v119;
      if ( (valid & 1) == 0 )
        v72 = 0;
      v119 = v72;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)v2 + 6) & 1) != 0 )
      {
        v73 = *((int *)v2 + 7);
        if ( *((_DWORD *)v2 + 7) )
        {
          v74 = 168 * v73;
          do
          {
            v75 = *((_QWORD *)v2 + 5);
            v74 -= 168LL;
            --v73;
            v70 = *(PDEVICE_OBJECT *)(v74 + v75);
            if ( v70 )
            {
              if ( (*(_DWORD *)(v74 + v75 + 32) & 0xF0000000) != 0 )
              {
                v76 = HMValidateHandleNoSecure((int)v70, 1);
                v77 = v76;
                if ( v76 )
                {
                  v118[0] = *(_QWORD *)(v38 + 416);
                  *(_QWORD *)(v38 + 416) = v118;
                  v118[2] = 0LL;
                  v118[1] = v76;
                  HMLockObject(v76);
                  v78 = *((_QWORD *)v2 + 5);
                  if ( (*(_DWORD *)(v78 + v74 + 32) & 0x10000000) != 0 )
                  {
                    if ( (*(_DWORD *)(v78 + v74 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x15u, *(_QWORD *)(v78 + v74));
                    }
                    else
                    {
                      PostShellHookMessagesEx(1u, *(_QWORD *)(v78 + v74), 0LL);
                      xxxCallHook(1LL, *(_QWORD *)(v74 + *((_QWORD *)v2 + 5)), 0LL, 10LL);
                    }
                  }
                  v79 = *((_QWORD *)v2 + 5);
                  if ( (*(_DWORD *)(v79 + v74 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessagesEx(2u, *(_QWORD *)(v79 + v74), 0LL);
                    xxxCallHook(2LL, *(_QWORD *)(v74 + *((_QWORD *)v2 + 5)), 0LL, 10LL);
                  }
                  v80 = *((_QWORD *)v2 + 5);
                  if ( (*(_DWORD *)(v80 + v74 + 32) & 0x40000000) != 0 )
                  {
                    v81 = *(_DWORD *)(v80 + v74 + 156);
                    if ( (v81 & 8) != 0 )
                    {
                      v82 = *(_QWORD *)(v80 + v74);
                      v83 = 23;
                    }
                    else
                    {
                      if ( (v81 & 0x10) == 0 )
                        xxxSetTrayWindow(*(_QWORD *)(v77 + 24), (unsigned __int64 *)v77);
                      v83 = 19;
                      v82 = *(_QWORD *)(v74 + *((_QWORD *)v2 + 5));
                    }
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v83, v82);
                  }
                  if ( *(int *)(v74 + *((_QWORD *)v2 + 5) + 32) < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(v38 + 456), (unsigned __int64 *)1);
                  ThreadUnlock1(v78, v79, v80);
                }
              }
            }
          }
          while ( v73 );
          v36 = v114;
          v67 = v122;
        }
        v72 = v119;
      }
      if ( v38 == v115
        && v67
        && !*(_DWORD *)(v38 + 908)
        && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v38 + 424)) )
      {
        *(_DWORD *)(v38 + 488) |= 0x20u;
        v70 = WPP_GLOBAL_Control;
        v84 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v85 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v84 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v38);
          WPP_RECORDER_AND_TRACE_SF_D(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v84,
            v85,
            (__int64)gFullLog,
            4u,
            2u,
            0xFu,
            (__int64)&WPP_73d000ae97953ecf03a093158984409f_Traceguids,
            ThreadId);
        }
      }
      v86 = 0;
      if ( v61 )
        v86 = xxxSwpActivate(v61);
      if ( v72 )
        xxxDoSyncPaint(v36, 4u);
      ThreadUnlock1(v70, v69, v71);
      if ( v86 )
      {
        v90 = *(struct tagWND **)(*(_QWORD *)(v38 + 432) + 128LL);
        if ( v90 )
          SetOrClrWF(0, v90, 0x101u, 1);
        v87 = *(struct tagWND **)(*(_QWORD *)(v38 + 432) + 136LL);
        if ( v87 )
          SetOrClrWF(0, v87, 0x101u, 1);
      }
      xxxSendChangedMsgs(v2, (__int64)v87, v88, v89);
      v55 = v2;
    }
    if ( (*(_DWORD *)(v38 + 1248))-- == 1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v93 = Gre::Base::Globals(v92);
      GreAcquireSemaphore(*((_QWORD *)v93 + 12));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemVisRgnUniqueness", *((_QWORD *)v93 + 12), 10LL);
      v95 = *((_DWORD *)Gre::Base::Globals(v94) + 1629);
      *((_DWORD *)Gre::Base::Globals(v96) + 1630) = v95;
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemVisRgnUniqueness");
      GreReleaseSemaphoreInternal(*((_QWORD *)v93 + 12));
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v97 = 0LL;
    v98 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v98 )
      v97 = *v98;
    *(_QWORD *)(v97 + 16) = v109;
    ThreadUnlock1(v100, v99, v101);
    v2 = v55;
    if ( v121 )
    {
      v102 = HMUnlockObject(v55);
      if ( v102 )
        DestroySMWP(v102);
      return 1LL;
    }
LABEL_44:
    v30 = *((_DWORD *)v2 + 6);
    v31 = 0;
    LOBYTE(v119) = 0;
    if ( (v30 & 2) != 0 )
    {
      v32 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(v2);
      IdentifyPrimaryDestroyTarget::Identify((Identify *)&v119, v32, v33, v34);
      v31 = v119;
    }
    if ( (*((_DWORD *)v2 + 6) & 2) != 0 )
    {
      if ( !(unsigned int)HMMarkObjectDestroy(v2) )
      {
        IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v119);
        return 1LL;
      }
      v103 = 1;
    }
    else
    {
      v103 = v2 != (struct tagSMWP *)gSMWP;
    }
    v104 = *((_QWORD *)v2 + 5);
    if ( v104 )
    {
      v105 = *((_DWORD *)v2 + 7) - 1;
      if ( v105 >= 0 )
      {
        v106 = (_QWORD *)(v104 + 120);
        do
        {
          if ( *v106 )
            GreDeleteObject(*v106);
          v106 += 21;
          --v105;
        }
        while ( v105 >= 0 );
      }
      if ( v103 )
        Win32FreePool(*((void **)v2 + 5));
    }
    if ( (*((_DWORD *)v2 + 6) & 2) != 0 )
    {
      HMFreeObject(v2);
    }
    else if ( v103 )
    {
      Win32FreePool(v2);
    }
    else
    {
      gdwPUDFlags &= ~0x40000000u;
      if ( *((int *)v2 + 8) > 8 )
      {
        v107 = Win32AllocPoolZInit(672LL, 2004054869LL);
        if ( v107 )
        {
          Win32FreePool(*((void **)v2 + 5));
          *((_QWORD *)v2 + 5) = v107;
          *((_DWORD *)v2 + 8) = 4;
        }
      }
      *((_DWORD *)v2 + 6) &= ~4u;
    }
    if ( v31 )
      gphePrimaryDestroyTarget = 0LL;
    return 1LL;
  }
  v48 = ZOrderByOwner(v2);
  v2 = v48;
  if ( v48 )
  {
    if ( v3 )
    {
      v53 = *((_DWORD *)v48 + 7) - 1;
      for ( i = (struct tagCVR *)*((_QWORD *)v48 + 5); v53 >= 0; --v53 )
      {
        if ( *(_QWORD *)i && !(unsigned int)ValidateWindowPos(i, 0LL) )
          *(_QWORD *)i = 0LL;
        i = (struct tagCVR *)((char *)i + 168);
      }
      AsyncWindowPos(v2);
    }
    goto LABEL_78;
  }
  if ( (unsigned int)Feature_3578843448__private_IsEnabledDeviceUsage() )
    ThreadUnlock1(v50, v49, v51);
  return 0LL;
}
