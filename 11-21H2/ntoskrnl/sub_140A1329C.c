/*
 * XREFs of sub_140A1329C @ 0x140A1329C
 * Callers:
 *     sub_14075C380 @ 0x14075C380 (sub_14075C380.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_1407ED29C @ 0x1407ED29C (sub_1407ED29C.c)
 */

_OWORD *__fastcall sub_140A1329C(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  *a1 = 0LL;
  if ( !(unsigned int)sub_1407ED29C(a2, a3, (__int64)a1, 0x10u) )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbReadGUIDTag");
    *a1 = *a4;
  }
  return a1;
}
