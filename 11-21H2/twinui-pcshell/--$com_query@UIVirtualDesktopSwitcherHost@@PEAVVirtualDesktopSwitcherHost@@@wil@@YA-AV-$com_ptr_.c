/*
 * XREFs of ??$com_query@UIVirtualDesktopSwitcherHost@@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_exception_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x180606334
 * Callers:
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x1801E9550 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_query<IVirtualDesktopSwitcherHost,VirtualDesktopSwitcherHost *>(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  v4 = (**v3)(v3, &GUID_1be71764_e771_4442_b78f_eda2c7f067f3, a1);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17F8,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a1;
}
