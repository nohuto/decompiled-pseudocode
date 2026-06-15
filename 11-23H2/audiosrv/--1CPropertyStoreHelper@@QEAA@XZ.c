/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x1801531F4
 * Callers:
 *     _GetEndpointFormFactor_::_1_::dtor$0 @ 0x180079C62 (_GetEndpointFormFactor_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$1 @ 0x18007AE0D (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$1.c)
 *     _CSpatialProperties::GetSpatialFormatForAudioFormat_::_1_::dtor$0 @ 0x18007D960 (_CSpatialProperties--GetSpatialFormatForAudioFormat_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$0 @ 0x18007D996 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$0 @ 0x180153CA9 (_CSpatialProperties--GetAudioFormatForSpatialFormat_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
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
