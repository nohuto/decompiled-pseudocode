/*
 * XREFs of ?GetCursor@DesktopSystemCursorService@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@_K@Z @ 0x1800EE490
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800E3980 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

void __noreturn DesktopSystemCursorService::GetCursor()
{
  const char *v0; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::FailFast_UnexpectedMsg(
    retaddr,
    (void *)0x5A,
    (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\systeminputrouters\\dwm\\components\\cursor\\Service\\inc\\DesktopSys"
         "temCursorService.h",
    "Not expected on Desktop",
    v0);
}
