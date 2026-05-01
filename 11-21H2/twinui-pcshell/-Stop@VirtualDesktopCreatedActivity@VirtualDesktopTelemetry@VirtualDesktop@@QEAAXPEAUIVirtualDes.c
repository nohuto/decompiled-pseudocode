/*
 * XREFs of ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x180548AD0
 * Callers:
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180544F50 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18022ACE8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180542B74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180542B74.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180543754 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktopCollection *a3)
{
  int v5; // eax
  int *v6; // rax
  int v7; // ecx
  int *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _DWORD *v11; // rsi
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _DWORD *v17; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+20h] [rbp-110h]
  int v22; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v23; // [rsp+B4h] [rbp-7Ch] BYREF
  int v24; // [rsp+B8h] [rbp-78h] BYREF
  int v25; // [rsp+BCh] [rbp-74h] BYREF
  int v26; // [rsp+C0h] [rbp-70h] BYREF
  int v27; // [rsp+C4h] [rbp-6Ch] BYREF
  int v28; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v35; // [rsp+100h] [rbp-30h] BYREF
  __int64 v36; // [rsp+108h] [rbp-28h] BYREF
  __int64 v37; // [rsp+110h] [rbp-20h] BYREF
  __int64 v38; // [rsp+118h] [rbp-18h] BYREF
  __int64 v39; // [rsp+120h] [rbp-10h] BYREF
  _BYTE v40[16]; // [rsp+128h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+38h]

  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v40);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      31LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v5,
      v21);
  v6 = (int *)*((_QWORD *)this + 6);
  v7 = v6[19];
  if ( v7 >= 0 || v7 != v6[22] || (v8 = v6 + 20, v6 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v16 = wil::details::static_lazy<WindowManagementLogging>::get(
            v15,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v17 = (_DWORD *)v16[1];
    if ( *v17 > 5u && tlgKeywordOn(v16[1], 0x400000000000LL) )
    {
      v24 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *, _QWORD))(*(_QWORD *)a3 + 24LL))(a3, 0LL);
      v30 = (__int64)v40;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *((_QWORD *)this + 6);
      v23 = CurrentThreadId;
      v22 = *(_DWORD *)(v19 + 76);
      v29 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (__int64)v17,
        byte_1806C54FB,
        (const GUID *)(v19 + 8),
        v20,
        (__int64)&v29,
        (__int64)&v22,
        (__int64)&v23,
        &v30,
        (__int64)&v24);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = wil::details::static_lazy<WindowManagementLogging>::get(
            v9,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v11 = (_DWORD *)v10[1];
    if ( *v11 > 5u && tlgKeywordOn(v10[1], 0x400000000000LL) )
    {
      v12 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *, _QWORD))(*(_QWORD *)a3 + 24LL))(a3, 0LL);
      v13 = *((_QWORD *)this + 6);
      v25 = v12;
      v29 = 0x1000000LL;
      v31 = (__int64)v40;
      v32 = *((_QWORD *)v8 + 15);
      v33 = *((_QWORD *)v8 + 14);
      v26 = v8[26];
      v34 = *((_QWORD *)v8 + 12);
      v35 = *((_QWORD *)v8 + 11);
      v27 = v8[20];
      v36 = *((_QWORD *)v8 + 9);
      v28 = v8[8];
      v37 = *((_QWORD *)v8 + 3);
      v22 = *v8;
      v38 = *((_QWORD *)v8 + 16);
      v23 = v8[16];
      v39 = *((_QWORD *)v8 + 7);
      v24 = v8[2];
      v30 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        (unsigned __int8 *)dword_1806C5570,
        (const GUID *)(v13 + 8),
        v14,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v24,
        (const wchar_t **)&v39,
        (__int64)&v23,
        (const wchar_t **)&v38,
        (__int64)&v22,
        (const WCHAR **)&v37,
        (__int64)&v28,
        (const wchar_t **)&v36,
        (__int64)&v27,
        (const wchar_t **)&v35,
        (const WCHAR **)&v34,
        (__int64)&v26,
        (const wchar_t **)&v33,
        (const WCHAR **)&v32,
        &v31,
        (__int64)&v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)((char *)this + 8));
}
