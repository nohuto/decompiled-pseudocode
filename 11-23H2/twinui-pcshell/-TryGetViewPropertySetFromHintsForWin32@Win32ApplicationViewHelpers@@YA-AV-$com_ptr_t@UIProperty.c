/*
 * XREFs of ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x180097748
 * Callers:
 *     _lambda_9cd1b560a470dbb5c6e1d5da28bd3866_::operator() @ 0x1800974D4 (_lambda_9cd1b560a470dbb5c6e1d5da28bd3866_--operator().c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802CF350 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1804AE684 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$CoCreateInstance@UIActivationHints@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIActivationHints@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180097A5C (--$CoCreateInstance@UIActivationHints@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_t@UIActiv.c)
 *     ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180097ACC (-GetAppViewFileName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??$com_query@UIApplicationView@@AEAPEAUIWin32ApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIWin32ApplicationView@@@Z @ 0x1801D03A4 (--$com_query@UIApplicationView@@AEAPEAUIWin32ApplicationView@@@wil@@YA-AV-$com_ptr_t@UIApplicati.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, __int64); // rdi
  __int64 v7; // rdx
  void *v8; // rcx
  void *v9; // rax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int128 *, GUID *, __int64 *); // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-88h]
  __int128 v17; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  __int128 v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+68h] [rbp-40h]
  __int128 v22; // [rsp+70h] [rbp-38h] BYREF
  __int64 v23; // [rsp+80h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v25; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+20h] BYREF

  v25 = a2;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v19);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3E,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
      (const char *)(unsigned int)v4,
      v16);
  v26 = 0LL;
  wil::com_query<IApplicationView,IWin32ApplicationView * &>(v18, &v25);
  *(_QWORD *)&v17 = 0LL;
  v5 = v18[0];
  v6 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18[0] + 136LL);
  v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v17);
  v6(v5, v7);
  Win32ApplicationViewHelpers::GetAppViewFileName((char *)&v17 + 8, a2);
  v8 = (void *)v17;
  if ( !(_QWORD)v17 )
  {
    v9 = (void *)*((_QWORD *)&v17 + 1);
    if ( !*((_QWORD *)&v17 + 1) )
      goto LABEL_9;
  }
  wil::CoCreateInstance<IActivationHints,wil::err_exception_policy>(&v25);
  v20 = v17;
  v21 = 0LL;
  v10 = v25;
  v11 = *(__int64 (__fastcall **)(__int64, __int128 *, GUID *, __int64 *))(*(_QWORD *)v25 + 32LL);
  v12 = v26;
  v26 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v22 = v20;
  v23 = v21;
  v13 = v11(v10, &v22, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, &v26);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5B,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
      (const char *)(unsigned int)v13,
      v16);
  v14 = v26;
  if ( !v26 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    v9 = (void *)*((_QWORD *)&v17 + 1);
    v8 = (void *)v17;
LABEL_9:
    if ( v9 )
    {
      CoTaskMemFree(v9);
      v8 = (void *)v17;
    }
    if ( v8 )
      CoTaskMemFree(v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v18);
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v26);
    *a1 = 0LL;
    return a1;
  }
  v26 = 0LL;
  *a1 = v14;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
  if ( *((_QWORD *)&v17 + 1) )
    CoTaskMemFree(*((LPVOID *)&v17 + 1));
  if ( (_QWORD)v17 )
    CoTaskMemFree((LPVOID)v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v18);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v26);
  return a1;
}
