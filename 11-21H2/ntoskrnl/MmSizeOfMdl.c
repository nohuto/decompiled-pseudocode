/*
 * XREFs of MmSizeOfMdl @ 0x140231480
 * Callers:
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 *     sub_140857D34 @ 0x140857D34 (sub_140857D34.c)
 *     VslCreateSecureSection @ 0x1409319A0 (VslCreateSecureSection.c)
 *     sub_1409328A8 @ 0x1409328A8 (sub_1409328A8.c)
 *     sub_14096D10C @ 0x14096D10C (sub_14096D10C.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 *     sub_140978430 @ 0x140978430 (sub_140978430.c)
 *     sub_14097A358 @ 0x14097A358 (sub_14097A358.c)
 *     sub_1409AF550 @ 0x1409AF550 (sub_1409AF550.c)
 *     sub_1409D43FC @ 0x1409D43FC (sub_1409D43FC.c)
 *     sub_140A06B80 @ 0x140A06B80 (sub_140A06B80.c)
 *     sub_140A4ED84 @ 0x140A4ED84 (sub_140A4ED84.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
