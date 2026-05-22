/*
 * XREFs of ?SetEnabled@SharedLight@Private@Composition@UI@Windows@@UEAAJ_N@Z @ 0x180182840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::SharedLight::SetEnabled(
        Windows::UI::Composition::Private::SharedLight *this)
{
  const char *v2; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0xB5,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedlight.cpp",
    (const char *)0x80070005LL,
    (int)"Cannot enable or disable a shared light.",
    v2);
  return 2147942405LL;
}
