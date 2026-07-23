/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x14085F040
 * Callers:
 *     sub_140B2C124 @ 0x140B2C124 (sub_140B2C124.c)
 * Callees:
 *     sub_1407EDB2C @ 0x1407EDB2C (sub_1407EDB2C.c)
 */

NTSTATUS __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return sub_1407EDB2C(31, a1, a2, a3);
}
