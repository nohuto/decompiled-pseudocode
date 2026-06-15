/*
 * XREFs of ??1?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAA@XZ @ 0x14005E9D8
 * Callers:
 *     _CDeviceGraphObjectCache::CDeviceGraphObjectCache_::_1_::dtor$3 @ 0x1400343FF (_CDeviceGraphObjectCache--CDeviceGraphObjectCache_--_1_--dtor$3.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$2 @ 0x140034441 (_CAudioProcessor--CAudioProcessor_--_1_--dtor$2.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$3 @ 0x14003445A (_CAudioProcessor--CAudioProcessor_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::~CAtlList<CAPONode *,CAPONodeTraits>(__int64 a1)
{
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll(a1);
}
