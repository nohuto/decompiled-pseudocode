/*
 * XREFs of ?GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z @ 0x1800EE664
 * Callers:
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x1800F11C0 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ @ 0x1800E5954 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800ECEA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVADServer::GetAudioEffectsChangedWnfStateName(CVADServer *this, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  int v14[2]; // [rsp+38h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h]
  __int128 v17; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v16 = *(_OWORD *)((char *)this + 280);
  v17 = v16;
  EtwEventActivityIdControl(4LL, &v17);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  if ( *((_QWORD *)this + 24) )
  {
    if ( *((_DWORD *)this + 46) )
    {
      v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
             v4,
             _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v7 > 4u
        && (*(_DWORD *)(v7 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v7 + 24) & 0x200LL) == *(_QWORD *)(v7 + 24) )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL) + 64LL))(*((_QWORD *)this + 21) + 8LL);
        *(_QWORD *)v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 80LL))(*((_QWORD *)this + 24) + 8LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
          v7,
          byte_1801894A6,
          v8,
          v9,
          (__int64)v14,
          (void **)&v13);
      }
      v10 = *((_QWORD *)this + 24);
      if ( *(_BYTE *)(v10 + 340)
        || (v11 = CAudioStream::SetUpAudioEffectsChangedWnfState((CAudioStream *)v10), v5 = v11, v11 >= 0) )
      {
        *a2 = *(_QWORD *)(v10 + 332);
        v5 = 0;
        goto LABEL_14;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x624,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v11);
      v6 = 2437LL;
    }
    else
    {
      v5 = -2004287487;
      v6 = 2428LL;
    }
  }
  else
  {
    v5 = -2004287487;
    v6 = 2427LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v5);
LABEL_14:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  EtwEventActivityIdControl(4LL, &v17);
  return v5;
}
