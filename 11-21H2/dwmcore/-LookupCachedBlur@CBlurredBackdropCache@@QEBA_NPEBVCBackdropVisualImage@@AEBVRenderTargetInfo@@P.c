/*
 * XREFs of ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1800DE490
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800535FC (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180054FB4 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x180086D24 (-CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z.c)
 */

char __fastcall CBlurredBackdropCache::LookupCachedBlur(
        CBlurredBackdropCache *this,
        const struct CBackdropVisualImage *a2,
        const struct RenderTargetInfo *a3,
        struct EffectInput *a4)
{
  __int64 v4; // r10
  __int64 v5; // rdi
  __int64 *v9; // r11

  v4 = *(_QWORD *)this;
  v5 = *((_QWORD *)this + 1);
  while ( 1 )
  {
    if ( v4 == v5 )
      return 0;
    if ( a2 == *(const struct CBackdropVisualImage **)v4
      && CanRenderToTargetFromSource(a3, (const struct RenderTargetInfo *)(v4 + 8)) )
    {
      break;
    }
    v4 += 136LL;
  }
  EffectInput::operator=(v9, (__int64 *)(v4 + 32));
  return 1;
}
