/*
 * XREFs of ?OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ @ 0x1801C56CC
 * Callers:
 *     ?SetEmitterTime@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJM@Z @ 0x1801C68F8 (-SetEmitterTime@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJM@Z.c)
 *     ?SetProperty@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180245C90 (-SetProperty@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIW4DCO.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CParticleEmitterVisual::OnEmitterTimeChanged(CParticleEmitterVisual *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  *((_BYTE *)this + 6445) = 1;
  (*(void (__fastcall **)(CParticleEmitterVisual *, _QWORD, _QWORD))(v1 + 72))(this, 0LL, 0LL);
  (*(void (__fastcall **)(CParticleEmitterVisual *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
