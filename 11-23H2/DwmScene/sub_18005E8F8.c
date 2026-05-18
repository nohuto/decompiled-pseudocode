/*
 * XREFs of sub_18005E8F8 @ 0x18005E8F8
 * Callers:
 *     sub_180059C7C @ 0x180059C7C (sub_180059C7C.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_180058878 @ 0x180058878 (sub_180058878.c)
 */

volatile __int32 *sub_18005E8F8()
{
  __int64 v0; // r8
  volatile __int32 *result; // rax
  __int32 v2; // edx
  unsigned int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0;
  sub_180058878(v3);
  result = (volatile __int32 *)sub_18001C7FC(v0);
  _InterlockedExchange(result, v2);
  return result;
}
