/*
 * XREFs of ??1HeatProcessor@@MEAA@XZ @ 0x1801E7814
 * Callers:
 *     ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x1801E790C (--_EHeatProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180033740 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?StopProcess@InputProcessManager@@QEAAXXZ @ 0x180076E14 (-StopProcess@InputProcessManager@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VInputProcessManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputProcessManager@@@Z @ 0x1801E77D8 (--0-$com_ptr_t@VInputProcessManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputProcessManag.c)
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x1801E7A7C (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 */

void __fastcall HeatProcessor::~HeatProcessor(HeatProcessor *this)
{
  HMODULE v2; // rcx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  void (__fastcall ***v4)(_QWORD); // rax
  InputProcessManager *v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &HeatProcessor::`vftable';
  *((_QWORD *)this + 1) = &HeatProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &HeatProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &HeatProcessor::`vftable'{for `RefCountedObject'};
  if ( HeatProcessor::HeatCoreProcessingEnabled(this) )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 12);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 11);
    v2 = (HMODULE)*((_QWORD *)this + 10);
    if ( v2 )
    {
      FreeLibrary(v2);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  else
  {
    InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
    v4 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection
                                                                                         + 31)
                                                                                       + 8LL)
                                                                           + 24LL))(*((_QWORD *)InputSystemInternalServerConnection
                                                                                    + 31) + 8LL);
    wil::com_ptr_t<InputProcessManager,wil::err_exception_policy>::com_ptr_t<InputProcessManager,wil::err_exception_policy>(
      &v5,
      v4);
    InputProcessManager::StopProcess(v5);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v5);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 11);
  NonPointerProcessor::~NonPointerProcessor((HeatProcessor *)((char *)this + 8));
}
