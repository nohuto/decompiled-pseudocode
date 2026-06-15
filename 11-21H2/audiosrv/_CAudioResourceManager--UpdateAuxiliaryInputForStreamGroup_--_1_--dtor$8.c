/*
 * XREFs of _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$8 @ 0x180102505
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<AuxiliaryInputDescriptor>::~CAutoPtr<AuxiliaryInputDescriptor>(
           (AuxiliaryInputDescriptor **)(a2 + 104),
           a2);
}
