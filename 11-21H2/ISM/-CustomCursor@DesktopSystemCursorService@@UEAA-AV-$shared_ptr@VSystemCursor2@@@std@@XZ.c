/*
 * XREFs of ?CustomCursor@DesktopSystemCursorService@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@XZ @ 0x1800EE460
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800E3980 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

void __noreturn DesktopSystemCursorService::CustomCursor()
{
  const char *v0; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::FailFast_UnexpectedMsg(
    retaddr,
    (void *)0x4C,
    (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\systeminputrouters\\dwm\\components\\cursor\\Service\\inc\\DesktopSys"
         "temCursorService.h",
    "Not expected on Desktop",
    v0);
}
