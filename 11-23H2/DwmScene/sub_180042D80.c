/*
 * XREFs of sub_180042D80 @ 0x180042D80
 * Callers:
 *     sub_1800401CC @ 0x1800401CC (sub_1800401CC.c)
 * Callees:
 *     sub_180012030 @ 0x180012030 (sub_180012030.c)
 *     sub_18003F254 @ 0x18003F254 (sub_18003F254.c)
 */

volatile __int64 *__fastcall sub_180042D80(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  volatile __int64 *result; // rax
  __int64 v4; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_18003F254((__int64)&v5);
  result = (volatile __int64 *)sub_180012030(v2);
  _InterlockedExchange64(result, v4);
  return result;
}
