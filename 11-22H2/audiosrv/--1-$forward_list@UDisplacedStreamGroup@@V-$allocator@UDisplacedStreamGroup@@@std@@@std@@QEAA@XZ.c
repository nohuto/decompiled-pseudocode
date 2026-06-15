/*
 * XREFs of ??1?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA@XZ @ 0x1800F5424
 * Callers:
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$4 @ 0x1800F5297 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$4.c)
 *     _CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::dtor$11 @ 0x1800FC9EC (_CBtLeAudioResourceManager--RefreshStreamsOnDevice_--_1_--dtor$11.c)
 *     _CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::dtor$12 @ 0x1800FC9F8 (_CBtLeAudioResourceManager--RefreshStreamsOnDevice_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::forward_list<DisplacedStreamGroup>::~forward_list<DisplacedStreamGroup>(__int64 a1)
{
  return std::forward_list<DisplacedStreamGroup>::clear(a1);
}
