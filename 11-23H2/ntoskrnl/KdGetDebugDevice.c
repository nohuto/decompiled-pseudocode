/*
 * XREFs of KdGetDebugDevice @ 0x1403968D0
 * Callers:
 *     HalpDbgInitSystem @ 0x140A8F2C0 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
