/*
 * XREFs of sub_180021330 @ 0x180021330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

_QWORD *__fastcall sub_180021330(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::IMemoryStatsProvider::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}
