/*
 * XREFs of ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1806DE264
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180257360 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141EC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180141EC0.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x18016468C (-InternalAddRef@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801B5348 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z @ 0x1802EA252 (--0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z.c)
 *     shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1806C9678 (shell--TaskScheduler--AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___.c)
 *     ?_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE3F8 (-_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLauncherTipContextMenu::_EnsureMenu(CLauncherTipContextMenu *this, struct tagPOINT *a2)
{
  int v3; // ebx
  void *v4; // rdx
  volatile int *v5; // rdx
  volatile int *v6; // rdx
  volatile int *v7; // rdx
  volatile int *v8; // rdx
  CLauncherTipContextMenu *v10; // [rsp+20h] [rbp-48h] BYREF
  char v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+2Ch] [rbp-3Ch]
  int v13; // [rsp+30h] [rbp-38h]
  CLauncherTipContextMenu *v14; // [rsp+38h] [rbp-30h]
  _BYTE v15[16]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]

  v3 = 0;
  if ( !*((_BYTE *)this + 320) )
  {
    if ( *((_BYTE *)this + 321) )
    {
      return (unsigned int)-2147483638;
    }
    else
    {
      v3 = CLauncherTipContextMenu::_EnsureScheduler(this);
      if ( v3 >= 0 )
      {
        shell::TaskScheduler::TaskScheduler(
          (shell::TaskScheduler *)v15,
          *((struct IShellTaskScheduler **)this + 17),
          &TOID_LAUNCHERTIPCONTEXTMENU_POPULATECOMMANDS);
        EnterCriticalSection((LPCRITICAL_SECTION)this + 6);
        if ( *((_BYTE *)this + 321) )
        {
          v3 = -2147483638;
        }
        else if ( !*((_BYTE *)this + 320) )
        {
          *((_BYTE *)this + 321) = 1;
          wil::details::ResetEvent(*((wil::details **)this + 44), v4);
          v14 = this;
          Microsoft::WRL::Details::SafeUnknownIncrementReference((CLauncherTipContextMenu *)((char *)this + 116), v5);
          v10 = this;
          Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef((__int64 *)&v10, v6);
          v11 = 0;
          v12 = 0;
          v13 = 0;
          v3 = shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___((__int64)v15, (__int64)&v10);
          v10 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>::Release(
            (__int64)this,
            v7);
          if ( v3 < 0 )
            *((_BYTE *)this + 321) = 0;
          else
            v3 = -2147483638;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>::Release(
            (__int64)this,
            v8);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this + 6);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  return (unsigned int)v3;
}
