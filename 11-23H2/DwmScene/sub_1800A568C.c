/*
 * XREFs of sub_1800A568C @ 0x1800A568C
 * Callers:
 *     sub_1800A55D4 @ 0x1800A55D4 (sub_1800A55D4.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_1800A5444 @ 0x1800A5444 (sub_1800A5444.c)
 */

volatile __int32 *__fastcall sub_1800A568C(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  volatile __int32 *result; // rax
  __int32 v4; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_1800A5444(&v5);
  result = (volatile __int32 *)sub_18001C7FC(v2);
  _InterlockedExchange(result, v4);
  return result;
}
