/*
 * XREFs of ?Round@@YAHM@Z @ 0x180061780
 * Callers:
 *     ?CreateDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSize@Foundation@5@W4DirectXPixelFormat@DirectX@Graphics@5@W4DirectXAlphaMode@9Graphics@5@PEAPEAUICompositionDrawingSurface@345@@Z @ 0x180061680 (-CreateDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSize@Foundatio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Round(float a1)
{
  float v1; // xmm0_4

  if ( a1 < 0.0 )
    v1 = a1 - 0.5;
  else
    v1 = a1 + 0.5;
  return (unsigned int)(int)v1;
}
