/*
 * XREFs of PsGetProcessId @ 0x140361530
 * Callers:
 *     sub_140674EA8 @ 0x140674EA8 (sub_140674EA8.c)
 *     sub_1406EBE78 @ 0x1406EBE78 (sub_1406EBE78.c)
 *     sub_1406EC338 @ 0x1406EC338 (sub_1406EC338.c)
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_1407292A0 @ 0x1407292A0 (sub_1407292A0.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     sub_140967E00 @ 0x140967E00 (sub_140967E00.c)
 *     sub_14097471C @ 0x14097471C (sub_14097471C.c)
 *     sub_140974B60 @ 0x140974B60 (sub_140974B60.c)
 *     sub_140974FBC @ 0x140974FBC (sub_140974FBC.c)
 *     sub_1409755D4 @ 0x1409755D4 (sub_1409755D4.c)
 *     sub_140975748 @ 0x140975748 (sub_140975748.c)
 *     sub_1409A3930 @ 0x1409A3930 (sub_1409A3930.c)
 *     sub_1409A3AB0 @ 0x1409A3AB0 (sub_1409A3AB0.c)
 *     sub_1409AB560 @ 0x1409AB560 (sub_1409AB560.c)
 *     sub_1409AB660 @ 0x1409AB660 (sub_1409AB660.c)
 *     sub_1409EA9A0 @ 0x1409EA9A0 (sub_1409EA9A0.c)
 *     sub_140A08E84 @ 0x140A08E84 (sub_140A08E84.c)
 *     sub_140A526FC @ 0x140A526FC (sub_140A526FC.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return (HANDLE)*((_QWORD *)Process + 136);
}
