/*
 * XREFs of ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18000A7A0
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

__int64 __fastcall CWindowsPolicyManager::NotifyDialogSessionStateChange(
        CWindowsPolicyManager *this,
        struct IAudioProcess *a2,
        unsigned __int8 a3)
{
  int v4; // esi
  _DWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int32 v9; // eax
  signed __int32 v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v14; // [rsp+48h] [rbp+7h] BYREF
  __int64 v15; // [rsp+50h] [rbp+Fh] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp+17h] BYREF
  char v17; // [rsp+68h] [rbp+27h]
  _QWORD *v18; // [rsp+90h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]
  __int64 v20; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = a3;
  if ( !g_ApplicationManager )
    return 0LL;
  v5 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v5 > 4u )
  {
    v6 = *(_QWORD *)a2;
    LODWORD(v20) = v4;
    LODWORD(v14) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v6 + 40))(a2);
    v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v5,
      (int)&dword_180050B7E,
      v7,
      v8,
      (void **)&v15,
      (__int64)&v14,
      (__int64)&v20);
  }
  if ( a2 )
  {
    do
      v9 = *((_DWORD *)a2 + 5);
    while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 5, v9 + 1, v9) );
    do
      v10 = *((_DWORD *)a2 + 5);
    while ( v10 != 0x7FFFFFFF && v10 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 5, v10 + 1, v10) );
  }
  v16[1] = a2;
  v16[0] = off_1800470D0;
  v17 = v4;
  v18 = v16;
  v11 = QueueGenericWorkItem(v16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( a2 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(a2);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F2,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)v11);
  if ( a2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(a2);
  return v12;
}
