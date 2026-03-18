/*
 * XREFs of ?Release@?$CMILRefCountBaseT@UIAccelerator@@@@UEAAKXZ @ 0x180233BC0
 * Callers:
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x18011E4B0 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILRefCountBaseT<IAccelerator>::Release(volatile signed __int32 *a1)
{
  return CMILRefCountBaseT<IAccelerator>::InternalRelease(a1);
}
