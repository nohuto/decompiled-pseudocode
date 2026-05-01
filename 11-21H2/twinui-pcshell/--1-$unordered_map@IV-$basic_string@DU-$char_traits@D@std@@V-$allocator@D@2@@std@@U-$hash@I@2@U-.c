/*
 * XREFs of ??1?$unordered_map@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18034CCA8
 * Callers:
 *     _cereal::InputArchive_cereal::JSONInputArchive_0_::InputArchive_cereal::JSONInputArchive_0__::_1_::dtor$4 @ 0x18034C0D9 (_cereal--InputArchive_cereal--JSONInputArchive_0_--InputArchive_cereal--JSONInputAr_ea_18034C0D9.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1803490BC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$basic_string@DU-$char_traits@D@std@.c)
 */

void __fastcall std::unordered_map<unsigned int,std::string>::~unordered_map<unsigned int,std::string>(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r8

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<unsigned int const,std::string>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::string>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8),
    v3);
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x38uLL);
}
