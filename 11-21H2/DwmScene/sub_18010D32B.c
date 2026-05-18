/*
 * XREFs of sub_18010D32B @ 0x18010D32B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 */

void __noreturn sub_18010D32B()
{
  sub_18001F2B4(&stru_1801EA608, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
  throw;
}
