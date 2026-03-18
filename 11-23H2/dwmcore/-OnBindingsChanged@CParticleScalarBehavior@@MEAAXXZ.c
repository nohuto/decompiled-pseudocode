/*
 * XREFs of ?OnBindingsChanged@CParticleScalarBehavior@@MEAAXXZ @ 0x1802477A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendFrames@?$LinearKeyframeAnimation@M@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1802401B8 (-AppendFrames@-$LinearKeyframeAnimation@M@Particles@@QEAAJAEBV-$span@$$CBUParticleBindingData@@$.c)
 *     ??$?0$0?0V?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@$0A@@?$span@$$CBUParticleBindingData@@$0?0@gsl@@QEAA@AEBV?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@@Z @ 0x1802412C8 (--$-0$0-0V-$vector@UParticleBindingData@@V-$allocator@UParticleBindingData@@@std@@@std@@$0A@@-$s.c)
 */

void __fastcall CParticleScalarBehavior::OnBindingsChanged(CParticleScalarBehavior *this)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
  gsl::span<ParticleBindingData const,-1>::span<ParticleBindingData const,-1>((gsl::details *)v2, (__int64 *)this + 11);
  Particles::LinearKeyframeAnimation<float>::AppendFrames((char **)this + 14, v2);
}
