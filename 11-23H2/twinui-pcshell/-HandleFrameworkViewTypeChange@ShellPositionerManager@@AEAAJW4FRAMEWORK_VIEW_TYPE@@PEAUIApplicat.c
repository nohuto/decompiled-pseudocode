/*
 * XREFs of ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180016850
 * Callers:
 *     ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18005F7F0 (-FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TY.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EFF14 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F0008 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x1805A3418 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1805A4D74 (-UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerP.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerManager::HandleFrameworkViewTypeChange(
        ShellPositionerManager *a1,
        unsigned int a2,
        struct IApplicationView *a3,
        __int64 a4)
{
  int PositionerPriorityForView; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r13d
  int PositionerForMonitor; // eax
  struct IShellPositionerPriority *v13; // rbx
  __int64 (__fastcall *v14)(struct IShellPositionerPriority *, __int64 *); // rdi
  int updated; // eax
  __int64 v16; // rdx
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  struct IShellPositionerPriority *v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v23 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(a1, a3, &v23);
  v9 = PositionerPriorityForView;
  if ( PositionerPriorityForView < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x316,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerPriorityForView,
      v20);
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v23 + 24LL))(v23);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           v10,
                           a4,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           &v22);
  v9 = PositionerForMonitor;
  if ( PositionerForMonitor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerForMonitor,
      v20);
    goto LABEL_6;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v22 + 56LL))(
          v22,
          a3,
          a2) )
  {
    v21 = 0LL;
    v13 = v23;
    v14 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, __int64 *))(*(_QWORD *)v23 + 64LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    updated = v14(v13, &v21);
    v9 = updated;
    if ( updated >= 0 )
    {
      v20 = a2;
      updated = ShellPositionerManager::UpdatePositionerPriorityForFrameworkViewType(a1, v21, a3, a4);
      v9 = updated;
      if ( updated >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
        v24 = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
        v18 = ShellPositionerManager::GetPositionerForMonitor(v17, a4, &GUID_ee010e17_919a_4068_868b_675acf787303, &v24);
        v9 = v18;
        if ( v18 >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a3 + 272LL))(a3, v21);
          v9 = v18;
          if ( v18 >= 0 )
          {
            ShellPositionerManager::PerformPositionerHandoff(a1, a3, v10, v17);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
            goto LABEL_5;
          }
          v19 = 822LL;
        }
        else
        {
          v19 = 819LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v18,
          a2);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
LABEL_20:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
        goto LABEL_6;
      }
      v16 = 814LL;
    }
    else
    {
      v16 = 811LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated,
      v20);
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v22 + 64LL))(v22, a3, a2);
LABEL_5:
  v9 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  return v9;
}
