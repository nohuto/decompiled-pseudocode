/*
 * XREFs of KdEnableDebugger @ 0x140565580
 * Callers:
 *     sub_140299E04 @ 0x140299E04 (sub_140299E04.c)
 *     sub_1406DC120 @ 0x1406DC120 (sub_1406DC120.c)
 *     sub_140AD6320 @ 0x140AD6320 (sub_140AD6320.c)
 *     sub_140AD6B90 @ 0x140AD6B90 (sub_140AD6B90.c)
 * Callees:
 *     sub_1405655BC @ 0x1405655BC (sub_1405655BC.c)
 *     sub_140568560 @ 0x140568560 (sub_140568560.c)
 */

NTSTATUS KdEnableDebugger(void)
{
  unsigned __int8 v0; // al
  __int64 v1; // rcx
  unsigned int v2; // edi
  NTSTATUS v3; // ebx

  v0 = sub_140568560(1LL);
  LOBYTE(v1) = 1;
  v2 = v0;
  v3 = sub_1405655BC(v1);
  sub_140568560(v2);
  return v3;
}
