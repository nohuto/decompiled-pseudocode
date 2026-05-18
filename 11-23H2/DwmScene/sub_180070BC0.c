/*
 * XREFs of sub_180070BC0 @ 0x180070BC0
 * Callers:
 *     sub_1800709F8 @ 0x1800709F8 (sub_1800709F8.c)
 * Callees:
 *     sub_180012030 @ 0x180012030 (sub_180012030.c)
 *     sub_1800709EC @ 0x1800709EC (sub_1800709EC.c)
 */

volatile __int64 *sub_180070BC0()
{
  __int64 v0; // r8
  volatile __int64 *result; // rax
  __int64 v2; // rdx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0LL;
  sub_1800709EC((__int64)v3);
  result = (volatile __int64 *)sub_180012030(v0);
  _InterlockedExchange64(result, v2);
  return result;
}
