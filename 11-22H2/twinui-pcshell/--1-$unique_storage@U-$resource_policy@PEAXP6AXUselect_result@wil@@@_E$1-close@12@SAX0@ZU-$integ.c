/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1802E7358
 * Callers:
 *     _lambda_3eaa93ba0c0aad2d24d7515d6dcae78e_::operator() @ 0x180217134 (_lambda_3eaa93ba0c0aad2d24d7515d6dcae78e_--operator().c)
 *     _lambda_630a6a22fbdb797c79937bea35e7e306_::operator() @ 0x180217940 (_lambda_630a6a22fbdb797c79937bea35e7e306_--operator().c)
 *     _lambda_6e2da3457122464d9e70678964700a51_::operator() @ 0x180217A1C (_lambda_6e2da3457122464d9e70678964700a51_--operator().c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18060ABF8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@1.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18063B2F4 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall __1__unique_storage_U__resource_policy_PEAXP6AXUselect_result_wil____E_1_close_12_SAX0_ZU__integral_constant__K_0A__wistd__U12_PEAX_0A___T_details_wil___details_wil__IEAA_XZ(
        __m128i *a1)
{
  HGDIOBJ result; // rax

  if ( a1->m128i_i64[0] )
    return SelectObject((HDC)_mm_srli_si128(*a1, 8).m128i_i64[0], (HGDIOBJ)a1->m128i_i64[0]);
  return result;
}
