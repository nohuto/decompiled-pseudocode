/*
 * XREFs of GetExpressionTypeAsString @ 0x180162AFC
 * Callers:
 *     ?Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z @ 0x18003D728 (-Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z.c)
 *     ?ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E668 (-ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x180050220 (-RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@23.c)
 *     ?CreateInvalidFunctionArgumentContext@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXIPEAGI@Z @ 0x1801628E8 (-CreateInvalidFunctionArgumentContext@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXIP.c)
 *     ?SetTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z @ 0x180191134 (-SetTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVExpressionObjectProperty.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

const wchar_t *__fastcall GetExpressionTypeAsString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = a1 - 17;
  if ( !v1 )
    return L"Boolean";
  v2 = v1 - 1;
  if ( !v2 )
    return L"Scalar";
  v3 = v2 - 17;
  if ( !v3 )
    return L"Vector2";
  v4 = v3 - 17;
  if ( !v4 )
    return L"Vector3";
  v5 = v4 - 17;
  if ( !v5 )
    return L"Vector4";
  v6 = v5 - 1;
  if ( !v6 )
    return L"Color";
  v7 = v6 - 1;
  if ( !v7 )
    return L"Quaternion";
  v8 = v7 - 33;
  if ( !v8 )
    return L"Matrix3x2";
  if ( v8 != 161 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  return L"Matrix4x4";
}
