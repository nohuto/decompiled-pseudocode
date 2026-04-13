/*
 * XREFs of ??$query@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@@@?$com_ptr_t@UISecondaryTile@StartScreen@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800BD750
 * Callers:
 *     _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800BD954 (_lambda_201f500c0b3e8aa9f89acabd232435e5_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::UI::StartScreen::ISecondaryTile,wil::err_exception_policy>::query<Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_2d7f0d3b_ec36_463b_9f69_d7238d77c122, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
