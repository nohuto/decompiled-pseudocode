/*
 * XREFs of ?Stop@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18055887C
 * Callers:
 *     ?UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180559A50 (-UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18022ABBC (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18022ACE8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@6@Z @ 0x180542E64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180542E64.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1805438B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlg.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  void (__fastcall *v5)(struct IApplicationView *, LPCWSTR *); // rbx
  int *v6; // rbx
  int v7; // eax
  int *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _DWORD *v11; // rdi
  const WCHAR *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _DWORD *v16; // rbx
  const WCHAR *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  int v20; // [rsp+B0h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+B4h] [rbp-7Ch] BYREF
  int v22; // [rsp+B8h] [rbp-78h] BYREF
  int v23; // [rsp+BCh] [rbp-74h] BYREF
  int v24; // [rsp+C0h] [rbp-70h] BYREF
  int v25; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v26; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-58h] BYREF
  LPCWSTR pszPath; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-48h]
  __int64 v31; // [rsp+F0h] [rbp-40h]
  __int64 v32; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+100h] [rbp-30h] BYREF
  __int64 v34; // [rsp+108h] [rbp-28h] BYREF
  __int64 v35; // [rsp+110h] [rbp-20h] BYREF
  __int64 v36; // [rsp+118h] [rbp-18h] BYREF
  __int64 v37; // [rsp+120h] [rbp-10h] BYREF
  __int64 v38; // [rsp+128h] [rbp-8h] BYREF
  __int64 v39; // [rsp+130h] [rbp+0h] BYREF
  __int64 v40; // [rsp+138h] [rbp+8h] BYREF
  _BYTE v41[16]; // [rsp+140h] [rbp+10h] BYREF

  (*(void (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v41);
  pszPath = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v5 = *(void (__fastcall **)(struct IApplicationView *, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v30 = -1LL;
  v31 = -1LL;
  v5(a2, &pszPath);
  v6 = (int *)*((_QWORD *)this + 6);
  v7 = v6[19];
  if ( v7 < 0 && v7 == v6[22] && (v8 = v6 + 20) != 0LL )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = wil::details::static_lazy<WindowManagementLogging>::get(
            v9,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v11 = (_DWORD *)v10[1];
    if ( *v11 > 5u && tlgKeywordOn(v10[1], 0x400000000000LL) )
    {
      v12 = &LocaleName;
      if ( pszPath )
        v12 = pszPath;
      v32 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v12);
      v33 = (__int64)v41;
      v34 = *((_QWORD *)v8 + 15);
      v35 = *((_QWORD *)v8 + 14);
      v22 = v8[26];
      v36 = *((_QWORD *)v8 + 12);
      v37 = *((_QWORD *)v8 + 11);
      v23 = v8[20];
      v38 = *((_QWORD *)v8 + 9);
      v24 = v8[8];
      v39 = *((_QWORD *)v8 + 3);
      v25 = *v8;
      v40 = *((_QWORD *)v8 + 16);
      v20 = v8[16];
      v26 = *((_QWORD *)v8 + 7);
      CurrentThreadId = v8[2];
      v27 = 0x1000000LL;
      v28 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        (__int64)v11,
        (unsigned __int8 *)dword_1806C66CC,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v13,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&CurrentThreadId,
        (const wchar_t **)&v26,
        (__int64)&v20,
        (const wchar_t **)&v40,
        (__int64)&v25,
        (const WCHAR **)&v39,
        (__int64)&v24,
        (const wchar_t **)&v38,
        (__int64)&v23,
        (const wchar_t **)&v37,
        (const WCHAR **)&v36,
        (__int64)&v22,
        (const wchar_t **)&v35,
        (const WCHAR **)&v34,
        &v33,
        (const WCHAR **)&v32);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = wil::details::static_lazy<WindowManagementLogging>::get(
            v14,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v16 = (_DWORD *)v15[1];
    if ( *v16 > 5u && tlgKeywordOn(v15[1], 0x400000000000LL) )
    {
      v17 = &LocaleName;
      if ( pszPath )
        v17 = pszPath;
      v28 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v17);
      v27 = (__int64)v41;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 6);
      v20 = *(_DWORD *)(v18 + 76);
      v26 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        (__int64)v16,
        (unsigned __int8 *)dword_1806C664F,
        (const GUID *)(v18 + 8),
        v19,
        (__int64)&v26,
        (__int64)&v20,
        (__int64)&CurrentThreadId,
        &v27,
        (const WCHAR **)&v28);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *)((char *)this + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
}
