/*
 * XREFs of ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800A62D0
 * Callers:
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18003F920 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A59D0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800A6C7C (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1800A6384 (-IsHighContrast@@YAHXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8e19176f789c7859d410d1f9816f6010___ @ 0x180191948 (Windows--Internal--ComTaskPool--QueueTask__lambda_8e19176f789c7859d410d1f9816f6010___.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnDpiOrHighContrastChanged(CActionCenterExperienceManager *this)
{
  unsigned int v2; // esi
  HMONITOR v3; // rax
  int ScaleFactorForMonitor; // eax
  unsigned int v5; // ebx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  DWORD SysColor; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v15; // [rsp+38h] [rbp+10h] BYREF
  int v16; // [rsp+40h] [rbp+18h] BYREF
  int v17; // [rsp+44h] [rbp+1Ch]

  v2 = 0;
  v3 = MonitorFromPoint(0LL, 1u);
  v15 = 0;
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v3, &v15);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return v5;
  }
  else
  {
    v6 = 0;
    if ( (unsigned int)IsHighContrast() )
    {
      if ( !(unsigned int)IsHighContrast()
        || (SysColor = GetSysColor(5),
            v6 = 2,
            v7 = BYTE2(SysColor) + 5 * BYTE1(SysColor),
            v8 = (unsigned int)v7 + 2 * (unsigned __int8)SysColor,
            (unsigned int)v8 <= 0x400) )
      {
        v6 = 1;
      }
    }
    v9 = v15;
    if ( *((_DWORD *)this + 170) != v15 || *((_DWORD *)this + 171) != v6 )
    {
      v10 = *((unsigned int *)this + 158);
      *((_DWORD *)this + 170) = v15;
      *((_DWORD *)this + 171) = v6;
      v16 = v9;
      v17 = v6;
      v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_8e19176f789c7859d410d1f9816f6010___(v8, v7, v10, &v16);
      v2 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2AF,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
    }
    return v2;
  }
}
