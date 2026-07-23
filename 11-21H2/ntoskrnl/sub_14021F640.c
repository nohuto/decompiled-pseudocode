/*
 * XREFs of sub_14021F640 @ 0x14021F640
 * Callers:
 *     SeTokenIsAdmin @ 0x140695DA0 (SeTokenIsAdmin.c)
 *     sub_1407F4B20 @ 0x1407F4B20 (sub_1407F4B20.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     sub_1409CB770 @ 0x1409CB770 (sub_1409CB770.c)
 * Callees:
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 */

__int64 __fastcall sub_14021F640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  return sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a5, a6);
}
