/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x14036FA30
 * Callers:
 *     sub_1402FF620 @ 0x1402FF620 (sub_1402FF620.c)
 *     sub_14036F620 @ 0x14036F620 (sub_14036F620.c)
 *     sub_1403969E8 @ 0x1403969E8 (sub_1403969E8.c)
 *     sub_14039E230 @ 0x14039E230 (sub_14039E230.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 *     sub_1403BB634 @ 0x1403BB634 (sub_1403BB634.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_1403BEA4C @ 0x1403BEA4C (sub_1403BEA4C.c)
 *     sub_1403BEC78 @ 0x1403BEC78 (sub_1403BEC78.c)
 *     sub_1403DEDD0 @ 0x1403DEDD0 (sub_1403DEDD0.c)
 *     sub_1405104F0 @ 0x1405104F0 (sub_1405104F0.c)
 *     sub_140844658 @ 0x140844658 (sub_140844658.c)
 *     sub_14084476C @ 0x14084476C (sub_14084476C.c)
 *     sub_140A7C400 @ 0x140A7C400 (sub_140A7C400.c)
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 *     sub_140AF89EC @ 0x140AF89EC (sub_140AF89EC.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 *     sub_140B31380 @ 0x140B31380 (sub_140B31380.c)
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 HalQueryMaximumProcessorCount()
{
  unsigned int v0; // edx
  unsigned int v1; // r10d
  ULONG_PTR BugCheckParameter4; // r10

  if ( !dword_140C54A94 || !byte_140C4AD04 )
  {
    sub_14051E038(0, 11, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 722);
    KeBugCheckEx(0x5Cu, 0x8000uLL, dword_140C4ADB0, 0LL, BugCheckParameter4);
  }
  if ( (unsigned int)sub_14036FA84() - 1 <= 3 && qword_140C4AD18 )
    v1 = *(_DWORD *)(qword_140C4AD18 + 60);
  if ( v1 < v0 )
    return v0;
  return v1;
}
