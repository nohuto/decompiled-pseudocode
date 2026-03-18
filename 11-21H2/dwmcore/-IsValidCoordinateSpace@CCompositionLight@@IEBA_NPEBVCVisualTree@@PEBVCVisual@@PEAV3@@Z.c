/*
 * XREFs of ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1802009E8
 * Callers:
 *     ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18020C8A0 (-IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18020DE70 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800491BC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800D5AC8 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x180261478 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

bool __fastcall CCompositionLight::IsValidCoordinateSpace(
        CCompositionLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3,
        struct CVisual *a4)
{
  const struct Windows::Foundation::Numerics::float4x4 *v6; // rdx
  float v7; // xmm0_4
  bool result; // al
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+70h] [rbp-18h]

  result = 0;
  if ( CVisualTree::_IsInTree((__int64)a2, (__int64)a4, 1) )
  {
    v10 = 0;
    if ( (int)CVisual::GetWorldTransform(a4, a2, 3, (__int64)v9, 0LL, 0LL) >= 0 )
    {
      v7 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v9, v6);
      if ( CMILMatrix::IsInvertibleDeterminant(v7) )
        return 1;
    }
  }
  return result;
}
