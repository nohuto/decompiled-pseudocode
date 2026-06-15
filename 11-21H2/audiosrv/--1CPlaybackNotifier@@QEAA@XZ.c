/*
 * XREFs of ??1CPlaybackNotifier@@QEAA@XZ @ 0x180103BCC
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$2 @ 0x180071B15 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$2.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800C2A7C (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005695C (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@@Z @ 0x1801036B0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_1801036B0.c)
 */

void __fastcall CPlaybackNotifier::~CPlaybackNotifier(void **this)
{
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPlaybackNotifier *)this);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>(
    (__int64)(this + 10),
    (__int64)(this + 10),
    *((__int64 **)this[10] + 1));
  std::_Deallocate<16,0>(this[10], 0x48uLL);
  _Mtx_destroy_in_situ((_Mtx_t)this);
}
