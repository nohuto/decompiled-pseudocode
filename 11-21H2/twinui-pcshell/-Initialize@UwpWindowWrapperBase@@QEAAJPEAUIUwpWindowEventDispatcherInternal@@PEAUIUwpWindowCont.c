/*
 * XREFs of ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@@Z @ 0x1804153F4
 * Callers:
 *     ??0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@@Z @ 0x180403B90 (--0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@Uwp.c)
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@@Z @ 0x1804051E4 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 * Callees:
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18009C284 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z @ 0x18009C30C (--$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180139854 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18014D6A4 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIUwpWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1803FFBF0 (--4-$com_ptr_t@UIUwpWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@P.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18040DE9C (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_02c18762fafac8f58346267f5d28b7a5___ @ 0x18040F188 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_02c18762fafac8f58346267f5d28b7a5.c)
 */

// Hidden C++ exception states: #wind=2
__int64 UwpWindowWrapperBase::Initialize(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // rbx
  _DWORD *v13; // rax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  va_list v16; // [rsp+30h] [rbp-30h]
  va_list v17; // [rsp+38h] [rbp-28h]
  __int128 *v18; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  const WCHAR *v20; // [rsp+80h] [rbp+20h] BYREF
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
  va_list va4; // [rsp+C8h] [rbp+68h] BYREF

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
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2);
  RmActivityImportanceInitialize(a1 + 244);
  v6 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *(_DWORD *)(a1 + 320) = v23;
  *(_DWORD *)(a1 + 344) = v25;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 120),
    v26);
  wil::com_ptr_t<IUwpWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)(a1 + 272), a2);
  if ( v29 )
    v7 = Windows::Internal::String::_InitializeHelper((HSTRING *)(a1 + 312), v29);
  else
    v7 = -2147467261;
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x73,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      v15);
  *(_QWORD *)&v15 = off_180657A20;
  *((_QWORD *)&v15 + 1) = a1;
  v18 = &v15;
  v29 = (unsigned __int16 *)&v15;
  std::function<void (bool)>::operator=(a1 + 392, (__int64)&v15);
  std::_Func_class<void,bool>::_Tidy((__int64)&v15, v8);
  *(_QWORD *)&v15 = a1;
  va_copy(*((va_list *)&v15 + 1), va);
  va_copy(v16, va2);
  va_copy(v17, va4);
  CurrentThreadId = GetCurrentThreadId();
  v11 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_02c18762fafac8f58346267f5d28b7a5___(
          v10,
          CurrentThreadId,
          &v15);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBF,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v11,
      v15);
  v12 = a1 + 16;
  v29 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 280LL))(v12);
  v20 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 272LL))(v12);
  v13 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 288LL))(v12, (__int64 *)va1);
  ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int,unsigned short const *,unsigned short const *>(
    v13,
    &v20,
    (const WCHAR **)va3);
  return 0LL;
}
