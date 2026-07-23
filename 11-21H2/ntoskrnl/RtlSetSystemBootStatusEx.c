/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x1409BADD0
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1407EDB2C @ 0x1407EDB2C (sub_1407EDB2C.c)
 */

NTSTATUS __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return sub_1407EDB2C(32, a1, a2, a3);
}
