/*
 * XREFs of sub_140864EC4 @ 0x140864EC4
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 */

__int64 sub_140864EC4()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange((int)&v1, (int)&qword_1400135B0, 1, 0, (__int64)sub_14098CBC0, 0LL);
}
