/*
 * XREFs of ?ValidateBrush@CParticleEmitterVisual@@QEBAJPEAVCBrush@@@Z @ 0x1801A6000
 * Callers:
 *     ?SetBrush@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCBrush@@@Z @ 0x1801A238C (-SetBrush@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCBrus.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleEmitterVisual::ValidateBrush(CParticleEmitterVisual *this, struct CBrush *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 20LL)
    || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 180LL)
    || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 105LL)
    || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 71LL) )
  {
    return 0LL;
  }
  else
  {
    return 2291663875LL;
  }
}
