/*
 * XREFs of sub_1800F1FBC @ 0x1800F1FBC
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 */

void __noreturn sub_1800F1FBC()
{
  sub_18001DB68(&stru_1801C8608, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
  throw;
}
