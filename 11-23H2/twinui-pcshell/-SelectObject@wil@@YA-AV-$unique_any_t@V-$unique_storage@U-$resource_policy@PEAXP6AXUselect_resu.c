/*
 * XREFs of ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x1802E738C
 * Callers:
 *     _lambda_3eaa93ba0c0aad2d24d7515d6dcae78e_::operator() @ 0x180217134 (_lambda_3eaa93ba0c0aad2d24d7515d6dcae78e_--operator().c)
 *     _lambda_630a6a22fbdb797c79937bea35e7e306_::operator() @ 0x180217940 (_lambda_630a6a22fbdb797c79937bea35e7e306_--operator().c)
 *     _lambda_6e2da3457122464d9e70678964700a51_::operator() @ 0x180217A1C (_lambda_6e2da3457122464d9e70678964700a51_--operator().c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18063B2F4 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall wil::SelectObject(_OWORD *a1, HDC a2, void *a3)
{
  _OWORD *result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h]

  *(_QWORD *)&v6 = SelectObject(a2, a3);
  result = a1;
  *((_QWORD *)&v6 + 1) = a2;
  *a1 = v6;
  return result;
}
