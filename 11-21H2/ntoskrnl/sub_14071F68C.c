/*
 * XREFs of sub_14071F68C @ 0x14071F68C
 * Callers:
 *     sub_14065D114 @ 0x14065D114 (sub_14065D114.c)
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 *     sub_1406B3C34 @ 0x1406B3C34 (sub_1406B3C34.c)
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_140915854 @ 0x140915854 (sub_140915854.c)
 * Callees:
 *     sub_1407221B0 @ 0x1407221B0 (sub_1407221B0.c)
 */

bool __fastcall sub_14071F68C(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax

  v6 = sub_1407221B0(a1, a5, a6);
  return (int)(v6 + 0x80000000) < 0 || v6 == -1073741772;
}
