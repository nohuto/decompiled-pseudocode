/*
 * XREFs of ?GetCursorBroker@DWMInputRouter@@UEAAJPEAPEAUICursorBroker@@@Z @ 0x180053F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::GetCursorBroker(DWMInputRouter *this, struct ICursorBroker **a2)
{
  struct ICursorBroker *v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v2 = (struct ICursorBroker *)*((_QWORD *)this + 33);
    *a2 = v2;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v2 + 8LL))(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x700,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
