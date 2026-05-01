/*
 * XREFs of api_alchemy_config::_anonymous_namespace_::specifiers::_specifiers @ 0x1805DD68C
 * Callers:
 *     std::optional_api_alchemy_config::_anonymous_namespace_::specifiers_::_optional_api_alchemy_config::_anonymous_namespace_::specifiers_ @ 0x1805DD654 (std--optional_api_alchemy_config--_anonymous_namespace_--specifiers_--_optional_api_alchemy_conf.c)
 *     api_alchemy_config::_anonymous_namespace_::GetSpecsForID @ 0x1805DDA30 (api_alchemy_config--_anonymous_namespace_--GetSpecsForID.c)
 *     _api_alchemy_config::_anonymous_namespace_::GetSpecsForID_::_1_::dtor$4 @ 0x1805DDB0F (_api_alchemy_config--_anonymous_namespace_--GetSpecsForID_--_1_--dtor$4.c)
 *     ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1805DDC50 (-InitConfig@api_alchemy_config@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x180160D70 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 */

__int64 __fastcall api_alchemy_config::_anonymous_namespace_::specifiers::_specifiers(__int64 a1)
{
  void **v1; // rbx

  v1 = (void **)(a1 + 64);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *>>>(
    a1 + 64,
    a1 + 64,
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL));
  std::_Deallocate<16,0>(*v1, 0x60uLL);
  std::wstring::_Tidy_deallocate(a1 + 32);
  return std::wstring::_Tidy_deallocate(a1);
}
