/*
 * XREFs of sub_140883EDC @ 0x140883EDC
 * Callers:
 *     sub_1406A6990 @ 0x1406A6990 (sub_1406A6990.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407A2680 @ 0x1407A2680 (sub_1407A2680.c)
 *     sub_1407A2BDC @ 0x1407A2BDC (sub_1407A2BDC.c)
 *     sub_1409851A4 @ 0x1409851A4 (sub_1409851A4.c)
 * Callees:
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 */

__int64 __fastcall sub_140883EDC(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9

  v2 = (_QWORD *)sub_140733340(a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  if ( v2 && *v2 )
    return *v2 + 8 * v3;
  else
    return 0LL;
}
