/*
 * XREFs of ??1?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800FE97C
 * Callers:
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$5 @ 0x18007D2C4 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::~CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>(
        __int64 a1)
{
  return ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAll(a1);
}
