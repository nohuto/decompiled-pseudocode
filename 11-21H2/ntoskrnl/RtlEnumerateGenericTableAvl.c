/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1402DE820
 * Callers:
 *     sub_140811940 @ 0x140811940 (sub_140811940.c)
 *     sub_140818900 @ 0x140818900 (sub_140818900.c)
 *     sub_140844A24 @ 0x140844A24 (sub_140844A24.c)
 *     sub_140A9B1BC @ 0x140A9B1BC (sub_140A9B1BC.c)
 *     sub_140A9B230 @ 0x140A9B230 (sub_140A9B230.c)
 *     sub_140A9D738 @ 0x140A9D738 (sub_140A9D738.c)
 *     sub_140A9DB60 @ 0x140A9DB60 (sub_140A9DB60.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1402DEA50 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
