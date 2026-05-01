/*
 * XREFs of ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A8FDC
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@XZ @ 0x1800A911C (--$Make@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Micr.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18017AB40 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerF.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TaskFlowImmersiveShellBroker::StartAppViewListener(TaskFlowImmersiveShellBroker *this)
{
  __int64 v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64, char *); // rsi
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h]

  v15 = *((_QWORD *)this + 26);
  v2 = v15;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  if ( !v2 )
    goto LABEL_11;
  v3 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory,>(&v14);
  v4 = *v3;
  if ( *v3 )
    v4 += 40LL;
  v16 = v4;
  *v3 = 0LL;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release();
  }
  if ( !v4 )
  {
    v7 = -2147024882;
    v11 = 2147942414LL;
    v12 = 642LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)v11);
    goto LABEL_17;
  }
  v5 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v4 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 27);
  v6 = v5(v4, v2, (char *)this + 216);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = (unsigned int)v6;
    v12 = 643LL;
    goto LABEL_15;
  }
  v8 = *((_QWORD *)this + 27);
  v14 = v8;
  if ( !v8
    || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8),
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8),
        v7 = v9,
        v9 >= 0) )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x288,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
LABEL_17:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_12:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  return v7;
}
