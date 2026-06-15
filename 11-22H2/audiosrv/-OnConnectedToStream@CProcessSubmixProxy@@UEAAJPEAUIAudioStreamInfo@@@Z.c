/*
 * XREFs of ?OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180044860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180016538 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ??$AsWeak@VCProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAVCProcessSubmixProxy@@PEAVWeakRef@01@@Z @ 0x18001661C (--$AsWeak@VCProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAVCProcessSubmixProxy@@PEAVWeakRef@01@@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180044B88 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?reset@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180045820 (-reset@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z @ 0x180048374 (-UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18010A538 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18010A638 (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18010A734 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixProxy::OnConnectedToStream(unsigned __int64 this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v19; // rdx
  __int64 v20; // [rsp+40h] [rbp-19h] BYREF
  int v21[2]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v22[12]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v24; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)a2;
  v26 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v4 + 184))(a2, &v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_24;
  }
  v24 = 0LL;
  v7 = v26;
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 88LL);
  wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::reset(&v24);
  v9 = v8(v7, &v24);
  v6 = v9;
  if ( v9 < 0 )
  {
    v19 = 3766LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
    goto LABEL_24;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(this + 40) + 96LL))(*(_QWORD *)(this + 40), v24);
  v6 = v9;
  if ( v9 < 0 )
  {
    v19 = 3768LL;
    goto LABEL_28;
  }
  if ( *((_BYTE *)a2 + 248) )
    CProcessSubmixProxy::UpdateActiveStreamCount((CProcessSubmixProxy *)(this - 8), 1);
  v11 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    v10,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v11 > 4u )
  {
    v25 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    v20 = *(_QWORD *)(this + 192);
    *(_QWORD *)v21 = this & ((unsigned __int128)-(__int128)(this - 8) >> 64);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v11,
      byte_180192CD6,
      v12,
      v13,
      (__int64)v21,
      (__int64)&v20,
      (__int64)&v25);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 128LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients((CProcessSubmixProxy *)(this - 8), 1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients((CProcessSubmixProxy *)(this - 8), 1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfLazyRequestClients((CProcessSubmixProxy *)(this - 8), 1);
  if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2 )
    ++*(_DWORD *)(this + 112);
  CProcessSubmixProxy::AddStream((CProcessSubmixProxy *)(this - 8), a2);
  if ( !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) )
  {
    v25 = 0LL;
    *(_QWORD *)v21 = &v25;
    v14 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v21);
    if ( (int)Microsoft::WRL::AsWeak<CProcessSubmixProxy>(
                (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(this - 8),
                v14) >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
      v16 = v25;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      v22[0] = off_18016E298;
      v22[1] = v16;
      *(_QWORD *)v21 = 0LL;
      v22[7] = v22;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v21);
      v17 = CSerialWorkQueue::QueueWorkItem(v15, (__int64)v22);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEDB,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v17);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
  v6 = 0;
LABEL_24:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
  return v6;
}
