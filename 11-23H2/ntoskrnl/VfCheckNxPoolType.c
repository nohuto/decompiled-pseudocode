/*
 * XREFs of VfCheckNxPoolType @ 0x1405CE3B0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x140AC3920 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
