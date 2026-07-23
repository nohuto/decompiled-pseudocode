/*
 * XREFs of sub_140863F58 @ 0x140863F58
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 */

__int64 sub_140863F58()
{
  unsigned __int64 Buffer; // [rsp+50h] [rbp+8h] BYREF
  char v2; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 0xFFFFFFFF00000001uLL;
  ZwUpdateWnfStateData(&stru_1400134F0, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return ExSubscribeWnfStateChange((int)&v2, (int)&stru_1400134F0, 1, 0, (__int64)sub_1406EB9B0, 0LL);
}
