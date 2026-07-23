/*
 * XREFs of sub_1407D6CBC @ 0x1407D6CBC
 * Callers:
 *     sub_14025D2C4 @ 0x14025D2C4 (sub_14025D2C4.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A531E0 @ 0x140A531E0 (sub_140A531E0.c)
 *     sub_140A6F010 @ 0x140A6F010 (sub_140A6F010.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void sub_1407D6CBC()
{
  ExReleaseResourceLite(&stru_140C15AC0);
  KeLeaveCriticalRegion();
}
