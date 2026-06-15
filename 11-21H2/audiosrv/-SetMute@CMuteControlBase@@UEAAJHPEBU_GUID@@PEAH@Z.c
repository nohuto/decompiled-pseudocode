/*
 * XREFs of ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800CAEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C9DCC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_SF_qd_guid_ @ 0x1800CB48C (WPP_SF_qd_guid_.c)
 */

__int64 __fastcall CMuteControlBase::SetMute(CMuteControlBase *this, unsigned int a2, const struct _GUID *a3, int *a4)
{
  CEndpointStoreCache *v8; // rcx
  int v9; // r14d
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ebp
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // esi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, (_DWORD)a3, (_DWORD)this, a2, (__int64)a3);
  }
  v9 = *((_DWORD *)this + 6);
  v10 = 0;
  if ( v9 == a2 )
    goto LABEL_14;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          (__int64)v8,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v11 > 4u
    && (*(_QWORD *)(v11 + 16) & 0x400000000002LL) != 0
    && (*(_QWORD *)(v11 + 24) & 0x400000000002LL) == *(_QWORD *)(v11 + 24) )
  {
    v21 = (void *)*((_QWORD *)this + 4);
    v22 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v11,
      byte_180188476,
      v12,
      v13,
      (__int64)&v22,
      &v21);
  }
  v14 = (*(__int64 (__fastcall **)(CMuteControlBase *, _QWORD))(*(_QWORD *)this + 104LL))(this, a2);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
  v17 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 6) = a2;
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)v17 + 24LL))(v17, 0LL, a3);
  v19 = v18;
  if ( v18 >= 0 )
  {
LABEL_14:
    if ( a4 )
    {
      LOBYTE(v10) = v9 == a2;
      *a4 = v10;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)(unsigned int)v18);
    return v19;
  }
}
