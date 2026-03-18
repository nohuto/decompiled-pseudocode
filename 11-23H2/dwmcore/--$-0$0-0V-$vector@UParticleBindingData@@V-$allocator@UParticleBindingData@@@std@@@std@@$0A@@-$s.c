/*
 * XREFs of ??$?0$0?0V?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@$0A@@?$span@$$CBUParticleBindingData@@$0?0@gsl@@QEAA@AEBV?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@@Z @ 0x1802412C8
 * Callers:
 *     ?OnBindingsChanged@CParticleVector3Behavior@@MEAAXXZ @ 0x180241330 (-OnBindingsChanged@CParticleVector3Behavior@@MEAAXXZ.c)
 *     ?OnBindingsChanged@CParticleScalarBehavior@@MEAAXXZ @ 0x1802477A0 (-OnBindingsChanged@CParticleScalarBehavior@@MEAAXXZ.c)
 *     ?OnBindingsChanged@CParticleVector2Behavior@@MEAAXXZ @ 0x1802477E0 (-OnBindingsChanged@CParticleVector2Behavior@@MEAAXXZ.c)
 *     ?OnBindingsChanged@CParticleVector4Behavior@@MEAAXXZ @ 0x180247820 (-OnBindingsChanged@CParticleVector4Behavior@@MEAAXXZ.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180103C6C (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 */

gsl::details *__fastcall gsl::span<ParticleBindingData const,-1>::span<ParticleBindingData const,-1>(
        gsl::details *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  gsl::details *v4; // rcx
  bool v5; // zf

  v2 = *a2;
  gsl::details::extent_type<-1>::extent_type<-1>(a1, 0xAAAAAAAAAAAAAAABuLL * ((a2[1] - *a2) >> 3));
  v5 = *(_QWORD *)a1 == -1LL;
  *((_QWORD *)a1 + 1) = v2;
  if ( v5 || !v2 && *(_QWORD *)a1 )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x18024131ELL);
  }
  return a1;
}
