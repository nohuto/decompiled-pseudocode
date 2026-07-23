/*
 * XREFs of sub_140863B40 @ 0x140863B40
 * Callers:
 *     sub_140999610 @ 0x140999610 (sub_140999610.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall sub_140863B40(int a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = a1;
  return ZwUpdateWnfStateData(&stru_1400134A0, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
