/*
 * XREFs of ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x18041D620
 * Callers:
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x18041D580 (-CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$XamlExplorerHostWindowAvailable@_KAEA_N@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX$$QEA_KAEA_N@Z @ 0x18041CAA4 (--$XamlExplorerHostWindowAvailable@_KAEA_N@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry.c)
 *     ??$XamlExplorerHostWindowAvailable@_K_N@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX$$QEA_K$$QEA_N@Z @ 0x18041CB24 (--$XamlExplorerHostWindowAvailable@_K_N@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@Q.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041CDFC (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18041D140 (--1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x18041DE58 (-GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPE.c)
 *     ?StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z @ 0x18041E5CC (-StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18041E6D8 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804204C4 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall XamlExplorerHostShellComponent::CreateXamlExplorerHostWindowInBand(
        RTL_SRWLOCK *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        struct tagRECT *a3,
        unsigned int a4,
        const struct _GUID *a5,
        void **a6)
{
  RTL_SRWLOCK *v10; // rbx
  _BYTE *Ptr; // rdi
  _BYTE *v12; // rbx
  const struct _GUID *v13; // r9
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, GUID *, RTL_SRWLOCK **); // rdi
  int v16; // eax
  unsigned int v17; // ebx
  PVOID v19; // rbx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // [rsp+20h] [rbp-1E8h]
  unsigned __int8 v23[8]; // [rsp+40h] [rbp-1C8h] BYREF
  void *v24; // [rsp+48h] [rbp-1C0h] BYREF
  RTL_SRWLOCK *v25[2]; // [rsp+50h] [rbp-1B8h] BYREF
  struct tagRECT v26; // [rsp+60h] [rbp-1A8h] BYREF
  const struct _GUID *v27; // [rsp+70h] [rbp-198h]
  _QWORD v28[40]; // [rsp+80h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  v27 = a5;
  *a6 = 0LL;
  v10 = this + 16;
  AcquireSRWLockShared(this + 16);
  v25[0] = v10;
  Ptr = this[13].Ptr;
  v12 = this[12].Ptr;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v25);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"XamlExplorerHostWindowCache");
  v28[0] = &XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::`vftable';
  XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::StartActivity(
    (XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *)v28,
    (Ptr - v12) >> 3);
  v24 = 0LL;
  v23[0] = 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
  v26 = *a3;
  if ( (int)XamlExplorerHostShellComponent::GrabAvailableWindowForSize(
              (XamlExplorerHostShellComponent *)&this[-16],
              &v26,
              (bool *)v23,
              v13,
              &v24) < 0 )
  {
    v23[0] = 0;
    *(_QWORD *)&v26.left = 0LL;
    XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::XamlExplorerHostWindowAvailable<unsigned __int64,bool>(
      (__int64)v28,
      (__int64 *)&v26.left,
      v23);
    v19 = this[15].Ptr;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
    v20 = (__int64)this[17].Ptr;
    v26 = *a3;
    XamlExplorerHost::CreateXamlExplorerHostWindowInBand(
      (_DWORD)v19,
      (_DWORD)a2,
      (unsigned int)&v26,
      a4,
      v20,
      (unsigned __int64)this & -(__int64)(this != (RTL_SRWLOCK *)128));
  }
  else
  {
    *(_QWORD *)&v26.left = v24;
    XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::XamlExplorerHostWindowAvailable<unsigned __int64,bool &>(
      (__int64)v28,
      (__int64 *)&v26.left,
      v23);
    if ( !v23[0] )
      (*(void (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)v24 + 48LL))(v24, a3);
    v25[0] = 0LL;
    v14 = v24;
    v15 = **(__int64 (__fastcall ***)(void *, GUID *, RTL_SRWLOCK **))v24;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v25);
    v16 = v15(v14, &GUID_f8e82291_6438_4724_8220_b95054cbeac9, v25);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE5,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v25);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
      XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::~XamlExplorerHostWindowCache((XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *)v28);
      return v17;
    }
    (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD))v25[0]->Ptr + 11))(v25[0], a4);
    (*((void (__fastcall **)(RTL_SRWLOCK *))v25[0]->Ptr + 10))(v25[0]);
    (*((void (__fastcall **)(RTL_SRWLOCK *, struct IXamlExplorerHostWindowCreatedCallback *))v25[0]->Ptr + 8))(
      v25[0],
      a2);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v25);
  }
  v21 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v24)(v24, v27, a6);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF1,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v21,
      v22);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v28);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
  XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::~XamlExplorerHostWindowCache((XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *)v28);
  return 0LL;
}
