/*
 * XREFs of ?Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x18003FBC8
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18003F530 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003FCA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800AFE7C (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18048F11C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18048F11C.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::Stop(
        VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *this,
        char a2)
{
  int *v2; // rax
  int v5; // ecx
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  int v10; // r9d
  int *v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+C0h] [rbp-80h] BYREF
  int v16; // [rsp+C4h] [rbp-7Ch] BYREF
  int v17; // [rsp+C8h] [rbp-78h] BYREF
  int v18; // [rsp+CCh] [rbp-74h] BYREF
  int v19; // [rsp+D0h] [rbp-70h] BYREF
  int v20; // [rsp+D4h] [rbp-6Ch] BYREF
  __int64 v21; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h] BYREF
  __int64 v27; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  __int64 v30; // [rsp+120h] [rbp-20h] BYREF
  __int64 v31[3]; // [rsp+128h] [rbp-18h] BYREF
  __int64 v32; // [rsp+150h] [rbp+10h] BYREF
  __int64 v33; // [rsp+160h] [rbp+20h] BYREF
  __int64 v34; // [rsp+168h] [rbp+28h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v11 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v7 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                        v6,
                        _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v7 > 5u )
    {
      LOBYTE(v32) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 6);
      LODWORD(v33) = CurrentThreadId;
      LODWORD(v34) = *(_DWORD *)(v9 + 76);
      v21 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (_DWORD)v7,
        (unsigned int)&unk_1808699D1,
        v9 + 8,
        v10,
        (__int64)&v21,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v13 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                         v12,
                         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v13 > 5u )
    {
      v22 = *((_QWORD *)v11 + 6);
      LODWORD(v33) = v11[17];
      LODWORD(v34) = v11[4];
      v23 = *((_QWORD *)v11 + 15);
      v24 = *((_QWORD *)v11 + 14);
      v15 = v11[26];
      v14 = *((_QWORD *)this + 6);
      v25 = *((_QWORD *)v11 + 12);
      v26 = *((_QWORD *)v11 + 11);
      v16 = v11[20];
      v27 = *((_QWORD *)v11 + 9);
      v17 = v11[8];
      v28 = *((_QWORD *)v11 + 3);
      v18 = *v11;
      v29 = *((_QWORD *)v11 + 16);
      v19 = v11[16];
      v30 = *((_QWORD *)v11 + 7);
      v20 = v11[2];
      LOBYTE(v32) = a2;
      v31[0] = 0x1000000LL;
      v21 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
        (int)v13,
        (int)&dword_180869857,
        v14 + 8,
        (__int64)&v21,
        (__int64)v31,
        (__int64)&v20,
        (__int64)&v30,
        (__int64)&v19,
        (__int64)&v29,
        (__int64)&v18,
        (__int64)&v28,
        (__int64)&v17,
        (__int64)&v27,
        (__int64)&v16,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v15,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v22,
        (__int64)&v32);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)((char *)this + 8));
}
