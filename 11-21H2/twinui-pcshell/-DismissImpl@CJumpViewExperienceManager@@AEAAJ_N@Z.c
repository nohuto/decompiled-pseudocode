/*
 * XREFs of ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1800383D0
 * Callers:
 *     ?DisplaySettingsChange@CJumpViewExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180038390 (-DisplaySettingsChange@CJumpViewExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONIT.c)
 *     ?Dismiss@CJumpViewExperienceManager@@UEAAJXZ @ 0x1800383C0 (-Dismiss@CJumpViewExperienceManager@@UEAAJXZ.c)
 *     ?ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x180175FD0 (-ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_C.c)
 *     ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180372EB0 (-OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 *     ?OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180372FF0 (-OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     ?OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180373170 (-OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18000CAF8 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::DismissImpl(CJumpViewExperienceManager *this, char a2)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 48) != 2 )
    return 0LL;
  if ( !*((_QWORD *)this + 22) || (v5 = CSingleViewShellExperience::Hide((__int64)this + 152, 0LL), v6 = v5, v5 >= 0) )
  {
    if ( a2 )
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 24LL))(*((_QWORD *)this + 47), 0xFFFFLL);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x198,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v5,
    v7);
  return v6;
}
