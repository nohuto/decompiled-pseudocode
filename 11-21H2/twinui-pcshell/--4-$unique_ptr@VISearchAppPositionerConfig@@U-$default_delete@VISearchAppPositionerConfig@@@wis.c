/*
 * XREFs of ??4?$unique_ptr@VISearchAppPositionerConfig@@U?$default_delete@VISearchAppPositionerConfig@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803A0444
 * Callers:
 *     ??$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositioner@@V?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@wistd@@@wil@@YA?AV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@@wistd@@$$QEAV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@2@@Z @ 0x18019A534 (--$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositioner@@V-$unique_ptr@VSearchBoxOnTaskbar.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void (__fastcall ****__fastcall wistd::unique_ptr<ISearchAppPositionerConfig,wistd::default_delete<ISearchAppPositionerConfig>>::operator=(
        void (__fastcall ****a1)(_QWORD, __int64),
        _QWORD *a2))(_QWORD, __int64)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rax
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    (**v4)(v4, 1LL);
  return a1;
}
