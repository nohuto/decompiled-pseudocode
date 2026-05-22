/*
 * XREFs of ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801BBEFC
 * Callers:
 *     ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801BBDA0 (-Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18002C380 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AttachHeatFramework@ISMHeatFrameworkHost@@QEAAJPEAUIHeatFramework@@@Z @ 0x1801840D8 (-AttachHeatFramework@ISMHeatFrameworkHost@@QEAAJPEAUIHeatFramework@@@Z.c)
 *     ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x180184424 (-Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x180196908 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 *     ??0?$com_ptr_t@VInputProcessManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputProcessManager@@@Z @ 0x1801BBBE8 (--0-$com_ptr_t@VInputProcessManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputProcessManag.c)
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x1801BBEB4 (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 *     ?LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ @ 0x1801BC054 (-LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ.c)
 *     ?OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x1801BC120 (-OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  InputProcessManager *v17; // [rsp+48h] [rbp+20h] BYREF

  if ( HeatProcessor::HeatCoreProcessingEnabled(this, (__int64)a2, (__int64)a3, a4) )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 12);
    v7 = ISMHeatFrameworkHost::Create(a3, (struct ISMHeatFrameworkHost **)this + 12);
    if ( v7 < 0 )
    {
      v8 = 71LL;
LABEL_13:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
        (const char *)(unsigned int)v7);
      return 0LL;
    }
    v7 = HeatProcessor::LoadAndInitializeHeatCore(this);
    if ( v7 < 0 )
    {
      v8 = 74LL;
      goto LABEL_13;
    }
    v7 = ISMHeatFrameworkHost::AttachHeatFramework(
           *((ISMHeatFrameworkHost **)this + 12),
           *((struct IHeatFramework **)this + 11));
    if ( v7 < 0 )
    {
      v8 = 78LL;
      goto LABEL_13;
    }
  }
  else
  {
    InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
    v10 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection
                                                                                          + 29)
                                                                                        + 8LL)
                                                                            + 24LL))(*((_QWORD *)InputSystemInternalServerConnection
                                                                                     + 29) + 8LL);
    wil::com_ptr_t<InputProcessManager,wil::err_exception_policy>::com_ptr_t<InputProcessManager,wil::err_exception_policy>(
      &v17,
      v10);
    started = InputProcessManager::StartProcess(v17, v11, v12, v13);
    if ( started < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        84LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
        (const char *)(unsigned int)started);
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v17);
      return 0LL;
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v17);
  }
  v7 = HeatProcessor::OnDeviceArrival(this, a2);
  if ( v7 < 0 )
  {
    v8 = 87LL;
    goto LABEL_13;
  }
  return 0LL;
}
