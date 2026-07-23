/*
 * XREFs of ZwUnloadDriver @ 0x14041F1A0
 * Callers:
 *     sub_140628370 @ 0x140628370 (sub_140628370.c)
 *     sub_1406D5860 @ 0x1406D5860 (sub_1406D5860.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(DriverServiceName, v1);
}
