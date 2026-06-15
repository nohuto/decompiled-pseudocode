/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x180153244
 * Callers:
 *     _GetEndpointFormFactor_::_1_::dtor$0 @ 0x180079C92 (_GetEndpointFormFactor_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$1 @ 0x18007AE3D (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$1.c)
 *     _CSpatialProperties::GetSpatialFormatForAudioFormat_::_1_::dtor$0 @ 0x18007D990 (_CSpatialProperties--GetSpatialFormatForAudioFormat_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$0 @ 0x18007D9C6 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$0 @ 0x180153CF9 (_CSpatialProperties--GetAudioFormatForSpatialFormat_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPropertyStoreHelper::~CPropertyStoreHelper(CPropertyStoreHelper *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
