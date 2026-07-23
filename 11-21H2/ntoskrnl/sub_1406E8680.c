/*
 * XREFs of sub_1406E8680 @ 0x1406E8680
 * Callers:
 *     <none>
 * Callees:
 *     sub_140657990 @ 0x140657990 (sub_140657990.c)
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_14071B5A0 @ 0x14071B5A0 (sub_14071B5A0.c)
 */

__int64 __fastcall sub_1406E8680(ULONG_PTR a1, unsigned int *a2)
{
  __int64 v3; // rsi

  v3 = *((_QWORD *)a2 + 2);
  if ( (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
  {
    sub_14067EE40(a1, *a2, v3, 1);
    sub_14071B5A0(*(_QWORD *)(a1 + 72), 0LL);
    sub_14067EDC0(a1, v3);
    sub_14067EB68(a1);
  }
  if ( (a2[2] & 1) != 0 )
    sub_140657990(a1);
  ++a2[1];
  return 0LL;
}
