/*
 * XREFs of sub_140998678 @ 0x140998678
 * Callers:
 *     sub_140998800 @ 0x140998800 (sub_140998800.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_140998888 @ 0x140998888 (sub_140998888.c)
 */

NTSTATUS __fastcall sub_140998678(__int64 a1)
{
  NTSTATUS result; // eax
  char Buffer; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(a1) = 1;
  sub_140998888(a1);
  Buffer = 1;
  result = ZwUpdateWnfStateData(&stru_14000E628, &Buffer, 1u, 0LL, 0LL, 0, 0);
  byte_140C1F900 = 1;
  return result;
}
