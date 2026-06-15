/*
 * XREFs of ??1?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ @ 0x180109BC0
 * Callers:
 *     _CConstraintModel::Initialize_::_1_::dtor$9 @ 0x18007188C (_CConstraintModel--Initialize_--_1_--dtor$9.c)
 *     _CConstraintModelResourceManager::ProcessRevokedResources_::_1_::dtor$0 @ 0x18010CA96 (_CConstraintModelResourceManager--ProcessRevokedResources_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::~CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>(
        __int64 a1)
{
  return ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(a1);
}
