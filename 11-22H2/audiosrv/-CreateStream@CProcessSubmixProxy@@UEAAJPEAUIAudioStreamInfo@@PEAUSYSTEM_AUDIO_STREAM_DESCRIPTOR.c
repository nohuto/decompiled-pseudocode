/*
 * XREFs of ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x180045CC0
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
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800427FC (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x180043E58 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 *     ??$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@_J@Details@WRL@Microsoft@@YAJPEAPEAUIStreamInstanceProxy@@$$QEA_J@Z @ 0x180045ED4 (--$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@_J@Details@WRL@Microsoft@@YAJ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddStreamAndSetAudioHandle@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStream@@K@Z @ 0x180105910 (-AddStreamAndSetAudioHandle@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStrea.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18010A538 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18010A638 (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18010A734 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SystemAudioStream *a6)
{
  __int64 v10; // rax
  int v11; // edi
  int v12; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // r14
  CProcessSubmixProxy *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v28[9]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v29[1264]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5D8h] [rbp+4D8h]

  v10 = **(_QWORD **)(this + 192);
  if ( !g_UseNewStreamManagementCodePath )
  {
    v11 = (*(__int64 (**)(void))(v10 + 320))();
    if ( v11 >= 0 )
    {
      memset_0(v29, 0, 0x4E8uLL);
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, _BYTE *))(**(_QWORD **)(this + 40) + 24LL))(
              *(_QWORD *)(this + 40),
              a3,
              a4,
              v29);
      if ( v11 >= 0 )
      {
        v11 = SystemAudioStream::move_initialize_from(a6, (struct SYSTEM_AUDIO_STREAM *)v29);
        if ( v11 >= 0 )
        {
          v17 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                            v16,
                            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
          if ( *v17 <= 4u )
          {
            v18 = (CProcessSubmixProxy *)(this - 8);
          }
          else
          {
            v27 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
            v25 = *(_QWORD *)(this + 192);
            v18 = (CProcessSubmixProxy *)(this - 8);
            v26 = (__int64 *)(this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (__int64)v17,
              byte_180192D73,
              v19,
              v20,
              (__int64)&v26,
              (__int64)&v25,
              (__int64)&v27);
          }
          wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=(
            (__int64 *)a6 + 5,
            this & ((unsigned __int128)-(__int128)(unsigned __int64)v18 >> 64));
          if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 128LL))(a2) )
            CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients(v18, 1);
          if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
            CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients(v18, 1);
          if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
            CProcessSubmixProxy::UpdateCountOfLazyRequestClients(v18, 1);
          if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2 )
            ++*(_DWORD *)(this + 112);
          CProcessSubmixProxy::AddStreamAndSetAudioHandle(v18, a2, a6, a5);
          if ( !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) )
          {
            v25 = 0LL;
            v26 = &v25;
            v21 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v26);
            if ( (int)Microsoft::WRL::AsWeak<CProcessSubmixProxy>(
                        (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v18,
                        v21) >= 0 )
            {
              v22 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
              v23 = v25;
              if ( v25 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
              v28[0] = off_180170668;
              v28[1] = v23;
              v26 = 0LL;
              v28[7] = v28;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v26);
              v24 = CSerialWorkQueue::QueueWorkItem(v22, (__int64)v28);
              if ( v24 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xD4C,
                  (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                  (const char *)(unsigned int)v24);
            }
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
          }
          return 0LL;
        }
        v14 = 3370LL;
      }
      else
      {
        v14 = 3367LL;
      }
    }
    else
    {
      v14 = 3364LL;
    }
    goto LABEL_10;
  }
  v11 = (*(__int64 (**)(void))(v10 + 320))();
  if ( v11 < 0 )
  {
    v14 = 3349LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v25 = 0LL;
  v27 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<CStreamInstanceProxy,IStreamInstanceProxy,__int64>(&v25, &v27);
  v11 = v12;
  if ( v12 < 0 )
  {
    v15 = 3352LL;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SystemAudioStream *))(*(_QWORD *)v25 + 24LL))(
            v25,
            a3,
            a4,
            a6);
    v11 = v12;
    if ( v12 < 0 )
    {
      v15 = 3355LL;
    }
    else
    {
      (*(void (__fastcall **)(char *, struct SystemAudioStream *, _QWORD, __int64))(*((_QWORD *)a2 - 1) + 48LL))(
        (char *)a2 - 8,
        a6,
        a5,
        v25);
      v12 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *, unsigned __int64))(*(_QWORD *)v25 + 72LL))(
              v25,
              a2,
              this & -(__int64)(this != 8));
      v11 = v12;
      if ( v12 >= 0 )
      {
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
        return 0LL;
      }
      v15 = 3359LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v12);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
  return (unsigned int)v11;
}
