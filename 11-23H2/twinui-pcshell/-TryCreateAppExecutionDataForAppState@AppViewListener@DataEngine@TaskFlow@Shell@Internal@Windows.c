/*
 * XREFs of ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1802D65F2
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802D6120 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ?GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIAppViewExecutionData@23456@@Z @ 0x1804A3C70 (-GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIApp.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18003B970 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18009658C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180097B94 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180186BAC (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_KPEBG@TaskFlowDataEngineTelemetry@@SAXAEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_K$$QEAPEBG@Z @ 0x1802D5DB8 (--$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ??$try_emplace@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802D6024 (--$try_emplace@$$V@-$map@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppVi.c)
 *     ?Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@@Z @ 0x1802D631E (-Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@.c)
 *     ?SetAppIdInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@W4AppIdKind@Activities@Data@56@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1802D6356 (-SetAppIdInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplication.c)
 *     ?TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAIPEAUHWND__@@PEAUIApplicationView@@_N@Z @ 0x1802D6CCA (-TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x18049CD7C (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1804A3380 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?GetAppViewInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA?AV?$optional@UAppViewInfo@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAUIApplicationView@@@Z @ 0x1804A39A4 (-GetAppViewInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA-AV-$optional@U.c)
 *     ?IsWinRTApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804A3EC8 (-IsWinRTApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA_NPEAUIA.c)
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x1804A4CBC (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(ApplicationViewHelpers *, GUID *, __int64))
{
  RTL_SRWLOCK *v8; // rbx
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *v9; // r12
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 *v12; // rcx
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v13; // rcx
  HWND WindowForView; // r15
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v15; // rcx
  bool v16; // r11
  unsigned int ProcessIdForApplicationView; // eax
  unsigned int v18; // r15d
  unsigned __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 AppIdInfoForApplicationView; // rax
  void **v23; // r13
  int v24; // r13d
  unsigned __int64 v25; // rbx
  int v26; // eax
  unsigned int v27; // r8d
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(__int64, _QWORD, unsigned __int64, struct _FILETIME); // r12
  __int64 v30; // rcx
  HSTRING_HEADER *v31; // rax
  PVOID Reserved1; // rcx
  int v33; // eax
  __int64 v34; // rax
  int v36; // [rsp+20h] [rbp-128h]
  int v37; // [rsp+20h] [rbp-128h]
  _WORD v38[2]; // [rsp+60h] [rbp-E8h] BYREF
  bool IsWinRTApplicationView; // [rsp+64h] [rbp-E4h]
  unsigned int v40; // [rsp+68h] [rbp-E0h]
  LPVOID pv; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+78h] [rbp-D0h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+88h] [rbp-C0h]
  int v45; // [rsp+90h] [rbp-B8h]
  int v46; // [rsp+94h] [rbp-B4h] BYREF
  unsigned int v47; // [rsp+98h] [rbp-B0h]
  const WCHAR *v48; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+A8h] [rbp-A0h] BYREF
  struct _FILETIME v50; // [rsp+B0h] [rbp-98h]
  __int64 v51[3]; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-78h] BYREF
  LPVOID v53; // [rsp+D8h] [rbp-70h]
  HSTRING_HEADER v54; // [rsp+E0h] [rbp-68h] BYREF
  char v55; // [rsp+F8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v47 = a3;
  v48 = (const WCHAR *)a1;
  v51[2] = (__int64)a2;
  v49 = a3;
  v45 = 0;
  v42 = 0LL;
  v38[0] = 0;
  v40 = 0;
  pv = 0LL;
  v8 = (RTL_SRWLOCK *)(a1 + 248);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 248));
  v51[0] = (__int64)v8;
  v9 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)(a1 + 256);
  v10 = *(__int64 **)(a1 + 256);
  v11 = (__int64 *)v10[1];
  v12 = v10;
  while ( !*((_BYTE *)v11 + 25) )
  {
    if ( v11[4] >= (unsigned __int64)a4 )
    {
      v12 = v11;
      v11 = (__int64 *)*v11;
    }
    else
    {
      v11 = (__int64 *)v11[2];
    }
  }
  if ( *((_BYTE *)v12 + 25) || (unsigned __int64)a4 < v12[4] || v12 == v10 )
  {
    SystemTimeAsFileTime.dwLowDateTime = 0;
    ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), struct _FILETIME *))(*a4)[27])(
      a4,
      &SystemTimeAsFileTime);
    if ( SystemTimeAsFileTime.dwLowDateTime != 1 )
    {
      LOBYTE(v38[0]) = 1;
      *a2 = 0LL;
      if ( v8 )
        ReleaseSRWLockExclusive(v8);
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_63;
    }
  }
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a4, (struct IApplicationView *)v10);
  v50 = (struct _FILETIME)WindowForView;
  if ( !WindowForView )
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle();
    HIBYTE(v38[0]) = 1;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(v9, (struct IApplicationView *)a4);
    *a2 = 0LL;
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    if ( pv )
      CoTaskMemFree(pv);
LABEL_63:
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v38);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
    return a2;
  }
  IsWinRTApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::IsWinRTApplicationView(
                             v13,
                             (struct IApplicationView *)a4);
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::GetAppViewInfo(v9, &v54, a4);
  if ( !v55 || !*(_DWORD *)&v54.Reserved.Reserved2[16] )
  {
    if ( a3 != 1 )
    {
      ProcessIdForApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetProcessIdForApplicationView(
                                      v15,
                                      WindowForView,
                                      (struct IApplicationView *)a4,
                                      v16);
      v18 = ProcessIdForApplicationView;
      v40 = ProcessIdForApplicationView;
      if ( !ProcessIdForApplicationView )
        goto LABEL_23;
      wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
        &SystemTimeAsFileTime,
        (__int64)a4);
      std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::try_emplace<>(
        (__int64 *)v9,
        (__int64)&v52,
        (__int64 *)&SystemTimeAsFileTime,
        v19);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&SystemTimeAsFileTime);
      *(_DWORD *)(v52 + 80) = v18;
    }
    ProcessIdForApplicationView = v40;
    goto LABEL_23;
  }
  ProcessIdForApplicationView = *(_DWORD *)&v54.Reserved.Reserved2[16];
  v40 = *(_DWORD *)&v54.Reserved.Reserved2[16];
LABEL_23:
  v20 = -1LL;
  if ( v55
    && LODWORD(v54.Reserved.Reserved1) != -1
    && (v21 = *(_QWORD *)&v54.Reserved.Reserved2[8], *(_QWORD *)(*(_QWORD *)&v54.Reserved.Reserved2[8] + 16LL)) )
  {
    if ( *(_QWORD *)(*(_QWORD *)&v54.Reserved.Reserved2[8] + 24LL) >= 8uLL )
      v21 = **(_QWORD **)&v54.Reserved.Reserved2[8];
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &SystemTimeAsFileTime,
      v21,
      -1LL);
    v45 = 4;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      *(void **)&SystemTimeAsFileTime);
  }
  else
  {
    AppIdInfoForApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetAppIdInfoForApplicationView(
                                    v15,
                                    &v52,
                                    a4,
                                    ProcessIdForApplicationView);
    SystemTimeAsFileTime = (struct _FILETIME)AppIdInfoForApplicationView;
    v23 = (void **)(AppIdInfoForApplicationView + 8);
    if ( &pv != (LPVOID *)(AppIdInfoForApplicationView + 8) )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        *v23);
      *v23 = 0LL;
      AppIdInfoForApplicationView = (__int64)SystemTimeAsFileTime;
    }
    v24 = *(_DWORD *)AppIdInfoForApplicationView;
    if ( v53 )
      CoTaskMemFree(v53);
    if ( !pv || v24 == -1 )
    {
      HIBYTE(v38[0]) = 1;
      Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(v9, (struct IApplicationView *)a4);
      *a2 = 0LL;
      if ( v8 )
        ReleaseSRWLockExclusive(v8);
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_63;
    }
    SystemTimeAsFileTime = (struct _FILETIME)pv;
    do
      ++v20;
    while ( *((_WORD *)pv + v20) );
    v44 = v20;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::SetAppIdInfo(
      (__int64 *)v9,
      (__int64)a4,
      v24,
      (void **)&SystemTimeAsFileTime);
  }
  if ( v47 == 1 )
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(v9, (struct IApplicationView *)a4);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v25 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v51[0] = v25;
  SystemTimeAsFileTime = v50;
  v46 = 0;
  v26 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), int *))(*a4)[43])(
          a4,
          &v46);
  if ( v26 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x128,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v26,
      v36);
  v28 = *((_QWORD *)v48 + 34);
  v29 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, struct _FILETIME))(*(_QWORD *)v28 + 48LL);
  v30 = v42;
  v42 = 0LL;
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( pv )
  {
    v48 = (const WCHAR *)pv;
    v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v54, &v48, v27);
    v45 |= 2u;
    Reserved1 = v31[1].Reserved.Reserved1;
  }
  else
  {
    LODWORD(Reserved1) = 0;
  }
  v37 = (int)Reserved1;
  v33 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v29)(v28, v47, v25, v50);
  if ( v33 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x133,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v33,
      v37);
  v48 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath((LPCWSTR)pv);
  TaskFlowDataEngineTelemetry::AppExecutionDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::AppViewExecutionState &,__int64 &,unsigned __int64 &,unsigned short const *>(
    &v49,
    v51,
    (__int64 *)&SystemTimeAsFileTime,
    (__int64 *)&v48);
  LOBYTE(v38[0]) = 1;
  if ( pv )
    CoTaskMemFree(pv);
  ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v38);
  v34 = v42;
  v42 = 0LL;
  *a2 = v34;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
  return a2;
}
