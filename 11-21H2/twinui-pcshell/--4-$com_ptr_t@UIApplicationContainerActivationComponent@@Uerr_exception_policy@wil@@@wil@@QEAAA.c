/*
 * XREFs of ??4?$com_ptr_t@UIApplicationContainerActivationComponent@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationContainerActivationComponent@@@Z @ 0x180571718
 * Callers:
 *     ?RuntimeClassInitialize@ApplicationContainerActivationPolicy@@QEAAJPEAUIApplicationContainerActivationComponent@@_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1805741BC (-RuntimeClassInitialize@ApplicationContainerActivationPolicy@@QEAAJPEAUIApplicationContainerActi.c)
 *     ?RuntimeClassInitialize@ApplicationContainerActivationPolicy@@QEAAJPEAUIApplicationContainerActivationComponent@@_NUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18057425C (-RuntimeClassInitialize@ApplicationContainerActivationPolicy@@QEAAJPEAUIApplication_ea_18057425C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IApplicationContainerActivationComponent,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
