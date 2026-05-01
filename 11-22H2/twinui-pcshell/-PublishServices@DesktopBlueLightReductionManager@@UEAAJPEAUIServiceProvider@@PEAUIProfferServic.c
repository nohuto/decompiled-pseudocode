/*
 * XREFs of ?PublishServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801B5770
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvider@@@Z @ 0x1800A268C (--4-$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvid.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::PublishServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *, struct IProfferService *))(*(_QWORD *)v5 + 24LL))(
           v5,
           a2,
           a3);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6F,
        (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v6,
        v8);
    wil::com_ptr_t<IServiceProvider,wil::err_exception_policy>::operator=((__int64 *)this + 17, (__int64)a2);
  }
  return 0LL;
}
