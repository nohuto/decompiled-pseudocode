/*
 * XREFs of ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1805A3520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EFF14 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F0008 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z @ 0x18012AC74 (--0-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802113F8 (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     ??$query@UIPresentationRequestedArgs@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@1@XZ @ 0x180211458 (--$query@UIPresentationRequestedArgs@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$$V@PresentationRequested@ShellPositionerTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1805A22CC (--$-0$$V@PresentationRequested@ShellPositionerTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1805A270C (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1805A3344 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIInspectable@@@Z @ 0x1805A4F4C (-UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriori.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall ShellPositionerManager::PresentationRequested(
        ShellPositionerManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IInspectable *a3)
{
  struct IInspectable *v3; // rsi
  int PositionerPriorityForView; // eax
  unsigned int v7; // ebx
  int v8; // r12d
  __int64 (__fastcall *v9)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 *AddressOf; // rax
  int v11; // eax
  _QWORD *v12; // rax
  char v13; // r14
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, __int64 *); // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, struct IShellPositionerPriority **); // rbx
  int v20; // eax
  __int64 v21; // rdx
  struct IShellPositionerPriority *v22; // rbx
  __int64 (__fastcall *v23)(struct IShellPositionerPriority *, _QWORD, __int64 *); // rdi
  __int64 *v24; // rax
  unsigned int v25; // esi
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, _QWORD, struct IShellPositionerPriority **); // rbx
  struct IShellPositionerPriority *v28; // rbx
  __int64 (__fastcall *v29)(struct IShellPositionerPriority *, _QWORD, __int64 *); // rdi
  __int64 *v30; // rax
  int PositionerForMonitor; // eax
  __int64 v32; // rdx
  struct IShellPositionerPriority *v33; // rbx
  __int64 (__fastcall *v34)(struct IShellPositionerPriority *, struct IShellPositionerPriority **); // rdi
  int updated; // eax
  ShellPositionerManager *v36; // rcx
  __int64 v37; // rdx
  int v38; // edi
  int v39; // eax
  __int64 v40; // rdx
  struct IShellPositionerPriority *v42; // [rsp+40h] [rbp-C0h] BYREF
  void *v43; // [rsp+48h] [rbp-B8h] BYREF
  struct IImmersiveMonitor *v44; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v46; // [rsp+5Ch] [rbp-A4h] BYREF
  void *v47; // [rsp+60h] [rbp-A0h] BYREF
  IUnknown *v48; // [rsp+68h] [rbp-98h] BYREF
  struct IShellPositionerPriority *v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  int v51[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v52; // [rsp+88h] [rbp-78h] BYREF
  struct IInspectable *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  _QWORD v55[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v3 = a3;
  v53 = a3;
  ShellPositionerTelemetry::PresentationRequested::PresentationRequested((__int64)v55, (char)a2);
  v49 = 0LL;
  v54 = (__int64)this - 128;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v49);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)((char *)this - 128),
                                a2,
                                &v49);
  v7 = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v49 + 24LL))(v49);
    v48 = 0LL;
    v9 = (*a2)[10];
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v48);
    v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64 *))v9)(
            a2,
            AddressOf);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x266,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_57:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v48);
      goto LABEL_58;
    }
    v12 = wil::com_ptr_t<IInspectable,wil::err_exception_policy>::com_ptr_t<IInspectable,wil::err_exception_policy>(
            &v43,
            (__int64)v3);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IPresentationRequestedArgs>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v12,
      v51);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
    v44 = (struct IImmersiveMonitor *)v48;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v44);
    v13 = 0;
    v50 = 0LL;
    v14 = *(_QWORD *)v51;
    v15 = *(int (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v51 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v50);
    if ( v15(v14, &v50) >= 0 )
    {
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::com_ptr_t<IInspectable,wil::err_exception_policy>(
        &v42,
        v50);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v42,
        &v43);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v42);
      v16 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v43 + 56LL))(v43, &v52);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 627LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_32;
      }
      if ( v52 )
      {
        v13 = 1;
        if ( v52 > 1 )
        {
          v7 = -2147024809;
LABEL_32:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
LABEL_56:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v50);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v44);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v51);
          goto LABEL_57;
        }
        v16 = (*(__int64 (__fastcall **)(void *, _QWORD, unsigned int *))(*(_QWORD *)v43 + 48LL))(v43, 0LL, &v45);
        v7 = v16;
        if ( v16 < 0 )
        {
          v17 = 634LL;
          goto LABEL_13;
        }
        v42 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v51 + 40LL))(*(_QWORD *)v51, &v46) < 0 )
        {
          if ( v8 == 5 )
          {
            v7 = -2147467263;
            goto LABEL_31;
          }
          v25 = (*((_DWORD *)this + 4) == 1) + 1;
          v26 = *((_QWORD *)this + 6);
          v27 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v26 + 32LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
          v20 = v27(v26, v25, &v42);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 655LL;
            goto LABEL_24;
          }
          v28 = v42;
          v29 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD, __int64 *))(*(_QWORD *)v42 + 88LL);
          v30 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v44);
          v20 = v29(v28, v45, v30);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 656LL;
            goto LABEL_24;
          }
          v3 = v53;
        }
        else
        {
          v18 = *((_QWORD *)this + 6);
          v19 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v18 + 40LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
          v20 = v19(v18, v46, &v42);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 640LL;
LABEL_24:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v21,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)v20);
LABEL_31:
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
            goto LABEL_32;
          }
          v22 = v42;
          v23 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD, __int64 *))(*(_QWORD *)v42 + 88LL);
          v24 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v44);
          v20 = v23(v22, v45, v24);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 641LL;
            goto LABEL_24;
          }
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
    }
    v47 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v47);
    PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                             v8,
                             v48,
                             &GUID_ee010e17_919a_4068_868b_675acf787303,
                             &v47);
    v7 = PositionerForMonitor;
    if ( PositionerForMonitor < 0 )
    {
      v32 = 663LL;
LABEL_39:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerForMonitor);
LABEL_55:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v47);
      goto LABEL_56;
    }
    if ( (!v13 || !v8 || v8 == 6)
      && (*(unsigned int (__fastcall **)(void *, _QWORD, struct IInspectable *))(*(_QWORD *)v47 + 72LL))(v47, a2, v3) )
    {
      PositionerForMonitor = (*(__int64 (__fastcall **)(void *, _QWORD, struct IInspectable *))(*(_QWORD *)v47 + 80LL))(
                               v47,
                               a2,
                               v3);
      v7 = PositionerForMonitor;
      if ( PositionerForMonitor < 0 )
      {
        v32 = 674LL;
        goto LABEL_39;
      }
LABEL_54:
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v55);
      v7 = 0;
      goto LABEL_55;
    }
    v42 = 0LL;
    v33 = v49;
    v34 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, struct IShellPositionerPriority **))(*(_QWORD *)v49 + 64LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
    updated = v34(v33, &v42);
    v7 = updated;
    if ( updated >= 0 )
    {
      updated = ShellPositionerManager::UpdatePositionerPriorityForPresentation(
                  v36,
                  v42,
                  (struct IApplicationView *)a2,
                  v44,
                  v3);
      v7 = updated;
      if ( updated >= 0 )
      {
        v38 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v42 + 24LL))(v42);
        v43 = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v43);
        v39 = ShellPositionerManager::GetPositionerForMonitor(
                v38,
                (IUnknown *)v44,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v43);
        v7 = v39;
        if ( v39 >= 0 )
        {
          v39 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), struct IShellPositionerPriority *))(*a2)[34])(
                  a2,
                  v42);
          v7 = v39;
          if ( v39 >= 0 )
          {
            v39 = ShellPositionerManager::PerformPositionerHandoff(
                    v54,
                    (struct IApplicationView *)a2,
                    (__int64)v48,
                    (__int64)v44,
                    *(__int64 *)v51,
                    v8,
                    v38);
            v7 = v39;
            if ( v39 >= 0 )
            {
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v43);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
              goto LABEL_54;
            }
            v40 = 698LL;
          }
          else
          {
            v40 = 694LL;
          }
        }
        else
        {
          v40 = 691LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v40,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v39);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v43);
LABEL_52:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
        goto LABEL_55;
      }
      v37 = 686LL;
    }
    else
    {
      v37 = 683LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_52;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x261,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_58:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v49);
  ShellPositionerTelemetry::PresentationRequested::~PresentationRequested((ShellPositionerTelemetry::PresentationRequested *)v55);
  return v7;
}
