/*
 * XREFs of sub_140390A50 @ 0x140390A50
 * Callers:
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_14038F8FC @ 0x14038F8FC (sub_14038F8FC.c)
 * Callees:
 *     sub_1403812F8 @ 0x1403812F8 (sub_1403812F8.c)
 */

__int64 __fastcall sub_140390A50(__int64 a1, int a2)
{
  unsigned int v2; // r10d
  bool v3; // zf
  char v4; // dl
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  char v7; // dl

  v2 = (*(_DWORD *)(a1 + 832) >> 1) & 1;
  v3 = a2 == 1;
  v4 = *(_BYTE *)(a1 + 1904);
  if ( v3 )
  {
    v7 = v4 & 0xFC | 1;
    v5 = -2;
    v6 = (unsigned __int8)*(_DWORD *)(a1 + 776) != 0 ? 400 : 30;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = v4 & 0xFC | 2;
  }
  *(_BYTE *)(a1 + 1904) = v7;
  return sub_1403812F8(*(_QWORD *)(a1 + 1912), v2, v6, v5);
}
