/*
 * XREFs of ?close@select_result@wil@@SAXU12@@Z @ 0x180556880
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18054F470 (--1-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@12@SAX0@ZU-$integ.c)
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall wil::select_result::close(__int64 a1)
{
  return SelectObject(*(HDC *)(a1 + 8), *(HGDIOBJ *)a1);
}
