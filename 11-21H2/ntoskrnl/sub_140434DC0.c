/*
 * XREFs of sub_140434DC0 @ 0x140434DC0
 * Callers:
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_14042CF40 @ 0x14042CF40 (sub_14042CF40.c)
 *     sub_14042DB00 @ 0x14042DB00 (sub_14042DB00.c)
 *     sub_14042E840 @ 0x14042E840 (sub_14042E840.c)
 *     sub_14042EBC0 @ 0x14042EBC0 (sub_14042EBC0.c)
 *     sub_14042EF00 @ 0x14042EF00 (sub_14042EF00.c)
 *     sub_14042F240 @ 0x14042F240 (sub_14042F240.c)
 *     sub_14042F580 @ 0x14042F580 (sub_14042F580.c)
 *     sub_140430000 @ 0x140430000 (sub_140430000.c)
 *     sub_140430800 @ 0x140430800 (sub_140430800.c)
 *     sub_140431CC0 @ 0x140431CC0 (sub_140431CC0.c)
 *     sub_140432080 @ 0x140432080 (sub_140432080.c)
 *     sub_140432780 @ 0x140432780 (sub_140432780.c)
 *     sub_140433E80 @ 0x140433E80 (sub_140433E80.c)
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 *     sub_140435300 @ 0x140435300 (sub_140435300.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_140434DC0(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
