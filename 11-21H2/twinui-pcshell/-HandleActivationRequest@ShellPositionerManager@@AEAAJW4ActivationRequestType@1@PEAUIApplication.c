/*
 * XREFs of ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x1800C4260
 * Callers:
 *     ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800C3B90 (-InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnkno.c)
 *     ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1800C3D00 (-InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresen.c)
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800C3E60 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x18007D780 (-UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180096D28 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C463C (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?get@?$static_lazy@VShellPositionerTelemetry@@@details@wil@@QEAAPEAVShellPositionerTelemetry@@P6AXXZ@Z @ 0x1800C49BC (-get@-$static_lazy@VShellPositionerTelemetry@@@details@wil@@QEAAPEAVShellPositionerTelemetry@@P6.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800C4A50 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x1804EBD00 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804F9FB8 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ShellPositionerManager::HandleActivationRequest(
        int *a1,
        int a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64),
        IUnknown *a4,
        struct IUnknown *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r15
  __int64 *AddressOf; // rax
  __int64 *v13; // rdi
  __int64 (__fastcall *v14)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 *v15; // rax
  __int64 v16; // rcx
  int v17; // ebx
  unsigned int v18; // r12d
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64 *); // rdi
  __int64 *v21; // rax
  int updated; // eax
  struct IUnknown *v23; // r14
  __int64 v24; // rdi
  int PositionerForMonitor; // eax
  __int64 v26; // rcx
  char v27; // di
  __int64 v28; // rcx
  wil::TraceLoggingProvider *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  void **v33; // rbx
  struct IApplicationView *v34; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v37; // rdx
  __int64 v38; // rdx
  int v39; // eax
  int Instance; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  int v47; // eax
  struct IShellPositionerPriority *v48; // [rsp+30h] [rbp-10h] BYREF
  __int64 v49; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v53; // [rsp+90h] [rbp+50h] BYREF

  v11 = a8;
  if ( a8 )
    *(_DWORD *)a8 = 0;
  v49 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v49);
  v13 = AddressOf;
  if ( AddressOf )
    *AddressOf = 0LL;
  a8 = 0LL;
  v14 = (*a3)[33];
  v15 = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&a8);
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64 *))v14)(
         a3,
         v15) >= 0 )
    goto LABEL_6;
  v33 = (void **)Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&a8);
  *v33 = 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a3, v34);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      Instance = PositionerPriority_CreateInstance(PropW, v37, v33);
      if ( Instance >= 0 )
        goto LABEL_33;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F5,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&a8);
  v39 = PositionerPriority_CreateInstance(a1[36], v38, &a8);
  v17 = v39;
  if ( v39 < 0 )
  {
    v41 = 1061LL;
    goto LABEL_41;
  }
LABEL_33:
  v39 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64))(*a3)[34])(
          a3,
          a8);
  v17 = v39;
  if ( v39 < 0 )
  {
    v41 = 1065LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v39);
    goto LABEL_11;
  }
LABEL_6:
  if ( v13 )
  {
    v16 = a8;
    if ( a8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a8 + 8LL))(a8);
      v16 = a8;
    }
    *v13 = v16;
  }
  v17 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&a8);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A6,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_24;
  }
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 24LL))(v49);
  v48 = 0LL;
  v19 = v49;
  v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 64LL);
  v21 = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf((__int64 *)&v48);
  updated = v20(v19, v21);
  v17 = updated;
  if ( updated < 0 )
  {
    v42 = 684LL;
  }
  else
  {
    v23 = a5;
    updated = ShellPositionerManager::UpdatePositionerPriorityForActivation(
                (ShellPositionerManager *)a1,
                v48,
                (struct IApplicationView *)a3,
                a4,
                a5);
    v17 = updated;
    if ( updated >= 0 )
    {
      v24 = (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v48 + 24LL))(v48);
      v53 = 0LL;
      PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                               v24,
                               a4,
                               &GUID_ee010e17_919a_4068_868b_675acf787303,
                               &v53);
      v17 = PositionerForMonitor;
      if ( PositionerForMonitor < 0 )
      {
        v46 = 692LL;
      }
      else
      {
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, struct IUnknown *))(*(_QWORD *)v53 + 32LL))(v53, a3, v23) )
        {
          v17 = -2147467260;
          v43 = 2147500036LL;
          v46 = 695LL;
LABEL_56:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v46,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)v43);
LABEL_21:
          v28 = v53;
          if ( v53 )
          {
            v53 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          }
          goto LABEL_23;
        }
        PositionerForMonitor = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), struct IShellPositionerPriority *))(*a3)[34])(
                                 a3,
                                 v48);
        v17 = PositionerForMonitor;
        if ( PositionerForMonitor < 0 )
        {
          v46 = 698LL;
        }
        else if ( a2 )
        {
          if ( (_DWORD)v24 != v18 )
          {
            a8 = 0LL;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a8);
            v45 = ShellPositionerManager::SendControlLostToPositioner(v44, a3, a4, v18, v24, &a8);
            v17 = v45;
            if ( v45 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2C2,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                (const char *)(unsigned int)v45);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a8);
              goto LABEL_21;
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a8);
          }
          v30 = (wil::TraceLoggingProvider *)wil::details::static_lazy<ShellPositionerTelemetry>::get(
                                               v26,
                                               _lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
          if ( wil::TraceLoggingProvider::IsEnabled_(v30, 0) )
          {
            wil::details::static_lazy<ShellPositionerTelemetry>::get(
              v31,
              _lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
            ShellPositionerTelemetry::PositionViewForActivation_(v32, a3, (unsigned int)v24);
          }
          PositionerForMonitor = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), _QWORD, struct IUnknown *))(*(_QWORD *)v53 + 48LL))(
                                   v53,
                                   a3,
                                   v18,
                                   v23);
          v17 = PositionerForMonitor;
          if ( PositionerForMonitor >= 0 )
            goto LABEL_20;
          v46 = 734LL;
        }
        else
        {
          v27 = 1;
          if ( v11 )
          {
            a8 = 0LL;
            (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v53)(
              v53,
              &GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12,
              &a8);
            if ( a8 )
            {
              v27 = 0;
              v47 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), struct IUnknown *, __int64, __int64))(*(_QWORD *)a8 + 40LL))(
                      a8,
                      a3,
                      v23,
                      a6,
                      v11);
              v17 = v47;
              if ( v47 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2D1,
                  (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                  (const char *)(unsigned int)v47);
                wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&a8);
                goto LABEL_21;
              }
            }
            wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&a8);
            if ( !v27 )
              goto LABEL_20;
          }
          PositionerForMonitor = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), struct IUnknown *, __int64, __int64))(*(_QWORD *)v53 + 40LL))(
                                   v53,
                                   a3,
                                   v23,
                                   a6,
                                   a7);
          v17 = PositionerForMonitor;
          if ( PositionerForMonitor >= 0 )
          {
LABEL_20:
            v17 = 0;
            goto LABEL_21;
          }
          v46 = 727LL;
        }
      }
      v43 = (unsigned int)PositionerForMonitor;
      goto LABEL_56;
    }
    v42 = 687LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v42,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)updated);
LABEL_23:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v48);
LABEL_24:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v49);
  return (unsigned int)v17;
}
