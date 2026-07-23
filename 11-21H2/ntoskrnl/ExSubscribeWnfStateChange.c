/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1406D1FA0
 * Callers:
 *     sub_1405CFCA4 @ 0x1405CFCA4 (sub_1405CFCA4.c)
 *     sub_1406D1E90 @ 0x1406D1E90 (sub_1406D1E90.c)
 *     sub_140827E8C @ 0x140827E8C (sub_140827E8C.c)
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 *     sub_140851114 @ 0x140851114 (sub_140851114.c)
 *     sub_140860A10 @ 0x140860A10 (sub_140860A10.c)
 *     sub_140860B90 @ 0x140860B90 (sub_140860B90.c)
 *     sub_1408633F0 @ 0x1408633F0 (sub_1408633F0.c)
 *     sub_140863F58 @ 0x140863F58 (sub_140863F58.c)
 *     sub_140863FD4 @ 0x140863FD4 (sub_140863FD4.c)
 *     sub_140864DD4 @ 0x140864DD4 (sub_140864DD4.c)
 *     sub_140864E10 @ 0x140864E10 (sub_140864E10.c)
 *     sub_140864E4C @ 0x140864E4C (sub_140864E4C.c)
 *     sub_140864E88 @ 0x140864E88 (sub_140864E88.c)
 *     sub_140864EC4 @ 0x140864EC4 (sub_140864EC4.c)
 *     sub_140864F00 @ 0x140864F00 (sub_140864F00.c)
 *     sub_140864F3C @ 0x140864F3C (sub_140864F3C.c)
 *     sub_1409BE9D8 @ 0x1409BE9D8 (sub_1409BE9D8.c)
 *     sub_140AF33B0 @ 0x140AF33B0 (sub_140AF33B0.c)
 *     sub_140B019D0 @ 0x140B019D0 (sub_140B019D0.c)
 *     sub_140B01A8C @ 0x140B01A8C (sub_140B01A8C.c)
 *     sub_140B02560 @ 0x140B02560 (sub_140B02560.c)
 *     sub_140B03434 @ 0x140B03434 (sub_140B03434.c)
 *     sub_140B1BA48 @ 0x140B1BA48 (sub_140B1BA48.c)
 *     sub_140B31688 @ 0x140B31688 (sub_140B31688.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14079982C @ 0x14079982C (sub_14079982C.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v7 = sub_14079982C(0, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
