/*
 * XREFs of ?Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805499E0
 * Callers:
 *     ?MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805468C0 (-MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtua.c)
 *     ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180546990 (-MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskto.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18022ABBC (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18022ACE8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@6@Z @ 0x180542E64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180542E64.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1805438B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlg.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v5; // eax
  void (__fastcall *v6)(struct IApplicationView *, LPCWSTR *); // rbx
  int *v7; // rax
  int v8; // ecx
  int *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _DWORD *v12; // rsi
  const WCHAR *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _DWORD *v17; // rbx
  const WCHAR *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // [rsp+20h] [rbp-110h]
  int v22; // [rsp+B0h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+B4h] [rbp-7Ch] BYREF
  int v24; // [rsp+B8h] [rbp-78h] BYREF
  int v25; // [rsp+BCh] [rbp-74h] BYREF
  int v26; // [rsp+C0h] [rbp-70h] BYREF
  int v27; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v28; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-58h] BYREF
  LPCWSTR pszPath; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-48h]
  __int64 v33; // [rsp+F0h] [rbp-40h]
  __int64 v34; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v35; // [rsp+100h] [rbp-30h] BYREF
  __int64 v36; // [rsp+108h] [rbp-28h] BYREF
  __int64 v37; // [rsp+110h] [rbp-20h] BYREF
  __int64 v38; // [rsp+118h] [rbp-18h] BYREF
  __int64 v39; // [rsp+120h] [rbp-10h] BYREF
  __int64 v40; // [rsp+128h] [rbp-8h] BYREF
  __int64 v41; // [rsp+130h] [rbp+0h] BYREF
  __int64 v42; // [rsp+138h] [rbp+8h] BYREF
  _BYTE v43[16]; // [rsp+140h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+48h]

  pszPath = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v43);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      84LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v5,
      v21);
  v6 = *(void (__fastcall **)(struct IApplicationView *, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v32 = -1LL;
  v33 = -1LL;
  v6(a2, &pszPath);
  v7 = (int *)*((_QWORD *)this + 6);
  v8 = v7[19];
  if ( v8 >= 0 || v8 != v7[22] || (v9 = v7 + 20, v7 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v16 = wil::details::static_lazy<WindowManagementLogging>::get(
            v15,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v17 = (_DWORD *)v16[1];
    if ( *v17 > 5u && tlgKeywordOn(v16[1], 0x400000000000LL) )
    {
      v18 = &LocaleName;
      if ( pszPath )
        v18 = pszPath;
      v30 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v18);
      v29 = (__int64)v43;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *((_QWORD *)this + 6);
      v22 = *(_DWORD *)(v19 + 76);
      v28 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        (__int64)v17,
        (unsigned __int8 *)dword_1806C5BB1,
        (const GUID *)(v19 + 8),
        v20,
        (__int64)&v28,
        (__int64)&v22,
        (__int64)&CurrentThreadId,
        &v29,
        (const WCHAR **)&v30);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = wil::details::static_lazy<WindowManagementLogging>::get(
            v10,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v12 = (_DWORD *)v11[1];
    if ( *v12 > 5u && tlgKeywordOn(v11[1], 0x400000000000LL) )
    {
      v13 = &LocaleName;
      if ( pszPath )
        v13 = pszPath;
      v34 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v13);
      v35 = (__int64)v43;
      v36 = *((_QWORD *)v9 + 15);
      v37 = *((_QWORD *)v9 + 14);
      v24 = v9[26];
      v38 = *((_QWORD *)v9 + 12);
      v39 = *((_QWORD *)v9 + 11);
      v25 = v9[20];
      v40 = *((_QWORD *)v9 + 9);
      v26 = v9[8];
      v41 = *((_QWORD *)v9 + 3);
      v27 = *v9;
      v42 = *((_QWORD *)v9 + 16);
      v22 = v9[16];
      v28 = *((_QWORD *)v9 + 7);
      CurrentThreadId = v9[2];
      v29 = 0x1000000LL;
      v30 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        (__int64)v12,
        (unsigned __int8 *)dword_1806C5C2C,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v14,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&CurrentThreadId,
        (const wchar_t **)&v28,
        (__int64)&v22,
        (const wchar_t **)&v42,
        (__int64)&v27,
        (const WCHAR **)&v41,
        (__int64)&v26,
        (const wchar_t **)&v40,
        (__int64)&v25,
        (const wchar_t **)&v39,
        (const WCHAR **)&v38,
        (__int64)&v24,
        (const wchar_t **)&v37,
        (const WCHAR **)&v36,
        &v35,
        (const WCHAR **)&v34);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)((char *)this + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
}
