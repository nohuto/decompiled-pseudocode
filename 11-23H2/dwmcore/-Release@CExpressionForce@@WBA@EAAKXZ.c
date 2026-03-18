/*
 * XREFs of ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x18011E4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionForce::Release(__int64 a1)
{
  return CMILRefCountBaseT<IAccelerator>::Release(a1 - 16);
}
