/*
 * XREFs of sub_14027B520 @ 0x14027B520
 * Callers:
 *     sub_140226A00 @ 0x140226A00 (sub_140226A00.c)
 *     sub_140230F28 @ 0x140230F28 (sub_140230F28.c)
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_14026E158 @ 0x14026E158 (sub_14026E158.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_1402DBA28 @ 0x1402DBA28 (sub_1402DBA28.c)
 *     sub_1402DBD88 @ 0x1402DBD88 (sub_1402DBD88.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_140375ED0 @ 0x140375ED0 (sub_140375ED0.c)
 *     sub_1405905F0 @ 0x1405905F0 (sub_1405905F0.c)
 *     sub_1405970A0 @ 0x1405970A0 (sub_1405970A0.c)
 *     sub_1405A1D20 @ 0x1405A1D20 (sub_1405A1D20.c)
 *     sub_1405A1F60 @ 0x1405A1F60 (sub_1405A1F60.c)
 *     sub_1405A2A48 @ 0x1405A2A48 (sub_1405A2A48.c)
 *     sub_1406EC048 @ 0x1406EC048 (sub_1406EC048.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140761E94 @ 0x140761E94 (sub_140761E94.c)
 *     sub_14080C354 @ 0x14080C354 (sub_14080C354.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_1409779A4 @ 0x1409779A4 (sub_1409779A4.c)
 *     sub_140977DCC @ 0x140977DCC (sub_140977DCC.c)
 * Callees:
 *     <none>
 */

__int64 sub_14027B520()
{
  __int64 result; // rax

  result = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
  if ( result )
    result += 192LL;
  return result;
}
