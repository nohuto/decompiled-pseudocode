/*
 * XREFs of sub_1407F0F98 @ 0x1407F0F98
 * Callers:
 *     sub_140369ECC @ 0x140369ECC (sub_140369ECC.c)
 *     sub_1403C10B0 @ 0x1403C10B0 (sub_1403C10B0.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407EF258 @ 0x1407EF258 (sub_1407EF258.c)
 *     sub_1407EF930 @ 0x1407EF930 (sub_1407EF930.c)
 *     sub_1407F2028 @ 0x1407F2028 (sub_1407F2028.c)
 *     sub_1407F2A20 @ 0x1407F2A20 (sub_1407F2A20.c)
 *     sub_1407F2D00 @ 0x1407F2D00 (sub_1407F2D00.c)
 *     sub_1407FE640 @ 0x1407FE640 (sub_1407FE640.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_1408080F0 @ 0x1408080F0 (sub_1408080F0.c)
 *     sub_1408633F0 @ 0x1408633F0 (sub_1408633F0.c)
 *     sub_140989FA4 @ 0x140989FA4 (sub_140989FA4.c)
 *     sub_140996EE0 @ 0x140996EE0 (sub_140996EE0.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A6270 @ 0x1409A6270 (sub_1409A6270.c)
 *     sub_140B248EC @ 0x140B248EC (sub_140B248EC.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 */

char sub_1407F0F98()
{
  char v0; // bl

  v0 = 1;
  if ( dword_140D3CD64 != 1 || PsIsCurrentThreadInServerSilo() )
    return 0;
  return v0;
}
