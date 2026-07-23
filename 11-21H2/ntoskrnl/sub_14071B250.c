/*
 * XREFs of sub_14071B250 @ 0x14071B250
 * Callers:
 *     sub_1402A21B0 @ 0x1402A21B0 (sub_1402A21B0.c)
 *     sub_1406CAE28 @ 0x1406CAE28 (sub_1406CAE28.c)
 *     sub_1406DAD3C @ 0x1406DAD3C (sub_1406DAD3C.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_14071B730 @ 0x14071B730 (sub_14071B730.c)
 *     sub_1407C3070 @ 0x1407C3070 (sub_1407C3070.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 *     sub_140917348 @ 0x140917348 (sub_140917348.c)
 *     sub_14091CFF0 @ 0x14091CFF0 (sub_14091CFF0.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14069FB00 @ 0x14069FB00 (sub_14069FB00.c)
 */

void __fastcall sub_14071B250(ULONG_PTR BugCheckParameter2)
{
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  if ( !_InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2) )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 64) & 2) != 0 )
    sub_14069FB00(BugCheckParameter2);
}
