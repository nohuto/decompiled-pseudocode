/*
 * XREFs of ??$?4VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@XX@?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@@1@@Z @ 0x180198CCC
 * Callers:
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005F2A8 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void (__fastcall ****__fastcall wistd::unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>::operator=<SearchBoxOnTaskbarSearchAppPositioner,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositioner>,void,void>(
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
