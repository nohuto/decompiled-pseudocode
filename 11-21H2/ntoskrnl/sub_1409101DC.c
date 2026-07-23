/*
 * XREFs of sub_1409101DC @ 0x1409101DC
 * Callers:
 *     sub_140861F60 @ 0x140861F60 (sub_140861F60.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_1409101DC(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x13Fu, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 80), BugCheckParameter4);
}
