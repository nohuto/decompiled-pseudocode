/*
 * XREFs of sub_140864F3C @ 0x140864F3C
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 */

__int64 sub_140864F3C()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange((int)&v1, (int)&qword_1400135C0, 1, 0, (__int64)sub_1407EE7A0, 0LL);
}
