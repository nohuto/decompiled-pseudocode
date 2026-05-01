/*
 * XREFs of ?SubscribeToServices@KioskPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18017FFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1804EED8C (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1804EED8C.c)
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1804EEE60 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNot_ea_1804EEE60.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1804EEF34 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_1804EEF34.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KioskPositioner::SubscribeToServices(KioskPositioner *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // edi
  int v15; // eax
  unsigned int v16; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // ebx
  int v22; // eax
  unsigned int v23; // ebx
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  unsigned int v28; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v30; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 592) )
    return 0LL;
  QueryService = a2->lpVtbl->QueryService;
  v6 = (char *)this + 168;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 21);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = a2->lpVtbl->QueryService;
    v10 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
            a2,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            (char *)this + 176);
    v14 = v11;
    if ( v11 >= 0 )
    {
      v15 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),KioskPositioner *>(
              (int)this + 208,
              *((_QWORD *)this + 22),
              v12,
              v13,
              (__int64)this - 40);
      v16 = v15;
      if ( v15 >= 0 )
      {
        lpVtbl = a2->lpVtbl;
        v30 = 0LL;
        v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
                a2,
                &SID_IImmersiveMonitorService,
                &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                &v30);
        v21 = v18;
        if ( v18 >= 0 )
        {
          v22 = SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),KioskPositioner *>(
                  (int)this + 336,
                  v30,
                  v19,
                  v20,
                  (__int64)this - 40);
          v23 = v22;
          if ( v22 >= 0 )
          {
            v24 = a2->lpVtbl->QueryService;
            wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 23);
            v25 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v24)(
                    a2,
                    &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                    &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                    (char *)this + 184);
            v28 = v25;
            if ( v25 >= 0 )
            {
              SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),KioskPositioner *>(
                (_DWORD)this + 464,
                *((_QWORD *)this + 23),
                v26,
                v27,
                (__int64)this - 40);
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v30);
              return 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x226,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                (const char *)(unsigned int)v25);
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v30);
              return v28;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x224,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
              (const char *)(unsigned int)v22);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v30);
            return v23;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x220,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
            (const char *)(unsigned int)v18);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v30);
          return v21;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x21D,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v15);
        return v16;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x219,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v11);
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x217,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
