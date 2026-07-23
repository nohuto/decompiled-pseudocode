/*
 * XREFs of sub_1409150AC @ 0x1409150AC
 * Callers:
 *     sub_1407C05A0 @ 0x1407C05A0 (sub_1407C05A0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_1409150AC(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
