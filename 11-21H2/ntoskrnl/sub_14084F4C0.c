/*
 * XREFs of sub_14084F4C0 @ 0x14084F4C0
 * Callers:
 *     <none>
 * Callees:
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 */

__int64 sub_14084F4C0()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[0] = 2228256LL;
  v1[1] = L"\\Driver\\ACPI_HAL";
  return IoCreateDriver(v1, sub_14081E150);
}
