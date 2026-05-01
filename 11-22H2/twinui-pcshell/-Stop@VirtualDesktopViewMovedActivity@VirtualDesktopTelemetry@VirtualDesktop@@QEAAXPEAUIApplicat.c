/*
 * XREFs of ?Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18003B7BC
 * Callers:
 *     ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18003A700 (-MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskto.c)
 *     ?MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1806021F0 (-MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtua.c)
 * Callees:
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18003B970 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18003B9B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlg.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800AFE7C (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@6@Z @ 0x1805FD418 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1805FD418.c)
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
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rbx
  const WCHAR *v12; // rcx
  int *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rsi
  const WCHAR *v17; // rcx
  int v18; // [rsp+20h] [rbp-110h]
  int v19; // [rsp+B0h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+B4h] [rbp-7Ch] BYREF
  int v21; // [rsp+B8h] [rbp-78h] BYREF
  int v22; // [rsp+BCh] [rbp-74h] BYREF
  int v23; // [rsp+C0h] [rbp-70h] BYREF
  int v24; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v25; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-58h] BYREF
  LPCWSTR pszPath; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-48h]
  __int64 v30; // [rsp+F0h] [rbp-40h]
  __int64 v31; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+100h] [rbp-30h] BYREF
  __int64 v33; // [rsp+108h] [rbp-28h] BYREF
  __int64 v34; // [rsp+110h] [rbp-20h] BYREF
  __int64 v35; // [rsp+118h] [rbp-18h] BYREF
  __int64 v36; // [rsp+120h] [rbp-10h] BYREF
  __int64 v37; // [rsp+128h] [rbp-8h] BYREF
  __int64 v38; // [rsp+130h] [rbp+0h] BYREF
  __int64 v39; // [rsp+138h] [rbp+8h] BYREF
  _BYTE v40[16]; // [rsp+140h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+48h]

  pszPath = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v40);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v5,
      v18);
  v6 = *(void (__fastcall **)(struct IApplicationView *, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pszPath);
  v29 = -1LL;
  v30 = -1LL;
  v6(a2, &pszPath);
  v7 = (int *)*((_QWORD *)this + 6);
  v8 = v7[19];
  if ( v8 >= 0 || v8 != v7[22] || (v13 = v7 + 20, v7 == (int *)-80LL) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v10 = wil::details::static_lazy<WindowManagementLogging>::get(
            v9,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v11 = *(_DWORD **)(v10 + 8);
    if ( *v11 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v10 + 8), 0x400000000000LL) )
    {
      v12 = &LocaleName;
      if ( pszPath )
        v12 = pszPath;
      v27 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v12);
      v26 = (__int64)v40;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v25 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        (int)v11,
        (int)&dword_18086E316,
        (__int64)&v25,
        (__int64)&v19,
        (__int64)&CurrentThreadId,
        (__int64)&v26,
        (__int64)&v27);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v15 = wil::details::static_lazy<WindowManagementLogging>::get(
            v14,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v16 = *(_DWORD **)(v15 + 8);
    if ( *v16 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v15 + 8), 0x400000000000LL) )
    {
      v17 = &LocaleName;
      if ( pszPath )
        v17 = pszPath;
      v31 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v17);
      v32 = (__int64)v40;
      v33 = *((_QWORD *)v13 + 15);
      v34 = *((_QWORD *)v13 + 14);
      v21 = v13[26];
      v35 = *((_QWORD *)v13 + 12);
      v36 = *((_QWORD *)v13 + 11);
      v22 = v13[20];
      v37 = *((_QWORD *)v13 + 9);
      v23 = v13[8];
      v38 = *((_QWORD *)v13 + 3);
      v24 = *v13;
      v39 = *((_QWORD *)v13 + 16);
      v19 = v13[16];
      v25 = *((_QWORD *)v13 + 7);
      CurrentThreadId = v13[2];
      v26 = 0x1000000LL;
      v27 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        (int)v16,
        (int)&dword_18086E02D,
        *((_QWORD *)this + 6) + 8,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&CurrentThreadId,
        (__int64)&v25,
        (__int64)&v19,
        (__int64)&v39,
        (__int64)&v24,
        (__int64)&v38,
        (__int64)&v23,
        (__int64)&v37,
        (__int64)&v22,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v21,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pszPath);
}
