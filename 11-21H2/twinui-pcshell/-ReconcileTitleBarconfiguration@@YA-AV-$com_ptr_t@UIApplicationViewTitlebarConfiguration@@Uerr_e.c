/*
 * XREFs of ?ReconcileTitleBarconfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@AEBUAppTitlebarConfiguration@@PEAUIApplicationViewTitlebarConfiguration@@W4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x1800F1BD8
 * Callers:
 *     ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800F1880 (-SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfig.c)
 * Callees:
 *     ?CloneTitleBarConfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800F1C34 (-CloneTitleBarConfiguration@@YA-AV-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_excep.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ReconcileTitleBarconfiguration(_QWORD *a1, _BYTE *a2, __int64 a3, char a4)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+58h] [rbp+20h] BYREF

  CloneTitleBarConfiguration(a1, a3);
  if ( (a4 & 1) == 0 && *a2 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, bool))(*(_QWORD *)*a1 + 24LL))(*a1, a2[1] == 0);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x594,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v8,
        1);
    v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 112LL))(*a1, &v13);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x597,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v9,
        1);
    if ( a2[1] )
      v10 = v13 | 0x100;
    else
      v10 = v13 & 0xFFFFFEFF;
    v13 = v10;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 104LL))(*a1);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x599,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v11,
        1);
  }
  return a1;
}
