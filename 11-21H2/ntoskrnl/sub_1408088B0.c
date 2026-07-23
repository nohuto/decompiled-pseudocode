/*
 * XREFs of sub_1408088B0 @ 0x1408088B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1403B69DC @ 0x1403B69DC (sub_1403B69DC.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 */

__int64 sub_1408088B0()
{
  sub_1407D6F54(1u);
  ZwUpdateWnfStateData(&stru_14000FB50, &qword_140C245D0, 0x10u, 0LL, 0LL, 0, 0);
  ExReleaseResourceLite(&stru_140C15AC0);
  KeLeaveCriticalRegion();
  sub_1403B69DC(3, 0LL);
  return 0LL;
}
