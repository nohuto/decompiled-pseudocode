/*
 * XREFs of sub_1405D0668 @ 0x1405D0668
 * Callers:
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 *     sub_1405D0450 @ 0x1405D0450 (sub_1405D0450.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 * Callees:
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall sub_1405D0668(char a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    Buffer = 1;
    sub_140256CA0(&stru_1400149D8);
  }
  else
  {
    Buffer = 0;
  }
  return ZwUpdateWnfStateData(&stru_140037810, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
