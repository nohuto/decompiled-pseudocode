/*
 * XREFs of sub_140862F14 @ 0x140862F14
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 */

__int64 sub_140862F14()
{
  __int128 v1[8]; // [rsp+30h] [rbp-29h] BYREF

  memset(v1, 0, 0x78uLL);
  v1[3] = 0uLL;
  HIDWORD(v1[1]) = 2031679;
  LOWORD(v1[0]) = 120;
  *((_QWORD *)&v1[0] + 1) = 0x12000100000030LL;
  BYTE2(v1[0]) = BYTE2(v1[0]) & 0xE3 | 0xC;
  *(_QWORD *)&v1[4] = sub_1406E2590;
  *((_QWORD *)&v1[4] + 1) = sub_1406EAFC0;
  LODWORD(v1[1]) = 1179710;
  *(_QWORD *)((char *)&v1[1] + 4) = 0x1F003F00120018LL;
  *(_QWORD *)((char *)&v1[2] + 4) = 0x2000000001LL;
  return ObCreateObjectTypeEx(&stru_140006630, v1, 0LL, 0LL, &qword_140C490F0);
}
