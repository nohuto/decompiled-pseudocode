/*
 * XREFs of sub_1405C6A8C @ 0x1405C6A8C
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A4BE04 @ 0x140A4BE04 (sub_140A4BE04.c)
 *     sub_140A4DC74 @ 0x140A4DC74 (sub_140A4DC74.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_1405C6A8C(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
