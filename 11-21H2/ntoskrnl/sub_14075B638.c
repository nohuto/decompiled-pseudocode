/*
 * XREFs of sub_14075B638 @ 0x14075B638
 * Callers:
 *     sub_14075B48C @ 0x14075B48C (sub_14075B48C.c)
 *     sub_140A146FC @ 0x140A146FC (sub_140A146FC.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B988 @ 0x14075B988 (sub_14075B988.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_14075B638(__int64 a1, unsigned int a2, unsigned int *a3)
{
  if ( (unsigned __int16)sub_14079499C() == 0x9801 )
  {
    *a3 = (unsigned int)sub_14079422C(a1, a2) / 0xC;
    return sub_14075B988(a1, a2);
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpGetIndex");
    return 0LL;
  }
}
