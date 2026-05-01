/*
 * XREFs of ?ShutdownServices@DesktopBlueLightReductionManager@@UEAAJPEAUIProfferService@@@Z @ 0x1801BA290
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::ShutdownServices(
        DesktopBlueLightReductionManager *this,
        struct IProfferService *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, struct IProfferService *))(*(_QWORD *)v2 + 56LL))(v2, a2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD2,
        (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v3,
        v5);
  }
  return 0LL;
}
