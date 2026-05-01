/*
 * XREFs of ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x1804EA780
 * Callers:
 *     ??0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x1804DB044 (--0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@A.c)
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x1804DC96C (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A18F0 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800A1B00 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z @ 0x1800A1BC0 (--$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1804D7414 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fd28b8cfd5332ad6b2a822ae0574fab8___ @ 0x1804E5624 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_fd28b8cfd5332ad6b2a822ae0574fab8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowWrapperBase::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        unsigned __int16 *a9,
        char a10)
{
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  DWORD CurrentThreadId; // eax
  unsigned int v19; // ecx
  int v20; // eax
  __int64 v21; // rbx
  _QWORD v23[3]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v24[9]; // [rsp+38h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v26; // [rsp+A0h] [rbp+20h] BYREF

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2);
  RmActivityImportanceInitialize(a1 + 252);
  v14 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(a1 + 320) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  *(_DWORD *)(a1 + 328) = a5;
  *(_DWORD *)(a1 + 352) = a6;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 128),
    a7);
  wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)(a1 + 280), a2);
  if ( a9 )
    v16 = Windows::Internal::String::_InitializeHelper((HSTRING *)(a1 + 312), a9);
  else
    v16 = -2147467261;
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x73,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v16,
      v23[0]);
  v24[0] = off_1807DFCF8;
  v24[1] = a1;
  v24[7] = v24;
  a9 = (unsigned __int16 *)v24;
  std::function<void (void)>::operator=(a1 + 400, (__int64)v24);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v24,
    v17);
  v23[0] = a1;
  v23[1] = &a8;
  v23[2] = &a10;
  CurrentThreadId = GetCurrentThreadId();
  v20 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fd28b8cfd5332ad6b2a822ae0574fab8___(
          v19,
          CurrentThreadId,
          (__int64)v23);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC4,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v20,
      v23[0]);
  v21 = a1 + 16;
  a9 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 280LL))(v21);
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 272LL))(v21);
  a5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 288LL))(v21);
  ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int,unsigned short const *,unsigned short const *>(
    &a5,
    &v26,
    (__int64 *)&a9);
  return 0LL;
}
