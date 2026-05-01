/*
 * XREFs of ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x180667618
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18066817C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 * Callees:
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800175CC (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180110428 (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1805BC520 (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U4@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U5@U2@U2@U2@U2@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456644444AEBU?$_tlgWrapperByVal@$00@@47444447@Z @ 0x1806666D4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1806666D4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U4@U2@U2@U2@U2@U2@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@544444AEBU?$_tlgWrapperByVal@$00@@46444446@Z @ 0x180666CB0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U3@U2@U2@U2@U2@U2.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSnapComponentTelemetry::ProcessView::Stop(
        __int64 a1,
        int (__fastcall ***a2)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *),
        __int64 a3,
        char a4,
        int a5,
        char a6,
        char a7)
{
  unsigned __int16 **v11; // r8
  int (__fastcall *v12)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *); // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int (__fastcall *v16)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *); // rbx
  int *v17; // rax
  int v18; // ecx
  int *v19; // rbx
  __int64 v20; // rcx
  const unsigned __int16 *v21; // rdx
  _DWORD *v22; // rdi
  __int64 v23; // r9
  const WCHAR *v24; // rcx
  __int64 v25; // rcx
  const unsigned __int16 *v26; // rdx
  _DWORD *v27; // rbx
  const WCHAR *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r9
  char v31; // [rsp+140h] [rbp-80h] BYREF
  char v32; // [rsp+141h] [rbp-7Fh] BYREF
  _BYTE v33[2]; // [rsp+142h] [rbp-7Eh] BYREF
  int v34; // [rsp+144h] [rbp-7Ch] BYREF
  unsigned int v35; // [rsp+148h] [rbp-78h] BYREF
  int v36; // [rsp+14Ch] [rbp-74h] BYREF
  __int64 v37; // [rsp+150h] [rbp-70h] BYREF
  int v38; // [rsp+158h] [rbp-68h] BYREF
  int v39; // [rsp+15Ch] [rbp-64h] BYREF
  int v40; // [rsp+160h] [rbp-60h] BYREF
  int v41; // [rsp+164h] [rbp-5Ch] BYREF
  DWORD CurrentThreadId; // [rsp+168h] [rbp-58h] BYREF
  unsigned int v43; // [rsp+16Ch] [rbp-54h] BYREF
  __int64 v44; // [rsp+170h] [rbp-50h] BYREF
  __int64 v45; // [rsp+178h] [rbp-48h] BYREF
  __int64 v46; // [rsp+180h] [rbp-40h] BYREF
  int v47; // [rsp+188h] [rbp-38h] BYREF
  int v48; // [rsp+18Ch] [rbp-34h] BYREF
  int v49; // [rsp+190h] [rbp-30h] BYREF
  int v50; // [rsp+194h] [rbp-2Ch] BYREF
  int v51; // [rsp+198h] [rbp-28h] BYREF
  int v52; // [rsp+19Ch] [rbp-24h] BYREF
  __int64 v53; // [rsp+1A0h] [rbp-20h] BYREF
  __int64 v54; // [rsp+1A8h] [rbp-18h] BYREF
  __int64 v55; // [rsp+1B0h] [rbp-10h] BYREF
  const WCHAR *v56; // [rsp+1B8h] [rbp-8h] BYREF
  __int64 v57; // [rsp+1C0h] [rbp+0h]
  __int64 v58; // [rsp+1C8h] [rbp+8h]
  LPCWSTR pszPath; // [rsp+1D0h] [rbp+10h] BYREF
  __int64 v60; // [rsp+1D8h] [rbp+18h]
  __int64 v61; // [rsp+1E0h] [rbp+20h]
  __int64 v62; // [rsp+1E8h] [rbp+28h] BYREF
  __int64 v63; // [rsp+1F0h] [rbp+30h] BYREF
  __int64 v64; // [rsp+1F8h] [rbp+38h] BYREF
  __int64 v65; // [rsp+200h] [rbp+40h] BYREF
  __int64 v66; // [rsp+208h] [rbp+48h] BYREF
  __int64 v67; // [rsp+210h] [rbp+50h] BYREF
  __int64 v68; // [rsp+218h] [rbp+58h] BYREF
  __int64 v69; // [rsp+220h] [rbp+60h] BYREF
  __int64 v70; // [rsp+228h] [rbp+68h] BYREF
  __int64 v71; // [rsp+230h] [rbp+70h] BYREF
  __int128 v72; // [rsp+238h] [rbp+78h] BYREF
  __int128 v73; // [rsp+248h] [rbp+88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+D8h]

  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v56);
  v57 = -1LL;
  v58 = -1LL;
  ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(a2, (struct IApplicationView *)&v56, v11);
  pszPath = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v12 = (*a2)[17];
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v60 = -1LL;
  v61 = -1LL;
  ((void (__fastcall *)(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *), LPCWSTR *))v12)(
    a2,
    &pszPath);
  v35 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a3 + 24LL))(a3, &v35);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CE,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v13);
  v73 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 88LL))(a3, &v73);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D1,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v14);
  v72 = 0LL;
  v15 = ((__int64 (__fastcall *)(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *), __int128 *))(*a2)[16])(
          a2,
          &v72);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D4,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v15);
  v34 = 0;
  v46 = 0LL;
  v16 = (*a2)[13];
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v46);
  if ( v16((ApplicationViewTraceLoggingHelpers *)a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v46) >= 0 )
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v46 + 32LL))(v46, &v34);
  v17 = *(int **)(a1 + 48);
  v18 = v17[19];
  if ( v18 >= 0 || v18 != v17[22] || (v19 = v17 + 20, v17 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v27 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v25,
                      (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v27 > 5u )
    {
      v33[0] = a7;
      v45 = *((_QWORD *)&v72 + 1);
      v36 = DWORD1(v72);
      v40 = v72;
      v39 = v34;
      v32 = a6;
      v38 = a5;
      v31 = a4;
      v37 = *((_QWORD *)&v73 + 1);
      v44 = v73;
      v43 = v35;
      v55 = (__int64)SQM::CensorAppID(pszPath, v26);
      v28 = &LocaleName;
      if ( v56 )
        v28 = v56;
      v53 = (__int64)v28;
      CurrentThreadId = GetCurrentThreadId();
      v29 = *(_QWORD *)(a1 + 48);
      v41 = *(_DWORD *)(v29 + 76);
      v54 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v27,
        (unsigned __int8 *)dword_180873169,
        (const GUID *)(v29 + 8),
        v30,
        (__int64)&v54,
        (__int64)&v41,
        (__int64)&CurrentThreadId,
        (const WCHAR **)&v53,
        (const WCHAR **)&v55,
        (__int64)&v43,
        (__int64)&v44,
        (__int64)&v44 + 4,
        (__int64)&v37,
        (__int64)&v37 + 4,
        (__int64)&v31,
        (__int64)&v38,
        (__int64)&v32,
        (__int64)&v39,
        (__int64)&v40,
        (__int64)&v36,
        (__int64)&v45,
        (__int64)&v45 + 4,
        (__int64)v33);
    }
  }
  else
  {
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v22 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v20,
                      (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v22 > 5u )
    {
      v31 = a7;
      v49 = HIDWORD(v72);
      v50 = DWORD2(v72);
      v51 = DWORD1(v72);
      v52 = v72;
      v47 = v34;
      v32 = a6;
      v48 = a5;
      v33[0] = a4;
      v41 = HIDWORD(v73);
      CurrentThreadId = DWORD2(v73);
      v43 = DWORD1(v73);
      v44 = __PAIR64__(v35, v73);
      v65 = (__int64)SQM::CensorAppID(pszPath, v21);
      v24 = &LocaleName;
      if ( v56 )
        v24 = v56;
      v69 = (__int64)v24;
      v70 = *((_QWORD *)v19 + 6);
      LODWORD(v37) = v19[17];
      HIDWORD(v37) = v19[4];
      v62 = *((_QWORD *)v19 + 15);
      v63 = *((_QWORD *)v19 + 14);
      v38 = v19[26];
      v64 = *((_QWORD *)v19 + 12);
      v71 = *((_QWORD *)v19 + 11);
      v39 = v19[20];
      v66 = *((_QWORD *)v19 + 9);
      v40 = v19[8];
      v67 = *((_QWORD *)v19 + 3);
      v36 = *v19;
      v68 = *((_QWORD *)v19 + 16);
      LODWORD(v45) = v19[16];
      v54 = *((_QWORD *)v19 + 7);
      HIDWORD(v45) = v19[2];
      v53 = 0x1000000LL;
      v55 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v22,
        (unsigned __int8 *)dword_18087329A,
        (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
        v23,
        (__int64)&v55,
        (__int64)&v53,
        (__int64)&v45 + 4,
        (const wchar_t **)&v54,
        (__int64)&v45,
        (const wchar_t **)&v68,
        (__int64)&v36,
        (const WCHAR **)&v67,
        (__int64)&v40,
        (const wchar_t **)&v66,
        (__int64)&v39,
        (const wchar_t **)&v71,
        (const WCHAR **)&v64,
        (__int64)&v38,
        (const wchar_t **)&v63,
        (const WCHAR **)&v62,
        (__int64)&v37 + 4,
        (__int64)&v37,
        (const wchar_t **)&v70,
        (const WCHAR **)&v69,
        (const WCHAR **)&v65,
        (__int64)&v44 + 4,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&CurrentThreadId,
        (__int64)&v41,
        (__int64)v33,
        (__int64)&v48,
        (__int64)&v32,
        (__int64)&v47,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v31);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v46);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v56);
}
