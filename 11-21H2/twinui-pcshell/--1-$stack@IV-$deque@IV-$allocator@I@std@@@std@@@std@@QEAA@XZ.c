/*
 * XREFs of ??1?$stack@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x18034CC58
 * Callers:
 *     _tip::details::test_common_data_0_::data_::_1_::dtor$9 @ 0x180218980 (_tip--details--test_common_data_0_--data_--_1_--dtor$9.c)
 *     _tip::details::test_common_data_0_::data_::_1_::dtor$10 @ 0x1802189A0 (_tip--details--test_common_data_0_--data_--_1_--dtor$10.c)
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$2 @ 0x18022020C (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$2.c)
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$3 @ 0x180220225 (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::stack<unsigned int>::~stack<unsigned int,std::deque<unsigned int>>(void **a1)
{
  std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>(a1);
}
