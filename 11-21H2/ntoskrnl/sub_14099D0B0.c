/*
 * XREFs of sub_14099D0B0 @ 0x14099D0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140368A78 @ 0x140368A78 (sub_140368A78.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

__int64 sub_14099D0B0()
{
  ++dword_140C1F240;
  ZwUpdateWnfStateData(&stru_140037750, &dword_140C1F240, 8u, 0LL, 0LL, 0, 0);
  return sub_140368A78((__int64)&qword_140C1F260);
}
