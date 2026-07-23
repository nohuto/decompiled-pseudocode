/*
 * XREFs of KdGetDebugDevice @ 0x140396AB0
 * Callers:
 *     HalpDbgInitSystem @ 0x140A8F140 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
