/*
 * XREFs of ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D56D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVJointResize@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVJointResize@@@Z @ 0x18010CB2C (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81.c)
 *     ?RegisterForEvents@JointResize@@AEAAJXZ @ 0x18015000C (-RegisterForEvents@JointResize@@AEAAJXZ.c)
 *     ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x18017C1E8 (-IsJointResizeEnabled@JointResize@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointResize::SubscribeToServices(JointResize *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v5; // ebx
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // edi
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 13);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         (char *)this + 104);
  if ( v5 < 0 )
  {
    v17 = 185LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v6 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v6)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (char *)this + 112);
  if ( v5 < 0 )
  {
    v17 = 186LL;
    goto LABEL_17;
  }
  v7 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
         a2,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         (char *)this + 120);
  if ( v5 < 0 )
  {
    v17 = 187LL;
    goto LABEL_17;
  }
  v8 = a2->lpVtbl->QueryService;
  v9 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v8)(
         a2,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         (char *)this + 128);
  if ( v5 < 0 )
  {
    v17 = 188LL;
    goto LABEL_17;
  }
  v10 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 16))(
         *((_QWORD *)this + 16),
         &GUID_b698f992_5c6f_5846_b005_d0c033376391,
         (char *)this + 136);
  if ( v5 < 0 )
  {
    v17 = 189LL;
    goto LABEL_17;
  }
  v11 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))v11)(
         a2,
         &unk_1806845E0,
         &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
         (char *)this + 144);
  if ( v5 < 0 )
  {
    v17 = 190LL;
    goto LABEL_17;
  }
  v14 = SmartCookie::Register<IImmersiveSettingsCache,long (IImmersiveSettingsCache::*)(IImmersiveSettingsCacheNotification *,unsigned long *),long (IImmersiveSettingsCache::*)(unsigned long),JointResize *>(
          (int)this + 304,
          *((_QWORD *)this + 18),
          v12,
          v13,
          (__int64)this - 24);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( !JointResize::IsJointResizeEnabled((JointResize *)((char *)this - 24)) )
      return 0LL;
    v5 = JointResize::RegisterForEvents((JointResize *)((char *)this - 24));
    if ( v5 >= 0 )
      return 0LL;
    v17 = 199LL;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC3,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
