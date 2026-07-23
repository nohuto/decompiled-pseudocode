/*
 * XREFs of sub_14085CEF8 @ 0x14085CEF8
 * Callers:
 *     sub_1403DA240 @ 0x1403DA240 (sub_1403DA240.c)
 *     sub_140B02560 @ 0x140B02560 (sub_140B02560.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall sub_14085CEF8(char a1)
{
  int v1; // eax
  NTSTATUS result; // eax
  unsigned __int64 Buffer; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 0xFFFFFFFF00000000uLL;
  if ( a1 )
    v1 = 3;
  else
    v1 = 1;
  LODWORD(Buffer) = v1;
  result = ZwUpdateWnfStateData(&stru_140013180, &Buffer, 8u, 0LL, 0LL, 0, 0);
  byte_140C1F9D8 = 1;
  return result;
}
