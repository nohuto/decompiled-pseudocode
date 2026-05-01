/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18054F470
 * Callers:
 *     _lambda_aa6219af2ba03d3bdd3a1a119d509910_::operator() @ 0x1801B6FC0 (_lambda_aa6219af2ba03d3bdd3a1a119d509910_--operator().c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18054F430 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@1.c)
 *     _lambda_a23a69face5139fd4d46e6de322de060_::operator() @ 0x18054F78C (_lambda_a23a69face5139fd4d46e6de322de060_--operator().c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18057B628 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 * Callees:
 *     ?close@select_result@wil@@SAXU12@@Z @ 0x180556880 (-close@select_result@wil@@SAXU12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall __1__unique_storage_U__resource_policy_PEAXP6AXUselect_result_wil____E_1_close_12_SAX0_ZU__integral_constant__K_0A__wistd__U12_PEAX_0A___T_details_wil___details_wil__IEAA_XZ(
        __int128 *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)a1 )
  {
    v2 = *a1;
    return wil::select_result::close(&v2);
  }
  return result;
}
