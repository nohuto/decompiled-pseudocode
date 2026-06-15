/*
 * XREFs of ??1?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAA@XZ @ 0x14005E988
 * Callers:
 *     _CDeviceGraphObjectCache::CDeviceGraphObjectCache_::_1_::dtor$3 @ 0x1400343BF (_CDeviceGraphObjectCache--CDeviceGraphObjectCache_--_1_--dtor$3.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$2 @ 0x140034401 (_CAudioProcessor--CAudioProcessor_--_1_--dtor$2.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$3 @ 0x14003441A (_CAudioProcessor--CAudioProcessor_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::~CAtlList<CAPONode *,CAPONodeTraits>(__int64 a1)
{
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll(a1);
}
