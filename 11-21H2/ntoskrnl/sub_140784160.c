/*
 * XREFs of sub_140784160 @ 0x140784160
 * Callers:
 *     sub_1406D2BE8 @ 0x1406D2BE8 (sub_1406D2BE8.c)
 *     sub_1406D88A4 @ 0x1406D88A4 (sub_1406D88A4.c)
 *     sub_1406D8994 @ 0x1406D8994 (sub_1406D8994.c)
 *     sub_14075D8DC @ 0x14075D8DC (sub_14075D8DC.c)
 *     sub_14075F09C @ 0x14075F09C (sub_14075F09C.c)
 *     sub_140783CD8 @ 0x140783CD8 (sub_140783CD8.c)
 *     sub_140783DB8 @ 0x140783DB8 (sub_140783DB8.c)
 *     sub_14084E1F4 @ 0x14084E1F4 (sub_14084E1F4.c)
 *     sub_14084E278 @ 0x14084E278 (sub_14084E278.c)
 *     sub_140855120 @ 0x140855120 (sub_140855120.c)
 *     sub_1408577B0 @ 0x1408577B0 (sub_1408577B0.c)
 *     sub_140857840 @ 0x140857840 (sub_140857840.c)
 *     sub_1409DCFD4 @ 0x1409DCFD4 (sub_1409DCFD4.c)
 *     sub_1409DD3C4 @ 0x1409DD3C4 (sub_1409DD3C4.c)
 *     sub_1409DE220 @ 0x1409DE220 (sub_1409DE220.c)
 *     sub_1409DE468 @ 0x1409DE468 (sub_1409DE468.c)
 *     sub_1409DE80C @ 0x1409DE80C (sub_1409DE80C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140784160(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(BugCheckParameter2 + 24));
  if ( result <= 1 )
  {
    if ( result == 1 )
      KeBugCheckEx(0x14Au, 0LL, BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x14Au, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
