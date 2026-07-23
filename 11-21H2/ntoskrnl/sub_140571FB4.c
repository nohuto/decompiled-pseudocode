/*
 * XREFs of sub_140571FB4 @ 0x140571FB4
 * Callers:
 *     sub_140B01BE0 @ 0x140B01BE0 (sub_140B01BE0.c)
 *     sub_140B01E40 @ 0x140B01E40 (sub_140B01E40.c)
 *     sub_140B01F80 @ 0x140B01F80 (sub_140B01F80.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_140571FB4(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, 0x4001uLL, 0x105uLL, BugCheckParameter3, BugCheckParameter4);
}
