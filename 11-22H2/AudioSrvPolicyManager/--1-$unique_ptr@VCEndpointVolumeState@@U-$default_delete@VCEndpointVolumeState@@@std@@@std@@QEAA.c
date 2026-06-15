/*
 * XREFs of ??1?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA@XZ @ 0x180040DE8
 * Callers:
 *     ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@QEAA@XZ @ 0x180040DC0 (--1-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@VCEndpoint.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180040F60 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$2 @ 0x18004B229 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1CEndpointVolumeState@@QEAA@XZ @ 0x180040E18 (--1CEndpointVolumeState@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CEndpointVolumeState>::~unique_ptr<CEndpointVolumeState>(CEndpointVolumeState **a1)
{
  CEndpointVolumeState *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CEndpointVolumeState::~CEndpointVolumeState(*a1);
    operator delete(v1);
  }
}
