/*
 * XREFs of ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x18010E000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180004494 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18010D6AC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ??0?$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVEffectPackConfigurationManager@@@Z @ 0x18010D990 (--0-$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVEffec.c)
 *     ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DC70 (-AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ?DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z @ 0x18010DEE4 (-DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z.c)
 *     ?RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010E374 (-RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 */

__int64 __fastcall EffectPackConfigurationManager::OnMediaNotification(
        EffectPackConfigurationManager *this,
        struct MEDIA_NOTIFICATION_BLOCK *a2)
{
  const char *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v7; // ebx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rdx
  const char *v20; // [rsp+28h] [rbp-41h]
  __int64 v21[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v22[24]; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+60h] [rbp-9h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h]
  __int128 v25; // [rsp+70h] [rbp+7h]
  __int64 (__fastcall ***v26)(); // [rsp+98h] [rbp+2Fh]
  __int128 v27; // [rsp+A0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !a2 )
  {
    v3 = "NULL Media Notification Block";
    v4 = 18LL;
LABEL_3:
    v5 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)0x80070057LL,
      (unsigned __int64)v3,
      v20);
    return v5;
  }
  if ( *(_DWORD *)a2 < 0x18u )
  {
    v3 = "Invalid Media Notification Block size";
    v4 = 19LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)a2 + 1) != 0x400000 )
  {
    v3 = "Incorrect Media Notification Block";
    v4 = 20LL;
    goto LABEL_3;
  }
  v7 = *((_DWORD *)a2 + 6);
  v27 = *(_OWORD *)((char *)a2 + 28);
  v8 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 2048LL) )
  {
    LODWORD(v21[0]) = v7;
    *(_QWORD *)v22 = &v27;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v9,
      byte_180193747,
      v10,
      v11,
      v22,
      (__int64)v21);
  }
  *(_OWORD *)v22 = v27;
  if ( v7 == 2 )
  {
    EffectPackConfigurationManager::RemoveEffectPackConfigurationFromList(this, (struct _GUID *)v22);
    wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>(
      v21,
      (__int64)this);
    v16 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
    wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>(
      v22,
      v21[0]);
    v17 = *(_QWORD *)v22;
    *(_QWORD *)v22 = 0LL;
    v23 = off_1801707A0;
    v24 = v17;
    v26 = &v23;
    *(_OWORD *)&v22[8] = v27;
    v25 = v27;
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v22);
    v18 = CSerialWorkQueue::QueueWorkItem(v16, (__int64)&v23);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v18);
    *(_OWORD *)v22 = v27;
    EffectPackConfigurationManager::DeleteRegistryEntry((struct _GUID *)v22, v19);
  }
  else
  {
    v12 = EffectPackConfigurationManager::AddEffectPackConfigurationToList(this, (struct _GUID *)v22);
    v5 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v12);
      return v5;
    }
    wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>(
      v21,
      (__int64)this);
    v13 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
    wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>(
      v22,
      v21[0]);
    v14 = *(_QWORD *)v22;
    *(_QWORD *)v22 = 0LL;
    v23 = off_1801707D0;
    v24 = v14;
    v26 = &v23;
    *(_OWORD *)&v22[8] = v27;
    v25 = v27;
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v22);
    v15 = CSerialWorkQueue::QueueWorkItem(v13, (__int64)&v23);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x32,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v15);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v21);
  return 0LL;
}
