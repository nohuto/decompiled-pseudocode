/*
 * XREFs of ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@2@Z @ 0x1805991F8
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@@Z @ 0x180599D64 (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180072890 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800C4C94 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U4@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@544444AEBU?$_tlgWrapperByVal@$00@@4644444@Z @ 0x180239516 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U3@U2@U2@U2@U2@U2.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180503F10 (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U4@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U5@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456644444AEBU?$_tlgWrapperByVal@$00@@4744444@Z @ 0x1805985D4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1805985D4.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSnapComponentTelemetry::ProcessView::Stop(
        __int64 a1,
        int (__fastcall ***a2)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *),
        __int64 a3,
        char a4,
        int a5,
        char a6)
{
  unsigned __int16 **v10; // r8
  int (__fastcall *v11)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int (__fastcall *v15)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *); // rbx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rbx
  __int64 v19; // rcx
  const unsigned __int16 *v20; // rdx
  _DWORD *v21; // rsi
  __int64 v22; // r9
  const WCHAR *v23; // rcx
  __int64 v24; // rcx
  const unsigned __int16 *v25; // rdx
  _DWORD *v26; // rbx
  const WCHAR *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r9
  char v30; // [rsp+130h] [rbp-80h] BYREF
  _BYTE v31[3]; // [rsp+131h] [rbp-7Fh] BYREF
  int v32; // [rsp+134h] [rbp-7Ch] BYREF
  unsigned int v33; // [rsp+138h] [rbp-78h] BYREF
  int v34; // [rsp+13Ch] [rbp-74h] BYREF
  int v35; // [rsp+140h] [rbp-70h] BYREF
  __int128 v36; // [rsp+144h] [rbp-6Ch] BYREF
  int v37; // [rsp+154h] [rbp-5Ch] BYREF
  DWORD CurrentThreadId; // [rsp+158h] [rbp-58h] BYREF
  unsigned int v39; // [rsp+15Ch] [rbp-54h] BYREF
  __int128 v40; // [rsp+160h] [rbp-50h] BYREF
  __int64 v41; // [rsp+170h] [rbp-40h] BYREF
  int v42; // [rsp+178h] [rbp-38h] BYREF
  int v43; // [rsp+17Ch] [rbp-34h] BYREF
  int v44; // [rsp+180h] [rbp-30h] BYREF
  int v45; // [rsp+184h] [rbp-2Ch] BYREF
  int v46; // [rsp+188h] [rbp-28h] BYREF
  int v47; // [rsp+18Ch] [rbp-24h] BYREF
  __int64 v48; // [rsp+190h] [rbp-20h] BYREF
  __int64 v49; // [rsp+198h] [rbp-18h] BYREF
  __int64 v50; // [rsp+1A0h] [rbp-10h] BYREF
  LPCWSTR pszPath; // [rsp+1A8h] [rbp-8h] BYREF
  __int64 v52; // [rsp+1B0h] [rbp+0h]
  __int64 v53; // [rsp+1B8h] [rbp+8h]
  const WCHAR *v54; // [rsp+1C0h] [rbp+10h] BYREF
  __int64 v55; // [rsp+1C8h] [rbp+18h]
  __int64 v56; // [rsp+1D0h] [rbp+20h]
  __int64 v57; // [rsp+1D8h] [rbp+28h] BYREF
  __int64 v58; // [rsp+1E0h] [rbp+30h] BYREF
  __int64 v59; // [rsp+1E8h] [rbp+38h] BYREF
  __int64 v60; // [rsp+1F0h] [rbp+40h] BYREF
  __int64 v61; // [rsp+1F8h] [rbp+48h] BYREF
  __int64 v62; // [rsp+200h] [rbp+50h] BYREF
  __int64 v63; // [rsp+208h] [rbp+58h] BYREF
  __int64 v64; // [rsp+210h] [rbp+60h] BYREF
  __int64 v65; // [rsp+218h] [rbp+68h] BYREF
  __int64 v66; // [rsp+220h] [rbp+70h] BYREF
  __int128 v67; // [rsp+228h] [rbp+78h] BYREF
  __int128 v68; // [rsp+238h] [rbp+88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+D8h]

  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v54);
  v55 = -1LL;
  v56 = -1LL;
  ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(a2, (struct IApplicationView *)&v54, v10);
  pszPath = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v11 = (*a2)[17];
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v52 = -1LL;
  v53 = -1LL;
  ((void (__fastcall *)(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *), LPCWSTR *))v11)(
    a2,
    &pszPath);
  v33 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a3 + 24LL))(a3, &v33);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18F,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v12);
  v68 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 88LL))(a3, &v68);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x192,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v13);
  v67 = 0LL;
  v14 = ((__int64 (__fastcall *)(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *), __int128 *))(*a2)[16])(
          a2,
          &v67);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x195,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v14);
  v32 = 0;
  v41 = 0LL;
  v15 = (*a2)[13];
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
  if ( v15((ApplicationViewTraceLoggingHelpers *)a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v41) >= 0 )
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 32LL))(v41, &v32);
  v16 = *(_QWORD *)(a1 + 48);
  v17 = *(_DWORD *)(v16 + 76);
  if ( v17 >= 0 || v17 != *(_DWORD *)(v16 + 88) || (v18 = v16 + 80, v16 == -80) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v26 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v24,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v26 > 5u )
    {
      v36 = v67;
      v35 = v32;
      v31[0] = a6;
      v34 = a5;
      v30 = a4;
      v40 = v68;
      v39 = v33;
      v50 = (__int64)SQM::CensorAppID(pszPath, v25);
      v27 = &LocaleName;
      if ( v54 )
        v27 = v54;
      v49 = (__int64)v27;
      CurrentThreadId = GetCurrentThreadId();
      v28 = *(_QWORD *)(a1 + 48);
      v37 = *(_DWORD *)(v28 + 76);
      v48 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v26,
        (unsigned __int8 *)dword_1806CA047,
        (const GUID *)(v28 + 8),
        v29,
        (__int64)&v48,
        (__int64)&v37,
        (__int64)&CurrentThreadId,
        (const WCHAR **)&v49,
        (const WCHAR **)&v50,
        (__int64)&v39,
        (__int64)&v40,
        (__int64)&v40 + 4,
        (__int64)&v40 + 8,
        (__int64)&v40 + 12,
        (__int64)&v30,
        (__int64)&v34,
        (__int64)v31,
        (__int64)&v35,
        (__int64)&v36,
        (__int64)&v36 + 4,
        (__int64)&v36 + 8,
        (__int64)&v36 + 12);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v21 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v19,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v21 > 5u )
    {
      v42 = HIDWORD(v67);
      v43 = DWORD2(v67);
      v44 = DWORD1(v67);
      v45 = v67;
      v46 = v32;
      v30 = a6;
      v47 = a5;
      v31[0] = a4;
      v37 = HIDWORD(v68);
      CurrentThreadId = DWORD2(v68);
      v39 = DWORD1(v68);
      *(_QWORD *)&v40 = __PAIR64__(v33, v68);
      v57 = (__int64)SQM::CensorAppID(pszPath, v20);
      v23 = &LocaleName;
      if ( v54 )
        v23 = v54;
      v58 = (__int64)v23;
      v59 = *(_QWORD *)(v18 + 48);
      DWORD2(v40) = *(_DWORD *)(v18 + 68);
      HIDWORD(v40) = *(_DWORD *)(v18 + 16);
      v60 = *(_QWORD *)(v18 + 120);
      v61 = *(_QWORD *)(v18 + 112);
      v34 = *(_DWORD *)(v18 + 104);
      v62 = *(_QWORD *)(v18 + 96);
      v63 = *(_QWORD *)(v18 + 88);
      v35 = *(_DWORD *)(v18 + 80);
      v64 = *(_QWORD *)(v18 + 72);
      LODWORD(v36) = *(_DWORD *)(v18 + 32);
      v65 = *(_QWORD *)(v18 + 24);
      DWORD1(v36) = *(_DWORD *)v18;
      v66 = *(_QWORD *)(v18 + 128);
      DWORD2(v36) = *(_DWORD *)(v18 + 64);
      v48 = *(_QWORD *)(v18 + 56);
      HIDWORD(v36) = *(_DWORD *)(v18 + 8);
      v49 = 0x1000000LL;
      v50 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v21,
        (unsigned __int8 *)dword_1806C9E31,
        (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
        v22,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v36 + 12,
        (const wchar_t **)&v48,
        (__int64)&v36 + 8,
        (const wchar_t **)&v66,
        (__int64)&v36 + 4,
        (const WCHAR **)&v65,
        (__int64)&v36,
        (const wchar_t **)&v64,
        (__int64)&v35,
        (const wchar_t **)&v63,
        (const WCHAR **)&v62,
        (__int64)&v34,
        (const wchar_t **)&v61,
        (const WCHAR **)&v60,
        (__int64)&v40 + 12,
        (__int64)&v40 + 8,
        (const wchar_t **)&v59,
        (const WCHAR **)&v58,
        (const WCHAR **)&v57,
        (__int64)&v40 + 4,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&CurrentThreadId,
        (__int64)&v37,
        (__int64)v31,
        (__int64)&v47,
        (__int64)&v30,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v42);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v54);
}
