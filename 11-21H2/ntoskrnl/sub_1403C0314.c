/*
 * XREFs of sub_1403C0314 @ 0x1403C0314
 * Callers:
 *     sub_1403BF6EC @ 0x1403BF6EC (sub_1403BF6EC.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     sub_1403BFE70 @ 0x1403BFE70 (sub_1403BFE70.c)
 *     sub_1403C02DC @ 0x1403C02DC (sub_1403C02DC.c)
 *     sub_140647BBC @ 0x140647BBC (sub_140647BBC.c)
 *     sub_140647C04 @ 0x140647C04 (sub_140647C04.c)
 *     sub_140647C4C @ 0x140647C4C (sub_140647C4C.c)
 * Callees:
 *     sub_1403C0360 @ 0x1403C0360 (sub_1403C0360.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool sub_1403C0314()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  sub_1403C0360(&v1);
  return (_DWORD)v1 == 824407624;
}
