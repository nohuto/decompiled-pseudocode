/*
 * XREFs of ?SetCursorShellMagnification@DesktopSystemCursorService@@UEAAJ_KM@Z @ 0x180115DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18010B948 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

void __fastcall __noreturn DesktopSystemCursorService::SetCursorShellMagnification(
        DesktopSystemCursorService *this,
        __int64 a2,
        float a3)
{
  const char *v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::FailFast_UnexpectedMsg(
    retaddr,
    (void *)0x23,
    (int)"onecoreuap\\windows\\moderncore\\Inputv2\\systeminputrouters\\dwm\\components\\cursor\\Service\\inc\\DesktopSys"
         "temCursorService.h",
    "Not expected on Desktop",
    v3);
}
