/*
 * XREFs of sub_140417160 @ 0x140417160
 * Callers:
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_140417160(ULONG_PTR *a1)
{
  KeBugCheckEx(0x34u, 0x5155EuLL, *a1, a1[1], *(_QWORD *)(*a1 + 16));
}
