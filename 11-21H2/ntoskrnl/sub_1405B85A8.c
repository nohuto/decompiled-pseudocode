/*
 * XREFs of sub_1405B85A8 @ 0x1405B85A8
 * Callers:
 *     sub_140693D80 @ 0x140693D80 (sub_140693D80.c)
 *     sub_14070A9C0 @ 0x14070A9C0 (sub_14070A9C0.c)
 *     sub_1407B92D0 @ 0x1407B92D0 (sub_1407B92D0.c)
 *     sub_1407BDB60 @ 0x1407BDB60 (sub_1407BDB60.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 */

volatile signed __int64 *__fastcall sub_1405B85A8(__int64 a1)
{
  volatile signed __int64 *result; // rax
  unsigned __int64 v2; // rdx

  result = (volatile signed __int64 *)sub_140282AD0(a1);
  _InterlockedExchangeAdd64(result + 6, v2);
  return result;
}
