/*
 * XREFs of ??0SearchBoxOnTaskbarSearchAppPositioner@@QEAA@V?$unique_ptr@VISearchAppPositionerConfig@@U?$default_delete@VISearchAppPositionerConfig@@@wistd@@@wistd@@@Z @ 0x180171FC8
 * Callers:
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x180171F08 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall SearchBoxOnTaskbarSearchAppPositioner::SearchBoxOnTaskbarSearchAppPositioner(_QWORD *a1, _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx

  a1[1] = 0LL;
  *a1 = &SearchBoxOnTaskbarSearchAppPositioner::`vftable';
  v3 = (void (__fastcall ***)(_QWORD, __int64))*a2;
  *a2 = 0LL;
  v5 = (void (__fastcall ***)(_QWORD, __int64))a1[1];
  a1[1] = v3;
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*a2;
  *a2 = 0LL;
  if ( v6 )
    (**v6)(v6, 1LL);
  return a1;
}
