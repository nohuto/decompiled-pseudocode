/*
 * XREFs of ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAKPEAUtagRECT@@@Z @ 0x180016D58
 * Callers:
 *     ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180016980 (-InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresen.c)
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180016B80 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x1805A31E0 (-InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnkno.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180017040 (-UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority.c)
 *     ??$PositionViewForActivation@AEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@ShellPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@Z @ 0x180017298 (--$PositionViewForActivation@AEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@ShellPosition.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EFF14 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F0008 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x1805A3CA0 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::HandleActivationRequest(
        ShellPositionerManager *a1,
        int a2,
        struct IApplicationView *a3,
        struct IImmersiveMonitor *a4,
        struct IUnknown *a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        _OWORD *a9)
{
  _DWORD *v12; // r14
  int PositionerPriorityForView; // eax
  unsigned int v14; // ebx
  struct IShellPositionerPriority *v15; // rbx
  __int64 (__fastcall *v16)(struct IShellPositionerPriority *, struct IShellPositionerPriority **); // rdi
  int updated; // eax
  struct IUnknown *v18; // rdi
  unsigned int v19; // r15d
  int PositionerForMonitor; // eax
  char v21; // r15
  unsigned int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  int v30; // [rsp+20h] [rbp-40h]
  __int64 v31; // [rsp+40h] [rbp-20h] BYREF
  struct IShellPositionerPriority *v32; // [rsp+48h] [rbp-18h] BYREF
  struct IShellPositionerPriority *v33[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IApplicationView *v36; // [rsp+B0h] [rbp+50h] BYREF

  v36 = a3;
  v12 = a8;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 0LL;
  v33[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v33);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(a1, a3, v33);
  v14 = PositionerPriorityForView;
  if ( PositionerPriorityForView < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D3,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerPriorityForView,
      v30);
    goto LABEL_17;
  }
  LODWORD(a8) = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v33[0] + 24LL))(v33[0]);
  v32 = 0LL;
  v15 = v33[0];
  v16 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, struct IShellPositionerPriority **))(*(_QWORD *)v33[0] + 64LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
  updated = v16(v15, &v32);
  v14 = updated;
  if ( updated < 0 )
  {
    v24 = 729LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated,
      v30);
    goto LABEL_16;
  }
  v18 = a5;
  updated = ShellPositionerManager::UpdatePositionerPriorityForActivation(a1, v32, a3, a4, a5);
  v14 = updated;
  if ( updated < 0 )
  {
    v24 = 732LL;
    goto LABEL_24;
  }
  v19 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v32 + 24LL))(v32);
  LODWORD(a9) = v19;
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           v19,
                           a4,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           &v31);
  v14 = PositionerForMonitor;
  if ( PositionerForMonitor < 0 )
  {
    v28 = 737LL;
    goto LABEL_37;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)v31 + 32LL))(
         v31,
         a3,
         v18) )
  {
    v14 = -2147467260;
    v25 = 2147500036LL;
    v28 = 740LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v25,
      v30);
    goto LABEL_15;
  }
  PositionerForMonitor = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IShellPositionerPriority *))(*(_QWORD *)a3 + 272LL))(
                           a3,
                           v32);
  v14 = PositionerForMonitor;
  if ( PositionerForMonitor < 0 )
  {
    v28 = 743LL;
    goto LABEL_37;
  }
  if ( !a2 )
  {
    v21 = 1;
    if ( v12 )
    {
      v36 = 0LL;
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v31)(
        v31,
        &GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0,
        (__int64 *)&v36);
      if ( v36 )
      {
        v21 = 0;
        v29 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationView *, struct IUnknown *, __int64))(*(_QWORD *)v36 + 112LL))(
                v36,
                a3,
                v18,
                a6);
        v14 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2FD,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v29,
            (int)v12);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v36);
          goto LABEL_15;
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v36);
      if ( !v21 )
        goto LABEL_14;
    }
    v30 = a7;
    PositionerForMonitor = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IUnknown *, __int64))(*(_QWORD *)v31 + 40LL))(
                             v31,
                             a3,
                             v18,
                             a6);
    v14 = PositionerForMonitor;
    if ( PositionerForMonitor >= 0 )
      goto LABEL_14;
    v28 = 771LL;
    goto LABEL_37;
  }
  v23 = (unsigned int)a8;
  if ( v19 != (_DWORD)a8 )
  {
    a8 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a8);
    v30 = v19;
    v27 = ShellPositionerManager::SendControlLostToPositioner(v26, a3, a4, v23);
    v14 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EF,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v27,
        v19);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a8);
      goto LABEL_15;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a8);
  }
  ShellPositionerTelemetry::PositionViewForActivation<IApplicationView * &,enum SHELL_POSITIONER_TYPE const &>(
    &v36,
    &a9);
  PositionerForMonitor = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD, struct IUnknown *))(*(_QWORD *)v31 + 48LL))(
                           v31,
                           a3,
                           v23,
                           v18);
  v14 = PositionerForMonitor;
  if ( PositionerForMonitor < 0 )
  {
    v28 = 778LL;
LABEL_37:
    v25 = (unsigned int)PositionerForMonitor;
    goto LABEL_38;
  }
LABEL_14:
  v14 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
LABEL_16:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
LABEL_17:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v33);
  return v14;
}
