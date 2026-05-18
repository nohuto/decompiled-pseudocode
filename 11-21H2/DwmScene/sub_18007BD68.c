/*
 * XREFs of sub_18007BD68 @ 0x18007BD68
 * Callers:
 *     sub_18002B2A0 @ 0x18002B2A0 (sub_18002B2A0.c)
 *     sub_18002B404 @ 0x18002B404 (sub_18002B404.c)
 *     sub_18002BBC0 @ 0x18002BBC0 (sub_18002BBC0.c)
 *     sub_18004EE74 @ 0x18004EE74 (sub_18004EE74.c)
 *     sub_1800E8960 @ 0x1800E8960 (sub_1800E8960.c)
 *     sub_1800E9C20 @ 0x1800E9C20 (sub_1800E9C20.c)
 *     sub_1800E9F10 @ 0x1800E9F10 (sub_1800E9F10.c)
 *     sub_1800EA090 @ 0x1800EA090 (sub_1800EA090.c)
 * Callees:
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_18007BD4C @ 0x18007BD4C (sub_18007BD4C.c)
 */

volatile signed __int64 *__fastcall sub_18007BD68(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  volatile signed __int64 *result; // rax
  unsigned __int64 v5; // r9

  v3 = sub_18007BD4C(a1, a2, a3);
  result = (volatile signed __int64 *)sub_18001266C(v3);
  _InterlockedExchangeAdd64(result, v5);
  return result;
}
