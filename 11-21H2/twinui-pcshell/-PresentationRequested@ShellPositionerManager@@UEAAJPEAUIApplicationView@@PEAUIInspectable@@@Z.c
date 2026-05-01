/*
 * XREFs of ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804EB570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z @ 0x18007220C (--0-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180091C4C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C40C0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C463C (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800C4F58 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801B4288 (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     ??$query@UIPresentationRequestedArgs@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801B42E8 (--$query@UIPresentationRequestedArgs@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804EA67C (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1804EB39C (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x1804EBF74 (-StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIInspectable@@@Z @ 0x1804ECE2C (-UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriori.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall ShellPositionerManager::PresentationRequested(
        ShellPositionerManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IInspectable *a3)
{
  struct IInspectable *v3; // rsi
  __int64 *AddressOf; // rax
  int PositionerPriorityForView; // eax
  unsigned int v8; // ebx
  int v9; // r15d
  __int64 (__fastcall *v10)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 *v11; // rax
  int v12; // eax
  _QWORD *v13; // rax
  char v14; // r12
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, __int64 *); // rdi
  __int64 *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _QWORD, struct IShellPositionerPriority **); // rbx
  int v22; // eax
  __int64 v23; // rdx
  struct IShellPositionerPriority *v24; // rbx
  __int64 (__fastcall *v25)(struct IShellPositionerPriority *, _QWORD, __int64 *); // rdi
  __int64 *v26; // rax
  unsigned int v27; // esi
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64, _QWORD, struct IShellPositionerPriority **); // rbx
  struct IShellPositionerPriority *v30; // rbx
  __int64 (__fastcall *v31)(struct IShellPositionerPriority *, _QWORD, __int64 *); // rdi
  __int64 *v32; // rax
  int PositionerForMonitor; // eax
  __int64 v34; // rdx
  DWORD v35; // edx
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, __int64 *); // rdi
  __int64 *v38; // rax
  int updated; // eax
  ShellPositionerManager *v40; // rcx
  __int64 v41; // rdx
  int v42; // edi
  int v43; // eax
  __int64 v44; // rdx
  struct IShellPositionerPriority *v46; // [rsp+40h] [rbp-C0h] BYREF
  void *v47; // [rsp+48h] [rbp-B8h] BYREF
  struct IImmersiveMonitor *v48; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v49; // [rsp+58h] [rbp-A8h] BYREF
  void *v50; // [rsp+60h] [rbp-A0h] BYREF
  IUnknown *v51; // [rsp+68h] [rbp-98h] BYREF
  int v52[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v54; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v55; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  struct IInspectable *v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  _QWORD v59[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v3 = a3;
  v57 = a3;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v59,
    (__int64)"PresentationRequested");
  v59[0] = &ShellPositionerTelemetry::PresentationRequested::`vftable';
  ShellPositionerTelemetry::PresentationRequested::StartActivity((ShellPositionerTelemetry::PresentationRequested *)v59);
  v53 = 0LL;
  v58 = (__int64)this - 128;
  AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v53);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)((char *)this - 128),
                                a2,
                                (struct IShellPositionerPriority **)AddressOf);
  v8 = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 24LL))(v53);
    v51 = 0LL;
    v10 = (*a2)[10];
    v11 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v51);
    v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64 *))v10)(
            a2,
            v11);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23B,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_57:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v51);
      goto LABEL_58;
    }
    v13 = wil::com_ptr_t<IInspectable,wil::err_exception_policy>::com_ptr_t<IInspectable,wil::err_exception_policy>(
            &v47,
            (__int64)v3);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IPresentationRequestedArgs>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v13,
      v52);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v47);
    v48 = (struct IImmersiveMonitor *)v51;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v48);
    v14 = 0;
    v56 = 0LL;
    v15 = *(_QWORD *)v52;
    v16 = *(int (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v52 + 32LL);
    v17 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v56);
    if ( v16(v15, v17) >= 0 )
    {
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::com_ptr_t<IInspectable,wil::err_exception_policy>(
        &v46,
        v56);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v46,
        &v47);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v46);
      v18 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v47 + 56LL))(v47, &v54);
      v8 = v18;
      if ( v18 < 0 )
      {
        v19 = 584LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v18);
        goto LABEL_32;
      }
      if ( v54 )
      {
        v14 = 1;
        if ( v54 > 1 )
        {
          v8 = -2147024809;
LABEL_32:
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v47);
LABEL_56:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v56);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v48);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v52);
          goto LABEL_57;
        }
        v18 = (*(__int64 (__fastcall **)(void *, _QWORD, unsigned int *))(*(_QWORD *)v47 + 48LL))(v47, 0LL, &v49);
        v8 = v18;
        if ( v18 < 0 )
        {
          v19 = 591LL;
          goto LABEL_13;
        }
        v46 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v52 + 40LL))(*(_QWORD *)v52, &v55) < 0 )
        {
          if ( v9 == 5 )
          {
            v8 = -2147467263;
            goto LABEL_31;
          }
          v27 = (*((_DWORD *)this + 4) == 1) + 1;
          v28 = *((_QWORD *)this + 6);
          v29 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v28 + 32LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v46);
          v22 = v29(v28, v27, &v46);
          v8 = v22;
          if ( v22 < 0 )
          {
            v23 = 612LL;
            goto LABEL_24;
          }
          v30 = v46;
          v31 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD, __int64 *))(*(_QWORD *)v46 + 88LL);
          v32 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v48);
          v22 = v31(v30, v49, v32);
          v8 = v22;
          if ( v22 < 0 )
          {
            v23 = 613LL;
            goto LABEL_24;
          }
          v3 = v57;
        }
        else
        {
          v20 = *((_QWORD *)this + 6);
          v21 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v20 + 40LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v46);
          v22 = v21(v20, v55, &v46);
          v8 = v22;
          if ( v22 < 0 )
          {
            v23 = 597LL;
LABEL_24:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)v22);
LABEL_31:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v46);
            goto LABEL_32;
          }
          v24 = v46;
          v25 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD, __int64 *))(*(_QWORD *)v46 + 88LL);
          v26 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v48);
          v22 = v25(v24, v49, v26);
          v8 = v22;
          if ( v22 < 0 )
          {
            v23 = 598LL;
            goto LABEL_24;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v46);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v47);
    }
    v50 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v50);
    PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                             v9,
                             v51,
                             &GUID_ee010e17_919a_4068_868b_675acf787303,
                             &v50);
    v8 = PositionerForMonitor;
    if ( PositionerForMonitor < 0 )
    {
      v34 = 620LL;
LABEL_39:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerForMonitor);
LABEL_55:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v50);
      goto LABEL_56;
    }
    if ( (!v14 || !v9 || v9 == 6)
      && (*(unsigned int (__fastcall **)(void *, _QWORD, struct IInspectable *))(*(_QWORD *)v50 + 72LL))(v50, a2, v3) )
    {
      PositionerForMonitor = (*(__int64 (__fastcall **)(void *, _QWORD, struct IInspectable *))(*(_QWORD *)v50 + 80LL))(
                               v50,
                               a2,
                               v3);
      v8 = PositionerForMonitor;
      if ( PositionerForMonitor < 0 )
      {
        v34 = 631LL;
        goto LABEL_39;
      }
LABEL_54:
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v59, v35);
      v8 = 0;
      goto LABEL_55;
    }
    v46 = 0LL;
    v36 = v53;
    v37 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v53 + 64LL);
    v38 = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf((__int64 *)&v46);
    updated = v37(v36, v38);
    v8 = updated;
    if ( updated >= 0 )
    {
      updated = ShellPositionerManager::UpdatePositionerPriorityForPresentation(
                  v40,
                  v46,
                  (struct IApplicationView *)a2,
                  v48,
                  v3);
      v8 = updated;
      if ( updated >= 0 )
      {
        v42 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v46 + 24LL))(v46);
        v47 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v47);
        v43 = ShellPositionerManager::GetPositionerForMonitor(
                v42,
                (IUnknown *)v48,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v47);
        v8 = v43;
        if ( v43 >= 0 )
        {
          v43 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), struct IShellPositionerPriority *))(*a2)[34])(
                  a2,
                  v46);
          v8 = v43;
          if ( v43 >= 0 )
          {
            v43 = ShellPositionerManager::PerformPositionerHandoff(
                    v58,
                    (struct IApplicationView *)a2,
                    (__int64)v51,
                    (__int64)v48,
                    *(__int64 *)v52,
                    v9,
                    v42);
            v8 = v43;
            if ( v43 >= 0 )
            {
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v47);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v46);
              goto LABEL_54;
            }
            v44 = 655LL;
          }
          else
          {
            v44 = 651LL;
          }
        }
        else
        {
          v44 = 648LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v44,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v43);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v47);
LABEL_52:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v46);
        goto LABEL_55;
      }
      v41 = 643LL;
    }
    else
    {
      v41 = 640LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_52;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x236,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_58:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
  ShellPositionerTelemetry::PresentationRequested::~PresentationRequested((ShellPositionerTelemetry::PresentationRequested *)v59);
  return v8;
}
