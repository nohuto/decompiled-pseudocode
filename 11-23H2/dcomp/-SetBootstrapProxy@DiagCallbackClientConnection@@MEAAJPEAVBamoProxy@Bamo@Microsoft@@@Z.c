/*
 * XREFs of ?SetBootstrapProxy@DiagCallbackClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18019FCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn DiagCallbackClientConnection::SetBootstrapProxy(
        DiagCallbackClientConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::FailFast_Hr(
    retaddr,
    67LL,
    (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\diagcallbackclientconnection.cpp",
    (const char *)0x8000FFFFLL,
    v2);
}
