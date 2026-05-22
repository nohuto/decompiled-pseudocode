/*
 * XREFs of ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801E7AC4
 * Callers:
 *     ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801E7960 (-Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180033740 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x180076BA0 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AttachHeatFramework@ISMHeatFrameworkHost@@QEAAJPEAUIHeatFramework@@@Z @ 0x1801B11C8 (-AttachHeatFramework@ISMHeatFrameworkHost@@QEAAJPEAUIHeatFramework@@@Z.c)
 *     ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x1801B1518 (-Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z.c)
 *     ??0?$com_ptr_t@VInputProcessManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputProcessManager@@@Z @ 0x1801E77D8 (--0-$com_ptr_t@VInputProcessManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputProcessManag.c)
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x1801E7A7C (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 *     ?LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ @ 0x1801E7BF4 (-LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ.c)
 *     ?OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x1801E7CC0 (-OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HeatProcessor::Initialize(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3,
        __int64 a4)
{
  int v7; // eax
  __int64 v8; // rdx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  void (__fastcall ***v10)(_QWORD); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  InputProcessManager *v13; // [rsp+48h] [rbp+20h] BYREF

  if ( HeatProcessor::HeatCoreProcessingEnabled(this, (__int64)a2, (__int64)a3, a4) )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 12);
    v7 = ISMHeatFrameworkHost::Create(a3, (struct ISMHeatFrameworkHost **)this + 12);
    if ( v7 < 0 )
    {
      v8 = 72LL;
LABEL_11:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
        (const char *)(unsigned int)v7);
      return 0LL;
    }
    v7 = HeatProcessor::LoadAndInitializeHeatCore(this);
    if ( v7 < 0 )
    {
      v8 = 75LL;
      goto LABEL_11;
    }
    v7 = ISMHeatFrameworkHost::AttachHeatFramework(
           *((ISMHeatFrameworkHost **)this + 12),
           *((struct IHeatFramework **)this + 11));
    if ( v7 < 0 )
    {
      v8 = 79LL;
      goto LABEL_11;
    }
  }
  else
  {
    InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
    v10 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection
                                                                                          + 31)
                                                                                        + 8LL)
                                                                            + 24LL))(*((_QWORD *)InputSystemInternalServerConnection
                                                                                     + 31) + 8LL);
    wil::com_ptr_t<InputProcessManager,wil::err_exception_policy>::com_ptr_t<InputProcessManager,wil::err_exception_policy>(
      &v13,
      v10);
    InputProcessManager::StartProcess(v13);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v13);
  }
  v7 = HeatProcessor::OnDeviceArrival(this, a2);
  if ( v7 < 0 )
  {
    v8 = 88LL;
    goto LABEL_11;
  }
  return 0LL;
}
