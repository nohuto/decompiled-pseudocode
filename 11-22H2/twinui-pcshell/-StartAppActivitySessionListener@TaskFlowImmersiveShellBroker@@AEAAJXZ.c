/*
 * XREFs of ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1804A1194
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F32C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAppViewManager@TaskFlowImmersiveShellBroker@@AEAAJPEAPEAUIApplicationViewCollection@@@Z @ 0x18049D96C (-GetAppViewManager@TaskFlowImmersiveShellBroker@@AEAAJPEAPEAUIApplicationViewCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskFlowImmersiveShellBroker::StartAppActivitySessionListener(TaskFlowImmersiveShellBroker *this)
{
  __int64 v2; // rdi
  TaskFlowImmersiveShellBroker *v3; // rcx
  int AppViewManager; // eax
  unsigned int v5; // esi
  int ActivationFactory; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, char *); // rsi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v2 = *((_QWORD *)this + 26);
  v18 = v2;
  if ( !v2 )
  {
LABEL_22:
    v5 = 0;
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
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
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)AppViewManager);
    goto LABEL_23;
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
    v7 = 624LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_17;
  }
  v8 = v16;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v16 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 31);
  ActivationFactory = v9(v8, v2, (char *)this + 248);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v7 = 625LL;
    goto LABEL_10;
  }
  v10 = *((_QWORD *)this + 31);
  v17 = v10;
  if ( !v10 )
  {
LABEL_20:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
    v14 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_22;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
  v5 = v11;
  if ( v11 >= 0 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 33);
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v10)(
            v10,
            &GUID_a66b424a_5568_56e8_bbb8_a3401dfdf5bd,
            (char *)this + 264);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 630LL;
      goto LABEL_16;
    }
    goto LABEL_20;
  }
  v12 = 629LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v11);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
LABEL_17:
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_23:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
  return v5;
}
