/*
 * XREFs of ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A8DE8
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppViewManager@TaskFlowImmersiveShellBroker@@AEAAJPEAPEAUIApplicationViewCollection@@@Z @ 0x1800D7CBC (-GetAppViewManager@TaskFlowImmersiveShellBroker@@AEAAJPEAPEAUIApplicationViewCollection@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TaskFlowImmersiveShellBroker::StartAppActivitySessionListener(TaskFlowImmersiveShellBroker *this)
{
  __int64 v2; // rdi
  TaskFlowImmersiveShellBroker *v3; // rcx
  int AppViewManager; // eax
  unsigned int v5; // esi
  int ActivationFactory; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, char *); // rsi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v18 = *((_QWORD *)this + 26);
  v2 = v18;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  if ( !v2 )
  {
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  v3 = (TaskFlowImmersiveShellBroker *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(TaskFlowImmersiveShellBroker *))(*(_QWORD *)v3 + 16LL))(v3);
  AppViewManager = TaskFlowImmersiveShellBroker::GetAppViewManager(v3, (struct IApplicationViewCollection **)this + 36);
  v5 = AppViewManager;
  if ( AppViewManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26D,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)AppViewManager);
    goto LABEL_13;
  }
  v16 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.TaskFlow.DataEngine.AppActivitySessionListener",
    0x46u,
    0x45u);
  ActivationFactory = RoGetActivationFactory(v20, &GUID_dedccd90_c958_4fe8_a9d9_afeafddcf9f3, &v16);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v13 = 624LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_21;
  }
  v7 = v16;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v16 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
  ActivationFactory = v8(v7, v2, (char *)this + 248);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v13 = 625LL;
    goto LABEL_17;
  }
  v9 = *((_QWORD *)this + 31);
  v17 = v9;
  if ( !v9 )
    goto LABEL_10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
  v5 = v10;
  if ( v10 < 0 )
  {
    v14 = 629LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 33);
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v9)(
            v9,
            &GUID_a66b424a_5568_56e8_bbb8_a3401dfdf5bd,
            (char *)this + 264);
    v5 = v10;
    if ( v10 >= 0 )
    {
LABEL_10:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
      v11 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      goto LABEL_12;
    }
    v14 = 630LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
LABEL_21:
  v15 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  return v5;
}
