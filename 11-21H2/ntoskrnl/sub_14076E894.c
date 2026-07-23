/*
 * XREFs of sub_14076E894 @ 0x14076E894
 * Callers:
 *     sub_14076ABAC @ 0x14076ABAC (sub_14076ABAC.c)
 *     sub_14076AD40 @ 0x14076AD40 (sub_14076AD40.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E168 @ 0x14076E168 (sub_14076E168.c)
 *     sub_14076FC68 @ 0x14076FC68 (sub_14076FC68.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_140943248 @ 0x140943248 (sub_140943248.c)
 *     sub_140957044 @ 0x140957044 (sub_140957044.c)
 * Callees:
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 */

__int64 __fastcall sub_14076E894(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 48)) != 0 )
    return sub_14077F2EC(qword_140D00AC0, v5, 16, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
