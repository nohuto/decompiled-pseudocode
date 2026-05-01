/*
 * XREFs of ?SubscribeToServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D8AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVVoiceAssistantPositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVVoiceAssistantPositioner@@@Z @ 0x18010C778 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_18010C778.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::SubscribeToServices(
        VoiceAssistantPositioner *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v5; // r14
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v12; // r8d
  int v13; // r9d
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (_QWORD *)((char *)this + 144);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, _QWORD *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v5)(
         *v5,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v17);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 218LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v17 + 24LL))(
         v17,
         ((unsigned __int64)this + 88) & -(__int64)(this != (VoiceAssistantPositioner *)40),
         (char *)this + 152);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 220LL;
    goto LABEL_22;
  }
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v9)(
         a2,
         &SID_InputHostLayout,
         &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
         (char *)this + 160);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 222LL;
    goto LABEL_22;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 20) + 24LL))(
         *((_QWORD *)this + 20),
         ((unsigned __int64)this + 96) & -(__int64)(this != (VoiceAssistantPositioner *)40),
         (char *)this + 168);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 223LL;
    goto LABEL_22;
  }
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (char *)this + 176);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 227LL;
    goto LABEL_22;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 22) + 96LL))(
         *((_QWORD *)this + 22),
         ((unsigned __int64)this + 112) & -(__int64)(this != (VoiceAssistantPositioner *)40),
         (char *)this + 184);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 228LL;
    goto LABEL_22;
  }
  v11 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 24);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
         a2,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         (char *)this + 192);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 230LL;
    goto LABEL_22;
  }
  v8 = SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),VoiceAssistantPositioner *>(
         (int)this + 200,
         *((_QWORD *)this + 24),
         v12,
         v13,
         (__int64)this - 40);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 235LL;
    goto LABEL_22;
  }
  v7 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  return v7;
}
