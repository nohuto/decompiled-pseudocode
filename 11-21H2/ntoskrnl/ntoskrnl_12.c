/*
 * XREFs of ntoskrnl_12 @ 0x1406AD260
 * Callers:
 *     sub_14023559C @ 0x14023559C (sub_14023559C.c)
 *     sub_140235738 @ 0x140235738 (sub_140235738.c)
 *     sub_1403C43E0 @ 0x1403C43E0 (sub_1403C43E0.c)
 *     sub_140A4C5B4 @ 0x140A4C5B4 (sub_140A4C5B4.c)
 *     sub_140A4DC74 @ 0x140A4DC74 (sub_140A4DC74.c)
 *     sub_140A9DD9C @ 0x140A9DD9C (sub_140A9DD9C.c)
 *     sub_140B0ABEC @ 0x140B0ABEC (sub_140B0ABEC.c)
 *     sub_140B2F008 @ 0x140B2F008 (sub_140B2F008.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ntoskrnl_12(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * a1) + 16720LL);
}
