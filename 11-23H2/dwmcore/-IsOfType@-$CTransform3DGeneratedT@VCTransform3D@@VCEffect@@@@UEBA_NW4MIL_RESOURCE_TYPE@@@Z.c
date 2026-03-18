/*
 * XREFs of ?IsOfType@?$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800DBB00
 * Callers:
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D3A0 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800DB9B0 (-IsOfType@-$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800DBAA0 (-IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800DBAD0 (-IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C4C60 (-IsOfType@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOU.c)
 *     ?IsOfType@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C4CC0 (-IsOfType@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURC.c)
 *     ?IsOfType@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C4DF0 (-IsOfType@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@UEBA_NW4MIL_RESOURC.c)
 *     ?IsOfType@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C4E20 (-IsOfType@-$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800DBB28 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 */

char __fastcall CTransform3DGeneratedT<CTransform3D,CEffect>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 187 )
    return 1;
  v2 = CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
