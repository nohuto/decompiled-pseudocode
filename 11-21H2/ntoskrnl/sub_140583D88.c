/*
 * XREFs of sub_140583D88 @ 0x140583D88
 * Callers:
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 * Callees:
 *     sub_1405B2D80 @ 0x1405B2D80 (sub_1405B2D80.c)
 */

volatile signed __int32 *__fastcall sub_140583D88(__int64 a1, unsigned int a2)
{
  volatile signed __int32 *result; // rax
  unsigned int v3; // edx

  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), a2);
  result = (volatile signed __int32 *)sub_1405B2D80();
  if ( result )
    _InterlockedExchangeAdd(result, v3);
  __addgsdword(0x2E90u, v3);
  return result;
}
