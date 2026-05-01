/*
 * XREFs of ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18002B36C
 * Callers:
 *     ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18002B1B0 (-FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TY.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C463C (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800C4F58 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x1804EB470 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1804ECC54 (-UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerP.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerManager::HandleFrameworkViewTypeChange(
        ShellPositionerManager *a1,
        unsigned int a2,
        struct IApplicationView *a3,
        __int64 a4)
{
  struct IShellPositionerPriority **AddressOf; // rax
  int PositionerPriorityForView; // eax
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  int PositionerForMonitor; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64); // rdi
  __int64 v16; // rax
  int updated; // eax
  __int64 v18; // rdx
  unsigned int v19; // edi
  int v20; // eax
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-30h]
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v26 = 0LL;
  AddressOf = (struct IShellPositionerPriority **)Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v26);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(a1, a3, AddressOf);
  v10 = PositionerPriorityForView;
  if ( PositionerPriorityForView < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EA,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerPriorityForView,
      v22);
    goto LABEL_7;
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           v11,
                           a4,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           &v24);
  v10 = PositionerForMonitor;
  if ( PositionerForMonitor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EF,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerForMonitor,
      v22);
    goto LABEL_6;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v24 + 56LL))(
          v24,
          a3,
          a2) )
  {
    v23 = 0LL;
    v14 = v26;
    v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 64LL);
    v16 = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v23);
    updated = v15(v14, v16);
    v10 = updated;
    if ( updated >= 0 )
    {
      v22 = a2;
      updated = ShellPositionerManager::UpdatePositionerPriorityForFrameworkViewType(a1, v23, a3, a4);
      v10 = updated;
      if ( updated >= 0 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
        v25 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
        v20 = ShellPositionerManager::GetPositionerForMonitor(v19, a4, &GUID_ee010e17_919a_4068_868b_675acf787303, &v25);
        v10 = v20;
        if ( v20 >= 0 )
        {
          v20 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a3 + 272LL))(a3, v23);
          v10 = v20;
          if ( v20 >= 0 )
          {
            ShellPositionerManager::PerformPositionerHandoff(a1, a3, v11, v19);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
            goto LABEL_5;
          }
          v21 = 778LL;
        }
        else
        {
          v21 = 775LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v20,
          a2);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
LABEL_20:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
        goto LABEL_6;
      }
      v18 = 770LL;
    }
    else
    {
      v18 = 767LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated,
      v22);
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v24 + 64LL))(v24, a3, a2);
LABEL_5:
  v10 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  return v10;
}
