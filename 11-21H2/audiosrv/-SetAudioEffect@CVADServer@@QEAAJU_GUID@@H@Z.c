/*
 * XREFs of ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x1800EFC70
 * Callers:
 *     AudioServerSetAudioEffect @ 0x1800F3F40 (AudioServerSetAudioEffect.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800ECF5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVADServer::SetAudioEffect(CVADServer *this, struct _GUID *a2, unsigned int a3)
{
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  struct _GUID v14; // xmm6
  __int64 **v15; // rbx
  __int64 **v16; // rdi
  __int64 *v17; // rcx
  __int64 v18; // rax
  unsigned int v20; // [rsp+48h] [rbp-39h] BYREF
  struct _GUID *v21; // [rsp+50h] [rbp-31h] BYREF
  __int64 v22; // [rsp+58h] [rbp-29h] BYREF
  int v23[4]; // [rsp+68h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+78h] [rbp-9h] BYREF
  __int128 v25; // [rsp+80h] [rbp-1h]
  __int128 v26; // [rsp+90h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v25 = *(_OWORD *)((char *)this + 280);
  v26 = v25;
  EtwEventActivityIdControl(4LL, &v26);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v24 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  v7 = 0;
  if ( !*((_QWORD *)this + 24) )
  {
    v8 = -2004287487;
    v9 = 2405LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v8);
    v7 = v8;
    goto LABEL_14;
  }
  if ( !*((_DWORD *)this + 46) )
  {
    v8 = -2004287487;
    v9 = 2406LL;
    goto LABEL_13;
  }
  v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v6,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v10 > 4u
    && (*(_DWORD *)(v10 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v10 + 24) & 0x200LL) == *(_QWORD *)(v10 + 24) )
  {
    v20 = a3;
    v21 = a2;
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL) + 64LL))(*((_QWORD *)this + 21) + 8LL);
    *(_QWORD *)v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 80LL))(*((_QWORD *)this + 24) + 8LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v10,
      byte_1801894F6,
      v11,
      v12,
      (__int64)v23,
      (void **)&v22,
      (__int64 *)&v21,
      (__int64)&v20);
  }
  v13 = *((_QWORD *)this + 24);
  v14 = *a2;
  v15 = *(__int64 ***)(v13 + 216);
  v16 = *(__int64 ***)(v13 + 224);
  if ( v15 == v16 )
  {
    v8 = -2004287423;
    v9 = 2417LL;
    goto LABEL_13;
  }
  do
  {
    v17 = *v15;
    v18 = **v15;
    *(struct _GUID *)v23 = v14;
    (*(void (__fastcall **)(__int64 *, int *, _QWORD))(v18 + 64))(v17, v23, a3);
    ++v15;
  }
  while ( v15 != v16 );
LABEL_14:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v24);
  EtwEventActivityIdControl(4LL, &v26);
  return v7;
}
