/*
 * XREFs of ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803EDC2C
 * Callers:
 *     _lambda_82d632d1a648584daa1116c16f551398_::operator() @ 0x1803EAEB8 (_lambda_82d632d1a648584daa1116c16f551398_--operator().c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803EBF70 (-ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEn.c)
 *     ?UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F6100 (-UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs.c)
 *     ?UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F7500 (-UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedE.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1803EA194 (--0-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowW.c)
 */

__int64 *__fastcall UwpWindowEventDispatcher::GetCachedView(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // r14
  __int64 *i; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rax
  int v10; // ebx
  int v11; // edx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *(__int64 **)(a1 + 376);
  for ( i = *(__int64 **)(a1 + 368);
        i != v3 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*i + 256LL))(*i) != a3;
        ++i )
  {
    ;
  }
  if ( i == *(__int64 **)(a1 + 376) )
  {
    v8 = 0LL;
    v9 = &v13;
    v10 = 0;
    v11 = 2;
  }
  else
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>(
      &v14,
      *i);
    v8 = (__int64)v14;
    v9 = (__int64 *)&v14;
    v11 = 0;
    v10 = 1;
  }
  *v9 = 0LL;
  *a2 = v8;
  if ( v11 )
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
  if ( v10 )
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v14);
  return a2;
}
