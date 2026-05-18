/*
 * XREFs of sub_180038EE8 @ 0x180038EE8
 * Callers:
 *     sub_18003164C @ 0x18003164C (sub_18003164C.c)
 *     sub_180074458 @ 0x180074458 (sub_180074458.c)
 *     sub_1800DE0B0 @ 0x1800DE0B0 (sub_1800DE0B0.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 */

volatile __int32 *__fastcall sub_180038EE8(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  volatile __int32 *result; // rax
  __int32 v4; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_18002E120(&v5);
  result = (volatile __int32 *)sub_18001C7FC(v2);
  _InterlockedExchange(result, v4);
  return result;
}
