/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x18003ACA0
 * Callers:
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$0 @ 0x18006F5D1 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$0 @ 0x18006F684 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$0.c)
 *     _EndpointCollection::EndpointCollection_::_1_::dtor$0 @ 0x18006F754 (_EndpointCollection--EndpointCollection_--_1_--dtor$0.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$0 @ 0x18006F7B6 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$0.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$0 @ 0x18006F852 (_PhoneTopology--PhoneTopology_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
