/*
 * XREFs of cosf @ 0x180060EBC
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18002BF30 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1801085A4 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x1801086AC (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return _o_cosf(X);
}
