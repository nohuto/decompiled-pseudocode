/*
 * XREFs of sub_1405F1F34 @ 0x1405F1F34
 * Callers:
 *     sub_1405E952C @ 0x1405E952C (sub_1405E952C.c)
 *     sub_1405E966C @ 0x1405E966C (sub_1405E966C.c)
 *     sub_1405E9E8C @ 0x1405E9E8C (sub_1405E9E8C.c)
 *     sub_1405EA9DC @ 0x1405EA9DC (sub_1405EA9DC.c)
 *     sub_1405F1F7C @ 0x1405F1F7C (sub_1405F1F7C.c)
 *     sub_1405F2358 @ 0x1405F2358 (sub_1405F2358.c)
 *     sub_1405F27C0 @ 0x1405F27C0 (sub_1405F27C0.c)
 *     RtlDestroyHeap @ 0x1406E9E30 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn sub_1405F1F34()
{
  if ( dword_140C0BEA8 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C0BEB0, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C0BEA8, qword_140C0BEB0, qword_140C0BEB8, 0LL);
}
