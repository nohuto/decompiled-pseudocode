/*
 * XREFs of sub_14082EF44 @ 0x14082EF44
 * Callers:
 *     sub_1403C5C64 @ 0x1403C5C64 (sub_1403C5C64.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B0E88C @ 0x140B0E88C (sub_140B0E88C.c)
 *     sub_140B0EFD8 @ 0x140B0EFD8 (sub_140B0EFD8.c)
 *     sub_140B10490 @ 0x140B10490 (sub_140B10490.c)
 *     sub_140B107D8 @ 0x140B107D8 (sub_140B107D8.c)
 *     sub_140B10A4C @ 0x140B10A4C (sub_140B10A4C.c)
 *     sub_140B10D98 @ 0x140B10D98 (sub_140B10D98.c)
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 *     sub_140B1131C @ 0x140B1131C (sub_140B1131C.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_14082EF44(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  v5.RootDirectory = a2;
  v5.ObjectName = a3;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *a1 = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return ZwOpenKey(a1, a4, &v5);
}
