/*
 * XREFs of ??1CPlaybackNotifier@@QEAA@XZ @ 0x180119A18
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$2 @ 0x18007CE04 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$2.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180119A6C (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x1800399D0 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@@Z @ 0x180103FE4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_180103FE4.c)
 */

void __fastcall CPlaybackNotifier::~CPlaybackNotifier(void **this)
{
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPlaybackNotifier *)this);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>(
    (__int64)(this + 10),
    (__int64)(this + 10),
    *((__int64 **)this[10] + 1));
  std::_Deallocate<16,0>(this[10], 0x48uLL);
  _Mtx_destroy_in_situ((_Mtx_t)this);
}
