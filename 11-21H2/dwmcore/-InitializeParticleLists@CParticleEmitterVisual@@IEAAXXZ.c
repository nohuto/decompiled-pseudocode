/*
 * XREFs of ?InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ @ 0x1801A0BF8
 * Callers:
 *     ?SetMaxParticleInstances@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJI@Z @ 0x1801A32D0 (-SetMaxParticleInstances@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x18022D114 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18019BDD0 (--$_Resize@U_Value_init_tag@std@@@-$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V-$allocator@UInst.c)
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x1801A1F8C (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 */

void __fastcall CParticleEmitterVisual::InitializeParticleLists(CParticleEmitterVisual *this)
{
  CParticleEmitterVisual::ParticleCollection::Reserve(
    (CParticleEmitterVisual *)((char *)this + 896),
    *((_DWORD *)this + 192));
  std::vector<Instance_Pos4_QRot_ColorDW_Size2>::_Resize<std::_Value_init_tag>(
    (_QWORD *)this + 170,
    *((unsigned int *)this + 192));
}
