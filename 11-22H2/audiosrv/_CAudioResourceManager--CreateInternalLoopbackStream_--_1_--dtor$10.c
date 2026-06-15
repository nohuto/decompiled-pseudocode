/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$10 @ 0x1800DA916
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((StreamGroupParams **)(a2 + 288));
}
