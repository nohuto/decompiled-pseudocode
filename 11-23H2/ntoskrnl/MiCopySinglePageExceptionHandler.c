/*
 * XREFs of MiCopySinglePageExceptionHandler @ 0x14041A4E8
 * Callers:
 *     MiCopySinglePage @ 0x1402EEB4C (MiCopySinglePage.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiCopySinglePageExceptionHandler(int **a1, __int64 a2, ULONG_PTR a3)
{
  KeBugCheckEx(0x1Au, 0x45000uLL, a3, **a1, ((unsigned __int64)MiFlags >> 12) & 1);
}
