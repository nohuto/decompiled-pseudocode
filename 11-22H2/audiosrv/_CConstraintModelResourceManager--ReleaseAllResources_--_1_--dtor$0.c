/*
 * XREFs of _CConstraintModelResourceManager::ReleaseAllResources_::_1_::dtor$0 @ 0x180101D5A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CConstraintModelResourceManager::ReleaseAllResources_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
