/*
 * XREFs of CmpFatalFilter @ 0x140A17590
 * Callers:
 *     CmpQueryKeyName @ 0x140691D80 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
