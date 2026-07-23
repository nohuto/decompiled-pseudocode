/*
 * XREFs of sub_1407D6F54 @ 0x1407D6F54
 * Callers:
 *     sub_14025D2C4 @ 0x14025D2C4 (sub_14025D2C4.c)
 *     sub_1406D8260 @ 0x1406D8260 (sub_1406D8260.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1407D6CE0 @ 0x1407D6CE0 (sub_1407D6CE0.c)
 *     sub_1408088B0 @ 0x1408088B0 (sub_1408088B0.c)
 *     sub_1408357A0 @ 0x1408357A0 (sub_1408357A0.c)
 *     sub_140857F38 @ 0x140857F38 (sub_140857F38.c)
 *     sub_1409F76FC @ 0x1409F76FC (sub_1409F76FC.c)
 *     sub_1409F7C6C @ 0x1409F7C6C (sub_1409F7C6C.c)
 *     sub_1409F8178 @ 0x1409F8178 (sub_1409F8178.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A531E0 @ 0x140A531E0 (sub_140A531E0.c)
 *     sub_140A6F010 @ 0x140A6F010 (sub_140A6F010.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall sub_1407D6F54(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( ExAcquireResourceExclusiveLite(&stru_140C15AC0, a1) )
    return 1;
  KeLeaveCriticalRegion();
  return 0;
}
