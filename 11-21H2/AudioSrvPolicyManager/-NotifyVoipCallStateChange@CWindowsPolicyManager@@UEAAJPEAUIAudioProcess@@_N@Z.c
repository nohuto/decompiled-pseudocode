/*
 * XREFs of ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18000AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001108 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::NotifyVoipCallStateChange(
        CWindowsPolicyManager *this,
        struct IAudioProcess *a2,
        unsigned __int8 a3)
{
  int v4; // esi
  bool i; // zf
  signed __int32 v6; // eax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  bool j; // zf
  signed __int32 v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  __int64 v16; // [rsp+40h] [rbp-9h] BYREF
  __int64 v17; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp+7h] BYREF
  char v19; // [rsp+60h] [rbp+17h]
  _QWORD *v20; // [rsp+88h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v22; // [rsp+C8h] [rbp+7Fh] BYREF

  v4 = a3;
  if ( !g_ApplicationManager )
    return 0LL;
  for ( i = a2 == 0LL; !i; i = v6 == _InterlockedCompareExchange((volatile signed __int32 *)a2 + 5, v6 + 1, v6) )
  {
    v6 = *((_DWORD *)a2 + 5);
    if ( v6 == 0x7FFFFFFF )
      break;
  }
  v7 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v7 > 4u )
  {
    v8 = *(_QWORD *)a2;
    LODWORD(v22) = v4;
    LODWORD(v16) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v8 + 40))(a2);
    v17 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v7,
      (int)&dword_180050BCD,
      v9,
      v10,
      (void **)&v17,
      (__int64)&v16,
      (__int64)&v22);
  }
  for ( j = a2 == 0LL; !j; j = v12 == _InterlockedCompareExchange((volatile signed __int32 *)a2 + 5, v12 + 1, v12) )
  {
    v12 = *((_DWORD *)a2 + 5);
    if ( v12 == 0x7FFFFFFF )
      break;
  }
  v18[1] = a2;
  v18[0] = off_180047100;
  v19 = v4;
  v20 = v18;
  v13 = QueueGenericWorkItem(v18);
  v14 = v13;
  if ( v13 >= 0 )
  {
    if ( a2 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(a2);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2DC,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)v13);
  if ( a2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(a2);
  return v14;
}
