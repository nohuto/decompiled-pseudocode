/*
 * XREFs of sub_1409100F4 @ 0x1409100F4
 * Callers:
 *     sub_1406C25A0 @ 0x1406C25A0 (sub_1406C25A0.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_1409100F4(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
