/*
 * XREFs of ?IsEmptyDrawing@CParticleEmitterVisual@@IEBA_NXZ @ 0x18022B600
 * Callers:
 *     ?IsEmptyDrawing@CParticleEmitter@@UEBA_NXZ @ 0x18022B5F0 (-IsEmptyDrawing@CParticleEmitter@@UEBA_NXZ.c)
 *     ?UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z @ 0x180230858 (-UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CParticleEmitterVisual::IsEmptyDrawing(CParticleEmitterVisual *this)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( !*((_DWORD *)this + 338) )
    return 1;
  v2 = *((_QWORD *)this + 104);
  if ( !v2 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2) )
    return 1;
  return v1;
}
