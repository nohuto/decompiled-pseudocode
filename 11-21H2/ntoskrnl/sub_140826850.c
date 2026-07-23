/*
 * XREFs of sub_140826850 @ 0x140826850
 * Callers:
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     sub_14095E00C @ 0x14095E00C (sub_14095E00C.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS sub_140826850()
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  return ZwUpdateWnfStateData(&stru_140011B08, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
