/*
 * XREFs of ?SetClear@CParticleEmitterVisual@@QEAAJ_N@Z @ 0x1801C679C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Clear@ParticleCollection@CParticleEmitterVisual@@QEAAXXZ @ 0x1801C3FBC (-Clear@ParticleCollection@CParticleEmitterVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisual::SetClear(CParticleEmitterVisual *this, char a2)
{
  __int64 v2; // r9

  if ( a2 )
  {
    CParticleEmitterVisual::ParticleCollection::Clear((CParticleEmitterVisual *)((char *)this + 872));
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v2 + 72LL))(v2, 0LL, v2);
  }
  return 0LL;
}
