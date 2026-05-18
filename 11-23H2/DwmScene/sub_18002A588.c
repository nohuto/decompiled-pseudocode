/*
 * XREFs of sub_18002A588 @ 0x18002A588
 * Callers:
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_1800299CC @ 0x1800299CC (sub_1800299CC.c)
 */

volatile __int32 *__fastcall sub_18002A588(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  volatile __int32 *result; // rax
  __int32 v4; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_1800299CC(&v5);
  result = (volatile __int32 *)sub_18001C7FC(v2);
  _InterlockedExchange(result, v4);
  return result;
}
