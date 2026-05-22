/*
 * XREFs of ?RuntimeClassInitialize@UIContext@UI@Windows@@QEAAJPEAUIUIContentRoot@23@@Z @ 0x180018DE8
 * Callers:
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@PEAVAppContentRoot@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@$$QEAPEAVAppContentRoot@45@@Z @ 0x180018860 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@PEAVAppContentRoot@23@@Details@WRL@Microsoft@@Y.c)
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUIUIContentRoot@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@AEAPEAUIUIContentRoot@45@@Z @ 0x18011AD58 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUIUIContentRoot@23@@Details@WRL@Microsoft.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetUIContentRoot@UIContext@UI@Windows@@UEAAJPEAUIUIContentRoot@23@@Z @ 0x180018930 (-SetUIContentRoot@UIContext@UI@Windows@@UEAAJPEAUIUIContentRoot@23@@Z.c)
 */

__int64 __fastcall Windows::UI::UIContext::RuntimeClassInitialize(
        Windows::UI::UIContext *this,
        struct Windows::UI::IUIContentRoot *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::UI::UIContext::SetUIContentRoot((Windows::UI::UIContext *)((char *)this + 24), a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuicontext.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
