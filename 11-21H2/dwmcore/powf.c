/*
 * XREFs of powf @ 0x18010194C
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x180200188 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x18024F2A0 (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ @ 0x18025FCA8 (-CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x18025FE58 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x18025FFF0 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180260140 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x18026F88C (-scRGBTosRGB@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
