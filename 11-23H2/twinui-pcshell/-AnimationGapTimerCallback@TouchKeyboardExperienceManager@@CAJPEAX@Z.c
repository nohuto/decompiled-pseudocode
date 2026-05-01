/*
 * XREFs of ?AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x18050E0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180176E38 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB1F8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ??$AnimationGapTimerCallback@_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N@Z @ 0x18050849C (--$AnimationGapTimerCallback@_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N@Z.c)
 *     ??$PrimaryViewAnimationStarting@_NAEAU?$atomic@I@std@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_NAEAU?$atomic@I@std@@@Z @ 0x180508C64 (--$PrimaryViewAnimationStarting@_NAEAU-$atomic@I@std@@@TouchKeyboardExperienceTelemetryLogger@@S.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18050D884 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180515E7C (-SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::AnimationGapTimerCallback(TouchKeyboardExperienceManager *this)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  int ViewInfo; // eax
  unsigned int v5; // ebx
  struct KBViewInfo *v6; // r14
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  std::_Ref_count_base *v11; // rcx
  int v12; // eax
  std::_Ref_count_base *v13; // rcx
  int v14; // eax
  int v15; // eax
  HWND v17; // [rsp+20h] [rbp-30h] BYREF
  TouchKeyboardExperienceManager *v18; // [rsp+28h] [rbp-28h] BYREF
  struct KBViewInfo *v19[2]; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v20[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v22; // [rsp+80h] [rbp+30h] BYREF
  char v23; // [rsp+88h] [rbp+38h] BYREF
  char v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v18 = this;
  if ( this )
  {
    v2 = *((_QWORD *)this + 31);
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 31, v2 + 1, v2);
        if ( v3 != v2 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (Microsoft::WRL::Details *)(2 * v2 + 16),
      (volatile int *)((unsigned __int64)v2 >> 63));
  }
LABEL_8:
  if ( !this )
    goto LABEL_32;
  if ( *((_BYTE *)this + 938) )
  {
    v22 = 0;
    TouchKeyboardExperienceTelemetryLogger::AnimationGapTimerCallback<bool>(&v22);
    *((_BYTE *)this + 938) = 0;
    *(_OWORD *)v19 = 0LL;
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, *((_DWORD *)this + 153), (__int64)v19);
    v5 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ViewInfo);
LABEL_17:
      v11 = v19[1];
      goto LABEL_25;
    }
    v25 = 0LL;
    v6 = v19[0];
    v7 = *((_QWORD *)v19[0] + 1);
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v9 = v8(v7, &v25);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 1118LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
      goto LABEL_17;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v25 + 24LL))(v25, &v17);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 1120LL;
      goto LABEL_16;
    }
    v12 = TouchKeyboardExperienceManager::AnimateInputView(this, v6, v17, 0);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x461,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v13 = v19[1];
    goto LABEL_30;
  }
  if ( !*((_BYTE *)this + 936) || !*((_QWORD *)this + 73) )
  {
LABEL_32:
    v5 = 0;
    goto LABEL_33;
  }
  v23 = 1;
  TouchKeyboardExperienceTelemetryLogger::AnimationGapTimerCallback<bool>(&v23);
  *(_OWORD *)v20 = 0LL;
  v14 = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, *((_DWORD *)this + 153), (__int64)v20);
  v5 = v14;
  if ( v14 >= 0 )
  {
    v24 = 1;
    TouchKeyboardExperienceTelemetryLogger::PrimaryViewAnimationStarting<bool,std::atomic<unsigned int> &>(
      &v24,
      (int *)this + 238);
    v15 = TouchKeyboardExperienceManager::SendPrimaryViewAnimationStartingEvent(this, v20[0]);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x46A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    _InterlockedExchange((volatile __int32 *)this + 238, 0);
    v13 = v20[1];
LABEL_30:
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x468,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
  v11 = v20[1];
LABEL_25:
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
LABEL_33:
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease((__int64 *)&v18);
  return v5;
}
