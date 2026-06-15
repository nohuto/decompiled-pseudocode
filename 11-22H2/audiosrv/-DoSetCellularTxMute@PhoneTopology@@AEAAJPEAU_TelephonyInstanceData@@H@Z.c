/*
 * XREFs of ?DoSetCellularTxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180164460
 * Callers:
 *     ?Process@CallTxMuteWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x1801654D0 (-Process@CallTxMuteWorkItem@@UEAAXPEAVPhoneTopology@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FEA00 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18013743C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x180165250 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::DoSetCellularTxMute(
        PhoneTopology *this,
        struct _TelephonyInstanceData *a2,
        unsigned int a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v19; // [rsp+80h] [rbp+20h] BYREF
  int v20; // [rsp+88h] [rbp+28h] BYREF
  int v21; // [rsp+98h] [rbp+38h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v15 = 0LL;
  if ( !(unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                           (char *)this + 184,
                           *((unsigned int *)a2 + 1),
                           &v15) )
  {
    v7 = -2147024809;
    v8 = 2147942487LL;
    v9 = 389LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\phonetopology.cpp",
      (const char *)v8);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    return v7;
  }
  v10 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    v6,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 4u )
  {
    v19 = a3;
    v20 = *(_DWORD *)a2;
    v21 = *((_DWORD *)a2 + 1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      byte_1801993C2,
      v11,
      v12,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 48LL))(v15, a3);
  v7 = v13;
  if ( v13 < 0 )
  {
    v8 = (unsigned int)v13;
    v9 = 398LL;
    goto LABEL_7;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
