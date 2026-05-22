/*
 * XREFs of cosf @ 0x1800565D4
 * Callers:
 *     ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x1800C9B50 (-Slerp@MPCMath@@YA-AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1800CA03C (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ?WithinAngle@EdgyRecognizer@@AEAA_NUtagPOINT@@0UVector2@Numerics@Foundation@Windows@@M@Z @ 0x18016A578 (-WithinAngle@EdgyRecognizer@@AEAA_NUtagPOINT@@0UVector2@Numerics@Foundation@Windows@@M@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return _o_cosf(X);
}
