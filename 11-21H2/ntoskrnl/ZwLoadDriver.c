/*
 * XREFs of ZwLoadDriver @ 0x14041D8C0
 * Callers:
 *     sub_14057D548 @ 0x14057D548 (sub_14057D548.c)
 *     sub_140620EC0 @ 0x140620EC0 (sub_140620EC0.c)
 *     sub_1406D5860 @ 0x1406D5860 (sub_1406D5860.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_14099D210 @ 0x14099D210 (sub_14099D210.c)
 *     sub_1409EE5BC @ 0x1409EE5BC (sub_1409EE5BC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(DriverServiceName, v1);
}
