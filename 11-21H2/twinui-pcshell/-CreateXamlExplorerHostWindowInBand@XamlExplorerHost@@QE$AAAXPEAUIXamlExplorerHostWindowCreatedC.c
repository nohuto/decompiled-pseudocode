/*
 * XREFs of ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804204C4
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x18041D620 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x180062B98 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1800633AC (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041CDFC (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18041E6D8 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_c8d6b8e58017b711112620b136cf3b89___ @ 0x18041F4C8 (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunch.c)
 *     ??$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@wil@@YA?AV?$ComPtr@VXamlExplorerHostWindow@@@WRL@Microsoft@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x18041F780 (--$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallba.c)
 *     _lambda_c8d6b8e58017b711112620b136cf3b89_::_lambda_c8d6b8e58017b711112620b136cf3b89_ @ 0x18041FB1C (_lambda_c8d6b8e58017b711112620b136cf3b89_--_lambda_c8d6b8e58017b711112620b136cf3b89_.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18041FB88 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_18041FB88.c)
 *     ??1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18041FD8C (--1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ?Split@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA?AV12@XZ @ 0x180420A9C (-Split@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x180420B28 (-StartActivity@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x180424B84 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall XamlExplorerHost::CreateXamlExplorerHostWindowInBand(
        RTL_SRWLOCK *a1,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        __int64 a3,
        unsigned int a4,
        struct IPrivilegedPresentationOperations *a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 *v10; // rax
  struct IXamlExplorerHostWindowCreatedCallback *v11; // rbx
  PVOID Ptr; // rsi
  _QWORD *v13; // rdi
  __int64 *v14; // rax
  _QWORD *v15; // rdi
  int v16; // eax
  int v17; // edx
  int v18; // [rsp+20h] [rbp-E0h]
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v20; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+48h] [rbp-B8h]
  int v23; // [rsp+58h] [rbp-A8h]
  struct IPrivilegedPresentationOperations *v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25[2]; // [rsp+68h] [rbp-98h] BYREF
  RTL_SRWLOCK *v26[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+80h] [rbp-80h] BYREF
  int v28; // [rsp+90h] [rbp-70h]
  __int64 v29[42]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v30[40]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v31; // [rsp+330h] [rbp+230h] BYREF
  _QWORD v32[41]; // [rsp+338h] [rbp+238h] BYREF
  _BYTE v33[320]; // [rsp+480h] [rbp+380h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+608h] [rbp+508h]

  v20 = a2;
  v19 = a4;
  v24 = a5;
  *(_QWORD *)v25 = a6;
  *a8 = 0LL;
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"CreateXamlExplorerHostWindow");
  v30[0] = &XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::`vftable';
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::StartActivity((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v30);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v26, a1 + 13);
  XamlExplorerHost::EnsureMetadataRegistered((__int64)a1);
  XamlExplorerHost::EnsureHostAppCreated((__int64)a1);
  v10 = wil::MakeAndInitializeOrThrow<XamlExplorerHostWindow,IXamlExplorerHostWindowCreatedCallback * &,unsigned long &,IPrivilegedPresentationOperations * &,IXamlExplorerHost * &>(
          (__int64 *)&v21,
          &v20,
          &v19,
          &v24,
          (struct IXamlExplorerHost **)v25);
  v20 = (struct IXamlExplorerHostWindowCreatedCallback *)*v10;
  v11 = v20;
  *v10 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::Split(v30, v33);
  v31 = v11;
  if ( v11 )
    (*(void (__fastcall **)(struct IXamlExplorerHostWindowCreatedCallback *))(*(_QWORD *)v11 + 8LL))(v11);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v32,
    (__int64)v33);
  v32[0] = &XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::`vftable';
  *(_WORD *)((char *)&v23 + 1) = 0;
  HIBYTE(v23) = 0;
  *(_QWORD *)&v22 = *(_QWORD *)a3;
  DWORD2(v22) = *(_DWORD *)(a3 + 8) - v22;
  HIDWORD(v22) = *(_DWORD *)(a3 + 12) - DWORD1(v22);
  LOBYTE(v23) = 1;
  Ptr = a1[11].Ptr;
  v13 = Platform::Details::Heap::Allocate(0x28uLL, 0x140uLL);
  v21 = v13;
  v14 = lambda_c8d6b8e58017b711112620b136cf3b89_::_lambda_c8d6b8e58017b711112620b136cf3b89_(v29, (__int64 *)&v31);
  v15 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_c8d6b8e58017b711112620b136cf3b89___(
          v13,
          v14);
  v21 = v15;
  v27 = v22;
  v28 = v23;
  WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(Ptr, &v27, v15);
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
  v16 = (**(__int64 (__fastcall ***)(struct IXamlExplorerHostWindowCreatedCallback *, GUID *, _QWORD *))v11)(
          v11,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          a8);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC4,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v16,
      v18);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v30, v17);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v33);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v26);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v30);
}
