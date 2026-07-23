/*
 * XREFs of sub_14052266C @ 0x14052266C
 * Callers:
 *     sub_14050D564 @ 0x14050D564 (sub_14050D564.c)
 *     sub_14050D91C @ 0x14050D91C (sub_14050D91C.c)
 *     sub_140532200 @ 0x140532200 (sub_140532200.c)
 *     sub_140532404 @ 0x140532404 (sub_140532404.c)
 *     sub_140533520 @ 0x140533520 (sub_140533520.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_14052266C(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x5Cu, a2, a3, a4, BugCheckParameter4);
}
