/*
 * XREFs of ??1CAudioSrv@@UEAA@XZ @ 0x1800EEEE4
 * Callers:
 *     ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x1800EF3C0 (--_GCAudioSrv@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?RemoveAll@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAXXZ @ 0x18003AFB0 (-RemoveAll@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800EF090 (--1CSerialWorkQueue@@QEAA@XZ.c)
 */

void __fastcall CAudioSrv::~CAudioSrv(CAudioSrv *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 *v3; // rax
  _DWORD *v4; // rdi
  DWORD CurrentProcessId; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v6[32]; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_CurrentProcessId; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  *(_QWORD *)this = &CAudioSrv::`vftable'{for `IAudioService'};
  *((_QWORD *)this + 9) = &CAudioSrv::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 10) = &CAudioSrv::`vftable'{for `IMonitorDGTermination'};
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 11);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 11) = 0LL;
  v3 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)v2,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v4 = (_DWORD *)v3[1];
  if ( *v4 > 4u && tlgKeywordOn(v3[1], 128LL) )
  {
    v9 = 0;
    CurrentProcessId = GetCurrentProcessId();
    v8 = 4;
    p_CurrentProcessId = &CurrentProcessId;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v4, byte_180191BFC, 0LL, 0LL, 3, (__int64)v6);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 70);
  CSerialWorkQueue::~CSerialWorkQueue((CAudioSrv *)((char *)this + 384));
  CSerialWorkQueue::~CSerialWorkQueue((CAudioSrv *)((char *)this + 208));
  ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveAll((__int64)this + 152);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  *(_QWORD *)this = &IAudioService::`vftable';
}
