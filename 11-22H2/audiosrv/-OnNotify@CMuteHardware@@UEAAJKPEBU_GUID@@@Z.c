/*
 * XREFs of ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x180004A10
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x180046BB8 (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q_guid_ @ 0x1800E3FEC (WPP_SF_q_guid_.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18011084C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

__int64 __fastcall CMuteHardware::OnNotify(CMuteHardware *this, unsigned int a2, const struct _GUID *a3)
{
  __int64 v6; // rax
  int *v7; // rsi
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  _DWORD *v14; // rcx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v22; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+88h] [rbp+20h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20,
      (unsigned int)&WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids,
      (_DWORD)this,
      (__int64)a3);
  }
  v6 = *(_QWORD *)&a3->Data1 - *(_QWORD *)((char *)this + 68);
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)((char *)this + 68) )
    v6 = *(_QWORD *)a3->Data4 - *(_QWORD *)((char *)this + 76);
  if ( !v6 )
    return 0LL;
  v7 = (int *)((char *)this + 24);
  v8 = *((_DWORD *)this + 6);
  CMuteHardware::GetMuteValue(this, (int *)this + 6);
  if ( !a2 )
  {
    v10 = EVENTCONTEXT_HARDWARE_INITIATED - *(_QWORD *)&a3->Data1;
    if ( EVENTCONTEXT_HARDWARE_INITIATED == *(_QWORD *)&a3->Data1 )
      v10 = 0x2ADE9700B0F38CBDLL - *(_QWORD *)a3->Data4;
    if ( !v10 && v8 != *v7 )
    {
      v14 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v9,
                           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v14 > 4u )
      {
        if ( (unsigned __int8)tlgKeywordOn(v14, 0x400000000000LL) )
        {
          v22 = *v7;
          v19 = *((_QWORD *)this + 5);
          v20 = *((_QWORD *)this + 4);
          v23 = v8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v15,
            (unsigned int)&unk_18019378E,
            v16,
            v17,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v23,
            (__int64)&v22);
        }
      }
    }
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 2) + 24LL))(
          *((_QWORD *)this + 2),
          a2,
          a3);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x264,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
    (const char *)(unsigned int)v11,
    v18);
  return v12;
}
