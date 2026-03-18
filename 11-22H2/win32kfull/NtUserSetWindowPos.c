/*
 * XREFs of NtUserSetWindowPos @ 0x1C0028F90
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ValidateHwndIAM @ 0x1C00270A4 (ValidateHwndIAM.c)
 *     xxxSetWindowPosAndBand @ 0x1C0028948 (xxxSetWindowPosAndBand.c)
 *     AllocateCvr @ 0x1C0028B70 (AllocateCvr.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0029418 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00426F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1C005EF60 (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C00B75F0 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CFFEC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0122FB0 (xxxEndDeferWindowPosEx.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A5DB4 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01CC70C (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01F493C (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C021E068 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowPos(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v8; // r13d
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  ULONG_PTR v16; // rdi
  unsigned int v17; // esi
  unsigned __int64 v18; // rdx
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r12d
  int v24; // r15d
  unsigned __int64 v25; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v27; // edx
  int v28; // edx
  _BYTE *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // r14
  struct tagSMWP *v33; // rax
  __int64 v34; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // r8d
  __int64 v39; // rcx
  int v41; // edx
  int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rcx
  struct tagWND *TopLevelHostForComponent; // rax
  struct tagWND *TopLevelWindow; // r14
  int v47; // esi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51; // [rsp+58h] [rbp-61h]
  unsigned int v52; // [rsp+5Ch] [rbp-5Dh]
  int v53; // [rsp+60h] [rbp-59h]
  int v54[2]; // [rsp+68h] [rbp-51h] BYREF
  int v55; // [rsp+70h] [rbp-49h] BYREF
  __int128 v56; // [rsp+78h] [rbp-41h] BYREF
  __int64 v57; // [rsp+88h] [rbp-31h]
  __int128 v58; // [rsp+90h] [rbp-29h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-19h]
  __int128 v60; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-1h]
  int v63; // [rsp+118h] [rbp+5Fh] BYREF
  int v64; // [rsp+120h] [rbp+67h] BYREF

  v64 = a4;
  v63 = a3;
  v52 = a3;
  v59 = 0LL;
  v57 = 0LL;
  v8 = a4;
  v58 = 0LL;
  v9 = a3;
  v56 = 0LL;
  EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v15 = 0;
  v16 = v10;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 40);
    v11 = (*(_WORD *)(v12 + 42) & 0x2FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)v54 = gptiCurrent;
      *(_QWORD *)&v56 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v56;
      *((_QWORD *)&v56 + 1) = v10;
      HMLockObject(v10);
      v17 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v39 = 1004LL;
      }
      else
      {
        v18 = a2;
        v19 = 1;
        if ( (unsigned __int64)(a2 - 2) <= 0xFFFFFFFFFFFFFFFBuLL )
        {
          v20 = ValidateHwndIAM(a2);
          a2 = v20;
          v18 = v20;
          if ( !v20 || (v21 = (*(_WORD *)(*(_QWORD *)(v20 + 40) + 42LL) & 0x2FFFu) - 669, (v21 & 0xFFFFFFFD) == 0) )
            v19 = 0;
          if ( !v19 )
            goto LABEL_48;
        }
        if ( *(char *)(*(_QWORD *)(v16 + 40) + 20LL) >= 0 )
        {
          if ( (v17 & 2) == 0 )
          {
            if ( v9 > 0x7FFF )
            {
              v9 = 0x7FFF;
              v52 = 0x7FFF;
            }
            else
            {
              if ( v9 < -32768 )
                v9 = -32768;
              v52 = v9;
            }
            v63 = v9;
            if ( v8 > 0x7FFF )
            {
              v8 = 0x7FFF;
            }
            else if ( v8 < -32768 )
            {
              v8 = -32768;
            }
            v64 = v8;
          }
          v23 = a5;
          if ( (v17 & 1) != 0 )
          {
            v24 = a6;
          }
          else
          {
            v24 = 0xFFFF;
            if ( a5 > 0xFFFF )
            {
              v23 = 0xFFFF;
            }
            else if ( a5 < 0 )
            {
              v23 = 0;
            }
            a5 = v23;
            if ( a6 <= 0xFFFF )
            {
              v24 = a6;
              if ( a6 < 0 )
                v24 = 0;
            }
            a6 = v24;
          }
          if ( v18 <= 1 || v18 == -2LL || (v25 = v18, v18 == -1LL) )
            v25 = 0LL;
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(1LL);
          if ( (unsigned __int8)ShouldVirtualizeWindowRect(v16, CurrentThreadDpiAwarenessContext) )
          {
            TransformSWPCoords((struct tagWND *)v16, &v63, &v64, &a5, &a6, v17);
            v24 = a6;
            v23 = a5;
            v8 = v64;
            v52 = v63;
          }
          if ( (v17 & 0x43) == 0x43
            && (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 0x10) == 0
            && ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x80000000LL, v27)
            && ShellWindowManagement::WindowSubjectToBehavior(
                 (ShellWindowManagement *)v16,
                 (const struct tagWND *)1,
                 v38) )
          {
            LOBYTE(v41) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v41,
                v42,
                10,
                4,
                12,
                10,
                (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
                v16);
            }
            xxxShowWindowEx(v16, 5u, 0);
            v15 = 1;
            goto LABEL_48;
          }
          *(_QWORD *)&v58 = *(_QWORD *)(*(_QWORD *)v54 + 416LL);
          *(_QWORD *)(*(_QWORD *)v54 + 416LL) = &v58;
          *((_QWORD *)&v58 + 1) = v25;
          if ( v25 )
            HMLockObject(v25);
          if ( !a2
            && (*(_DWORD *)(v16 + 320) & 0x1000) != 0
            && (*(_QWORD *)v54 = 0LL, (unsigned int)CWindowProp::GetProp<CoreWindowProp>(v16, v54))
            && *(_DWORD *)(*(_QWORD *)v54 + 28LL)
            && (v17 & 0xFFFFFFEF) == 3 )
          {
            v17 |= 0x60400u;
            v51 = 1;
          }
          else
          {
            v51 = 0;
          }
          v28 = 0;
          v54[0] = v52;
          v55 = v8;
          v53 = 0;
          if ( (v17 & 0x80u) != 0 && *(_QWORD *)(v16 + 16) == gptiCurrent )
          {
            if ( IsWindowGhosted((const struct tagWND *)v16) )
              xxxHandleHealthyWindow((struct tagWND *)v16);
            v28 = 0;
          }
          if ( (v17 & 0xC0) != 0 )
          {
            v37 = *(_QWORD *)(v16 + 40);
            if ( (*(_BYTE *)(v37 + 21) & 1) == 0 )
            {
              v17 |= 3u;
              if ( (v17 & 0x40) != 0 )
              {
                if ( (*(_BYTE *)(v37 + 31) & 0x10) != 0 )
                  v28 = 1;
                v53 = v28;
              }
            }
          }
          v29 = *(_BYTE **)(v16 + 40);
          if ( (v29[21] & 4) == 0
            && *(_DWORD *)*gpDispInfo > 1u
            && (v17 & 2) == 0
            && (v29[31] & 0x50) == 0
            && (v29[30] & 0xC0) == 0xC0 )
          {
            v43 = *(_QWORD *)(v16 + 120);
            if ( v43 )
            {
              v44 = *(_QWORD *)(v43 + 40);
              if ( (*(_BYTE *)(v44 + 31) & 0x10) != 0
                && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v44 + 88)) )
              {
                FixBogusSWP((struct tagWND *)v16, v54, &v55, v23, v24, v17);
                v8 = v55;
                v52 = v54[0];
              }
            }
          }
          v30 = gdwPUDFlags;
          if ( (gdwPUDFlags & 0x40000000) != 0 || *((int *)&gSMWP + 8) < 1 )
          {
            v36 = Win32AllocPoolWithQuotaZInit(48LL, 2004054869LL);
            v32 = (void *)v36;
            if ( !v36 )
              goto LABEL_100;
            if ( !(unsigned int)AllocateCvr(v36, 1) )
            {
              Win32FreePool(v32);
              goto LABEL_100;
            }
          }
          else
          {
            v31 = gdwPUDFlags | 0x40000000u;
            gdwPUDFlags |= 0x40000000u;
            v32 = (void *)gSMWP;
            gSMWP = 0LL;
            *((_OWORD *)&gSMWP + 1) = 0LL;
            if ( !gSMWP )
              goto LABEL_100;
          }
          v33 = (struct tagSMWP *)_DeferWindowPos(v32, v16, a2, v52, v8, v23, v24, v17, 0);
          if ( v33 && (unsigned int)xxxEndDeferWindowPosEx(v33) )
          {
            if ( v53 )
              xxxRedrawWindow((struct tagWND *)v16);
            v34 = 1LL;
            if ( v51 )
            {
              v30 = *(_QWORD *)(v16 + 16);
              v31 = gpqForeground;
              if ( *(_QWORD *)(v30 + 432) == gpqForeground )
              {
                TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent((const struct tagWND *)v16);
                TopLevelWindow = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
                v34 = 1LL;
                if ( TopLevelWindow )
                {
                  v60 = 0LL;
                  v61 = 0LL;
                  v47 = 394259;
                  ThreadLock(TopLevelWindow, &v60);
                  if ( (*(_BYTE *)(*((_QWORD *)TopLevelWindow + 5) + 24LL) & 8) == 0
                    && (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 24LL) & 8) == 0 )
                  {
                    v47 = 2491411;
                  }
                  xxxSetWindowPosAndBand(TopLevelWindow, v16, 0, 0, 0, 0, v47, 0);
                  ThreadUnlock1(v49, v48, v50);
                  v34 = 1LL;
                }
              }
            }
            goto LABEL_47;
          }
LABEL_100:
          v34 = 0LL;
LABEL_47:
          v15 = v34;
          ThreadUnlock1(v31, v30, v34);
LABEL_48:
          ThreadUnlock1(v21, v18, v22);
          goto LABEL_49;
        }
        v39 = 87LL;
      }
      UserSetLastError(v39);
      goto LABEL_48;
    }
  }
LABEL_49:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
