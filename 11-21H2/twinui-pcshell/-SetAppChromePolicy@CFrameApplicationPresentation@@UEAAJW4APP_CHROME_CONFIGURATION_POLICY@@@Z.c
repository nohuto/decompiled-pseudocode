/*
 * XREFs of ?SetAppChromePolicy@CFrameApplicationPresentation@@UEAAJW4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x180175F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetAppChromePolicy(__int64 a1, int a2)
{
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 596);
  *(_DWORD *)(a1 + 596) = a2;
  if ( v3 != a2 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, *(_QWORD *)(a1 + 568));
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4EA,
        (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v5,
        v7);
    if ( *(_QWORD *)(a1 + 584) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4EE,
          (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v6,
          v7);
    }
  }
  return 0LL;
}
