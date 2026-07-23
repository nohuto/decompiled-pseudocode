/*
 * XREFs of sub_1405FF5A0 @ 0x1405FF5A0
 * Callers:
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 *     sub_140A80B3C @ 0x140A80B3C (sub_140A80B3C.c)
 *     sub_140A8CA78 @ 0x140A8CA78 (sub_140A8CA78.c)
 *     sub_140A8CC6C @ 0x140A8CC6C (sub_140A8CC6C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn sub_1405FF5A0()
{
  KeBugCheckEx(BugCheckCode, BugCheckParameter1, qword_140D57540, xmmword_140D57548, *(&xmmword_140D57548 + 1));
}
