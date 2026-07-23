/*
 * XREFs of sub_1409971BC @ 0x1409971BC
 * Callers:
 *     sub_140996CE0 @ 0x140996CE0 (sub_140996CE0.c)
 * Callees:
 *     sub_140398DF0 @ 0x140398DF0 (sub_140398DF0.c)
 *     __report_rangecheckfailure_0 @ 0x1403CF338 (__report_rangecheckfailure_0.c)
 *     sub_1405C7E9C @ 0x1405C7E9C (sub_1405C7E9C.c)
 *     sub_1405CADAC @ 0x1405CADAC (sub_1405CADAC.c)
 *     sub_1405CC220 @ 0x1405CC220 (sub_1405CC220.c)
 *     sub_1405CCECC @ 0x1405CCECC (sub_1405CCECC.c)
 *     sub_1405CDBB4 @ 0x1405CDBB4 (sub_1405CDBB4.c)
 *     sub_1405D6B94 @ 0x1405D6B94 (sub_1405D6B94.c)
 *     sub_1405D6C08 @ 0x1405D6C08 (sub_1405D6C08.c)
 *     sub_1405DBE28 @ 0x1405DBE28 (sub_1405DBE28.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_14098BD1C @ 0x14098BD1C (sub_14098BD1C.c)
 *     sub_140996854 @ 0x140996854 (sub_140996854.c)
 *     sub_1409969C4 @ 0x1409969C4 (sub_1409969C4.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

void __fastcall __noreturn sub_1409971BC(int a1, unsigned __int8 a2)
{
  int v2; // edi
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  sub_140A48330(a1);
  byte_140C22451 = v2;
  v3 = v2;
  sub_1407525EC(&stru_140011C18, 4u, &v3);
  sub_1407EED48();
  sub_1405D6B94(v2, &qword_140C541A8, &qword_140C541B0);
  _report_rangecheckfailure_0();
}
