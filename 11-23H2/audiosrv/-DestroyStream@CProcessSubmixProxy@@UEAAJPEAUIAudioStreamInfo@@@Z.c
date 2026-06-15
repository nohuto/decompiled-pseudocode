/*
 * XREFs of ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800186B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180016538 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ??$AsWeak@VCProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAVCProcessSubmixProxy@@PEAVWeakRef@01@@Z @ 0x18001661C (--$AsWeak@VCProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAVCProcessSubmixProxy@@PEAVWeakRef@01@@Z.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x180016C84 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveStreamAndResetAudioHandle@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1801099F4 (-RemoveStreamAndResetAudioHandle@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18010A4E8 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18010A5E8 (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18010A6E4 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixProxy::DestroyStream(unsigned __int64 this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64); // rbx
  __int64 v12; // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  _DWORD *v15; // rdi
  CProcessSubmixProxy *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  int v22; // eax
  int v23; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v27[9]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-60h] BYREF
  int v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+200h] [rbp+100h]
  __int64 v35; // [rsp+330h] [rbp+230h]
  int v36; // [rsp+460h] [rbp+360h]
  __int64 v37; // [rsp+468h] [rbp+368h]
  __int64 v38; // [rsp+598h] [rbp+498h]
  int v39; // [rsp+5A0h] [rbp+4A0h]
  int v40; // [rsp+5A4h] [rbp+4A4h]
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+4E8h]

  if ( !g_UseNewStreamManagementCodePath )
  {
    v10 = *(_QWORD *)(this + 40);
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL);
    v12 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
    v13 = v11(v10, v12);
    v14 = retaddr;
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD69,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v13);
    v15 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                         v14,
                         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v15 <= 4u )
    {
      v16 = (CProcessSubmixProxy *)(this - 8);
    }
    else
    {
      v24 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
      v26 = *(_QWORD *)(this + 192);
      v16 = (CProcessSubmixProxy *)(this - 8);
      v25 = (__int64 *)(this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v15,
        byte_180192D1F,
        v17,
        v18,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v24);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 128LL))(a2) )
      CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients(v16, -1);
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
      CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients(v16, -1);
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
      CProcessSubmixProxy::UpdateCountOfLazyRequestClients(v16, -1);
    if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2 )
      --*(_DWORD *)(this + 112);
    CProcessSubmixProxy::RemoveStreamAndResetAudioHandle(v16, a2);
    if ( !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) )
    {
      v24 = 0LL;
      v25 = &v24;
      v19 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v25);
      if ( (int)Microsoft::WRL::AsWeak<CProcessSubmixProxy>(
                  (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v16,
                  v19) >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
        v21 = v24;
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
        v27[0] = off_180170638;
        v27[1] = v21;
        v25 = 0LL;
        v27[7] = v27;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
        v22 = CSerialWorkQueue::QueueWorkItem(v20, v27);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xD88,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v22);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v24);
    }
    return 0LL;
  }
  v4 = *(_QWORD *)a2;
  v24 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v4 + 184))(a2, &v24);
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = 3422LL;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *))(*(_QWORD *)v24 + 80LL))(v24, a2);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD60,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v7);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v28 = 0LL;
      v29 = 0;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
      v36 = 0;
      v37 = 0LL;
      v38 = 0LL;
      v39 = 0;
      v40 = 0;
      (*(void (__fastcall **)(char *, __int128 *, _QWORD, _QWORD))(*((_QWORD *)a2 - 1) + 48LL))(
        (char *)a2 - 8,
        &v28,
        0LL,
        0LL);
      SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v28);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
      return 0LL;
    }
    v9 = 3426LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v5,
    v23);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
  return v6;
}
