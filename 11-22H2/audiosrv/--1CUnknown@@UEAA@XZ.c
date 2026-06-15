/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x18004CF40
 * Callers:
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$0 @ 0x18007A5BF (_PhoneTopology--PhoneTopology_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$0 @ 0x18007CEC9 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$0.c)
 *     _EndpointCollection::EndpointCollection_::_1_::dtor$0 @ 0x18007D1E4 (_EndpointCollection--EndpointCollection_--_1_--dtor$0.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$0 @ 0x18007D25A (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$0.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$0 @ 0x18007DBEE (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
