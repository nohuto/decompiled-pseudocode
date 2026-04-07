/*
 * XREFs of ??1?$stack@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x1800F34C0
 * Callers:
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$2 @ 0x1800659F7 (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$2.c)
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$3 @ 0x180065A10 (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::stack<unsigned int>::~stack<unsigned int,std::deque<unsigned int>>(__int64 a1)
{
  return std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>(a1);
}
