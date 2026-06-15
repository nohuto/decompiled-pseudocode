/*
 * XREFs of ??1?$CAutoPtrList@VPhoneTopologyWorkItem@@@ATL@@QEAA@XZ @ 0x18015DD8C
 * Callers:
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$3 @ 0x18006F894 (_PhoneTopology--PhoneTopology_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAutoPtrList<PhoneTopologyWorkItem>::~CAutoPtrList<PhoneTopologyWorkItem>(__int64 a1)
{
  ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::RemoveAll(a1);
}
