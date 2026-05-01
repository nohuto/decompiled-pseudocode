/*
 * XREFs of ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009CA08
 * Callers:
 *     ?UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009AD70 (-UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs.c)
 *     ?UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009C540 (-UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedE.c)
 *     _lambda_386f393653fa3b324229df568a487d77_::operator() @ 0x1801F4B40 (_lambda_386f393653fa3b324229df568a487d77_--operator().c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804CFCC0 (-ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEn.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall UwpWindowEventDispatcher::GetCachedView(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // r14
  _QWORD *i; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  char v10; // di
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v6 = *(_QWORD **)(a1 + 392);
  for ( i = *(_QWORD **)(a1 + 384);
        i != v6 && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 256LL))(*i) != a3;
        ++i )
  {
    ;
  }
  if ( i == *(_QWORD **)(a1 + 392) )
  {
    v9 = (__int64 *)&v13;
    v8 = 0LL;
    v10 = 6;
  }
  else
  {
    v8 = *i;
    if ( *i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*i);
    v9 = &v12;
    v10 = 5;
  }
  *v9 = 0LL;
  *a2 = v8;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
  }
  if ( (v10 & 1) != 0 && v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return a2;
}
