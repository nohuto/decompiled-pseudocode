/*
 * XREFs of ??1?$stack@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x180416EA8
 * Callers:
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$2 @ 0x1802BA027 (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$2.c)
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$3 @ 0x1802BA040 (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$3.c)
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::DiscoverabilityManager_::_1_::dtor$11 @ 0x1806F990C (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--Discovera_ea_1806F990C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::stack<unsigned int>::~stack<unsigned int,std::deque<unsigned int>>(void **a1)
{
  std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>(a1);
}
