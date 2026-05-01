/*
 * XREFs of ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180516958
 * Callers:
 *     _lambda_4b0775d64c2392808fe7dff402e255dc_::operator() @ 0x180207574 (_lambda_4b0775d64c2392808fe7dff402e255dc_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x1802092F0 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ViewShown@AEAII@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAI@Z @ 0x1802DA1C0 (--$ViewShown@AEAII@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAI@Z.c)
 *     ??4ViewOptions@@QEAAAEAU0@AEBU0@@Z @ 0x1802DAB6A (--4ViewOptions@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??$SizeOrModeChangeAnimationStateInShowView@AEAU?$atomic@_N@std@@I@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@_N@std@@$$QEAI@Z @ 0x180508FD8 (--$SizeOrModeChangeAnimationStateInShowView@AEAU-$atomic@_N@std@@I@TouchKeyboardExperienceTeleme.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18050D884 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18050DCC8 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18050E368 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x180513030 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x180513280 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x18052F5D8 (-ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA-AV-$tuple@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ShowView(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        const struct tagRECT *a3,
        const struct ViewOptions *a4)
{
  const struct tagRECT *v5; // r12
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  unsigned int LastError; // ebx
  __int64 v12; // rdx
  char v13; // r15
  char v14; // r12
  volatile __int32 *v15; // r15
  int v16; // eax
  const struct tagRECT *v17; // rdx
  __int64 v18; // rdx
  __int128 *v19; // rcx
  __int64 v20; // r8
  __int128 v21; // xmm0
  int v22; // eax
  int v23; // ecx
  __int32 v24; // ebx
  int v25; // eax
  __int64 v26; // rdx
  const char *v27; // r9
  struct tagRECT v29; // [rsp+50h] [rbp-39h] BYREF
  __int64 v30; // [rsp+60h] [rbp-29h] BYREF
  int v31; // [rsp+68h] [rbp-21h] BYREF
  __int32 v32[2]; // [rsp+70h] [rbp-19h] BYREF
  HWND hWnd; // [rsp+78h] [rbp-11h] BYREF
  __int128 v34; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v5 = a3;
  *(_QWORD *)&v29.left = a3;
  v30 = 0LL;
  v8 = *((_QWORD *)a2 + 1);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
  v10 = v9(v8, &v30);
  LastError = v10;
  if ( v10 < 0 )
  {
    v12 = 4387LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_47;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v30 + 24LL))(v30, &hWnd);
  LastError = v10;
  if ( v10 < 0 )
  {
    v12 = 4389LL;
    goto LABEL_38;
  }
  v13 = 0;
  if ( *((_DWORD *)a4 + 1) && anonymous_namespace_::IsAnimationEnabled() )
  {
    v14 = 0;
    if ( !*((_BYTE *)a2 + 34) )
      goto LABEL_24;
    if ( *((_DWORD *)this + 153) == *((_DWORD *)a2 + 26) )
    {
      if ( *((_DWORD *)this + 235) == 3 || *((_DWORD *)this + 235) == 1 )
        goto LABEL_24;
      v14 = 1;
      v15 = (volatile __int32 *)((char *)this + 940);
      if ( *((_DWORD *)this + 153) == *((_DWORD *)a2 + 26) )
      {
        *((_BYTE *)this + 938) = 0;
        v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 101) + 96LL))(*((_QWORD *)this + 101));
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x113C,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v16);
      }
    }
    else
    {
      v14 = 1;
      v15 = (volatile __int32 *)((char *)this + 940);
    }
    ViewOptions::operator=((__int64)a2 + 152, (__int64)a4);
    TouchKeyboardExperienceManager::ApplyRequestedRect(this, a2, *(const struct tagRECT **)&v29.left);
    _InterlockedExchange(v15, 0);
    *((_BYTE *)this + 944) = 0;
    if ( (unsigned int)TouchKeyboardExperienceManager::AnimateInputView(this, a2, hWnd, 1)
      || *((_DWORD *)this + 153) != *((_DWORD *)a2 + 26) )
    {
      v13 = 1;
    }
    else
    {
      if ( KeyboardHosting::IsRectNull((struct KBViewInfo *)((char *)a2 + 136), v17) )
        v21 = *(_OWORD *)((char *)a2 + 120);
      else
        v21 = *v19;
      v34 = v21;
      LOBYTE(v20) = *((_DWORD *)a4 + 1) == 1;
      LOBYTE(v18) = 1;
      KeyboardHosting::AnimationCoordinationHelper::ComputePrimaryViewAnimationDurations(v32, v18, v20, &v34);
      _InterlockedExchange((volatile __int32 *)this + 238, v32[0]);
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 101) + 80LL))(
              *((_QWORD *)this + 101),
              (unsigned int)v32[1],
              0LL);
      LastError = v10;
      if ( v10 < 0 )
      {
        v12 = 4446LL;
        goto LABEL_38;
      }
      v13 = 1;
    }
LABEL_24:
    v31 = *((_DWORD *)this + 235);
    TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationStateInShowView<std::atomic<bool> &,unsigned int>(
      (char *)a2 + 34,
      &v31);
    if ( v14 || *((_DWORD *)this + 153) != *((_DWORD *)a2 + 26) || *((_BYTE *)a2 + 34) && !*((_DWORD *)this + 235) )
    {
      v5 = *(const struct tagRECT **)&v29.left;
    }
    else
    {
      v5 = *(const struct tagRECT **)&v29.left;
      v22 = abs32(
              *(_DWORD *)(*(_QWORD *)&v29.left + 4LL)
            + *((_DWORD *)a2 + 33)
            - *((_DWORD *)a2 + 31)
            - *(_DWORD *)(*(_QWORD *)&v29.left + 12LL));
      v23 = *((_DWORD *)a4 + 1);
      if ( v23 != *((_DWORD *)a2 + 39) )
      {
        v24 = (v23 == 1) + 1;
        goto LABEL_32;
      }
      if ( v22 > 1 )
      {
        v24 = 3;
LABEL_32:
        ViewOptions::operator=((__int64)a2 + 152, (__int64)a4);
        _InterlockedExchange((volatile __int32 *)this + 237, v24);
        if ( !(unsigned int)TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
                              (__int64)this,
                              (__int64)a2,
                              0,
                              *(const struct tagRECT **)&v29.left,
                              v24,
                              L"ShowView") )
        {
          TouchKeyboardExperienceManager::FireInputPaneHidingEvent(this, *((_DWORD *)this + 153), 0);
          goto LABEL_41;
        }
      }
    }
    if ( v13 )
      goto LABEL_41;
  }
  ViewOptions::operator=((__int64)a2 + 152, (__int64)a4);
  TouchKeyboardExperienceManager::ApplyRequestedRect(this, a2, v5);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 40LL))(*((_QWORD *)a2 + 1), 0LL);
  LastError = v10;
  if ( v10 < 0 )
  {
    v12 = 4487LL;
    goto LABEL_38;
  }
  TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, a2, 0);
  v29 = *(struct tagRECT *)((char *)a2 + 120);
  v25 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
          (KeyboardHosting::TabTipAdapter **)this,
          (const struct tagRECT *)*((unsigned int *)a2 + 26),
          &v29,
          (struct tagRECT *)((char *)a2 + 136));
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x118D,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v25);
LABEL_41:
  if ( !*((_DWORD *)a4 + 3) )
    goto LABEL_46;
  v26 = -1LL;
  if ( *((_DWORD *)a4 + 3) != 1 )
    v26 = 1LL;
  if ( SetWindowPos(hWnd, (HWND)v26, 0, 0, 0, 0, 3u) )
  {
LABEL_46:
    v29.left = *((_DWORD *)a2 + 41);
    TouchKeyboardExperienceTelemetryLogger::ViewShown<unsigned int &,unsigned int>((int *)a2 + 26, &v29.left);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1194,
                  (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v27);
  }
LABEL_47:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
  return LastError;
}
