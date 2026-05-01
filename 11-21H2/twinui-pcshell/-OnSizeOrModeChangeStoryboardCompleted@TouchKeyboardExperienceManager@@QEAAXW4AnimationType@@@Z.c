/*
 * XREFs of ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x180463708
 * Callers:
 *     ?OnStoryboardCompleted@HostingAnimationListener@@UEAAXXZ @ 0x1804638F0 (-OnStoryboardCompleted@HostingAnimationListener@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SizeOrModeChangeAnimationCompleted@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z @ 0x180458388 (--$SizeOrModeChangeAnimationCompleted@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18045C14C (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18045D6AC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18045D848 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::OnSizeOrModeChangeStoryboardCompleted(__int64 a1, int a2)
{
  __int32 v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  std::_Ref_count_base *v9; // rdi
  int v10; // [rsp+20h] [rbp-19h]
  int v11; // [rsp+30h] [rbp-9h] BYREF
  std::_Ref_count_base *v12[2]; // [rsp+38h] [rbp-1h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp+17h] BYREF
  struct tagRECT v14; // [rsp+60h] [rbp+27h] BYREF
  struct tagRECT v15; // [rsp+70h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  v11 = a2;
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationCompleted<unsigned int>(&v11);
  *(_OWORD *)v12 = 0LL;
  TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)a1, *(_DWORD *)(a1 + 764), (__int64 *)v12);
  if ( *(_DWORD *)(a1 + 768) == 1 )
  {
    if ( *(_BYTE *)(a1 + 1148) && *(_DWORD *)(a1 + 1144) == 1 )
    {
      v4 = 2;
LABEL_17:
      _InterlockedExchange((volatile __int32 *)(a1 + 1144), v4);
      goto LABEL_21;
    }
    if ( *(_DWORD *)(a1 + 1144) != 1 && !*((_BYTE *)v12[0] + 34) )
    {
      v13 = *(struct tagRECT *)((char *)v12[0] + 120);
      v5 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
             (KeyboardHosting::TabTipAdapter **)a1,
             *(_DWORD *)(a1 + 764),
             &v13,
             (const struct tagRECT *)((char *)v12[0] + 136));
      v6 = retaddr;
      if ( v5 < 0 )
      {
        v7 = 992LL;
LABEL_15:
        wil::details::in1diag3::_Log_Hr(
          v6,
          (void *)v7,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
        goto LABEL_16;
      }
      goto LABEL_16;
    }
    v8 = *(_QWORD *)(a1 + 1024);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8);
    while ( _InterlockedExchange((volatile __int32 *)(a1 + 1040), 1) )
      ;
    v15 = *(struct tagRECT *)(a1 + 1044);
    _InterlockedExchange((volatile __int32 *)(a1 + 1040), 0);
    v10 = a2;
    v9 = v12[0];
    if ( (int)TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
                a1,
                (__int64)v12[0],
                1u,
                &v15,
                v10,
                L"StoryboardCompleted") < 0 )
    {
      v14 = *(struct tagRECT *)((char *)v9 + 120);
      v5 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
             (KeyboardHosting::TabTipAdapter **)a1,
             *(_DWORD *)(a1 + 764),
             &v14,
             (const struct tagRECT *)((char *)v9 + 136));
      v6 = retaddr;
      if ( v5 < 0 )
      {
        v7 = 985LL;
        goto LABEL_15;
      }
LABEL_16:
      v4 = 0;
      goto LABEL_17;
    }
  }
  else if ( !*(_BYTE *)(a1 + 1139) && *(_DWORD *)(a1 + 772) != 1 )
  {
    TouchKeyboardExperienceManager::FireInputPaneHidingEvent(
      (TouchKeyboardExperienceManager *)a1,
      *(_DWORD *)(a1 + 764),
      0);
  }
LABEL_21:
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
}
