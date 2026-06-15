/*
 * XREFs of ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800CA7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x18005D5A8 (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C9CCC (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     WPP_SF_q_guid_ @ 0x1800CB434 (WPP_SF_q_guid_.c)
 */

__int64 __fastcall CMuteHardware::OnNotify(CMuteHardware *this, unsigned int a2, const struct _GUID *a3)
{
  __int64 v6; // rax
  int *v7; // rsi
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  void *v17; // [rsp+40h] [rbp-28h] BYREF
  int v18[2]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+88h] [rbp+20h] BYREF

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20,
      (unsigned int)&WPP_c3ad8c7f2ffb3e627dd5155130aa6484_Traceguids,
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
      v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v9,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v11 > 4u
        && (*(_QWORD *)(v11 + 16) & 0x400000000000LL) != 0
        && (*(_QWORD *)(v11 + 24) & 0x400000000000LL) == *(_QWORD *)(v11 + 24) )
      {
        v20 = *v7;
        v17 = (void *)*((_QWORD *)this + 5);
        *(_QWORD *)v18 = *((_QWORD *)this + 4);
        v21 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v11,
          byte_18018840F,
          v12,
          v13,
          (void **)v18,
          &v17,
          (__int64)&v21,
          (__int64)&v20);
      }
    }
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 2) + 24LL))(
          *((_QWORD *)this + 2),
          a2,
          a3);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24C,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
