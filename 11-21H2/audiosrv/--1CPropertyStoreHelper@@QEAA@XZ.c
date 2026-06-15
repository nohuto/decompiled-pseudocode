/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x18013D500
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800675AC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@P.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$0 @ 0x1800681E6 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$1 @ 0x18007179F (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$1.c)
 *     _GetEndpointFormFactor_::_1_::dtor$0 @ 0x1800717E7 (_GetEndpointFormFactor_--_1_--dtor$0.c)
 *     _SearchForHeadphones_::_1_::dtor$2 @ 0x180071800 (_SearchForHeadphones_--_1_--dtor$2.c)
 *     _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$0 @ 0x18013E249 (_CSpatialProperties--GetAudioFormatForSpatialFormat_--_1_--dtor$0.c)
 *     _CSpatialProperties::GetSpatialFormatForAudioFormat_::_1_::dtor$0 @ 0x18013F295 (_CSpatialProperties--GetSpatialFormatForAudioFormat_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
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
