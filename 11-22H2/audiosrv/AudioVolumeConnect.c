/*
 * XREFs of AudioVolumeConnect @ 0x180024A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F6A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioVolumeConnect(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _FILETIME v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  int pftDueTime; // [rsp+20h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  _BYTE pv[64]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int Pid; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v22; // [rsp+B8h] [rbp+38h] BYREF

  v5 = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v5);
  v6 = 0;
  *a3 = 0LL;
  v7 = *(_QWORD *)g_pVolumeProvider;
  v17 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, __int64, __int64 *))(v7 + 40))(g_pVolumeProvider, a2, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    v6 = -2004287484;
    if ( v8 != -2004287484 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
        (const char *)(unsigned int)v8,
        pftDueTime);
      v6 = v9;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
  }
  else
  {
    v10 = v17;
    v17 = 0LL;
    *a3 = v10;
    Pid = 0;
    I_RpcBindingInqLocalClientPID(0LL, &Pid);
    v12 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v11,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v12 > 4u
      && (*(_BYTE *)(v12 + 16) & 2) != 0
      && (*(_QWORD *)(v12 + 24) & 2LL) == *(_QWORD *)(v12 + 24) )
    {
      v22 = Pid;
      v18 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v12,
        (unsigned int)&unk_18019473C,
        v13,
        v14,
        (__int64)&v18,
        (__int64)&v22);
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v6;
}
