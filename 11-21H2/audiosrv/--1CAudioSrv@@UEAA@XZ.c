/*
 * XREFs of ??1CAudioSrv@@UEAA@XZ @ 0x1800C28D8
 * Callers:
 *     ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x1800C2E60 (--_GCAudioSrv@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x18003ED24 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800C2B50 (--1CSerialWorkQueue@@QEAA@XZ.c)
 */

void __fastcall CAudioSrv::~CAudioSrv(CAudioSrv *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v3; // rdi
  DWORD CurrentProcessId; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[32]; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_CurrentProcessId; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  *(_QWORD *)this = &CAudioSrv::`vftable'{for `IAudioService'};
  *((_QWORD *)this + 9) = &CAudioSrv::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 10) = &CAudioSrv::`vftable'{for `IMonitorDGTermination'};
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 11);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 11) = 0LL;
  v3 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)v2,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 4u && *(char *)(v3 + 16) < 0 && (*(_QWORD *)(v3 + 24) & 0x80LL) == *(_QWORD *)(v3 + 24) )
  {
    v8 = 0;
    CurrentProcessId = GetCurrentProcessId();
    v7 = 4;
    p_CurrentProcessId = &CurrentProcessId;
    tlgWriteTransfer_EtwEventWriteTransfer(v3, byte_180188133, 0LL, 0LL, 3, (__int64)v5);
  }
  CSerialWorkQueue::~CSerialWorkQueue((CAudioSrv *)((char *)this + 376));
  CSerialWorkQueue::~CSerialWorkQueue((CAudioSrv *)((char *)this + 208));
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)this + 152);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  *(_QWORD *)this = &IAudioService::`vftable';
}
