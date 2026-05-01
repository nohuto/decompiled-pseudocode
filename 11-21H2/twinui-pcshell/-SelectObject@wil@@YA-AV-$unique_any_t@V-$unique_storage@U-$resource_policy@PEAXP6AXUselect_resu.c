/*
 * XREFs of ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x180554BF0
 * Callers:
 *     _lambda_aa6219af2ba03d3bdd3a1a119d509910_::operator() @ 0x1801B6FC0 (_lambda_aa6219af2ba03d3bdd3a1a119d509910_--operator().c)
 *     _lambda_a23a69face5139fd4d46e6de322de060_::operator() @ 0x18054F78C (_lambda_a23a69face5139fd4d46e6de322de060_--operator().c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18057B628 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
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
