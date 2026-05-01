/*
 * XREFs of ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180464CD0
 * Callers:
 *     _lambda_41fdec79629b933043b6dd44cc33a98f_::operator() @ 0x1801AFDF8 (_lambda_41fdec79629b933043b6dd44cc33a98f_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164990 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion@@@details@w.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4ViewOptions@@QEAAAEAU0@AEBU0@@Z @ 0x18045B6D4 (--4ViewOptions@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18045BD28 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18045C14C (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18045C7D4 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18045D848 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x180460CE8 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z @ 0x180460EC0 (-IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z.c)
 *     ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x18047ED7C (-ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA-AV-$tuple@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ShowView(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        const struct tagRECT *a3,
        const struct ViewOptions *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  unsigned int LastError; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  volatile __int32 *v15; // rdi
  int v16; // eax
  TouchKeyboardExperienceManager *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct tagRECT *v20; // rdx
  __int128 v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  int v25; // ecx
  __int32 v26; // ebx
  TouchKeyboardExperienceManager *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  const char *v30; // r9
  __int64 v32; // [rsp+40h] [rbp-29h] BYREF
  HWND hWnd; // [rsp+48h] [rbp-21h] BYREF
  struct tagRECT v34; // [rsp+50h] [rbp-19h] BYREF
  __int128 v35; // [rsp+60h] [rbp-9h] BYREF
  __int128 v36; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v32 = 0LL;
  v8 = *((_QWORD *)a2 + 1);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
  v10 = v9(v8, &v32);
  LastError = v10;
  if ( v10 < 0 )
  {
    v12 = 4719LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_41;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v32 + 24LL))(v32, &hWnd);
  LastError = v10;
  if ( v10 < 0 )
  {
    v12 = 4721LL;
    goto LABEL_32;
  }
  if ( !*((_DWORD *)a4 + 1) || !anonymous_namespace_::IsAnimationEnabled() )
    goto LABEL_30;
  if ( !*((_BYTE *)a2 + 34) )
    goto LABEL_44;
  if ( *((_DWORD *)this + 191) != *((_DWORD *)a2 + 26) )
  {
    v15 = (volatile __int32 *)((char *)this + 1144);
    goto LABEL_15;
  }
  if ( *((_DWORD *)this + 286) == 3 || *((_DWORD *)this + 286) == 1 )
  {
LABEL_44:
    if ( *((_DWORD *)this + 191) == *((_DWORD *)a2 + 26) && (!*((_BYTE *)a2 + 34) || *((_DWORD *)this + 286)) )
    {
      v24 = abs32(a3->top + *((_DWORD *)a2 + 33) - *((_DWORD *)a2 + 31) - a3->bottom);
      v25 = *((_DWORD *)a4 + 1);
      if ( v25 != *((_DWORD *)a2 + 39) )
      {
        v26 = (v25 == 1) + 1;
        goto LABEL_28;
      }
      if ( v24 > 1 )
      {
        v26 = 3;
LABEL_28:
        ViewOptions::operator=((__int64)a2 + 152, (__int64)a4);
        _InterlockedExchange((volatile __int32 *)this + 288, v26);
        if ( !(unsigned int)TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
                              (__int64)this,
                              (__int64)a2,
                              0,
                              a3,
                              v26,
                              L"ShowView") )
        {
          TouchKeyboardExperienceManager::FireInputPaneHidingEvent(this, *((_DWORD *)this + 191), 0);
          goto LABEL_35;
        }
      }
    }
LABEL_30:
    ViewOptions::operator=((__int64)a2 + 152, (__int64)a4);
    TouchKeyboardExperienceManager::ApplyRequestedRect(v27, a2, a3);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 40LL))(*((_QWORD *)a2 + 1), 0LL);
    LastError = v10;
    if ( v10 < 0 )
    {
      v12 = 4824LL;
      goto LABEL_32;
    }
    *((_BYTE *)a2 + 34) = 0;
    v34 = *(struct tagRECT *)((char *)a2 + 120);
    v28 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
            (KeyboardHosting::TabTipAdapter **)this,
            *((_DWORD *)a2 + 26),
            &v34,
            (const struct tagRECT *)((char *)a2 + 136));
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12DE,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v28);
    goto LABEL_35;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::GetImpl'::`2'::impl,
    1u,
    v13,
    v14);
  v15 = (volatile __int32 *)((char *)this + 1144);
  if ( *((_DWORD *)this + 191) == *((_DWORD *)a2 + 26) )
  {
    *((_BYTE *)this + 1140) = 0;
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 127) + 96LL))(*((_QWORD *)this + 127));
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x128A,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
  }
LABEL_15:
  ViewOptions::operator=((__int64)a2 + 152, (__int64)a4);
  TouchKeyboardExperienceManager::ApplyRequestedRect(v17, a2, a3);
  _InterlockedExchange(v15, 0);
  *((_BYTE *)this + 1148) = 0;
  if ( !(unsigned int)TouchKeyboardExperienceManager::AnimateInputView(this, a2, hWnd, 1) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::GetImpl'::`2'::impl,
      1u,
      v18,
      v19);
    if ( *((_DWORD *)this + 191) == *((_DWORD *)a2 + 26) )
    {
      v21 = *(_OWORD *)((char *)a2 + 136);
      v35 = v21;
      if ( KeyboardHosting::IsRectNull((KeyboardHosting *)&v35, v20) )
        v21 = *(_OWORD *)((char *)a2 + 120);
      v36 = v21;
      LOBYTE(v23) = *((_DWORD *)a4 + 1) == 1;
      LOBYTE(v22) = 1;
      KeyboardHosting::AnimationCoordinationHelper::ComputePrimaryViewAnimationDurations(&v34, v22, v23, &v36);
      _InterlockedExchange((volatile __int32 *)this + 289, v34.left);
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 127) + 80LL))(
              *((_QWORD *)this + 127),
              (unsigned int)v34.top,
              0LL);
      LastError = v10;
      if ( v10 < 0 )
      {
        v12 = 4783LL;
        goto LABEL_32;
      }
    }
  }
LABEL_35:
  if ( !*((_DWORD *)a4 + 3) )
    goto LABEL_40;
  v29 = -1LL;
  if ( *((_DWORD *)a4 + 3) != 1 )
    v29 = 1LL;
  if ( SetWindowPos(hWnd, (HWND)v29, 0, 0, 0, 0, 3u) )
LABEL_40:
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x12E5,
                  (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v30);
LABEL_41:
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v32);
  return LastError;
}
