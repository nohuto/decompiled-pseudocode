/*
 * XREFs of ??1CCaptureNotifier@@QEAA@XZ @ 0x180119974
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180119A1C (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180056D68 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x18011950C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@s.c)
 */

void __fastcall CCaptureNotifier::~CCaptureNotifier(void **this)
{
  CCaptureNotifier::PublishCaptureAudioStatus((CCaptureNotifier *)this);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>(
    (__int64)(this + 10),
    (__int64)(this + 10),
    *((_QWORD *)this[10] + 1));
  std::_Deallocate<16,0>(this[10], 0x30uLL);
  _Mtx_destroy_in_situ((_Mtx_t)this);
}
