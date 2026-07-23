/*
 * XREFs of sub_140B301A8 @ 0x140B301A8
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS sub_140B301A8()
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  ZwUpdateWnfStateData(&stru_140013458, &byte_140C24038, 1u, 0LL, 0LL, 0, 0);
  ZwUpdateWnfStateData(&stru_140013450, &byte_140C24039, 1u, 0LL, 0LL, 0, 0);
  Buffer = 100;
  return ZwUpdateWnfStateData(&stru_140013448, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
