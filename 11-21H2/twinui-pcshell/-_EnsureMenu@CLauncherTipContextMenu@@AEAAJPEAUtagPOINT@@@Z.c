/*
 * XREFs of ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1805DAE2C
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F628 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x180133C08 (-InternalAddRef@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D9F70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801D9F70.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180464774 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1805D6D6C (shell--TaskScheduler--AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___.c)
 *     ??0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z @ 0x1805D829C (--0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z.c)
 *     ?_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB020 (-_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLauncherTipContextMenu::_EnsureMenu(
        CLauncherTipContextMenu *this,
        struct tagPOINT *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r9
  LONG x; // ebp
  LONG y; // r14d
  char v11; // bl
  void *v12; // rdx
  volatile int *v13; // rdx
  volatile int *v14; // rdx
  volatile int *v15; // rdx
  volatile int *v16; // rdx
  CLauncherTipContextMenu *v18; // [rsp+20h] [rbp-58h] BYREF
  char v19; // [rsp+28h] [rbp-50h]
  LONG v20; // [rsp+2Ch] [rbp-4Ch]
  LONG v21; // [rsp+30h] [rbp-48h]
  CLauncherTipContextMenu *v22; // [rsp+38h] [rbp-40h]
  _BYTE v23[16]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+50h] [rbp-28h]

  v6 = 0;
  if ( !*((_BYTE *)this + 320) )
  {
    if ( *((_BYTE *)this + 321) )
    {
      v6 = -2147483638;
    }
    else
    {
      v6 = CLauncherTipContextMenu::_EnsureScheduler(this);
      if ( v6 >= 0 )
      {
        shell::TaskScheduler::TaskScheduler(
          (shell::TaskScheduler *)v23,
          *((struct IShellTaskScheduler **)this + 17),
          &TOID_LAUNCHERTIPCONTEXTMENU_POPULATECOMMANDS);
        EnterCriticalSection((LPCRITICAL_SECTION)this + 6);
        if ( *((_BYTE *)this + 321) )
        {
          v6 = -2147483638;
        }
        else if ( !*((_BYTE *)this + 320) )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
            1u,
            3u,
            v7);
          *((_BYTE *)this + 321) = 1;
          x = 0;
          y = 0;
          if ( a2 )
          {
            v11 = 1;
            x = a2->x;
            y = a2->y;
          }
          else
          {
            v11 = 0;
          }
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
            1u,
            3u,
            v8);
          wil::details::ResetEvent(*((wil::details **)this + 44), v12);
          v22 = this;
          Microsoft::WRL::Details::SafeUnknownIncrementReference((CLauncherTipContextMenu *)((char *)this + 116), v13);
          v18 = this;
          Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef((__int64 *)&v18, v14);
          v19 = v11;
          v20 = x;
          v21 = y;
          v6 = shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___((__int64)v23, (__int64)&v18);
          v18 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,ILauncherTipContextMenu,ILauncherTipContextMenuSettingChangeListener,ILauncherTipContextMenuMigration>::Release(
            (__int64)this,
            v15);
          if ( v6 < 0 )
            *((_BYTE *)this + 321) = 0;
          else
            v6 = -2147483638;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,ILauncherTipContextMenu,ILauncherTipContextMenuSettingChangeListener,ILauncherTipContextMenuMigration>::Release(
            (__int64)this,
            v16);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this + 6);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  return (unsigned int)v6;
}
