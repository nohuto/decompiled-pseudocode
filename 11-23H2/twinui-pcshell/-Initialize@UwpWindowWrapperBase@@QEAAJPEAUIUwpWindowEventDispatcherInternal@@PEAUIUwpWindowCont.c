/*
 * XREFs of ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@_K@Z @ 0x1800A16BC
 * Callers:
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x1800A1100 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ??0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x1804E0E50 (--0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@Uwp.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A18F0 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 *     ??4?$com_ptr_t@UIUwpWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A1940 (--4-$com_ptr_t@UIUwpWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@P.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c0abd125640d8caf2efc015e030a0e36___ @ 0x1800A1990 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c0abd125640d8caf2efc015e030a0e36.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800A1B00 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z @ 0x1800A1BC0 (--$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 UwpWindowWrapperBase::Initialize(va_list a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  DWORD CurrentThreadId; // eax
  __int64 v10; // rcx
  int v11; // eax
  va_list v12; // rbx
  __int64 v13; // rax
  __int64 (__fastcall **v15)(); // [rsp+20h] [rbp-40h] BYREF
  va_list v16; // [rsp+28h] [rbp-38h]
  va_list v17; // [rsp+30h] [rbp-30h]
  va_list v18; // [rsp+38h] [rbp-28h]
  __int64 (__fastcall ***v19)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+98h] [rbp+38h]
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF
  va_list va1; // [rsp+A0h] [rbp+40h]
  __int64 v25; // [rsp+A8h] [rbp+48h]
  __int64 v26; // [rsp+B0h] [rbp+50h]
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF
  va_list va2; // [rsp+B8h] [rbp+58h]
  unsigned __int16 *v29; // [rsp+C0h] [rbp+60h] BYREF
  va_list va3; // [rsp+C0h] [rbp+60h]
  __int64 v31; // [rsp+C8h] [rbp+68h] BYREF
  va_list va4; // [rsp+C8h] [rbp+68h]
  __int64 (__fastcall ***v33)(); // [rsp+D0h] [rbp+70h] BYREF
  va_list va5; // [rsp+D0h] [rbp+70h]
  va_list va6; // [rsp+D8h] [rbp+78h] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, _QWORD);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v27 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v29 = va_arg(va4, unsigned __int16 *);
  va_copy(va5, va4);
  v31 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v33 = va_arg(va6, __int64 (__fastcall ***)());
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2);
  RmActivityImportanceInitialize(a1 + 252);
  v6 = *((_QWORD *)a1 + 14);
  *((_QWORD *)a1 + 14) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_DWORD *)a1 + 82) = v23;
  *((_DWORD *)a1 + 88) = v25;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    a1 + 128,
    v26);
  *((_QWORD *)a1 + 72) = v33;
  wil::com_ptr_t<IUwpWindowEventDispatcherInternal,wil::err_exception_policy>::operator=(a1 + 280, a2);
  if ( v29 )
    v7 = Windows::Internal::String::_InitializeHelper((Windows::Internal::String *)(a1 + 320), v29);
  else
    v7 = -2147467261;
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      (int)v15);
  v15 = off_1807CCF90;
  v16 = a1;
  v19 = &v15;
  v33 = &v15;
  std::function<void (void)>::operator=(a1 + 400, &v15);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)&v15,
    v8);
  v15 = (__int64 (__fastcall **)())a1;
  va_copy(v16, va);
  va_copy(v17, va2);
  va_copy(v18, va4);
  CurrentThreadId = GetCurrentThreadId();
  v11 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c0abd125640d8caf2efc015e030a0e36___(
          v10,
          CurrentThreadId,
          &v15);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC1,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v11,
      (int)v15);
  v12 = a1 + 16;
  v33 = (__int64 (__fastcall ***)())(*(__int64 (__fastcall **)(va_list))(*(_QWORD *)v12 + 280LL))(v12);
  v29 = (unsigned __int16 *)(*(__int64 (__fastcall **)(va_list))(*(_QWORD *)v12 + 272LL))(v12);
  v13 = (*(__int64 (__fastcall **)(va_list, __int64 *))(*(_QWORD *)v12 + 288LL))(v12, (__int64 *)va1);
  ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int,unsigned short const *,unsigned short const *>(
    v13,
    (unsigned __int16 **)va3,
    (__int64 (__fastcall ****)())va5);
  return 0LL;
}
