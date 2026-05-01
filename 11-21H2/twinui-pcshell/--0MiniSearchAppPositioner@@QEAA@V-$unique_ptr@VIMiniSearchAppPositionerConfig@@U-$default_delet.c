/*
 * XREFs of ??0MiniSearchAppPositioner@@QEAA@V?$unique_ptr@VIMiniSearchAppPositionerConfig@@U?$default_delete@VIMiniSearchAppPositionerConfig@@@wistd@@@wistd@@@Z @ 0x18005F070
 * Callers:
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VIMiniSearchAppPositioner@@U?$default_delete@VIMiniSearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005EFD8 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VIMiniSearchAppPositioner@@U-$default_delete@VIMin.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall MiniSearchAppPositioner::MiniSearchAppPositioner(_QWORD *a1, _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx

  a1[1] = 0LL;
  *a1 = &MiniSearchAppPositioner::`vftable';
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
