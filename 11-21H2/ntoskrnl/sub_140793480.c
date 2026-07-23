/*
 * XREFs of sub_140793480 @ 0x140793480
 * Callers:
 *     sub_14075B988 @ 0x14075B988 (sub_14075B988.c)
 *     sub_140791084 @ 0x140791084 (sub_140791084.c)
 *     sub_1407941A4 @ 0x1407941A4 (sub_1407941A4.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140797F3C @ 0x140797F3C (sub_140797F3C.c)
 */

__int64 __fastcall sub_140793480(__int64 a1, __int64 a2)
{
  __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)sub_140797F3C(a1, a2, &v3, 2LL) )
    return (v3 & 0xF000u) < 0x7000 ? 2 : 6;
  sub_1406E0C3C(1LL, (__int64)"SdbpGetTagHeadSize");
  return 0LL;
}
