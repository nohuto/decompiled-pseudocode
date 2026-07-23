/*
 * XREFs of KdDisableDebugger @ 0x140565360
 * Callers:
 *     sub_1406DC120 @ 0x1406DC120 (sub_1406DC120.c)
 *     sub_140AD6320 @ 0x140AD6320 (sub_140AD6320.c)
 *     sub_140AD6B90 @ 0x140AD6B90 (sub_140AD6B90.c)
 * Callees:
 *     sub_140565378 @ 0x140565378 (sub_140565378.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return sub_140565378();
}
