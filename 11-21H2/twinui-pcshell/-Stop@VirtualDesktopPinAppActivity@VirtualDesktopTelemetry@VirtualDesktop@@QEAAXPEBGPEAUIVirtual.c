/*
 * XREFs of ?Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x180557F50
 * Callers:
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180557190 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18022ABBC (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18022ACE8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@6@Z @ 0x180542E64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180542E64.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1805438B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlg.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *this,
        const unsigned __int16 *a2,
        struct IVirtualDesktop *a3)
{
  int *v5; // rax
  int v6; // ecx
  int *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _DWORD *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _DWORD *v15; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v20; // [rsp+B4h] [rbp-7Ch] BYREF
  int v21; // [rsp+B8h] [rbp-78h] BYREF
  int v22; // [rsp+BCh] [rbp-74h] BYREF
  int v23; // [rsp+C0h] [rbp-70h] BYREF
  int v24; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v25; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+100h] [rbp-30h] BYREF
  __int64 v33; // [rsp+108h] [rbp-28h] BYREF
  __int64 v34; // [rsp+110h] [rbp-20h] BYREF
  __int64 v35; // [rsp+118h] [rbp-18h] BYREF
  __int64 v36; // [rsp+120h] [rbp-10h] BYREF
  _BYTE v37[16]; // [rsp+128h] [rbp-8h] BYREF

  if ( a3 )
    (*(void (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v37);
  v5 = (int *)*((_QWORD *)this + 6);
  v6 = v5[19];
  if ( v6 >= 0 || v6 != v5[22] || (v7 = v5 + 20, v5 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v14 = wil::details::static_lazy<WindowManagementLogging>::get(
            v13,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v15 = (_DWORD *)v14[1];
    if ( *v15 > 5u && tlgKeywordOn(v14[1], 0x400000000000LL) )
    {
      v27 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(a2);
      v26 = (__int64)v37;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 6);
      v20 = CurrentThreadId;
      v19 = *(_DWORD *)(v17 + 76);
      v25 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        (__int64)v15,
        (unsigned __int8 *)dword_1806C6EB2,
        (const GUID *)(v17 + 8),
        v18,
        (__int64)&v25,
        (__int64)&v19,
        (__int64)&v20,
        &v26,
        (const WCHAR **)&v27);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = wil::details::static_lazy<WindowManagementLogging>::get(
           v8,
           _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v10 = (_DWORD *)v9[1];
    if ( *v10 > 5u && tlgKeywordOn(v9[1], 0x400000000000LL) )
    {
      v28 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(a2);
      v11 = *((_QWORD *)this + 6);
      v29 = (__int64)v37;
      v30 = *((_QWORD *)v7 + 15);
      v31 = *((_QWORD *)v7 + 14);
      v21 = v7[26];
      v32 = *((_QWORD *)v7 + 12);
      v33 = *((_QWORD *)v7 + 11);
      v22 = v7[20];
      v34 = *((_QWORD *)v7 + 9);
      v23 = v7[8];
      v35 = *((_QWORD *)v7 + 3);
      v24 = *v7;
      v36 = *((_QWORD *)v7 + 16);
      v19 = v7[16];
      v25 = *((_QWORD *)v7 + 7);
      v20 = v7[2];
      v27 = 2197815296LL;
      v26 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        (__int64)v10,
        (unsigned __int8 *)dword_1806C6F2A,
        (const GUID *)(v11 + 8),
        v12,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v20,
        (const wchar_t **)&v25,
        (__int64)&v19,
        (const wchar_t **)&v36,
        (__int64)&v24,
        (const WCHAR **)&v35,
        (__int64)&v23,
        (const wchar_t **)&v34,
        (__int64)&v22,
        (const wchar_t **)&v33,
        (const WCHAR **)&v32,
        (__int64)&v21,
        (const wchar_t **)&v31,
        (const WCHAR **)&v30,
        &v29,
        (const WCHAR **)&v28);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)((char *)this + 8));
}
